#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresActionDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAction11_e_ex781_GenerateChaseBeam.generated.h"

class ATresPawnBase;

UCLASS()
class UTresAction11_e_ex781_GenerateChaseBeam : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_IsEnd;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RootScaleZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GenerateOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MarkerDispTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MarkerDist;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresPawnBase> m_GunShotMarkerObjectClass;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FVector> m_MarkerOffsetList;
    
    UTresAction11_e_ex781_GenerateChaseBeam();
};

