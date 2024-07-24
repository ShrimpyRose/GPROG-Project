// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_ChasePlayer.h"

#include "NPC_AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"

UBTTask_ChasePlayer::UBTTask_ChasePlayer(FObjectInitializer const& ObjectInitializer) :
	UBTTask_BlackboardBase{ ObjectInitializer }
{
	NodeName = TEXT("Chase Player");
}

EBTNodeResult::Type UBTTask_ChasePlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//Get target location from BB via NPC's controller.
	if (auto* const cont=Cast<ANPC_AIController>(OwnerComp.GetAIOwner()))
	{
		auto const PlayerLocation=OwnerComp.GetBlackboardComponent()->GetValueAsVector(GetSelectedBlackboardKey());


		//Move to the player's location.
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(cont, PlayerLocation);

		//Finish with success.
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		return EBTNodeResult::Succeeded;
	}

	return EBTNodeResult::Failed;
}
