#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "ETresEx050PuddingType.h"
#include "TresEx050EffectInfo.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex050.generated.h"

class ATresAttractionPawnTeaCup;
class UParticleSystem;
class UTresStaticMeshComponent;
class ASQEX_SplineActor;
class UTresSkeletalMeshComponent;
class UMaterialInstanceDynamic;

UCLASS()
class ATresEnemyPawn_e_ex050 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETresEx050PuddingType m_Type;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TWeakObjectPtr<ASQEX_SplineActor> m_wpSplineActor;
    
    UPROPERTY(EditDefaultsOnly)
    FTresEx050EffectInfo m_PileSuccessfulEffect;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEx050EffectInfo> m_BallonBreakEffectArray;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pHitEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FTresEx050EffectInfo m_StrawberryApperEffect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_StrawberrySize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_StrawberryFadeTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_BallonFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bDefaultStopAI;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UTresSkeletalMeshComponent> m_wpBalloon;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UTresStaticMeshComponent> m_wpStrawberry;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ATresAttractionPawnTeaCup> m_wpTeaCup;
    
    UPROPERTY(Transient)
    FVector m_OldActorLocation;
    
    UPROPERTY(Transient)
    FRotator m_OldStrawberryRotation;
    
    UPROPERTY(Transient)
    float m_TeaCupHitTime;
    
    UPROPERTY(Transient)
    bool m_bRegistered;
    
    UPROPERTY(Transient)
    bool m_bRequestDie;
    
    UPROPERTY(Transient)
    float m_FadeElapsedTime;
    
    UPROPERTY(Transient)
    float m_FadeRate;
    
    UPROPERTY(Transient)
    bool m_bDoFade;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UMaterialInstanceDynamic> m_wpStrawberryDM1;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UMaterialInstanceDynamic> m_wpStrawberryDM2;
    
    UPROPERTY(Transient)
    bool m_bNotifyStop;
    
    UPROPERTY(Transient)
    bool m_bDisableRailMove;
    
public:
    ATresEnemyPawn_e_ex050();
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyDecScore();
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyAddScore();
    
    UFUNCTION(BlueprintCallable)
    float GetTeaCupHitTime();
    
    UFUNCTION(BlueprintPure)
    ETresEx050PuddingType GetPuddingType() const;
    
};

