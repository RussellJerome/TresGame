#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresTaskBase.generated.h"

class AActor;
class UTresTaskExecutor;

UCLASS(Abstract, Blueprintable)
class UTresTaskBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<UTresTaskExecutor*> m_TaskManArray;
    
    UPROPERTY(Transient)
    UObject* m_pParent;
    
    UPROPERTY(Transient)
    AActor* m_pParentActor;
    
public:
    UTresTaskBase();
    UFUNCTION(BlueprintPure)
    bool IsSetup();
    
    UFUNCTION(BlueprintPure)
    bool IsEnable();
    
    UFUNCTION(BlueprintCallable)
    void Destroy();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_PostLoadMap();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_NortifyDestroy();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Tick(float DeltaSeconds);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Setup();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_SetEnable(bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Enable();
    
};

