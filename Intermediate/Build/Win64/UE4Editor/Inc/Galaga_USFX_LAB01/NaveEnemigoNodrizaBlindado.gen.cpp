// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB01/NaveEnemigoNodrizaBlindado.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigoNodrizaBlindado() {}
// Cross Module References
	GALAGA_USFX_LAB01_API UClass* Z_Construct_UClass_ANaveEnemigoNodrizaBlindado_NoRegister();
	GALAGA_USFX_LAB01_API UClass* Z_Construct_UClass_ANaveEnemigoNodrizaBlindado();
	GALAGA_USFX_LAB01_API UClass* Z_Construct_UClass_ANaveEnemigoNodriza();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB01();
// End Cross Module References
	void ANaveEnemigoNodrizaBlindado::StaticRegisterNativesANaveEnemigoNodrizaBlindado()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigoNodrizaBlindado_NoRegister()
	{
		return ANaveEnemigoNodrizaBlindado::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigoNodrizaBlindado_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigoNodrizaBlindado_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigoNodriza,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigoNodrizaBlindado_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigoNodrizaBlindado.h" },
		{ "ModuleRelativePath", "NaveEnemigoNodrizaBlindado.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigoNodrizaBlindado_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigoNodrizaBlindado>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigoNodrizaBlindado_Statics::ClassParams = {
		&ANaveEnemigoNodrizaBlindado::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigoNodrizaBlindado_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigoNodrizaBlindado_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigoNodrizaBlindado()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigoNodrizaBlindado_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigoNodrizaBlindado, 138418175);
	template<> GALAGA_USFX_LAB01_API UClass* StaticClass<ANaveEnemigoNodrizaBlindado>()
	{
		return ANaveEnemigoNodrizaBlindado::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigoNodrizaBlindado(Z_Construct_UClass_ANaveEnemigoNodrizaBlindado, &ANaveEnemigoNodrizaBlindado::StaticClass, TEXT("/Script/Galaga_USFX_LAB01"), TEXT("ANaveEnemigoNodrizaBlindado"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigoNodrizaBlindado);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
