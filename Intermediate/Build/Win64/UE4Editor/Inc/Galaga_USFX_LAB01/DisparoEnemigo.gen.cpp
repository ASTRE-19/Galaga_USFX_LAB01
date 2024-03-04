// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB01/DisparoEnemigo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisparoEnemigo() {}
// Cross Module References
	GALAGA_USFX_LAB01_API UClass* Z_Construct_UClass_ADisparoEnemigo_NoRegister();
	GALAGA_USFX_LAB01_API UClass* Z_Construct_UClass_ADisparoEnemigo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB01();
// End Cross Module References
	void ADisparoEnemigo::StaticRegisterNativesADisparoEnemigo()
	{
	}
	UClass* Z_Construct_UClass_ADisparoEnemigo_NoRegister()
	{
		return ADisparoEnemigo::StaticClass();
	}
	struct Z_Construct_UClass_ADisparoEnemigo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADisparoEnemigo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisparoEnemigo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DisparoEnemigo.h" },
		{ "ModuleRelativePath", "DisparoEnemigo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADisparoEnemigo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADisparoEnemigo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADisparoEnemigo_Statics::ClassParams = {
		&ADisparoEnemigo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADisparoEnemigo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADisparoEnemigo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADisparoEnemigo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADisparoEnemigo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADisparoEnemigo, 2596453857);
	template<> GALAGA_USFX_LAB01_API UClass* StaticClass<ADisparoEnemigo>()
	{
		return ADisparoEnemigo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADisparoEnemigo(Z_Construct_UClass_ADisparoEnemigo, &ADisparoEnemigo::StaticClass, TEXT("/Script/Galaga_USFX_LAB01"), TEXT("ADisparoEnemigo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADisparoEnemigo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
