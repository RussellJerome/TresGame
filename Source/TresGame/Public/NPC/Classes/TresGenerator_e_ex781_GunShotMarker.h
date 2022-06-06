#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TresE_EX781_GunShotMarkerPatternParam.h"
#include "TresGenerator_e_ex781_GunShotMarker.generated.h"

class ATresProjectileBase;
class ATresPawnBase;
class ATresEnemyPawn_e_ex781_GunShotMarker;

UCLASS()
class ATresGenerator_e_ex781_GunShotMarker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresE_EX781_GunShotMarkerPatternParam> m_GunShotMarkerPatternParam;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresPawnBase> m_GunShotMarkerObjectClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresPawnBase> m_GunShotMarkerEXObjectClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletEXProjectile;
    
private:
    UPROPERTY()
    TWeakObjectPtr<AActor> m_MyTarget;
    
    UPROPERTY()
    ATresEnemyPawn_e_ex781_GunShotMarker* m_EndBeam;
    
public:
    ATresGenerator_e_ex781_GunShotMarker();
};

