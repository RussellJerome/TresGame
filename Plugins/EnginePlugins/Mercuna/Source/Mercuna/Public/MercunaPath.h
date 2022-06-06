#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnMercunaPathUpdatedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "MercunaPath.generated.h"

UCLASS(BlueprintType)
class MERCUNA_API UMercunaPath : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnMercunaPathUpdated PathUpdated;
    
    UMercunaPath();
    UFUNCTION(BlueprintPure)
    bool IsValid() const;
    
    UFUNCTION(BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPartial() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetPoint(int32 I) const;
    
    UFUNCTION(BlueprintPure)
    float GetPathLength() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumPoints() const;
    
};

