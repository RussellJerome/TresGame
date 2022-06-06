#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresIslandVolume.generated.h"

class UTresMapSet;
class UTexture2D;

UCLASS()
class ATresIslandVolume : public ATresVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    UTresMapSet* MapSet;
    
    UPROPERTY(EditInstanceOnly)
    FName BeginOverlapMapsetCommandName;
    
    UPROPERTY(EditInstanceOnly)
    FName EndOverlapMapsetCommandName;
    
    UPROPERTY(VisibleInstanceOnly)
    TArray<FString> BeginOverlapLevelPathArray;
    
    UPROPERTY(VisibleInstanceOnly)
    TArray<FString> EndOverlapLevelPathArray;
    
    UPROPERTY(VisibleInstanceOnly)
    TArray<UTexture2D*> BeginResidentTextureList;
    
    UPROPERTY(VisibleInstanceOnly)
    TArray<UTexture2D*> EndResidentTextureList;
    
public:
    ATresIslandVolume();
};

