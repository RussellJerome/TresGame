#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "ESQEX_Bonamik_WindAreaType.h"
#include "SQEX_BonamikWind_Component.generated.h"

class USQEX_BonamikWindDesc;
class USQEX_BonamikWind;

UCLASS(BlueprintType, CollapseCategories, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BONAMIKRT_API USQEX_BonamikWind_Component : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USQEX_BonamikWindDesc* m_BonamikWindDesc;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ESQEX_Bonamik_WindAreaType> m_BonamikWindAreaType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_BonamikWindGlobalAddition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_BonamikWindBoxAreaSize;
    
    UPROPERTY()
    FVector m_BonamikWindBoxAreaHalfSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_BonamikWindSphereAreaRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_BonamikWindAreaMargin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_BonamikWindAbsoluteDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_BonamikWindDirectionYaw;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_BonamikWindDirectionPitch;
    
    UPROPERTY(Transient)
    USQEX_BonamikWind* m_BonamikWind;
    
    USQEX_BonamikWind_Component();
    UFUNCTION(BlueprintCallable)
    void SetWindScale(float Value);
    
    UFUNCTION(BlueprintPure)
    float GetWindScale() const;
    
    UFUNCTION(BlueprintCallable)
    void Enable(bool Value);
    
};

