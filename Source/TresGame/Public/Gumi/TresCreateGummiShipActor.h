#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresRealGummiShipStruct.h"
#include "TresEffectAttachParts.h"
#include "CreateGummiShipState.h"
#include "TresCreateGummiShipActor.generated.h"

class UDecalComponent;
class USceneComponent;
class USkinnedMeshComponent;
class UTresGummiEditorDataTableSet;

UCLASS()
class ATresCreateGummiShipActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FTresRealGummiShipStruct> m_BaseGummiData;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresRealGummiShipStruct> m_DecoGummiData;
    
    UPROPERTY(EditAnywhere)
    FTresRealGummiShipStruct m_SampleGummiData;
    
    UPROPERTY(EditAnywhere)
    FTresRealGummiShipStruct m_PreviewGummiData;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresEffectAttachParts> m_EffectAttachParts;
    
    UPROPERTY(EditAnywhere, Export)
    USceneComponent* m_pUseCollisionGummiComponent;
    
protected:
    UPROPERTY(Export)
    USceneComponent* m_pRootComponent;
    
    UPROPERTY()
    UTresGummiEditorDataTableSet* m_pGummiEditorDataTableSet;
    
    UPROPERTY(Export)
    USkinnedMeshComponent* m_pTest;
    
    UPROPERTY(Export)
    USkinnedMeshComponent* m_pArrowComponent;
    
    UPROPERTY(Export)
    TArray<UDecalComponent*> m_DecalComp;
    
public:
    ATresCreateGummiShipActor();
private:
    UFUNCTION()
    void ChangeState(TEnumAsByte<CreateGummiShipState> State);
    
};

