// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB01/NaveEnemigoTransporteLogistico.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigoTransporteLogistico() {}
// Cross Module References
	GALAGA_USFX_LAB01_API UClass* Z_Construct_UClass_ANaveEnemigoTransporteLogistico_NoRegister();
	GALAGA_USFX_LAB01_API UClass* Z_Construct_UClass_ANaveEnemigoTransporteLogistico();
	GALAGA_USFX_LAB01_API UClass* Z_Construct_UClass_ANaveEnemigoTransporte();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB01();
// End Cross Module References
	void ANaveEnemigoTransporteLogistico::StaticRegisterNativesANaveEnemigoTransporteLogistico()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigoTransporteLogistico_NoRegister()
	{
		return ANaveEnemigoTransporteLogistico::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigoTransporteLogistico_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigoTransporteLogistico_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigoTransporte,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigoTransporteLogistico_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigoTransporteLogistico.h" },
		{ "ModuleRelativePath", "NaveEnemigoTransporteLogistico.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigoTransporteLogistico_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigoTransporteLogistico>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigoTransporteLogistico_Statics::ClassParams = {
		&ANaveEnemigoTransporteLogistico::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigoTransporteLogistico_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigoTransporteLogistico_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigoTransporteLogistico()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigoTransporteLogistico_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigoTransporteLogistico, 582117302);
	template<> GALAGA_USFX_LAB01_API UClass* StaticClass<ANaveEnemigoTransporteLogistico>()
	{
		return ANaveEnemigoTransporteLogistico::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigoTransporteLogistico(Z_Construct_UClass_ANaveEnemigoTransporteLogistico, &ANaveEnemigoTransporteLogistico::StaticClass, TEXT("/Script/Galaga_USFX_LAB01"), TEXT("ANaveEnemigoTransporteLogistico"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigoTransporteLogistico);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
