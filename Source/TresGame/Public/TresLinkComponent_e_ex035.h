#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresNavLinkSet_e_ex035_.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/EngineTypes.h"
#include "TresLinkComponent_e_ex035.generated.h"

class AActor;
class UBoxComponent;
class ATresAIPoint_e_ex035;
class APawn;
class ATresCharPawnBase;

UCLASS(EditInlineNew, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UTresLinkComponent_e_ex035 : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    UBoxComponent* BoxComponent;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ATresAIPoint_e_ex035> m_AIPointClass;
    
    UPROPERTY(EditAnywhere)
    float m_fStickness;
    
    UPROPERTY(EditAnywhere)
    float m_fJumpDistance2D;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseJumpAttack;
    
    UPROPERTY(EditAnywhere)
    float m_fJumpAttackTargetRadius;
    
    UPROPERTY()
    ATresAIPoint_e_ex035* m_AIPointActor;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBoxComponent* OverlapBox;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBoxComponent* OverlapBox_Root;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UBoxComponent* LandBox;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FTresNavLinkSet_e_ex035_> NavLinkSet;
    
    UPROPERTY()
    AActor* m_ReserveActor;
    
    UPROPERTY()
    APawn* m_OwnerPawn;
    
    UPROPERTY()
    ATresCharPawnBase* m_E_EX011Pawn;
    
    UTresLinkComponent_e_ex035();
private:
    UFUNCTION()
    void OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsOccupied() const;
    
};

