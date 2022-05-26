#include "TresDecalMeshSplineActor.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"

void ATresDecalMeshSplineActor::SetMaterialControlLocation(FVector inWorldLocation) {
}

void ATresDecalMeshSplineActor::AddSplinePoint(const FVector& inWorldLocation, FVector inHitLocation, FVector inWorldNormal, bool inIsEnable, FHitResult in_pHitRes) {
}

ATresDecalMeshSplineActor::ATresDecalMeshSplineActor() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("spline"));
    this->m_LateralDecalActorClass = NULL;
    this->m_SplineMeshPointStart = NULL;
    this->m_SplineMeshPointEnd = NULL;
    this->m_SplineMeshPointStartEnd = NULL;
    this->m_Offset = 0.00f;
    this->m_EnableNormalOffset = false;
    this->m_EnableMeshRoll = false;
    this->m_EnableSplineMeshReciveDecal = false;
    this->m_DecaleScale = 1.00f;
    this->m_DecaleHeightOffset = 50.00f;
    this->m_DecaleScaleRandOffsetMin = 0.00f;
    this->m_DecaleScaleRandOffsetMax = 0.00f;
    this->m_EnableWorldDistanceFade = false;
    this->m_MeshFadeInTime = 1.00f;
    this->m_MeshFadeOutWait = 2.00f;
    this->m_MeshFadeOutTime = 1.00f;
    this->m_MeshBaseLength = 1000.00f;
    this->m_DecalDensity = 150.00f;
    this->m_DecalFadeinTime = 1.00f;
    this->m_DecalFadeOutWait = 2.00f;
    this->m_DecalFadeoutTime = 1.00f;
    this->m_ForceKillTime = 3.00f;
    this->m_LastSpawnActor = NULL;
    this->m_CurrentParentActor = NULL;
    this->m_PrevParentActor = NULL;
    this->m_PrevHitComponent = NULL;
}

