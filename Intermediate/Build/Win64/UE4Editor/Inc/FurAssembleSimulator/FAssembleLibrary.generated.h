// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
class AStaticMeshActor;
#ifdef FURASSEMBLESIMULATOR_FAssembleLibrary_generated_h
#error "FAssembleLibrary.generated.h already included, missing '#pragma once' in FAssembleLibrary.h"
#endif
#define FURASSEMBLESIMULATOR_FAssembleLibrary_generated_h

#define FurAssembleSimulator_Source_FurAssembleSimulator_FAssembleLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAssembledFTransform) \
	{ \
		P_GET_TARRAY(FString,Z_Param_arrCSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FTransform>*)Z_Param__Result=UFAssembleLibrary::GetAssembledFTransform(Z_Param_arrCSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformPartActors) \
	{ \
		P_GET_TARRAY(FString,Z_Param_arrCSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AStaticMeshActor*>*)Z_Param__Result=UFAssembleLibrary::TransformPartActors(Z_Param_arrCSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadPDDLfromCSV) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CSVfolderPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CSVfileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFAssembleLibrary::LoadPDDLfromCSV(Z_Param_CSVfolderPath,Z_Param_CSVfileName); \
		P_NATIVE_END; \
	}


#define FurAssembleSimulator_Source_FurAssembleSimulator_FAssembleLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAssembledFTransform) \
	{ \
		P_GET_TARRAY(FString,Z_Param_arrCSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FTransform>*)Z_Param__Result=UFAssembleLibrary::GetAssembledFTransform(Z_Param_arrCSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformPartActors) \
	{ \
		P_GET_TARRAY(FString,Z_Param_arrCSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AStaticMeshActor*>*)Z_Param__Result=UFAssembleLibrary::TransformPartActors(Z_Param_arrCSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadPDDLfromCSV) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CSVfolderPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CSVfileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFAssembleLibrary::LoadPDDLfromCSV(Z_Param_CSVfolderPath,Z_Param_CSVfileName); \
		P_NATIVE_END; \
	}


#define FurAssembleSimulator_Source_FurAssembleSimulator_FAssembleLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFAssembleLibrary(); \
	friend struct Z_Construct_UClass_UFAssembleLibrary_Statics; \
public: \
	DECLARE_CLASS(UFAssembleLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FurAssembleSimulator"), NO_API) \
	DECLARE_SERIALIZER(UFAssembleLibrary)


#define FurAssembleSimulator_Source_FurAssembleSimulator_FAssembleLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFAssembleLibrary(); \
	friend struct Z_Construct_UClass_UFAssembleLibrary_Statics; \
public: \
	DECLARE_CLASS(UFAssembleLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FurAssembleSimulator"), NO_API) \
	DECLARE_SERIALIZER(UFAssembleLibrary)


#define FurAssembleSimulator_Source_FurAssembleSimulator_FAssembleLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFAssembleLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFAssembleLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFAssembleLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFAssembleLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFAssembleLibrary(UFAssembleLibrary&&); \
	NO_API UFAssembleLibrary(const UFAssembleLibrary&); \
public:


#define FurAssembleSimulator_Source_FurAssembleSimulator_FAssembleLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFAssembleLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFAssembleLibrary(UFAssembleLibrary&&); \
	NO_API UFAssembleLibrary(const UFAssembleLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFAssembleLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFAssembleLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFAssembleLibrary)


#define FurAssembleSimulator_Source_FurAssembleSimulator_FAssembleLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define FurAssembleSimulator_Source_FurAssembleSimulator_FAssembleLibrary_h_12_PROLOG
#define FurAssembleSimulator_Source_FurAssembleSimulator_FAssembleLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FurAssembleSimulator_Source_FurAssembleSimulator_FAssembleLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	FurAssembleSimulator_Source_FurAssembleSimulator_FAssembleLibrary_h_15_RPC_WRAPPERS \
	FurAssembleSimulator_Source_FurAssembleSimulator_FAssembleLibrary_h_15_INCLASS \
	FurAssembleSimulator_Source_FurAssembleSimulator_FAssembleLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FurAssembleSimulator_Source_FurAssembleSimulator_FAssembleLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FurAssembleSimulator_Source_FurAssembleSimulator_FAssembleLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	FurAssembleSimulator_Source_FurAssembleSimulator_FAssembleLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FurAssembleSimulator_Source_FurAssembleSimulator_FAssembleLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FurAssembleSimulator_Source_FurAssembleSimulator_FAssembleLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FURASSEMBLESIMULATOR_API UClass* StaticClass<class UFAssembleLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FurAssembleSimulator_Source_FurAssembleSimulator_FAssembleLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
