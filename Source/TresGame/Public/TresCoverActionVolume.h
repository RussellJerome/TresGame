#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "ETresCoverIdlingDirID.h"
#include "TresCoverActionVolume.generated.h"

class UTresDebugArrowComponent;

UCLASS()
class TRESGAME_API ATresCoverActionVolume : public ATresVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresDebugArrowComponent* MyDirArrow;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETresCoverIdlingDirID m_IdlingDir;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint32 m_bEnableCoverDir: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_CoverCameraID;
    
public:
    ATresCoverActionVolume();
};

