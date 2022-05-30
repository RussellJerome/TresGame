#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresUIGumiPartsDataAsset.generated.h"

class UDataTable;

UCLASS()
class UTresUIGumiPartsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* EdgeGummiDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* CurveGummiDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* PipeGummiDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* AeroGummiDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ShootingGummiDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* LaserGummiDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* StrikeGummiDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* EngineGummiDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* WingGummiDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* WheelGummiDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* CockpitGummiDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ShieldGummiDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* OptionGummiDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* CharacterGummiDataTable;
    
    UTresUIGumiPartsDataAsset();
};

