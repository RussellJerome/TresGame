#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETresGumiShipWorldSymbolID.h"
#include "ETresWoldPlaceID.h"
#include "ETresWoldMapObjID.h"
#include "ETresGumiShipTravelPointID.h"
#include "ETresGumiShipTreasureSphereID.h"
#include "ETresGumiShipEnemyTerritoryID.h"
#include "ETresGumiShipJumpPointID.h"
#include "TresWorldMapObject.generated.h"

class USceneComponent;
class UParticleSystemComponent;

UCLASS()
class ATresWorldMapObject : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresWoldPlaceID m_nWmPlaceD;
    
    UPROPERTY(EditAnywhere)
    ETresWoldMapObjID m_nWmObjID;
    
    UPROPERTY(EditAnywhere)
    ETresGumiShipWorldSymbolID m_nWorldSymbleID;
    
    UPROPERTY()
    bool bWorldSymbol;
    
    UPROPERTY(EditAnywhere)
    ETresGumiShipTravelPointID m_nTravelPointID;
    
    UPROPERTY()
    bool bTravelPoint;
    
    UPROPERTY(EditAnywhere)
    ETresGumiShipTreasureSphereID m_nTreasureSphereID;
    
    UPROPERTY()
    bool bTreasureSphere;
    
    UPROPERTY(EditAnywhere)
    ETresGumiShipEnemyTerritoryID m_nTerritoryID;
    
    UPROPERTY()
    bool bTerritory;
    
    UPROPERTY(EditAnywhere)
    ETresGumiShipJumpPointID m_nJumpPointID;
    
    UPROPERTY()
    bool bJumpPoint;
    
    UPROPERTY(EditAnywhere)
    FName m_PresistenLevelPath;
    
    UPROPERTY(EditAnywhere)
    FName m_PlayerStartTagName;
    
    UPROPERTY(EditAnywhere)
    FName m_DebugInfo;
    
    UPROPERTY()
    bool m_isSortie;
    
    UPROPERTY(EditAnywhere, Export)
    USceneComponent* m_pSceneComponent;
    
    UPROPERTY(EditAnywhere, Export)
    UParticleSystemComponent* m_pEffect1;
    
    UPROPERTY(EditAnywhere, Export)
    UParticleSystemComponent* m_pEffect2;
    
    UPROPERTY(EditAnywhere, Export)
    UParticleSystemComponent* m_pEffect3;
    
    UPROPERTY(EditAnywhere, Export)
    UParticleSystemComponent* m_pMarkerEffect;
    
    ATresWorldMapObject();
    UFUNCTION(BlueprintCallable)
    bool IsTreasureSphiaState();
    
    UFUNCTION(BlueprintCallable)
    bool IsTreasureSphia();
    
    UFUNCTION(BlueprintCallable)
    bool IsTravelPointState();
    
    UFUNCTION(BlueprintCallable)
    bool IsTravelPoint();
    
    UFUNCTION(BlueprintCallable)
    bool IsJumpPoint();
    
};

