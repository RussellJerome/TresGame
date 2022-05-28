#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyXIIILPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex360.generated.h"

class ATresEnemyPawn_e_ex360;
class ATresPawnBase;
class ATresProjectileBase;
class ATresCharPawnBase;
class ATresEnemyPawn_e_ex360KBBoard;

UCLASS()
class ATresEnemyPawn_e_ex360 : public ATresEnemyXIIILPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresPawnBase> m_KBBoard;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_KBBoardTailAttackPawnData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyXIIILPawnBase> m_Avatar;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OpacityFadeSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OpacityFadeWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_CenterPos;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkSplicerAvatarShowTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StrongDarkSplicerAvatarShowTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CloneBurstAvatarShowTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_KeyBladeRideMinHigh;
    
private:
    UPROPERTY()
    ATresEnemyPawn_e_ex360* m_pAvaterPawn[10];
    
    UPROPERTY()
    ATresEnemyPawn_e_ex360KBBoard* m_KeybladeBoard;
    
    UPROPERTY()
    ATresCharPawnBase* m_AttackedChar;
    
public:
    ATresEnemyPawn_e_ex360();
    UFUNCTION(BlueprintCallable)
    bool IsShowCharacter();
    
    UFUNCTION(BlueprintCallable)
    bool IsKeyBladeRide();
    
};

