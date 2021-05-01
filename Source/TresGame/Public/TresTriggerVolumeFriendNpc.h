// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "TresGame.h"
#include "TresTriggerVolumeFriendNpc.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresTriggerVolumeFriendNpc : public ATriggerVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTriggerVolumeFriendNpc")
	TEnumAsByte<ETresNotifyFriendNpc> m_NotifyType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTriggerVolumeFriendNpc")
	class AActor* m_ActionPoint;
};
