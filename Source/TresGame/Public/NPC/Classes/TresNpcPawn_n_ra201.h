#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "TresNpcPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresNpcPawn_n_ra201.generated.h"

class UTresReactorComponent;
class UTresSkeletalMeshComponent;
class UTresAtkCollComponent;
class ATresAccompanyPawnBase;
class ATresNpcPawn_n_ra201_RollHair;

UCLASS()
class ATresNpcPawn_n_ra201 : public ATresNpcPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* HairActionReactor;
    
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresSkeletalMeshComponent* m_HairMesh1;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresAtkCollComponent* m_HairAtkColl1;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAccompanyPawnBase> m_FRSpinningHoldBP;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHairUnderVecterOffset3;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHairUnderVecterOffset4;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHairUnderVecterOffset5;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHairUnderVecterOffset0;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHairUnderVecterOffset1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHairUnderVecterOffset2;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresNpcPawn_n_ra201_RollHair> m_PawnHairBP;
    
protected:
    UPROPERTY()
    ATresNpcPawn_n_ra201_RollHair* m_pPawnHair;
    
public:
    UPROPERTY(EditDefaultsOnly)
    FVector m_vInWaterWarpLocation;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_rInWaterWarpRotate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fInWaterWarpDepth;
    
    ATresNpcPawn_n_ra201();
    UFUNCTION(BlueprintPure)
    float GetAimOffsetAlpha() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetAimOffset() const;
    
    UFUNCTION(BlueprintPure)
    bool CanSetHairSwingPoint() const;
    
    UFUNCTION(BlueprintPure)
    bool CanSetHairRotationPoint() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_SetInWaterWarp(FVector WarpLocation, FRotator WarpRotate);
    
};

