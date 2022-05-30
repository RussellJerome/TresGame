#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresFriendLinkPawnBase.h"
#include "TresFriendLinkPawnSnowCoverSwing.generated.h"

class ATresProjectileBase;
class AActor;
class ATresGimmickSkeletalBase;

UCLASS()
class ATresFriendLinkPawnSnowCoverSwing : public ATresFriendLinkPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_AirProj;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FriendLinkEndLength;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_FriendLinkDamageAttackIDName;
    
private:
    UPROPERTY()
    TWeakObjectPtr<AActor> m_pTargetPawn;
    
    UPROPERTY()
    ATresGimmickSkeletalBase* m_pTree;
    
public:
    ATresFriendLinkPawnSnowCoverSwing();
};

