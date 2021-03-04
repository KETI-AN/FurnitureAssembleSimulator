// Copyright Epic Games, Inc. All Rights Reserved.
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
// End Cross Module References
	DEFINE_FUNCTION(UFAssembleLibrary::execCheckPDDLfiles)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PDDLfolderPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_CSVfileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_PDDLfileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFAssembleLibrary::CheckPDDLfiles(Z_Param_PDDLfolderPath,Z_Param_CSVfileName,Z_Param_PDDLfileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFAssembleLibrary::execLoadPDDLfromCSV)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CSVfolderPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_CSVfileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UFAssembleLibrary::LoadPDDLfromCSV(Z_Param_CSVfolderPath,Z_Param_CSVfileName);
		P_NATIVE_END;
	}
	void UFAssembleLibrary::StaticRegisterNativesUFAssembleLibrary()
	{
		UClass* Class = UFAssembleLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckPDDLfiles", &UFAssembleLibrary::execCheckPDDLfiles },
			{ "LoadPDDLfromCSV", &UFAssembleLibrary::execLoadPDDLfromCSV },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles_Statics
	{
		struct FAssembleLibrary_eventCheckPDDLfiles_Parms
		{
			FString PDDLfolderPath;
			FString CSVfileName;
			FString PDDLfileName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PDDLfolderPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PDDLfolderPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CSVfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CSVfileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PDDLfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PDDLfileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles_Statics::NewProp_PDDLfolderPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles_Statics::NewProp_PDDLfolderPath = { "PDDLfolderPath", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssembleLibrary_eventCheckPDDLfiles_Parms, PDDLfolderPath), METADATA_PARAMS(Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles_Statics::NewProp_PDDLfolderPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles_Statics::NewProp_PDDLfolderPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles_Statics::NewProp_CSVfileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles_Statics::NewProp_CSVfileName = { "CSVfileName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssembleLibrary_eventCheckPDDLfiles_Parms, CSVfileName), METADATA_PARAMS(Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles_Statics::NewProp_CSVfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles_Statics::NewProp_CSVfileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles_Statics::NewProp_PDDLfileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles_Statics::NewProp_PDDLfileName = { "PDDLfileName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssembleLibrary_eventCheckPDDLfiles_Parms, PDDLfileName), METADATA_PARAMS(Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles_Statics::NewProp_PDDLfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles_Statics::NewProp_PDDLfileName_MetaData)) };
	void Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FAssembleLibrary_eventCheckPDDLfiles_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAssembleLibrary_eventCheckPDDLfiles_Parms), &Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles_Statics::NewProp_PDDLfolderPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles_Statics::NewProp_CSVfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles_Statics::NewProp_PDDLfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Furniture_Assemble" },
		{ "ModuleRelativePath", "FAssembleLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFAssembleLibrary, nullptr, "CheckPDDLfiles", nullptr, nullptr, sizeof(FAssembleLibrary_eventCheckPDDLfiles_Parms), Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFAssembleLibrary_LoadPDDLfromCSV_Statics
	{
		struct FAssembleLibrary_eventLoadPDDLfromCSV_Parms
		{
			FString CSVfolderPath;
			FString CSVfileName;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CSVfolderPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CSVfolderPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CSVfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CSVfileName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFAssembleLibrary_LoadPDDLfromCSV_Statics::NewProp_CSVfolderPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFAssembleLibrary_LoadPDDLfromCSV_Statics::NewProp_CSVfolderPath = { "CSVfolderPath", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssembleLibrary_eventLoadPDDLfromCSV_Parms, CSVfolderPath), METADATA_PARAMS(Z_Construct_UFunction_UFAssembleLibrary_LoadPDDLfromCSV_Statics::NewProp_CSVfolderPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFAssembleLibrary_LoadPDDLfromCSV_Statics::NewProp_CSVfolderPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFAssembleLibrary_LoadPDDLfromCSV_Statics::NewProp_CSVfileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFAssembleLibrary_LoadPDDLfromCSV_Statics::NewProp_CSVfileName = { "CSVfileName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssembleLibrary_eventLoadPDDLfromCSV_Parms, CSVfileName), METADATA_PARAMS(Z_Construct_UFunction_UFAssembleLibrary_LoadPDDLfromCSV_Statics::NewProp_CSVfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFAssembleLibrary_LoadPDDLfromCSV_Statics::NewProp_CSVfileName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFAssembleLibrary_LoadPDDLfromCSV_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFAssembleLibrary_LoadPDDLfromCSV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssembleLibrary_eventLoadPDDLfromCSV_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFAssembleLibrary_LoadPDDLfromCSV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFAssembleLibrary_LoadPDDLfromCSV_Statics::NewProp_CSVfolderPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFAssembleLibrary_LoadPDDLfromCSV_Statics::NewProp_CSVfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFAssembleLibrary_LoadPDDLfromCSV_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFAssembleLibrary_LoadPDDLfromCSV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFAssembleLibrary_LoadPDDLfromCSV_Statics::Function_MetaDataParams[] = {
		{ "Category", "Furniture_Assemble" },
		{ "ModuleRelativePath", "FAssembleLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFAssembleLibrary_LoadPDDLfromCSV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFAssembleLibrary, nullptr, "LoadPDDLfromCSV", nullptr, nullptr, sizeof(FAssembleLibrary_eventLoadPDDLfromCSV_Parms), Z_Construct_UFunction_UFAssembleLibrary_LoadPDDLfromCSV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFAssembleLibrary_LoadPDDLfromCSV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFAssembleLibrary_LoadPDDLfromCSV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFAssembleLibrary_LoadPDDLfromCSV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFAssembleLibrary_LoadPDDLfromCSV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFAssembleLibrary_LoadPDDLfromCSV_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_UFAssembleLibrary_CheckPDDLfiles, "CheckPDDLfiles" }, // 4281302231
		{ &Z_Construct_UFunction_UFAssembleLibrary_LoadPDDLfromCSV, "LoadPDDLfromCSV" }, // 183552077
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
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFAssembleLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFAssembleLibrary_Statics::Class_MetaDataParams))
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
	IMPLEMENT_CLASS(UFAssembleLibrary, 902041693);
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
