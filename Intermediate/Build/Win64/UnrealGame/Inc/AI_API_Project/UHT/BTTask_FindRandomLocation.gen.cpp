// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI_API_Project/BTTask_FindRandomLocation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_FindRandomLocation() {}
// Cross Module References
	AI_API_PROJECT_API UClass* Z_Construct_UClass_UBTTask_FindRandomLocation();
	AI_API_PROJECT_API UClass* Z_Construct_UClass_UBTTask_FindRandomLocation_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_AI_API_Project();
// End Cross Module References
	void UBTTask_FindRandomLocation::StaticRegisterNativesUBTTask_FindRandomLocation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_FindRandomLocation);
	UClass* Z_Construct_UClass_UBTTask_FindRandomLocation_NoRegister()
	{
		return UBTTask_FindRandomLocation::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_FindRandomLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AI_API_Project,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTask_FindRandomLocation.h" },
		{ "ModuleRelativePath", "BTTask_FindRandomLocation.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::NewProp_SearchRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "BTTask_FindRandomLocation.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FindRandomLocation, SearchRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::NewProp_SearchRadius_MetaData), Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::NewProp_SearchRadius_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::NewProp_SearchRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_FindRandomLocation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::ClassParams = {
		&UBTTask_FindRandomLocation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBTTask_FindRandomLocation()
	{
		if (!Z_Registration_Info_UClass_UBTTask_FindRandomLocation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_FindRandomLocation.OuterSingleton, Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_FindRandomLocation.OuterSingleton;
	}
	template<> AI_API_PROJECT_API UClass* StaticClass<UBTTask_FindRandomLocation>()
	{
		return UBTTask_FindRandomLocation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_FindRandomLocation);
	UBTTask_FindRandomLocation::~UBTTask_FindRandomLocation() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_BTTask_FindRandomLocation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_BTTask_FindRandomLocation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_FindRandomLocation, UBTTask_FindRandomLocation::StaticClass, TEXT("UBTTask_FindRandomLocation"), &Z_Registration_Info_UClass_UBTTask_FindRandomLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_FindRandomLocation), 2988728224U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_BTTask_FindRandomLocation_h_1796955792(TEXT("/Script/AI_API_Project"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_BTTask_FindRandomLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_BTTask_FindRandomLocation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
