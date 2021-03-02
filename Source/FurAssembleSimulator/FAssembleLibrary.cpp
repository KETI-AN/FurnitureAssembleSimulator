// Fill out your copyright notice in the Description page of Project Settings.


#include "FAssembleLibrary.h"
#include <fstream>
#include <iostream>


TArray<FString> UFAssembleLibrary::LoadPDDLfromCSV(const FString CSVfolderPath, const FString CSVfileName)
{
	FString CSVdirectory = CSVfolderPath;
	FString FileName = CSVfileName;
	FString strPDDL;
	TArray<FString> arrPDDL;

	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	if (PlatformFile.CreateDirectoryTree(*CSVdirectory))
	{
		// Get absolute file path
		FString CSVFilePath = CSVdirectory + "/" + FileName;
		FFileHelper::LoadFileToString(strPDDL, *CSVFilePath);
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("Loading PDDL CSV File is complete."));
		UE_LOG(LogClass, Warning, TEXT("[LoadPDDLfromCSV] Loading PDDL CSV File is complete."));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("No PDDL CSV File in the CSVfolderPath."));
		UE_LOG(LogClass, Warning, TEXT("[LoadPDDLfromCSV] No PDDL CSV File in the CSVfolderPath."));
	}

	strPDDL.ParseIntoArrayLines(arrPDDL, true);

	for (int32 i = 0; i < arrPDDL.Num(); i++)
	{
		UE_LOG(LogClass, Warning, TEXT("PDDL Array Index: %d String: %s"), i, *arrPDDL[i]);
	}

	return arrPDDL;
}

bool UFAssembleLibrary::CheckPDDLfiles(const FString PDDLfolderPath, const FString CSVfileName, const FString PDDLfileName)
{
	FString PDDLdirectory = PDDLfolderPath;
	FString CSV_FName = PDDLdirectory + "/" + CSVfileName;
	FString PDDL_FName = PDDLdirectory + "/" + PDDLfileName;
	bool isHaveFiles = false;
	

	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	if (PlatformFile.CreateDirectoryTree(*PDDLdirectory))
	{
		std::string strCSVfile(TCHAR_TO_UTF8(*CSV_FName));
		std::string strPDDLfile(TCHAR_TO_UTF8(*PDDL_FName));
		std::ifstream fCSV, fPDDL;
		fCSV.open(strCSVfile);
		fPDDL.open(strPDDLfile);

		// Check whether CSV and PDDL files is existed or not.
		if (!fCSV.fail() && !fPDDL.fail())
		{
			fCSV.close();
			fPDDL.close();
			isHaveFiles = true;

			GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("CSV and PDDL Files are ready for Assemble Start."));
			UE_LOG(LogClass, Warning, TEXT("[CheckPDDLfiles] Checking PDDL Files is complete."));

			return isHaveFiles;
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("CSV and PDDL Files are not ready for Assemble Start."));
			UE_LOG(LogClass, Warning, TEXT("[CheckPDDLfiles] CSV and PDDL Files are not ready. waiting the files again..."));

			isHaveFiles = false;
			return isHaveFiles;
		}
				
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("There is No PDDL Folder. Please Check connecting network drive and folder. "));
		UE_LOG(LogClass, Warning, TEXT("[CheckPDDLfiles] No PDDL Folder."));
		
		return isHaveFiles;
	}
	
}

TArray<AStaticMeshActor*> UFAssembleLibrary::TransformPartActors(const TArray<FString> arrCSV)
{
	UWorld* CurrentWorld = GEditor->GetEditorWorldContext().World();
	TArray<AStaticMeshActor*> arrSMeshActors;

	for (int32 i = 0; i < arrCSV.Num(); i++)
	{
		// Parse CSV file to String Array
		TArray<FString> arrPartTransform;
		arrCSV[i].ParseIntoArray(arrPartTransform, TEXT(","), true);

		for (TActorIterator<AStaticMeshActor> It(CurrentWorld); It; ++It)
		{
			if (It->GetActorLabel().Compare(arrPartTransform[0]) == 0)
			{
				UE_LOG(LogClass, Warning, TEXT("[CSV Part] %s is equal to [World Actor] %s"), *arrPartTransform[0], *It->GetActorLabel());
				float xPart = FCString::Atof(*arrPartTransform[1]) / 10.0;
				float yPart = FCString::Atof(*arrPartTransform[2]) / 10.0;
				float zPart = FCString::Atof(*arrPartTransform[3]) / 10.0;
				float rollPart = FCString::Atof(*arrPartTransform[4]);
				float pitchPart = FCString::Atof(*arrPartTransform[5]);
				float yawPart = FCString::Atof(*arrPartTransform[6]);
				// For matching Axis from open3D to UE4
				FVector newLocation(-xPart, yPart, zPart);
				FRotator newRotator(pitchPart, yawPart, -rollPart);
				It->SetActorLocationAndRotation(newLocation, newRotator, false, 0, ETeleportType::None);
				arrSMeshActors.Add(*It);
			}

		}

	}

	return arrSMeshActors;
}

TArray<FTransform> UFAssembleLibrary::GetAssembledFTransform(const TArray<FString> arrCSV)
{
	UWorld* CurrentWorld = GEditor->GetEditorWorldContext().World();
	TArray<FTransform> arrAssembledTransform;

	for (int32 i = 0; i < arrCSV.Num(); i++)
	{
		// Parse CSV file to String Array
		TArray<FString> arrPartTransform;
		arrCSV[i].ParseIntoArray(arrPartTransform, TEXT(","), true);

		for (TActorIterator<AStaticMeshActor> It(CurrentWorld); It; ++It)
		{
			if (It->GetActorLabel().Compare(arrPartTransform[0]) == 0)
			{
				UE_LOG(LogClass, Warning, TEXT("[CSV Part] %s is equal to [World Actor] %s"), *arrPartTransform[0], *It->GetActorLabel());
				float xPart = FCString::Atof(*arrPartTransform[1]) / 10.0;
				float yPart = FCString::Atof(*arrPartTransform[2]) / 10.0;
				float zPart = FCString::Atof(*arrPartTransform[3]) / 10.0;
				float rollPart = FCString::Atof(*arrPartTransform[4]);
				float pitchPart = FCString::Atof(*arrPartTransform[5]);
				float yawPart = FCString::Atof(*arrPartTransform[6]);
				// For matching Axis from open3D to UE4
				FVector newLocation(-xPart, yPart, zPart);
				FRotator newRotator(pitchPart, yawPart, -rollPart);
				FTransform newTransform(newRotator, newLocation);
				arrAssembledTransform.Add(newTransform);
			}

		}

	}
	return arrAssembledTransform;
}
