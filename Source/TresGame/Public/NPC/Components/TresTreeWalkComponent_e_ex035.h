#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresNavLinkSet_e_ex035.h"
#include "Engine/EngineTypes.h"
#include "TresTreeWalkComponent_e_ex035.generated.h"

class UBoxComponent;
class APawn;
class USceneComponent;
class UStaticMeshComponent;
class ATresAIPoint_e_ex035;
class UPrimitiveComponent;

UCLASS()
class ATresTreeWalkComponent_e_ex035 : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    USceneComponent* SceneComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBoxComponent* OverlapBox;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UStaticMeshComponent* LandBox;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAIPoint_e_ex035> m_AIPointClass;
    
    UPROPERTY(EditAnywhere)
    float m_fStickness;
    
    UPROPERTY(EditAnywhere)
    float m_fCollOffsetZ;
    
    UPROPERTY(EditAnywhere)
    float m_fMeshOffsetZ;
    
    UPROPERTY(EditAnywhere)
    float m_fOverlapBoxSize;
    
    UPROPERTY()
    ATresAIPoint_e_ex035* m_AIPointActor;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FTresNavLinkSet_e_ex035> NavLinkSet;
    
    UPROPERTY()
    AActor* m_ReserveActor;
    
    UPROPERTY()
    APawn* m_OwnerPawn;
    
    UPROPERTY(EditAnywhere)
    uint8 bRefreshNavLink: 1;
    
    ATresTreeWalkComponent_e_ex035();
private:
    UFUNCTION()
    void OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

