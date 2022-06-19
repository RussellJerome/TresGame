#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "TresAccompanyPawnDisappearSignatureDelegate.h"
#include "TresAccompanyPawnAppearSignatureDelegate.h"
#include "TresAccompanyPawnDoFinishSignatureDelegate.h"
#include "ETresChrUniqueID.h"
#include "UObject/NoExportTypes.h"
#include "TresAccompanyPawnBase.generated.h"

class ATresPlayerControllerBase;
class UTresUIDataAsset;
class UTresSkeletalMeshComponent;
class UParticleSystemComponent;
class UTresVoiceGroupSet;
class UTresAnimSet;
class USoundBase;

UCLASS(Abstract)
class ATresAccompanyPawnBase : public ATresCharPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UTresUIDataAsset* m_UIDataAccompany;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MyPenetrationEffectMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MyPenetrationParticleEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UTresVoiceGroupSet* m_VoiceData;
    
protected:
    UPROPERTY()
    ATresPlayerControllerBase* m_PlayerController;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDispDebugInfo: 1;
    
    UPROPERTY(BlueprintAssignable)
    FTresAccompanyPawnAppearSignature OnAccompanyPawnAppear;
    
    UPROPERTY(BlueprintAssignable)
    FTresAccompanyPawnDisappearSignature OnAccompanyPawnDisappear;
    
    UPROPERTY(BlueprintAssignable)
    FTresAccompanyPawnDoFinishSignature OnAccompanyPawnDoFinish;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<ETresChrUniqueID, UTresAnimSet*> m_AppendAnimSetMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* m_BGMAsset;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_MaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_MoveTurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_JumpRotRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_FallCheckHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_Param_bZMoveLand: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_Param_bLargeSpawn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_LandSpawnHeight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresCharPawnBase*> m_SlavePawnList;
    
public:
    ATresAccompanyPawnBase();
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAccompanyPawnDoFinish();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAccompanyPawnDisappear();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAccompanyPawnAppear();
    
    UFUNCTION(BlueprintPure)
    FVector BP_GetSafetyPos() const;
    
};

