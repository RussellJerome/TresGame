#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BX901_DarkCubeMineProjInfo.h"
#include "BX901_DarkCubeMineSpawnInfo.generated.h"

class ATresProjectileBase;
class ATresCharPawnBase;
class AActor;

USTRUCT(BlueprintType)
struct FBX901_DarkCubeMineSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FBX901_DarkCubeMineProjInfo> m_ProjeInfoArray;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_JointActorClass;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_JointInfo;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxDestroyComboNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDestroyComboTime;
    
protected:
    UPROPERTY()
    ATresCharPawnBase* m_Owner;
    
    UPROPERTY()
    AActor* m_Target;
    
public:
    TRESGAME_API FBX901_DarkCubeMineSpawnInfo();
};

