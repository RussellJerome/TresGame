#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "e_ex064_WallParam.generated.h"

USTRUCT(BlueprintType)
struct Fe_ex064_WallParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_ChangeMatName0;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChangeMatValue0;
    
    UPROPERTY(EditAnywhere)
    FName m_AnimNameDamage;
    
    UPROPERTY(EditAnywhere)
    FName m_AnimNameAppear;
    
    UPROPERTY(EditAnywhere)
    FName m_AnimNameDisappear;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval m_AnimIdleRandomRange;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval m_AnimAppearRandomWait;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval m_AnimDisappearRandomWait;
    
    UPROPERTY(EditAnywhere)
    FName m_ForceDeathAtkName;
    
    UPROPERTY(EditAnywhere)
    int32 m_BodyHP;
    
    TRESGAME_API Fe_ex064_WallParam();
};

