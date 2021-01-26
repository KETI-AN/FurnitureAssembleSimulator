// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FurAssembleSimulator/FurnitureAssembleLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFurnitureAssembleLibrary() {}
// Cross Module References
	FURASSEMBLESIMULATOR_API UClass* Z_Construct_UClass_UFurnitureAssembleLibrary_NoRegister();
	FURASSEMBLESIMULATOR_API UClass* Z_Construct_UClass_UFurnitureAssembleLibrary();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityLibrary();
	UPackage* Z_Construct_UPackage__Script_FurAssembleSimulator();
// End Cross Module References
	DEFINE_FUNCTION(UFurnitureAssembleLibrary::execGetAllFilesInDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_directory);
		P_GET_UBOOL(Z_Param_fullPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_onlyFilesStartingWith);
		P_GET_PROPERTY(FStrProperty,Z_Param_onlyFilesEndingWith);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UFurnitureAssembleLibrary::GetAllFilesInDirectory(Z_Param_directory,Z_Param_fullPath,Z_Param_onlyFilesStartingWith,Z_Param_onlyFilesEndingWith);
		P_NATIVE_END;
	}
	void UFurnitureAssembleLibrary::StaticRegisterNativesUFurnitureAssembleLibrary()
	{
		UClass* Class = UFurnitureAssembleLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllFilesInDirectory", &UFurnitureAssembleLibrary::execGetAllFilesInDirectory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics
	{
		struct FurnitureAssembleLibrary_eventGetAllFilesInDirectory_Parms
		{
			FString directory;
			bool fullPath;
			FString onlyFilesStartingWith;
			FString onlyFilesEndingWith;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_directory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_directory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fullPath_MetaData[];
#endif
		static void NewProp_fullPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_fullPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onlyFilesStartingWith_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_onlyFilesStartingWith;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onlyFilesEndingWith_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_onlyFilesEndingWith;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::NewProp_directory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::NewProp_directory = { "directory", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FurnitureAssembleLibrary_eventGetAllFilesInDirectory_Parms, directory), METADATA_PARAMS(Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::NewProp_directory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::NewProp_directory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::NewProp_fullPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::NewProp_fullPath_SetBit(void* Obj)
	{
		((FurnitureAssembleLibrary_eventGetAllFilesInDirectory_Parms*)Obj)->fullPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::NewProp_fullPath = { "fullPath", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FurnitureAssembleLibrary_eventGetAllFilesInDirectory_Parms), &Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::NewProp_fullPath_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::NewProp_fullPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::NewProp_fullPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::NewProp_onlyFilesStartingWith_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::NewProp_onlyFilesStartingWith = { "onlyFilesStartingWith", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FurnitureAssembleLibrary_eventGetAllFilesInDirectory_Parms, onlyFilesStartingWith), METADATA_PARAMS(Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::NewProp_onlyFilesStartingWith_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::NewProp_onlyFilesStartingWith_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::NewProp_onlyFilesEndingWith_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::NewProp_onlyFilesEndingWith = { "onlyFilesEndingWith", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FurnitureAssembleLibrary_eventGetAllFilesInDirectory_Parms, onlyFilesEndingWith), METADATA_PARAMS(Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::NewProp_onlyFilesEndingWith_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::NewProp_onlyFilesEndingWith_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FurnitureAssembleLibrary_eventGetAllFilesInDirectory_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::NewProp_directory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::NewProp_fullPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::NewProp_onlyFilesStartingWith,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::NewProp_onlyFilesEndingWith,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Furniture_Assemble" },
		{ "CPP_Default_fullPath", "true" },
		{ "CPP_Default_onlyFilesEndingWith", "" },
		{ "CPP_Default_onlyFilesStartingWith", "" },
		{ "ModuleRelativePath", "FurnitureAssembleLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFurnitureAssembleLibrary, nullptr, "GetAllFilesInDirectory", nullptr, nullptr, sizeof(FurnitureAssembleLibrary_eventGetAllFilesInDirectory_Parms), Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFurnitureAssembleLibrary_NoRegister()
	{
		return UFurnitureAssembleLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFurnitureAssembleLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFurnitureAssembleLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FurAssembleSimulator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFurnitureAssembleLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFurnitureAssembleLibrary_GetAllFilesInDirectory, "GetAllFilesInDirectory" }, // 1244713016
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFurnitureAssembleLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FurnitureAssembleLibrary.h" },
		{ "ModuleRelativePath", "FurnitureAssembleLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFurnitureAssembleLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFurnitureAssembleLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFurnitureAssembleLibrary_Statics::ClassParams = {
		&UFurnitureAssembleLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFurnitureAssembleLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFurnitureAssembleLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFurnitureAssembleLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFurnitureAssembleLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFurnitureAssembleLibrary, 636516614);
	template<> FURASSEMBLESIMULATOR_API UClass* StaticClass<UFurnitureAssembleLibrary>()
	{
		return UFurnitureAssembleLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFurnitureAssembleLibrary(Z_Construct_UClass_UFurnitureAssembleLibrary, &UFurnitureAssembleLibrary::StaticClass, TEXT("/Script/FurAssembleSimulator"), TEXT("UFurnitureAssembleLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFurnitureAssembleLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
