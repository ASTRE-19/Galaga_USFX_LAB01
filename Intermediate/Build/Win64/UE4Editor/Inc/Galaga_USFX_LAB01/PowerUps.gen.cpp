// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB01/PowerUps.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerUps() {}
// Cross Module References
	GALAGA_USFX_LAB01_API UClass* Z_Construct_UClass_APowerUps_NoRegister();
	GALAGA_USFX_LAB01_API UClass* Z_Construct_UClass_APowerUps();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB01();
// End Cross Module References
	void APowerUps::StaticRegisterNativesAPowerUps()
	{
	}
	UClass* Z_Construct_UClass_APowerUps_NoRegister()
	{
		return APowerUps::StaticClass();
	}
	struct Z_Construct_UClass_APowerUps_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APowerUps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APowerUps_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PowerUps.h" },
		{ "ModuleRelativePath", "PowerUps.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APowerUps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APowerUps>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APowerUps_Statics::ClassParams = {
		&APowerUps::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APowerUps_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APowerUps_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APowerUps()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APowerUps_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APowerUps, 2598146202);
	template<> GALAGA_USFX_LAB01_API UClass* StaticClass<APowerUps>()
	{
		return APowerUps::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APowerUps(Z_Construct_UClass_APowerUps, &APowerUps::StaticClass, TEXT("/Script/Galaga_USFX_LAB01"), TEXT("APowerUps"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APowerUps);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
