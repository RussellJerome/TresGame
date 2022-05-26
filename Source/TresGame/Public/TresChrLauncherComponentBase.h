#pragma once
#include "CoreMinimal.h"
#include "TresGimmickComponentBase.h"
#include "ETresChrLaunchType.h"
#include "TresChrLauncherDoLaunchSignatureDelegate.h"
#include "TresChrLauncherComponentBase.generated.h"

class ATresCharPawnBase;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresChrLauncherComponentBase : public UTresGimmickComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_LaunchHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresChrLaunchType> m_JumpMode;
    
    UPROPERTY(DuplicateTransient, Transient)
    TArray<TWeakObjectPtr<ATresCharPawnBase>> m_PawnList;
    
public:
    UPROPERTY(BlueprintAssignable)
    FTresChrLauncherDoLaunchSignature OnChrPawnLaunched;
    
    UTresChrLauncherComponentBase();
    UFUNCTION(BlueprintCallable)
    void RemovePawnList(ATresCharPawnBase* pPawn);
    
    UFUNCTION(BlueprintCallable)
    bool AddPawnList(ATresCharPawnBase* pPawn);
    
};

