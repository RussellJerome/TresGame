#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresAnimInterface.h"
#include "TresComNpcAttachMesh.h"
#include "TresComNpcSkeletalMeshActor.generated.h"

class UTresSkeletalMeshComponent;

UCLASS()
class TRESGAME_API ATresComNpcSkeletalMeshActor : public AActor, public ITresAnimInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresComNpcAttachMesh> m_AttachMeshs;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fNearCameraRange;
    
private:
    UPROPERTY(Export, VisibleDefaultsOnly)
    UTresSkeletalMeshComponent* MyMesh;
    
public:
    ATresComNpcSkeletalMeshActor();
    
    // Fix for true pure virtual functions not being implemented
};

