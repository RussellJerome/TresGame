#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex051.generated.h"

class ATresGimmickRA_Pudding_ControlActor;

UCLASS()
class ATresEnemyPawn_e_ex051 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Motion_Idle;
    
    UPROPERTY(EditAnywhere)
    FName Motion_Die;
    
    UPROPERTY(EditAnywhere)
    FName Motion_AngryStart;
    
    UPROPERTY(EditAnywhere)
    FName Motion_AngryLoop;
    
    UPROPERTY(EditAnywhere)
    FName Motion_HappyStart;
    
    UPROPERTY(EditAnywhere)
    FName Motion_HappyLoop;
    
    UPROPERTY(EditAnywhere)
    FName Motion_FairStart;
    
    UPROPERTY(EditAnywhere)
    FName Motion_FairLoop;
    
    UPROPERTY(EditAnywhere)
    FName Motion_DiveReady;
    
    UPROPERTY(EditAnywhere)
    FName Motion_DiveStart;
    
    UPROPERTY(EditAnywhere)
    FName Motion_DiveLoop;
    
    UPROPERTY(EditAnywhere)
    FName Motion_RiseStart;
    
    UPROPERTY(EditAnywhere)
    FName Motion_RiseLoop;
    
    UPROPERTY(EditAnywhere)
    FName Motion_FallStart;
    
    UPROPERTY(EditAnywhere)
    FName Motion_FallLoop;
    
    UPROPERTY(EditAnywhere)
    FName Motion_MoveStart;
    
    UPROPERTY(EditAnywhere)
    FName Motion_MoveLoop;
    
    UPROPERTY(EditAnywhere)
    FName Motion_EscapeStart;
    
    UPROPERTY(EditAnywhere)
    FName Motion_EscapeLoop;
    
    UPROPERTY(EditAnywhere)
    FName Motion_ForceIdle;
    
    UPROPERTY(EditAnywhere)
    FName Motion_ForcePose1_Start;
    
    UPROPERTY(EditAnywhere)
    FName Motion_ForcePose1_Loop;
    
    UPROPERTY(EditAnywhere)
    FName Motion_ForcePose1_End;
    
    UPROPERTY(EditAnywhere)
    FName Motion_ForcePose2_Start;
    
    UPROPERTY(EditAnywhere)
    FName Motion_ForcePose2_Loop;
    
    UPROPERTY(EditAnywhere)
    FName Motion_ForcePose2_End;
    
    UPROPERTY(EditAnywhere)
    FName Motion_ForcePose3_Start;
    
    UPROPERTY(EditAnywhere)
    FName Motion_ForcePose3_Loop;
    
    UPROPERTY(EditAnywhere)
    FName Motion_ForcePose3_End;
    
    UPROPERTY(EditAnywhere)
    FName Motion_TtrStart;
    
    UPROPERTY(EditAnywhere)
    FName Motion_TtrLoop;
    
    UPROPERTY(EditAnywhere)
    FName Motion_TtrEnd;
    
    UPROPERTY(EditAnywhere)
    FName Motion_UMARise;
    
    UPROPERTY(EditAnywhere)
    FName Motion_UMAKeep;
    
    UPROPERTY(EditAnywhere)
    FName Motion_UMAFall;
    
    UPROPERTY(EditAnywhere)
    float VanishTime;
    
    UPROPERTY(EditAnywhere)
    uint8 Flag_HideOnInit: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 Flag_AttackHitOff: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 Flag_UseVelocityMove: 1;
    
    UPROPERTY(EditAnywhere)
    int32 TakePhotoVFXGroupID;
    
    UPROPERTY(EditAnywhere)
    int32 DisappearVFXGroupID;
    
    UPROPERTY(EditAnywhere)
    int32 VfxGroupId_Appear;
    
    UPROPERTY(EditAnywhere)
    int32 VFXGroupID_UMAIdle;
    
    UPROPERTY(EditAnywhere)
    int32 VFXGroupID_UMARise;
    
    UPROPERTY(EditAnywhere)
    int32 VFXGroupID_UMAFall;
    
    UPROPERTY(EditAnywhere)
    int32 VFXGroupID_AngryStart;
    
    UPROPERTY(EditAnywhere)
    int32 VFXGroupID_AngryLoop;
    
    UPROPERTY(EditAnywhere)
    int32 VFXGroupID_HappyStart;
    
    UPROPERTY(EditAnywhere)
    int32 VFXGroupID_HappyLoop;
    
    UPROPERTY(EditAnywhere)
    int32 VFXGroupID_FairStart;
    
    UPROPERTY(EditAnywhere)
    int32 VFXGroupID_FairLoop;
    
private:
    UPROPERTY()
    TWeakObjectPtr<ATresGimmickRA_Pudding_ControlActor> m_pControlActor;
    
public:
    ATresEnemyPawn_e_ex051();
};

