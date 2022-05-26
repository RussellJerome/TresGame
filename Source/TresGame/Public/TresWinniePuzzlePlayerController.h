#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleComponentBase.h"
#include "WinniePlayerStayDirection.h"
#include "UObject/NoExportTypes.h"
#include "TresWinniePuzzlePlayerController.generated.h"

class UParticleSystem;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzlePlayerController : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    WinniePlayerStayDirection InitialStayDirection;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FVector> PlayerStayLocation;
    
    UPROPERTY(EditDefaultsOnly)
    float RollOutEndOffsetXNorth;
    
    UPROPERTY(EditDefaultsOnly)
    float RollOutEndOffsetXSouth;
    
    UPROPERTY(EditDefaultsOnly)
    float RollOutEndOffsetYWest;
    
    UPROPERTY(EditDefaultsOnly)
    float RollOutEndOffsetYEast;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* StrikeParticle;
    
public:
    UTresWinniePuzzlePlayerController();
};

