// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FurAssembleSimulator/FAssembleLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFAssembleLibrary() {}
// Cross Module References
	FURASSEMBLESIMULATOR_API UClass* Z_Construct_UClass_UFAssembleLibrary_NoRegister();
	FURASSEMBLESIMULATOR_API UClass* Z_Construct_UClass_UFAssembleLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FurAssembleSimulator();
	FURASSEMBLESIMULATOR_API UFunction* Z_Construct_UFunction_UFAssembleLibrary_GetAssembledFTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	FURASSEMBLESIMULATOR_API UFunction* Z_Construct_UFunction_UFAssembleLibrary_LoadPDDAfromCSV();
	FURASSEMBLESIMULATOR_API UFunction* Z_Construct_UFunction_UFAssembleLibrary_TransformPartActors();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
// End Cross Module References
	void UFAssembleLibrary::StaticRegisterNativesUFAssembleLibrary()
	{
		UClass* Class = UFAssembleLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAssembledFTransform", &UFAssembleLibrary::execGetAssembledFTransform },
			{ "LoadPDDAfromCSV", &UFAssembleLibrary::execLoadPDDAfromCSV },
			{ "TransformPartActors", &UFAssembleLibrary::execTransformPartActors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFAssembleLibrary_GetAssembledFTransform_Statics
	{
		struct FAssembleLibrary_eventGetAssembledFTransform_Parms
		{
			TArray<FString> arrCSV;
			TArray<FTransform> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arrCSV_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arrCSV;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_arrCSV_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFAssembleLibrary_GetAssembledFTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssembleLibrary_eventGetAssembledFTransform_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFAssembleLibrary_GetAssembledFTransform_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFAssembleLibrary_GetAssembledFTransform_Statics::NewProp_arrCSV_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFAssembleLibrary_GetAssembledFTransform_Statics::NewProp_arrCSV = { "arrCSV", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssembleLibrary_eventGetAssembledFTransform_Parms, arrCSV), METADATA_PARAMS(Z_Construct_UFunction_UFAssembleLibrary_GetAssembledFTransform_Statics::NewProp_arrCSV_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFAssembleLibrary_GetAssembledFTransform_Statics::NewProp_arrCSV_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFAssembleLibrary_GetAssembledFTransform_Statics::NewProp_arrCSV_Inner = { "arrCSV", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFAssembleLibrary_GetAssembledFTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFAssembleLibrary_GetAssembledFTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFAssembleLibrary_GetAssembledFTransform_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFAssembleLibrary_GetAssembledFTransform_Statics::NewProp_arrCSV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFAssembleLibrary_GetAssembledFTransform_Statics::NewProp_arrCSV_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFAssembleLibrary_GetAssembledFTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Furniture_Assemble" },
		{ "ModuleRelativePath", "FAssembleLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFAssembleLibrary_GetAssembledFTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFAssembleLibrary, nullptr, "GetAssembledFTransform", nullptr, nullptr, sizeof(FAssembleLibrary_eventGetAssembledFTransform_Parms), Z_Construct_UFunction_UFAssembleLibrary_GetAssembledFTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFAssembleLibrary_GetAssembledFTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFAssembleLibrary_GetAssembledFTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFAssembleLibrary_GetAssembledFTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFAssembleLibrary_GetAssembledFTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFAssembleLibrary_GetAssembledFTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFAssembleLibrary_LoadPDDAfromCSV_Statics
	{
		struct FAssembleLibrary_eventLoadPDDAfromCSV_Parms
		{
			FString CSVfolderPath;
			FString CSVfileName;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CSVfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CSVfileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CSVfolderPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CSVfolderPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFAssembleLibrary_LoadPDDAfromCSV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssembleLibrary_eventLoadPDDAfromCSV_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFAssembleLibrary_LoadPDDAfromCSV_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFAssembleLibrary_LoadPDDAfromCSV_Statics::NewProp_CSVfileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFAssembleLibrary_LoadPDDAfromCSV_Statics::NewProp_CSVfileName = { "CSVfileName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssembleLibrary_eventLoadPDDAfromCSV_Parms, CSVfileName), METADATA_PARAMS(Z_Construct_UFunction_UFAssembleLibrary_LoadPDDAfromCSV_Statics::NewProp_CSVfileName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFAssembleLibrary_LoadPDDAfromCSV_Statics::NewProp_CSVfileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFAssembleLibrary_LoadPDDAfromCSV_Statics::NewProp_CSVfolderPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFAssembleLibrary_LoadPDDAfromCSV_Statics::NewProp_CSVfolderPath = { "CSVfolderPath", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssembleLibrary_eventLoadPDDAfromCSV_Parms, CSVfolderPath), METADATA_PARAMS(Z_Construct_UFunction_UFAssembleLibrary_LoadPDDAfromCSV_Statics::NewProp_CSVfolderPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFAssembleLibrary_LoadPDDAfromCSV_Statics::NewProp_CSVfolderPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFAssembleLibrary_LoadPDDAfromCSV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFAssembleLibrary_LoadPDDAfromCSV_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFAssembleLibrary_LoadPDDAfromCSV_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFAssembleLibrary_LoadPDDAfromCSV_Statics::NewProp_CSVfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFAssembleLibrary_LoadPDDAfromCSV_Statics::NewProp_CSVfolderPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFAssembleLibrary_LoadPDDAfromCSV_Statics::Function_MetaDataParams[] = {
		{ "Category", "Furniture_Assemble" },
		{ "ModuleRelativePath", "FAssembleLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFAssembleLibrary_LoadPDDAfromCSV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFAssembleLibrary, nullptr, "LoadPDDAfromCSV", nullptr, nullptr, sizeof(FAssembleLibrary_eventLoadPDDAfromCSV_Parms), Z_Construct_UFunction_UFAssembleLibrary_LoadPDDAfromCSV_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFAssembleLibrary_LoadPDDAfromCSV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFAssembleLibrary_LoadPDDAfromCSV_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFAssembleLibrary_LoadPDDAfromCSV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFAssembleLibrary_LoadPDDAfromCSV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFAssembleLibrary_LoadPDDAfromCSV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFAssembleLibrary_TransformPartActors_Statics
	{
		struct FAssembleLibrary_eventTransformPartActors_Parms
		{
			TArray<FString> arrCSV;
			TArray<AStaticMeshActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arrCSV_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arrCSV;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_arrCSV_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFAssembleLibrary_TransformPartActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssembleLibrary_eventTransformPartActors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFAssembleLibrary_TransformPartActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFAssembleLibrary_TransformPartActors_Statics::NewProp_arrCSV_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFAssembleLibrary_TransformPartActors_Statics::NewProp_arrCSV = { "arrCSV", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssembleLibrary_eventTransformPartActors_Parms, arrCSV), METADATA_PARAMS(Z_Construct_UFunction_UFAssembleLibrary_TransformPartActors_Statics::NewProp_arrCSV_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFAssembleLibrary_TransformPartActors_Statics::NewProp_arrCSV_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFAssembleLibrary_TransformPartActors_Statics::NewProp_arrCSV_Inner = { "arrCSV", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFAssembleLibrary_TransformPartActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFAssembleLibrary_TransformPartActors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFAssembleLibrary_TransformPartActors_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFAssembleLibrary_TransformPartActors_Statics::NewProp_arrCSV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFAssembleLibrary_TransformPartActors_Statics::NewProp_arrCSV_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFAssembleLibrary_TransformPartActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Furniture_Assemble" },
		{ "ModuleRelativePath", "FAssembleLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFAssembleLibrary_TransformPartActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFAssembleLibrary, nullptr, "TransformPartActors", nullptr, nullptr, sizeof(FAssembleLibrary_eventTransformPartActors_Parms), Z_Construct_UFunction_UFAssembleLibrary_TransformPartActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFAssembleLibrary_TransformPartActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFAssembleLibrary_TransformPartActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFAssembleLibrary_TransformPartActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFAssembleLibrary_TransformPartActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFAssembleLibrary_TransformPartActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFAssembleLibrary_NoRegister()
	{
		return UFAssembleLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFAssembleLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFAssembleLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FurAssembleSimulator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFAssembleLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFAssembleLibrary_GetAssembledFTransform, "GetAssembledFTransform" }, // 3696673613
		{ &Z_Construct_UFunction_UFAssembleLibrary_LoadPDDAfromCSV, "LoadPDDAfromCSV" }, // 435767451
		{ &Z_Construct_UFunction_UFAssembleLibrary_TransformPartActors, "TransformPartActors" }, // 3823678011
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFAssembleLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FAssembleLibrary.h" },
		{ "ModuleRelativePath", "FAssembleLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFAssembleLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFAssembleLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFAssembleLibrary_Statics::ClassParams = {
		&UFAssembleLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFAssembleLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFAssembleLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFAssembleLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFAssembleLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFAssembleLibrary, 395893732);
	template<> FURASSEMBLESIMULATOR_API UClass* StaticClass<UFAssembleLibrary>()
	{
		return UFAssembleLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFAssembleLibrary(Z_Construct_UClass_UFAssembleLibrary, &UFAssembleLibrary::StaticClass, TEXT("/Script/FurAssembleSimulator"), TEXT("UFAssembleLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFAssembleLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
