// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_FindPathPoint.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "NPC_AIController.h"
#include "NPC.h"

UBTTask_FindPathPoint::UBTTask_FindPathPoint(FObjectInitializer const& ObjectInitializer) :
	UBTTask_BlackboardBase{ ObjectInitializer }
{
	NodeName = TEXT("Find Path Point");
}

EBTNodeResult::Type UBTTask_FindPathPoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//Attempt to get NPC's Controller
	if (auto* const cont = Cast<ANPC_AIController>(OwnerComp.GetAIOwner()))
	{
		//Attempt to get blackboard component from behavior tree
		if (auto* const bc = OwnerComp.GetBlackboardComponent())
		{
			//Get current patrol path index from blackboard
			auto const Index = bc->GetValueAsInt((GetSelectedBlackboardKey()));

			//Get NPC
			if (auto* npc = Cast<ANPC>(cont->GetPawn()))
			{
				//Get current patrol path vector from NPC - This is local to the patrol path actor
				auto const Point = npc->GetPatrolPath()->GetPatrolPoint(Index);

				//Convert local vector to a global point
				auto const GlobalPoint = npc->GetPatrolPath()->GetActorTransform().TransformPosition(Point);
				bc->SetValueAsVector(PatrolPathVectorKey.SelectedKeyName, GlobalPoint);

				//Finish with success
				FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
				return EBTNodeResult::Succeeded;
			}
		}
	}
	return EBTNodeResult::Failed;
}