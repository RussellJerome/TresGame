// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGimmickComponentBase.h"
#include "TresGame.h"
#include "EngineData.h"
#include "TresLockonTargetDoLockSignatureDelegate.h"
#include "TresLockonTargetComponent.generated.h"

/**
 * 
 */
UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TRESGAME_API UTresLockonTargetComponent : public UTresGimmickComponentBase
{
	GENERATED_BODY()
public:
protected:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLockonTargetComponent")
	bool m_bPermissionLockOn;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLockonTargetComponent")
	ETresLockonPriority m_LockonPriority;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLockonTargetComponent")
	bool m_bPermissionShootFlow;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLockonTargetComponent")
	bool m_bPermissionMoveFlow;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLockonTargetComponent")
	ESQEX_FreeFlowKind m_MoveFlowType;
	
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

public:
	UPROPERTY(BlueprintAssignable)
	FTresLockonTargetDoLockSignature OnTargetLock;
	
	//struct FScriptMulticastDelegate OnTargetLock;
};
