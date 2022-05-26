#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EBigTornadoProjPos.h"
#include "BigTornadoProjInfo.generated.h"

class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FBigTornadoProjInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EBigTornadoProjPos> m_ProjPos;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fProjPosRadiusDeviation;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fProjAngleDeviation;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<ATresProjectileBase>> m_ProjectileClassArray;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxShotCount;
    
    TRESGAME_API FBigTornadoProjInfo();
};

