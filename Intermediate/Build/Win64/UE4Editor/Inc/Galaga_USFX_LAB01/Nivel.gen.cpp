// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB01/Nivel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNivel() {}
// Cross Module References
	GALAGA_USFX_LAB01_API UClass* Z_Construct_UClass_ANivel_NoRegister();
	GALAGA_USFX_LAB01_API UClass* Z_Construct_UClass_ANivel();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB01();
// End Cross Module References
	void ANivel::StaticRegisterNativesANivel()
	{
	}
	UClass* Z_Construct_UClass_ANivel_NoRegister()
	{
		return ANivel::StaticClass();
	}
	struct Z_Construct_UClass_ANivel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANivel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANivel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nivel.h" },
		{ "ModuleRelativePath", "Nivel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANivel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANivel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANivel_Statics::ClassParams = {
		&ANivel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANivel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANivel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANivel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANivel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANivel, 2192387143);
	template<> GALAGA_USFX_LAB01_API UClass* StaticClass<ANivel>()
	{
		return ANivel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANivel(Z_Construct_UClass_ANivel, &ANivel::StaticClass, TEXT("/Script/Galaga_USFX_LAB01"), TEXT("ANivel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANivel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
