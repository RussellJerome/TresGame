#pragma once
#include "CoreMinimal.h"
#include "ESQEX_FreeFlowKind.h"
#include "TresGimmickComponentBase.h"
#include "ETresLockonPriority.h"

#include "TresLockonTargetDoLockSignatureDelegate.h"
#include "TresLockonTargetComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresLockonTargetComponent : public UTresGimmickComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bPermissionLockOn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETresLockonPriority m_LockonPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bPermissionShootFlow: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bPermissionMoveFlow: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESQEX_FreeFlowKind m_MoveFlowType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bMoveFlowDestination: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_ViewTargetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_AutoLockOnRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ShootLockOnRange;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FName m_LookAtTargetBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bRushSuppression: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_CloseRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bPermissionCoverShot: 1;
    
public:
    UPROPERTY(BlueprintAssignable)
    FTresLockonTargetDoLockSignature OnTargetLock;
    
    UTresLockonTargetComponent();
};

