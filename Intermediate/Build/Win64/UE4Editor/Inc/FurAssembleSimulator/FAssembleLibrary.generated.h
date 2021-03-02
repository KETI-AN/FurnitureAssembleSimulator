// Copyright Epic Games, Inc. All Rights Reserved.
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

#define ue4_furniture_assmeble_sim_Source_FurAssembleSimulator_FAssembleLibrary_h_15_SPARSE_DATA
#define ue4_furniture_assmeble_sim_Source_FurAssembleSimulator_FAssembleLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAssembledFTransform); \
	DECLARE_FUNCTION(execTransformPartActors); \
	DECLARE_FUNCTION(execCheckPDDLfiles); \
	DECLARE_FUNCTION(execLoadPDDLfromCSV);


#define ue4_furniture_assmeble_sim_Source_FurAssembleSimulator_FAssembleLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAssembledFTransform); \
	DECLARE_FUNCTION(execTransformPartActors); \
	DECLARE_FUNCTION(execCheckPDDLfiles); \
	DECLARE_FUNCTION(execLoadPDDLfromCSV);


#define ue4_furniture_assmeble_sim_Source_FurAssembleSimulator_FAssembleLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFAssembleLibrary(); \
	friend struct Z_Construct_UClass_UFAssembleLibrary_Statics; \
public: \
	DECLARE_CLASS(UFAssembleLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FurAssembleSimulator"), NO_API) \
	DECLARE_SERIALIZER(UFAssembleLibrary)


#define ue4_furniture_assmeble_sim_Source_FurAssembleSimulator_FAssembleLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFAssembleLibrary(); \
	friend struct Z_Construct_UClass_UFAssembleLibrary_Statics; \
public: \
	DECLARE_CLASS(UFAssembleLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FurAssembleSimulator"), NO_API) \
	DECLARE_SERIALIZER(UFAssembleLibrary)


#define ue4_furniture_assmeble_sim_Source_FurAssembleSimulator_FAssembleLibrary_h_15_STANDARD_CONSTRUCTORS \
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


#define ue4_furniture_assmeble_sim_Source_FurAssembleSimulator_FAssembleLibrary_h_15_ENHANCED_CONSTRUCTORS \
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


#define ue4_furniture_assmeble_sim_Source_FurAssembleSimulator_FAssembleLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define ue4_furniture_assmeble_sim_Source_FurAssembleSimulator_FAssembleLibrary_h_12_PROLOG
#define ue4_furniture_assmeble_sim_Source_FurAssembleSimulator_FAssembleLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ue4_furniture_assmeble_sim_Source_FurAssembleSimulator_FAssembleLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	ue4_furniture_assmeble_sim_Source_FurAssembleSimulator_FAssembleLibrary_h_15_SPARSE_DATA \
	ue4_furniture_assmeble_sim_Source_FurAssembleSimulator_FAssembleLibrary_h_15_RPC_WRAPPERS \
	ue4_furniture_assmeble_sim_Source_FurAssembleSimulator_FAssembleLibrary_h_15_INCLASS \
	ue4_furniture_assmeble_sim_Source_FurAssembleSimulator_FAssembleLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ue4_furniture_assmeble_sim_Source_FurAssembleSimulator_FAssembleLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ue4_furniture_assmeble_sim_Source_FurAssembleSimulator_FAssembleLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	ue4_furniture_assmeble_sim_Source_FurAssembleSimulator_FAssembleLibrary_h_15_SPARSE_DATA \
	ue4_furniture_assmeble_sim_Source_FurAssembleSimulator_FAssembleLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ue4_furniture_assmeble_sim_Source_FurAssembleSimulator_FAssembleLibrary_h_15_INCLASS_NO_PURE_DECLS \
	ue4_furniture_assmeble_sim_Source_FurAssembleSimulator_FAssembleLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FURASSEMBLESIMULATOR_API UClass* StaticClass<class UFAssembleLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ue4_furniture_assmeble_sim_Source_FurAssembleSimulator_FAssembleLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
