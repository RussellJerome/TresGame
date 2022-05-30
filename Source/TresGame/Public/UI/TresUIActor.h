#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresUIActorMaterialParamSettingScalar.h"
#include "TresUIActorMaterialParamSettingCoefficient.h"
#include "TresUIActor.generated.h"

class UTresSkeletalMeshComponent;
class UTresEffectAttachComponent;
class USceneCaptureComponent2D;

UCLASS()
class ATresUIActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_BonamikPreRollNum;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FTresUIActorMaterialParamSettingScalar> m_MaterialParamSettingsScalar;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FTresUIActorMaterialParamSettingCoefficient> m_MaterialParamSettingsCoefficient;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* SceneCaptureComponent2D;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresEffectAttachComponent* MyEffectAtt;
    
public:
    UPROPERTY(EditAnywhere)
    int32 effectGroupID;
    
    ATresUIActor();
    UFUNCTION(BlueprintCallable)
    void SetLinkMeshComponent(UTresSkeletalMeshComponent* LinkMeshComponent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveEventBP(const FName& EventName);
    
    UFUNCTION(BlueprintCallable)
    void NotifyEventBP(const FName& EventName);
    
};

