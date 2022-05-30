#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresFriendLinkPawnBase.h"
#include "ETresEnemyUniqueID.h"
#include "UObject/NoExportTypes.h"
#include "TresFriendLinkPawnSpinningHold.generated.h"

class ATresProjectileBase;
class AActor;

UCLASS()
class ATresFriendLinkPawnSpinningHold : public ATresFriendLinkPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishMinRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishMinMoveRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCheckRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishAddPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishAddYaw;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresEnemyUniqueID> m_FinishEnemyIds;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFriendCheckRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFriendMinRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFriendMaxRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFriendCheckYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHairSwingAlpha212;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHairSwingAlpha215;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDisappearTimer;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bUseHopeRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishHopeRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLandOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLandLimit;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAppearMoveRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAppearHeight;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vDetachOffset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_LightBallProj;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_LightBallExpProj;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAppearCameraHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAppearCameraRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAppearCameraOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishCameraRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishCameraOffset;
    
private:
    UPROPERTY()
    AActor* m_pDummyTarget;
    
public:
    ATresFriendLinkPawnSpinningHold();
};

