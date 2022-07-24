#pragma once
#include "CoreMinimal.h"
#include "TresGameModeBaseLastCleanupTickFunction.h"
#include "SQEX_GameMode.h"
#include "TresGameModeBase.generated.h"

class AActor;
class UTresTaskExecutor;
class UTresGameInstance;
class UObject;
class UTresFieldVoiceManager;

UCLASS(NonTransient, Blueprintable)
class ATresGameModeBase : public ASQEX_GameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(DuplicateTransient, Transient, BlueprintReadWrite)
    UTresGameInstance* m_pTresGameInstance;
    
    UPROPERTY(Transient)
    UTresTaskExecutor* m_pTaskExecuter;
    
    UPROPERTY(Transient)
    TArray<UObject*> m_pTempObjectArray;
    
private:
    UPROPERTY(DuplicateTransient, Transient)
    UTresFieldVoiceManager* m_pFieldVoiceManager;
    
public:
    UPROPERTY()
    FTresGameModeBaseLastCleanupTickFunction m_LastCleanupTickFunction;
    
    ATresGameModeBase();
    UFUNCTION(BlueprintCallable)
    static void TresRequestDestroyActor(AActor* Actor);
    
};

