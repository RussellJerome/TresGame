#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack4_e_ex325_ArielCombo.generated.h"

class UTresStateBase;
class USoundBase;

UCLASS(HideDropdown)
class UTresAttack4_e_ex325_ArielCombo : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_BuddyState;
    
    UPROPERTY(EditAnywhere)
    bool m_IsDoCancel;
    
    UPROPERTY(EditAnywhere)
    float m_RotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_CanUseHitPoint;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
public:
    UTresAttack4_e_ex325_ArielCombo();
};

