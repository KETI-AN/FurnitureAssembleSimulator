// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//#include "CoreMinimal.h"
#include "Engine.h"
#include "Editor/EditorEngine.h"

#include "EditorUtilityLibrary.h"
#include "FurnitureAssembleLibrary.generated.h"

/**
 * 
 */
UCLASS()
class FURASSEMBLESIMULATOR_API UFurnitureAssembleLibrary : public UEditorUtilityLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Furniture_Assemble")
		static TArray<FString> GetAllFilesInDirectory(const FString directory, const bool fullPath = true,
			const FString onlyFilesStartingWith = TEXT(""),
			const FString onlyFilesEndingWith = TEXT(""));
	
};
