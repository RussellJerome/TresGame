#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EDanceSpecialPerformType.h"
#include "ETresCommandKind.h"
#include "TresRaSpecialPerformActor.generated.h"

class ATresRaSpecialPerformActor;
class UTresReactorComponent;
class UTresStaticMeshComponent;
class ATresRaFestivalDanceManager;
class ATresCharPawnBase;

UCLASS()
class ATresRaSpecialPerformActor : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTresOnSpecialPerform, FName, InActorName, ATresRaSpecialPerformActor*, inActor);
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresStaticMeshComponent* MyStaticMesh;
    
    UPROPERTY(BlueprintAssignable)
    FTresOnSpecialPerform OnSpecialPerformStart;
    
    UPROPERTY(BlueprintAssignable)
    FTresOnSpecialPerform OnSpecialPerformEnd;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TensionUpLevel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ReactionRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ReactionTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ClapHandsDistance;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PerformActorName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EDanceSpecialPerformType PerformType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Player_PerformMotion;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Gimmick_PerformMotion;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector PlayerRelativeLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator PlayerRelativeRotation;
    
private:
    UPROPERTY()
    TWeakObjectPtr<ATresRaFestivalDanceManager> m_pDanceMng;
    
    UPROPERTY(Export)
    UTresReactorComponent* m_pReactor;
    
public:
    ATresRaSpecialPerformActor();
private:
    UFUNCTION()
    void OnReactorCommand(ATresCharPawnBase* CommandCauser, TEnumAsByte<ETresCommandKind> CommandID, UTresReactorComponent* ReactorComponent);
    
public:
    UFUNCTION()
    void OnPlayerPerformStart();
    
    UFUNCTION()
    void OnPlayerPerformEnd();
    
};

