#pragma once
#include "CoreMinimal.h"
#include "TresAutoNavLinkExclusiveInterface.h"
#include "GameFramework/Volume.h"
#include "TresAutoNavLinkExclusiveVolumeInfo.h"
#include "TresAutoNavLinkExclusiveVolume.generated.h"

UCLASS()
class ATresAutoNavLinkExclusiveVolume : public AVolume, public ITresAutoNavLinkExclusiveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FTresAutoNavLinkExclusiveVolumeInfo> ExclusiveInfo;
    
    ATresAutoNavLinkExclusiveVolume();
    
    // Fix for true pure virtual functions not being implemented
};

