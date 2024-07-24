// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI_API_Project/AI_API_ProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_API_ProjectGameMode() {}
// Cross Module References
	AI_API_PROJECT_API UClass* Z_Construct_UClass_AAI_API_ProjectGameMode();
	AI_API_PROJECT_API UClass* Z_Construct_UClass_AAI_API_ProjectGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AI_API_Project();
// End Cross Module References
	void AAI_API_ProjectGameMode::StaticRegisterNativesAAI_API_ProjectGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAI_API_ProjectGameMode);
	UClass* Z_Construct_UClass_AAI_API_ProjectGameMode_NoRegister()
	{
		return AAI_API_ProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAI_API_ProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_API_ProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AI_API_Project,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAI_API_ProjectGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_API_ProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AI_API_ProjectGameMode.h" },
		{ "ModuleRelativePath", "AI_API_ProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_API_ProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_API_ProjectGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAI_API_ProjectGameMode_Statics::ClassParams = {
		&AAI_API_ProjectGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAI_API_ProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAI_API_ProjectGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AAI_API_ProjectGameMode()
	{
		if (!Z_Registration_Info_UClass_AAI_API_ProjectGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAI_API_ProjectGameMode.OuterSingleton, Z_Construct_UClass_AAI_API_ProjectGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAI_API_ProjectGameMode.OuterSingleton;
	}
	template<> AI_API_PROJECT_API UClass* StaticClass<AAI_API_ProjectGameMode>()
	{
		return AAI_API_ProjectGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_API_ProjectGameMode);
	AAI_API_ProjectGameMode::~AAI_API_ProjectGameMode() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_AI_API_ProjectGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_AI_API_ProjectGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAI_API_ProjectGameMode, AAI_API_ProjectGameMode::StaticClass, TEXT("AAI_API_ProjectGameMode"), &Z_Registration_Info_UClass_AAI_API_ProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAI_API_ProjectGameMode), 4030611763U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_AI_API_ProjectGameMode_h_3016306581(TEXT("/Script/AI_API_Project"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_AI_API_ProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_AI_API_ProjectGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
