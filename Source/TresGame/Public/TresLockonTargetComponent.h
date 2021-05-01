// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGimmickComponentBase.h"
#include "TresGame.h"
#include "TresLockonTargetComponent.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresLockonTargetComponent : public UTresGimmickComponentBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLockonTargetComponent")
	bool m_bPermissionLockOn;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLockonTargetComponent")
	TEnumAsByte<ETresLockonPriority> m_LockonPriority;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLockonTargetComponent")
	bool m_bPermissionShootFlow;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLockonTargetComponent")
	bool m_bPermissionMoveFlow;
	
	//ENGINE DEF
	//ESQEX_FreeFlowKind                                 m_MoveFlowType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLockonTargetComponent")
	bool m_bMoveFlowDestination;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLockonTargetComponent")
	int m_ViewTargetIndex;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLockonTargetComponent")
	float m_AutoLockOnRange;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLockonTargetComponent")
	float m_ShootLockOnRange;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLockonTargetComponent")
	FName m_LookAtTargetBoneName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLockonTargetComponent")
	bool m_bRushSuppression;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLockonTargetComponent")
	float m_CloseRange;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLockonTargetComponent")
	bool m_bPermissionCoverShot;
	//struct FScriptMulticastDelegate                    OnTargetLock;                                             // 0x08A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
};
