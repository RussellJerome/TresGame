#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresGummiShipSticker.h"
#include "TresRealGummiShipStruct.h"
#include "TresGummiEditorManager.generated.h"

class ATresHudGummiMenu;
class ATresWorldMapCameraActor;
class USceneComponent;
class UStaticMeshComponent;
class ATresGummiEditorActor;
class ATresCreateGummiShipActor;
class ATresWorldMapPlayerController;
class UTresUIManager;
class UTresGummiEditorDataTableSet;

UCLASS()
class ATresGummiEditorManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    USceneComponent* m_pSceneComponent;
    
    UPROPERTY(EditAnywhere, Export)
    UStaticMeshComponent* m_pRootComponent;
    
protected:
    UPROPERTY()
    TSubclassOf<ATresCreateGummiShipActor> GummiShipActorRef;
    
    UPROPERTY()
    TSubclassOf<ATresGummiEditorActor> GummiEditorActorRef;
    
    UPROPERTY()
    TSubclassOf<ATresWorldMapCameraActor> WorldMapCameraActorRef;
    
private:
    UPROPERTY()
    ATresGummiEditorActor* m_pGummiEditorActor;
    
    UPROPERTY()
    ATresCreateGummiShipActor* m_pGummiShipActor;
    
    UPROPERTY()
    ATresCreateGummiShipActor* m_pDepatureShipActor[3];
    
    UPROPERTY()
    ATresWorldMapCameraActor* m_pWorldMapCameraActor;
    
    UPROPERTY()
    ATresWorldMapPlayerController* m_pController;
    
    UPROPERTY()
    UTresUIManager* m_pUIManager;
    
protected:
    UPROPERTY()
    FTresGummiShipSticker m_OldSticker;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresRealGummiShipStruct> m_BaseGummiData0;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresRealGummiShipStruct> m_BaseGummiData1;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresRealGummiShipStruct> m_BaseGummiData2;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresRealGummiShipStruct> m_BaseGummiData3;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresRealGummiShipStruct> m_BaseGummiData4;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresRealGummiShipStruct> m_BaseGummiData5;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresRealGummiShipStruct> m_BaseGummiData6;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresRealGummiShipStruct> m_BaseGummiData7;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresRealGummiShipStruct> m_BaseGummiData8;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresRealGummiShipStruct> m_BaseGummiData9;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresRealGummiShipStruct> m_DecoGummiData0;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresRealGummiShipStruct> m_DecoGummiData1;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresRealGummiShipStruct> m_DecoGummiData2;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresRealGummiShipStruct> m_DecoGummiData3;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresRealGummiShipStruct> m_DecoGummiData4;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresRealGummiShipStruct> m_DecoGummiData5;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresRealGummiShipStruct> m_DecoGummiData6;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresRealGummiShipStruct> m_DecoGummiData7;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresRealGummiShipStruct> m_DecoGummiData8;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresRealGummiShipStruct> m_DecoGummiData9;
    
public:
    ATresGummiEditorManager();
    UFUNCTION(BlueprintPure)
    ATresHudGummiMenu* GetHUD() const;
    
    UFUNCTION(BlueprintPure)
    UTresGummiEditorDataTableSet* GetGummiEditorData() const;
    
private:
    UFUNCTION()
    void DelegateSpecialWeaponHelpOut(int32 InParam);
    
    UFUNCTION()
    void DelegateGummiAbilityHelpOut(int32 InParam);
    
};

