// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB01/NaveReabastecimientoMunicion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveReabastecimientoMunicion() {}
// Cross Module References
	GALAGA_USFX_LAB01_API UClass* Z_Construct_UClass_ANaveReabastecimientoMunicion_NoRegister();
	GALAGA_USFX_LAB01_API UClass* Z_Construct_UClass_ANaveReabastecimientoMunicion();
	GALAGA_USFX_LAB01_API UClass* Z_Construct_UClass_ANaveEnemigoReabastecimiento();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB01();
// End Cross Module References
	void ANaveReabastecimientoMunicion::StaticRegisterNativesANaveReabastecimientoMunicion()
	{
	}
	UClass* Z_Construct_UClass_ANaveReabastecimientoMunicion_NoRegister()
	{
		return ANaveReabastecimientoMunicion::StaticClass();
	}
	struct Z_Construct_UClass_ANaveReabastecimientoMunicion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveReabastecimientoMunicion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigoReabastecimiento,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveReabastecimientoMunicion_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveReabastecimientoMunicion.h" },
		{ "ModuleRelativePath", "NaveReabastecimientoMunicion.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveReabastecimientoMunicion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveReabastecimientoMunicion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveReabastecimientoMunicion_Statics::ClassParams = {
		&ANaveReabastecimientoMunicion::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveReabastecimientoMunicion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveReabastecimientoMunicion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveReabastecimientoMunicion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveReabastecimientoMunicion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveReabastecimientoMunicion, 1426374642);
	template<> GALAGA_USFX_LAB01_API UClass* StaticClass<ANaveReabastecimientoMunicion>()
	{
		return ANaveReabastecimientoMunicion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveReabastecimientoMunicion(Z_Construct_UClass_ANaveReabastecimientoMunicion, &ANaveReabastecimientoMunicion::StaticClass, TEXT("/Script/Galaga_USFX_LAB01"), TEXT("ANaveReabastecimientoMunicion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveReabastecimientoMunicion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif