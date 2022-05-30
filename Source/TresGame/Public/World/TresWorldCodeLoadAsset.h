#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresLoadAsset.h"
#include "ETresFoodstuffDropperID.h"
#include "TresWorldAppendAnimSetUnit.h"
#include "ETresChrUniqueID.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "TresWorldCodeLoadAsset.generated.h"

class UTresPhysMatEffectAsset;
class UParticleSystem;
class ATresGimmickActor;
class UTresAnimSet;
class USoundBase;
class UTresUIDataAssetWorld;
class UObject;
class UTresResidentTextures;

UCLASS()
class TRESGAME_API UTresWorldCodeLoadAsset : public UTresLoadAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UTresPhysMatEffectAsset* m_CmnPhysMatEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SnowTailAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<ETresChrUniqueID, UTresAnimSet*> m_WorldAppendAnimSetMap;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<ETresChrUniqueID, FTresWorldAppendAnimSetUnit> m_WorldAppendAnimSetListMap;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<ETresFoodstuffDropperID, TSubclassOf<ATresGimmickActor>> m_WorldFoodstuffDopperListMap;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_BGMField;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_BGMBattle;
    
    UPROPERTY(EditDefaultsOnly)
    UTresUIDataAssetWorld* m_UIDataWorld;
    
    UPROPERTY(EditAnywhere)
    TArray<UObject*> m_Residents;
    
    UPROPERTY()
    TArray<FStringAssetReference> m_ResidentsRef;
    
    UPROPERTY(EditAnywhere)
    UTresResidentTextures* m_ResidentTextures;
    
    UTresWorldCodeLoadAsset();
};

