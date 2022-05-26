#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresFlowComponentBase.h"
#include "UObject/NoExportTypes.h"
#include "TresPoleComponentEndPoleTurnSignatureDelegate.h"
#include "TresPoleComponentStartPoleTurnSignatureDelegate.h"
#include "TresPoleComponent.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UTresPoleComponent : public UTresFlowComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bEnableNearDetectOffset: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_AttachOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_AttachRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_BaseOffset1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_BaseOffset2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_CheckRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bIsHorizontality;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FColor m_PoleColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_OrderNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_NextOrderNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_PrevOrderNumber;
    
    UPROPERTY(BlueprintAssignable)
    FTresPoleComponentStartPoleTurnSignature OnTresStartPoleTurn;
    
    UPROPERTY(BlueprintAssignable)
    FTresPoleComponentEndPoleTurnSignature OnTresEndPoleTurn;
    
public:
    UPROPERTY(Export)
    UParticleSystemComponent* m_pFreeRunEffect;
    
    UTresPoleComponent();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveTresStartPoleTurn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveTresEndPoleTurn();
    
};

