#pragma once
#include "CoreMinimal.h"
#include "TresGummiShipAbility.generated.h"

USTRUCT(BlueprintType)
struct FTresGummiShipAbility {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nAbilityID01;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nAbilityID02;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nAbilityID03;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nAbilityID04;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nAbilityID05;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nAbilityID06;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nAbilityID07;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nAbilityID08;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 m_nAbilityID09;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nAbilityID10;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nAbilityID11;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nAbilityID12;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nAbilityID13;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nAbilityID14;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nAbilityID15;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nAbilityID16;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nAbilityID17;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nAbilityID18;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nAbilityID19;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nAbilityID20;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 m_nAbilityID21;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 m_nAbilityID22;
    
    TRESGAME_API FTresGummiShipAbility();
};

