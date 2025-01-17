// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_FindPlayerLocation.h"

#include "NavigationSystem.h"
#include "GameFramework/Character.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"

UBTTask_FindPlayerLocation::UBTTask_FindPlayerLocation(FObjectInitializer const& ObjectInitializer) :
	UBTTask_BlackboardBase{ ObjectInitializer }
{
	NodeName = TEXT ("Find Player Location In Navmesh");
}

EBTNodeResult::Type UBTTask_FindPlayerLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//Get player character
	if (auto* const Player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0))
	{
		//Get player location to use as origin
		auto const PlayerLocation = Player->GetActorLocation();
		if (SearchRandom)
		{
			FNavLocation Loc;

			//get the nav system and generate a rand location near the player
			if (auto* const NavSys = UNavigationSystemV1::GetCurrent(GetWorld()))
			{
				//try to get rand location near player
				if (NavSys->GetRandomPointInNavigableRadius(PlayerLocation, SearchRadius, Loc))
				{
					OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), Loc.Location);
					FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
					return EBTNodeResult::Succeeded;
				}
			}
		}
		else
		{
			OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), PlayerLocation);
			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
			return EBTNodeResult::Succeeded;
		}
	}
	return EBTNodeResult::Failed;
}