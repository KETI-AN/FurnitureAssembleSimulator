// Fill out your copyright notice in the Description page of Project Settings.


#include "FAssembleLibrary.h"


TArray<FString> UFAssembleLibrary::LoadPDDAfromCSV(const FString CSVfolderPath, const FString CSVfileName)
{
	FString CSVdirectory = CSVfolderPath;
	FString FileName = CSVfileName;
	FString strPDDA;
	TArray<FString> arrPPDA;

	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	if (PlatformFile.CreateDirectoryTree(*CSVdirectory))
	{
		// Get absolute file path
		FString CSVFilePath = CSVdirectory + "/" + FileName;
		FFileHelper::LoadFileToString(strPDDA, *CSVFilePath);
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("Loading PDDA CSV File is complete."));
		UE_LOG(LogClass, Warning, TEXT("[LoadPDDAfromCSV] Loading PDDA CSV File is complete."));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("No PDDA CSV File in the CSVfolderPath."));
		UE_LOG(LogClass, Warning, TEXT("[LoadPDDAfromCSV] No PDDA CSV File in the CSVfolderPath."));
	}

	strPDDA.ParseIntoArrayLines(arrPPDA, true);

	for (int32 i = 0; i < arrPPDA.Num(); i++)
	{
		UE_LOG(LogClass, Warning, TEXT("PDDA Array Index: %d String: %s"), i, *arrPPDA[i]);
	}

	return arrPPDA;
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
