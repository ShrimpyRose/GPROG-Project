// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI_API_Project/BTTask_ChasePlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_ChasePlayer() {}
// Cross Module References
	AI_API_PROJECT_API UClass* Z_Construct_UClass_UBTTask_ChasePlayer();
	AI_API_PROJECT_API UClass* Z_Construct_UClass_UBTTask_ChasePlayer_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_AI_API_Project();
// End Cross Module References
	void UBTTask_ChasePlayer::StaticRegisterNativesUBTTask_ChasePlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_ChasePlayer);
	UClass* Z_Construct_UClass_UBTTask_ChasePlayer_NoRegister()
	{
		return UBTTask_ChasePlayer::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_ChasePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_ChasePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AI_API_Project,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChasePlayer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ChasePlayer_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTask_ChasePlayer.h" },
		{ "ModuleRelativePath", "BTTask_ChasePlayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_ChasePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_ChasePlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_ChasePlayer_Statics::ClassParams = {
		&UBTTask_ChasePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChasePlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_ChasePlayer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBTTask_ChasePlayer()
	{
		if (!Z_Registration_Info_UClass_UBTTask_ChasePlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_ChasePlayer.OuterSingleton, Z_Construct_UClass_UBTTask_ChasePlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_ChasePlayer.OuterSingleton;
	}
	template<> AI_API_PROJECT_API UClass* StaticClass<UBTTask_ChasePlayer>()
	{
		return UBTTask_ChasePlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_ChasePlayer);
	UBTTask_ChasePlayer::~UBTTask_ChasePlayer() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_BTTask_ChasePlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_BTTask_ChasePlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_ChasePlayer, UBTTask_ChasePlayer::StaticClass, TEXT("UBTTask_ChasePlayer"), &Z_Registration_Info_UClass_UBTTask_ChasePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_ChasePlayer), 1597352444U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_BTTask_ChasePlayer_h_1677463562(TEXT("/Script/AI_API_Project"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_BTTask_ChasePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_BTTask_ChasePlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
