#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TresTrackAttachKey.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTresTrackAttachKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_Time;
    
    UPROPERTY(EditAnywhere)
    uint32 m_bAttach: 1;
    
    UPROPERTY(EditAnywhere)
    AActor* m_ParentActor;
    
    UPROPERTY(EditAnywhere)
    FName m_BoneSocketName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAttachLocation::Type> m_AttachLocationType;
    
    UPROPERTY(EditAnywhere)
    uint32 m_bWeldSimulatedBodies: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 m_bAbsoluteLocation: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 m_bAbsoluteRotation: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 m_bAbsoluteScale: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 m_bUseGroupName: 1;
    
    UPROPERTY(EditAnywhere)
    FName m_AttachGroupName;
    
    TRESGAME_API FTresTrackAttachKey();
};

