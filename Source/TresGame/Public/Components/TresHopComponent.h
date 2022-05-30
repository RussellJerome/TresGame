#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickComponentBase.h"
#include "UObject/NoExportTypes.h"
#include "ETresHopMotionType.h"
#include "TresHopComponent.generated.h"

class UParticleSystemComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UTresHopComponent : public UTresGimmickComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_AttachOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_BaseOffset1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_BaseOffset2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_CheckRadius;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FColor m_LineColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bIsOrder: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_OrderNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETresHopMotionType> m_IdleMotionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bIsEndPoint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETresHopMotionType> m_EndMotionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bIsClosing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bIsSurfing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bIsTripping: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bIsDangle: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bIsHassou: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bDisableEffect: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETresHopMotionType> m_HassouMotionType;
    
public:
    UPROPERTY(Export)
    UParticleSystemComponent* m_pFreeRunEffect;
    
    UTresHopComponent();
};

