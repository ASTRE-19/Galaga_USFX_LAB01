// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB01/NaveEnemigoCazaVeloz.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigoCazaVeloz() {}
// Cross Module References
	GALAGA_USFX_LAB01_API UClass* Z_Construct_UClass_ANaveEnemigoCazaVeloz_NoRegister();
	GALAGA_USFX_LAB01_API UClass* Z_Construct_UClass_ANaveEnemigoCazaVeloz();
	GALAGA_USFX_LAB01_API UClass* Z_Construct_UClass_ANaveEnemigoCaza();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB01();
// End Cross Module References
	void ANaveEnemigoCazaVeloz::StaticRegisterNativesANaveEnemigoCazaVeloz()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigoCazaVeloz_NoRegister()
	{
		return ANaveEnemigoCazaVeloz::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigoCazaVeloz_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigoCazaVeloz_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigoCaza,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigoCazaVeloz_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigoCazaVeloz.h" },
		{ "ModuleRelativePath", "NaveEnemigoCazaVeloz.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigoCazaVeloz_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigoCazaVeloz>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigoCazaVeloz_Statics::ClassParams = {
		&ANaveEnemigoCazaVeloz::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigoCazaVeloz_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigoCazaVeloz_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigoCazaVeloz()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigoCazaVeloz_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigoCazaVeloz, 923139164);
	template<> GALAGA_USFX_LAB01_API UClass* StaticClass<ANaveEnemigoCazaVeloz>()
	{
		return ANaveEnemigoCazaVeloz::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigoCazaVeloz(Z_Construct_UClass_ANaveEnemigoCazaVeloz, &ANaveEnemigoCazaVeloz::StaticClass, TEXT("/Script/Galaga_USFX_LAB01"), TEXT("ANaveEnemigoCazaVeloz"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigoCazaVeloz);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif