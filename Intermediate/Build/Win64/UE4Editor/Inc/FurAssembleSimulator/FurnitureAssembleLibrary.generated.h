// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FURASSEMBLESIMULATOR_FurnitureAssembleLibrary_generated_h
#error "FurnitureAssembleLibrary.generated.h already included, missing '#pragma once' in FurnitureAssembleLibrary.h"
#endif
#define FURASSEMBLESIMULATOR_FurnitureAssembleLibrary_generated_h

#define FurAssembleSimulator_Source_FurAssembleSimulator_FurnitureAssembleLibrary_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllFilesInDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_directory); \
		P_GET_UBOOL(Z_Param_fullPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_onlyFilesStartingWith); \
		P_GET_PROPERTY(UStrProperty,Z_Param_onlyFilesEndingWith); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFurnitureAssembleLibrary::GetAllFilesInDirectory(Z_Param_directory,Z_Param_fullPath,Z_Param_onlyFilesStartingWith,Z_Param_onlyFilesEndingWith); \
		P_NATIVE_END; \
	}


#define FurAssembleSimulator_Source_FurAssembleSimulator_FurnitureAssembleLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllFilesInDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_directory); \
		P_GET_UBOOL(Z_Param_fullPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_onlyFilesStartingWith); \
		P_GET_PROPERTY(UStrProperty,Z_Param_onlyFilesEndingWith); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFurnitureAssembleLibrary::GetAllFilesInDirectory(Z_Param_directory,Z_Param_fullPath,Z_Param_onlyFilesStartingWith,Z_Param_onlyFilesEndingWith); \
		P_NATIVE_END; \
	}


#define FurAssembleSimulator_Source_FurAssembleSimulator_FurnitureAssembleLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFurnitureAssembleLibrary(); \
	friend struct Z_Construct_UClass_UFurnitureAssembleLibrary_Statics; \
public: \
	DECLARE_CLASS(UFurnitureAssembleLibrary, UEditorUtilityLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FurAssembleSimulator"), NO_API) \
	DECLARE_SERIALIZER(UFurnitureAssembleLibrary)


#define FurAssembleSimulator_Source_FurAssembleSimulator_FurnitureAssembleLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUFurnitureAssembleLibrary(); \
	friend struct Z_Construct_UClass_UFurnitureAssembleLibrary_Statics; \
public: \
	DECLARE_CLASS(UFurnitureAssembleLibrary, UEditorUtilityLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FurAssembleSimulator"), NO_API) \
	DECLARE_SERIALIZER(UFurnitureAssembleLibrary)


#define FurAssembleSimulator_Source_FurAssembleSimulator_FurnitureAssembleLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFurnitureAssembleLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFurnitureAssembleLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFurnitureAssembleLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFurnitureAssembleLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFurnitureAssembleLibrary(UFurnitureAssembleLibrary&&); \
	NO_API UFurnitureAssembleLibrary(const UFurnitureAssembleLibrary&); \
public:


#define FurAssembleSimulator_Source_FurAssembleSimulator_FurnitureAssembleLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFurnitureAssembleLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFurnitureAssembleLibrary(UFurnitureAssembleLibrary&&); \
	NO_API UFurnitureAssembleLibrary(const UFurnitureAssembleLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFurnitureAssembleLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFurnitureAssembleLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFurnitureAssembleLibrary)


#define FurAssembleSimulator_Source_FurAssembleSimulator_FurnitureAssembleLibrary_h_18_PRIVATE_PROPERTY_OFFSET
#define FurAssembleSimulator_Source_FurAssembleSimulator_FurnitureAssembleLibrary_h_15_PROLOG
#define FurAssembleSimulator_Source_FurAssembleSimulator_FurnitureAssembleLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FurAssembleSimulator_Source_FurAssembleSimulator_FurnitureAssembleLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	FurAssembleSimulator_Source_FurAssembleSimulator_FurnitureAssembleLibrary_h_18_RPC_WRAPPERS \
	FurAssembleSimulator_Source_FurAssembleSimulator_FurnitureAssembleLibrary_h_18_INCLASS \
	FurAssembleSimulator_Source_FurAssembleSimulator_FurnitureAssembleLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FurAssembleSimulator_Source_FurAssembleSimulator_FurnitureAssembleLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FurAssembleSimulator_Source_FurAssembleSimulator_FurnitureAssembleLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	FurAssembleSimulator_Source_FurAssembleSimulator_FurnitureAssembleLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FurAssembleSimulator_Source_FurAssembleSimulator_FurnitureAssembleLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FurAssembleSimulator_Source_FurAssembleSimulator_FurnitureAssembleLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FURASSEMBLESIMULATOR_API UClass* StaticClass<class UFurnitureAssembleLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FurAssembleSimulator_Source_FurAssembleSimulator_FurnitureAssembleLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
