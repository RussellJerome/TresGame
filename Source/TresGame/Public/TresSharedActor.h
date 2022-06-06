#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresSharedActor.generated.h"

class ATresCameraFix;

UCLASS(Abstract)
class ATresSharedActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FName m_cameraWorkEventName;
    
private:
    UPROPERTY(Transient)
    ATresCameraFix* m_pFixedCamera;
    
public:
    ATresSharedActor();
    UFUNCTION(BlueprintCallable)
    ATresCameraFix* UpdateFixedCamera(float FieldOfView, FVector WorldLocation, FRotator WorldRotation);
    
    UFUNCTION(BlueprintCallable)
    ATresCameraFix* SpawnFixedCamera(FName Name, bool bTakeover, float FieldOfView, FVector WorldLocation, FRotator WorldRotation);
    
    UFUNCTION(BlueprintPure)
    ATresCameraFix* GetFixedCamera() const;
    
    UFUNCTION(BlueprintPure)
    FName GetCameraWorkEventName() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyFixedCamera();
    
};

