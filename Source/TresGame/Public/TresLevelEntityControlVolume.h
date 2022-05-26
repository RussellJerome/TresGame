#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQEX_ObjectType -FallbackName=ESQEX_ObjectType
#include "UObject/NoExportTypes.h"
#include "TresLevelEntityControlVolume.generated.h"

class UTresLevelEntitySequence;
class UTresLevelEntityControlVolumeData;
class UTresLevelEntityManager;
class UObject;
class AActor;
class UPrimitiveComponent;

UCLASS()
class TRESGAME_API ATresLevelEntityControlVolume : public ATresVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UTresLevelEntitySequence* m_EnterSequence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UTresLevelEntitySequence* m_ExitSequence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TArray<UTresLevelEntityControlVolumeData*> m_SharedData;
    
    UPROPERTY(Transient)
    UTresLevelEntityManager* m_Manager;
    
    UPROPERTY(EditAnywhere)
    ESQEX_ObjectType m_ControlObjectType;
    
    UPROPERTY(EditAnywhere)
    FGuid m_BattleVolumeGUID;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UObject> m_BattleOwner;
    
    UPROPERTY(EditAnywhere)
    bool m_WarpRequest;
    
    UPROPERTY(Transient)
    float m_DistanceBattleOwner;
    
    UPROPERTY(Transient)
    bool m_ImmediateInvoke;
    
    ATresLevelEntityControlVolume();
    UFUNCTION(BlueprintCallable)
    void InvokeEndOverlap(bool TestOverlap, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool ImmediateInvoke);
    
    UFUNCTION(BlueprintCallable)
    void InvokeBeginOverlap(bool TestOverlap, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool ImmediateInvoke);
    
};

