// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI_API_Project/BTService_ChangeSpeed.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_ChangeSpeed() {}
// Cross Module References
	AI_API_PROJECT_API UClass* Z_Construct_UClass_UBTService_ChangeSpeed();
	AI_API_PROJECT_API UClass* Z_Construct_UClass_UBTService_ChangeSpeed_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_AI_API_Project();
// End Cross Module References
	void UBTService_ChangeSpeed::StaticRegisterNativesUBTService_ChangeSpeed()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_ChangeSpeed);
	UClass* Z_Construct_UClass_UBTService_ChangeSpeed_NoRegister()
	{
		return UBTService_ChangeSpeed::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_ChangeSpeed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_ChangeSpeed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AI_API_Project,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_ChangeSpeed_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_ChangeSpeed_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTService_ChangeSpeed.h" },
		{ "ModuleRelativePath", "BTService_ChangeSpeed.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_ChangeSpeed_Statics::NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "BTService_ChangeSpeed.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_ChangeSpeed_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_ChangeSpeed, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_ChangeSpeed_Statics::NewProp_Speed_MetaData), Z_Construct_UClass_UBTService_ChangeSpeed_Statics::NewProp_Speed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_ChangeSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_ChangeSpeed_Statics::NewProp_Speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_ChangeSpeed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_ChangeSpeed>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_ChangeSpeed_Statics::ClassParams = {
		&UBTService_ChangeSpeed::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_ChangeSpeed_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_ChangeSpeed_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_ChangeSpeed_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_ChangeSpeed_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_ChangeSpeed_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBTService_ChangeSpeed()
	{
		if (!Z_Registration_Info_UClass_UBTService_ChangeSpeed.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_ChangeSpeed.OuterSingleton, Z_Construct_UClass_UBTService_ChangeSpeed_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTService_ChangeSpeed.OuterSingleton;
	}
	template<> AI_API_PROJECT_API UClass* StaticClass<UBTService_ChangeSpeed>()
	{
		return UBTService_ChangeSpeed::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_ChangeSpeed);
	UBTService_ChangeSpeed::~UBTService_ChangeSpeed() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_BTService_ChangeSpeed_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_BTService_ChangeSpeed_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_ChangeSpeed, UBTService_ChangeSpeed::StaticClass, TEXT("UBTService_ChangeSpeed"), &Z_Registration_Info_UClass_UBTService_ChangeSpeed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_ChangeSpeed), 1484868942U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_BTService_ChangeSpeed_h_2158132555(TEXT("/Script/AI_API_Project"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_BTService_ChangeSpeed_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_BTService_ChangeSpeed_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
