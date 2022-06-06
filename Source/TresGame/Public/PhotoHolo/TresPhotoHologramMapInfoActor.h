#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETresAbilityKind.h"
#include "TresPhotoHologramMapInfoActor.generated.h"

UCLASS()
class ATresPhotoHologramMapInfoActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName MapId;
    
    UPROPERTY(EditAnywhere)
    float SwimSurfaceOffsetAdjust;
    
    UPROPERTY(EditAnywhere)
    TArray<ETresAbilityKind> EnableAbilityList;
    
    UPROPERTY(EditAnywhere)
    TArray<ETresAbilityKind> DisableAbilityList;
    
    UPROPERTY(EditAnywhere)
    bool OverwriteHoldCameraPitchMax;
    
    UPROPERTY(EditAnywhere)
    float HoldCameraPitchMax;
    
    UPROPERTY(EditAnywhere)
    bool OverwriteHoldCameraPitchMin;
    
    UPROPERTY(EditAnywhere)
    float HoldCameraPitchMin;
    
    UPROPERTY(EditAnywhere)
    bool OverwriteSelfieCameraPitchMax;
    
    UPROPERTY(EditAnywhere)
    float SelfieCameraPitchMax;
    
    UPROPERTY(EditAnywhere)
    bool OverwriteSelfieCameraPitchMin;
    
    UPROPERTY(EditAnywhere)
    float SelfieCameraPitchMin;
    
    UPROPERTY(EditAnywhere)
    bool OverwriteHologramCameraPitchMax;
    
    UPROPERTY(EditAnywhere)
    float HologramCameraPitchMax;
    
    UPROPERTY(EditAnywhere)
    bool OverwriteHologramCameraPitchMin;
    
    UPROPERTY(EditAnywhere)
    float HologramCameraPitchMin;
    
    ATresPhotoHologramMapInfoActor();
};

