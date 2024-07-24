// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "NPC.h"
#include "AI_API_ProjectCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AIPerceptionTypes.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AIPerceptionComponent.h"
#include "NPC_AIController.generated.h"

/**
 * 
 */
UCLASS()
class AI_API_PROJECT_API ANPC_AIController : public AAIController
{
	GENERATED_BODY()
public:
	explicit ANPC_AIController(FObjectInitializer const& ObjectInitialiser);

protected:
	virtual void OnPossess(APawn* InPawn) override;

private:
	class UAISenseConfig_Sight* SightConfig;

	void SetupPerceptionSystem();

	UFUNCTION()
	void OnTargetDetected(AActor* Actor, FAIStimulus const Stimulus);
};
