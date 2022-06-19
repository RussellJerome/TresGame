#pragma once
#include "CoreMinimal.h"
#include "ESQEX_RAIL_SLIDE_DIR.h"
#include "ESQEX_RAIL_SLIDE_TYPE.h"
#include "ESQEX_SplineJumpLimitType.h"
#include "SQEX_SplineActor.h"
#include "UObject/NoExportTypes.h"
#include "TresRailSlideActor.generated.h"

class UBoxComponent;

UCLASS()
class ATresRailSlideActor : public ASQEX_SplineActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fCameraRollRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESQEX_RAIL_SLIDE_TYPE m_RailType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ASQEX_SplineActor* m_LinkedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ASQEX_SplineActor* m_RevLinkedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESQEX_RAIL_SLIDE_DIR m_StartDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DetectRangePlus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDisableReverse: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDisableActAttack: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDisableActJump: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDisableActAirSlide: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDisableActAthleticFlowMove: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDisableActTransferOnRelativeJump: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDisableSpawnRailSlideConnectTo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDestroyAfterThePassage: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bIsNarrow: 1;
    
    UPROPERTY()
    uint8 m_bIsDisableAction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESQEX_SplineJumpLimitType m_JumpLimitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bSetSlideSpeed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bResetAccDec: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SetSlideSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SetRevSlideSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bSetSpeedAccDec: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SetSpeedRateMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SetSpeedRateMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SetSpeedAccRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SetSpeedDecRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SetRevSpeedAccRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SetRevSpeedDecRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bGenerateNavData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_NavLinkSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bGenerateJumpNavLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bTiltNavMeshCollisionBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_NavMeshCollisionBoxOffset;
    
    UPROPERTY(Export)
    TArray<UBoxComponent*> m_NavMeshCollisionBoxes;
    
    UPROPERTY()
    bool m_bNavGeometryDirty;
    
    UPROPERTY()
    TArray<FVector> m_NavLinkPoins;
    
public:
    ATresRailSlideActor();
    UFUNCTION(BlueprintPure)
    bool BP_IsRailGimmickActive() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_DeactivateRailGimmick();
    
    UFUNCTION(BlueprintCallable)
    void BP_ActivateRailGimmick();
    
};

