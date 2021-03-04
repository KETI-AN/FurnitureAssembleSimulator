// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FAssembleLibrary.generated.h"

/**
 * 
 */
UCLASS()
class FURASSEMBLESIMULATOR_API UFAssembleLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = "Furniture_Assemble")
		static TArray<FString> LoadPDDLfromCSV(const FString CSVfolderPath, const FString CSVfileName);

	UFUNCTION(BlueprintCallable, Category = "Furniture_Assemble")
		static bool CheckPDDLfiles(const FString PDDLfolderPath, const FString CSVfileName, const FString PDDLfileName);

	
};
