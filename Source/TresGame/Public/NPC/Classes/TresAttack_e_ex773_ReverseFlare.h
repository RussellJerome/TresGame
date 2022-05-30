#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "ETres_e_ex773_Direction.h"
#include "ETresAttack_e_ex773_ReverseFlareMoveAxisType.h"
#include "TresAttack_e_ex773_ReverseFlare.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAttack_e_ex773_ReverseFlare : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_FlareEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    ETres_e_ex773_Direction Direction;
    
    UPROPERTY(EditDefaultsOnly)
    float DirLength;
    
    UPROPERTY(EditDefaultsOnly)
    bool bZDirHoming;
    
    UPROPERTY(EditDefaultsOnly)
    float FlareSpawnPosRate;
    
    UPROPERTY(EditDefaultsOnly)
    float SpawnOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    float WallHitHoseiRange;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAttack_e_ex773_ReverseFlareMoveAxisType MoveAxisType;
    
public:
    UTresAttack_e_ex773_ReverseFlare();
};

