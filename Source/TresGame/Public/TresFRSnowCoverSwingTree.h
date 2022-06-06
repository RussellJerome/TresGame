#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickSkeletalBase.h"
#include "TresFRSnowCoverSwingTree.generated.h"

class ANavModifierVolume;
class UTresAtkCollComponent;

UCLASS(Config=Game)
class ATresFRSnowCoverSwingTree : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_ActionPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ANavModifierVolume* m_NavModifierVolumeBP;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresAtkCollComponent* MyAtkColl;
    
public:
    ATresFRSnowCoverSwingTree();
};

