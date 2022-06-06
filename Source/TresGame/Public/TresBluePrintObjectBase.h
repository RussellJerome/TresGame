#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresBluePrintObjectBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UTresBluePrintObjectBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName m_UserName;
    
    UPROPERTY(EditAnywhere)
    bool m_InitAfterExecute;
    
public:
    UTresBluePrintObjectBase();
    UFUNCTION(BlueprintNativeEvent)
    void Tick(float Delta);
    
    UFUNCTION(BlueprintCallable)
    void InitBluePrint();
    
    UFUNCTION(BlueprintNativeEvent)
    void Init();
    
    UFUNCTION(BlueprintPure)
    FName GetUserName();
    
    UFUNCTION(BlueprintNativeEvent)
    void BeginPlayBluePrint();
    
};

