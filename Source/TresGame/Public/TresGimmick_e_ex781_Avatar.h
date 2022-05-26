#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresGimmick_e_ex781_Avatar.generated.h"

class UTresActionDefinitionBase;
class ATresEnemyPawn_e_ex781_Avatar;
class ATresEnemyPawn_e_ex781;
class UTresAttackDefinitionBase;

UCLASS()
class ATresGimmick_e_ex781_Avatar : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyPawn_e_ex781_Avatar> m_AfterImage;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyPawn_e_ex781> m_ActionAvatar;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UTresAttackDefinitionBase>> m_ActionList;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresActionDefinitionBase> m_LastAction;
    
private:
    UPROPERTY()
    ATresEnemyPawn_e_ex781* m_pAvaterPawn[13];
    
public:
    ATresGimmick_e_ex781_Avatar();
};

