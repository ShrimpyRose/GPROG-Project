// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NPC_AIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef AI_API_PROJECT_NPC_AIController_generated_h
#error "NPC_AIController.generated.h already included, missing '#pragma once' in NPC_AIController.h"
#endif
#define AI_API_PROJECT_NPC_AIController_generated_h

#define FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_NPC_AIController_h_21_SPARSE_DATA
#define FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_NPC_AIController_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_NPC_AIController_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_NPC_AIController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTargetDetected);


#define FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_NPC_AIController_h_21_ACCESSORS
#define FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_NPC_AIController_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPC_AIController(); \
	friend struct Z_Construct_UClass_ANPC_AIController_Statics; \
public: \
	DECLARE_CLASS(ANPC_AIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AI_API_Project"), NO_API) \
	DECLARE_SERIALIZER(ANPC_AIController)


#define FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_NPC_AIController_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPC_AIController(ANPC_AIController&&); \
	NO_API ANPC_AIController(const ANPC_AIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC_AIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC_AIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPC_AIController) \
	NO_API virtual ~ANPC_AIController();


#define FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_NPC_AIController_h_18_PROLOG
#define FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_NPC_AIController_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_NPC_AIController_h_21_SPARSE_DATA \
	FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_NPC_AIController_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_NPC_AIController_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_NPC_AIController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_NPC_AIController_h_21_ACCESSORS \
	FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_NPC_AIController_h_21_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_NPC_AIController_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AI_API_PROJECT_API UClass* StaticClass<class ANPC_AIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_AI_API_Project_Source_AI_API_Project_NPC_AIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
