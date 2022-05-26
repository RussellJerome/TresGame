#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresCollMgrDetectUpdateGrassBumpTickFunction.h"
#include "TresCollMgrDetectPhysMatTickFunction.h"
#include "TresCollMgrFootStepEffectGenTickFunction.h"
#include "TresCollMgrDetectBodyCollTickFunction.h"
#include "TresCollisionManager.generated.h"

class UTresRootComponent;
class UTresSkeletalMeshComponent;
class UTresGrassBumpAttachObj;
class ATresCharPawnBase;
class UTresBodyCollComponent;

UCLASS(NotPlaceable, Transient)
class ATresCollisionManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(DuplicateTransient, Export, Transient)
    TMap<TWeakObjectPtr<UTresRootComponent>, UTresGrassBumpAttachObj*> m_DetectGrassBumpMap;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    TArray<TWeakObjectPtr<UTresRootComponent>> m_DetectPhysMatComponentList;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    TArray<TWeakObjectPtr<UTresSkeletalMeshComponent>> m_FootStepComponentList;
    
    UPROPERTY(DuplicateTransient, Transient)
    TArray<TWeakObjectPtr<ATresCharPawnBase>> m_FootStepEffectGenPawnList;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    TArray<TWeakObjectPtr<UTresBodyCollComponent>> m_DetectBodyCompList;
    
    UPROPERTY()
    FTresCollMgrDetectUpdateGrassBumpTickFunction m_UpdateGrassBumpTickFunction;
    
    UPROPERTY()
    FTresCollMgrDetectPhysMatTickFunction m_DetectPhysMatTickFunction;
    
    UPROPERTY()
    FTresCollMgrFootStepEffectGenTickFunction m_FootStepEffectGenTickFunction;
    
    UPROPERTY()
    FTresCollMgrDetectBodyCollTickFunction m_DetectBodyCollTickFunction;
    
public:
    ATresCollisionManager();
};

