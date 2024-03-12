// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB01/NaveEnemigoTransporteFurtivo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigoTransporteFurtivo() {}
// Cross Module References
	GALAGA_USFX_LAB01_API UClass* Z_Construct_UClass_ANaveEnemigoTransporteFurtivo_NoRegister();
	GALAGA_USFX_LAB01_API UClass* Z_Construct_UClass_ANaveEnemigoTransporteFurtivo();
	GALAGA_USFX_LAB01_API UClass* Z_Construct_UClass_ANaveEnemigoTransporte();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB01();
// End Cross Module References
	void ANaveEnemigoTransporteFurtivo::StaticRegisterNativesANaveEnemigoTransporteFurtivo()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigoTransporteFurtivo_NoRegister()
	{
		return ANaveEnemigoTransporteFurtivo::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigoTransporteFurtivo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigoTransporteFurtivo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigoTransporte,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigoTransporteFurtivo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigoTransporteFurtivo.h" },
		{ "ModuleRelativePath", "NaveEnemigoTransporteFurtivo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigoTransporteFurtivo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigoTransporteFurtivo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigoTransporteFurtivo_Statics::ClassParams = {
		&ANaveEnemigoTransporteFurtivo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigoTransporteFurtivo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigoTransporteFurtivo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigoTransporteFurtivo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigoTransporteFurtivo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigoTransporteFurtivo, 2923260043);
	template<> GALAGA_USFX_LAB01_API UClass* StaticClass<ANaveEnemigoTransporteFurtivo>()
	{
		return ANaveEnemigoTransporteFurtivo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigoTransporteFurtivo(Z_Construct_UClass_ANaveEnemigoTransporteFurtivo, &ANaveEnemigoTransporteFurtivo::StaticClass, TEXT("/Script/Galaga_USFX_LAB01"), TEXT("ANaveEnemigoTransporteFurtivo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigoTransporteFurtivo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
