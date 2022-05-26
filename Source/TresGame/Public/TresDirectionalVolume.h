#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresEnterVolumeSignatureDelegate.h"
#include "TresDirectionalVolume.generated.h"

class AActor;

UCLASS()
class ATresDirectionalVolume : public ATresVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTresEnterVolumeSignature m_OnEnterVolume;
    
    UPROPERTY(EditAnywhere)
    bool m_PlayerOnly;
    
    UPROPERTY(EditAnywhere)
    bool m_Check_ActorDirrection;
    
    UPROPERTY(EditAnywhere)
    bool m_X_Plus;
    
    UPROPERTY(EditAnywhere)
    bool m_X_Minus;
    
    UPROPERTY(EditAnywhere)
    bool m_Y_Plus;
    
    UPROPERTY(EditAnywhere)
    bool m_Y_Minus;
    
    UPROPERTY(EditAnywhere)
    bool m_Z_Plus;
    
    UPROPERTY(EditAnywhere)
    bool m_Z_Minus;
    
    UPROPERTY(Transient)
    TArray<AActor*> m_InsideActors;
    
    ATresDirectionalVolume();
};

