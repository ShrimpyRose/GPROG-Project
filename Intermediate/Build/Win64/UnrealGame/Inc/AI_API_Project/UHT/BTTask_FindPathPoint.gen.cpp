// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI_API_Project/BTTask_FindPathPoint.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_FindPathPoint() {}
// Cross Module References
	AI_API_PROJECT_API UClass* Z_Construct_UClass_UBTTask_FindPathPoint();
	AI_API_PROJECT_API UClass* Z_Construct_UClass_UBTTask_FindPathPoint_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	UPackage* Z_Construct_UPackage__Script_AI_API_Project();
// End Cross Module References
	void UBTTask_FindPathPoint::StaticRegisterNativesUBTTask_FindPathPoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_FindPathPoint);
	UClass* Z_Construct_UClass_UBTTask_FindPathPoint_NoRegister()
	{
		return UBTTask_FindPathPoint::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_FindPathPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatrolPathVectorKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PatrolPathVectorKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_FindPathPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AI_API_Project,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindPathPoint_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FindPathPoint_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTask_FindPathPoint.h" },
		{ "ModuleRelativePath", "BTTask_FindPathPoint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FindPathPoint_Statics::NewProp_PatrolPathVectorKey_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "BTTask_FindPathPoint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_FindPathPoint_Statics::NewProp_PatrolPathVectorKey = { "PatrolPathVectorKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FindPathPoint, PatrolPathVectorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindPathPoint_Statics::NewProp_PatrolPathVectorKey_MetaData), Z_Construct_UClass_UBTTask_FindPathPoint_Statics::NewProp_PatrolPathVectorKey_MetaData) }; // 3137324432
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_FindPathPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindPathPoint_Statics::NewProp_PatrolPathVectorKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_FindPathPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_FindPathPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_FindPathPoint_Statics::ClassParams = {
		&UBTTask_FindPathPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_FindPathPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindPathPoint_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindPathPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_FindPathPoint_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindPathPoint_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBTTask_FindPathPoint()
	{
		if (!Z_Registration_Info_UClass_UBTTask_FindPathPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_FindPathPoint.OuterSingleton, Z_Construct_UClass_UBTTask_FindPathPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_FindPathPoint.OuterSingleton;
	}
	template<> AI_API_PROJECT_API UClass* StaticClass<UBTTask_FindPathPoint>()
	{
		return UBTTask_FindPathPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_FindPathPoint);
	UBTTask_FindPathPoint::~UBTTask_FindPathPoint() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_BTTask_FindPathPoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_BTTask_FindPathPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_FindPathPoint, UBTTask_FindPathPoint::StaticClass, TEXT("UBTTask_FindPathPoint"), &Z_Registration_Info_UClass_UBTTask_FindPathPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_FindPathPoint), 3212490289U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_BTTask_FindPathPoint_h_4178949993(TEXT("/Script/AI_API_Project"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_BTTask_FindPathPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_BTTask_FindPathPoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
