#include "TresOceanShaderController.h"
#include "TresOceanGridMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/BillboardComponent.h"

ATresOceanShaderController::ATresOceanShaderController() {
    this->m_SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->m_SpriteComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Sprite"));
    this->m_pGridMaterial = NULL;
    this->m_UseMaterialIndex = 0;
    this->m_pProjectionMesh0 = NULL;
    this->m_pProjectionMesh1 = NULL;
    this->m_pProjectionMesh2 = NULL;
    this->m_pProjectionMesh3 = NULL;
    this->m_pProjectionMesh4 = NULL;
    this->m_pProjectionMesh5 = NULL;
    this->m_pProjectionMesh6 = NULL;
    this->m_pProjectionMesh7 = NULL;
    this->m_pProjectionMeshOpaq[0] = CreateDefaultSubobject<UTresOceanGridMeshComponent>(TEXT("ProjGridOpaq0"));
    this->m_pProjectionMeshOpaq[1] = CreateDefaultSubobject<UTresOceanGridMeshComponent>(TEXT("ProjGridOpaq1"));
    this->m_pProjectionMeshOpaq[2] = CreateDefaultSubobject<UTresOceanGridMeshComponent>(TEXT("ProjGridOpaq2"));
    this->m_pProjectionMeshOpaq[3] = CreateDefaultSubobject<UTresOceanGridMeshComponent>(TEXT("ProjGridOpaq3"));
    this->m_pProjectionMeshOpaq[4] = CreateDefaultSubobject<UTresOceanGridMeshComponent>(TEXT("ProjGridOpaq4"));
    this->m_pProjectionMeshOpaq[5] = CreateDefaultSubobject<UTresOceanGridMeshComponent>(TEXT("ProjGridOpaq5"));
    this->m_pProjectionMeshOpaq[6] = CreateDefaultSubobject<UTresOceanGridMeshComponent>(TEXT("ProjGridOpaq6"));
    this->m_pProjectionMeshOpaq[7] = CreateDefaultSubobject<UTresOceanGridMeshComponent>(TEXT("ProjGridOpaq7"));
    this->m_pProjectionMeshTrans[0] = CreateDefaultSubobject<UTresOceanGridMeshComponent>(TEXT("ProjGridTrans0"));
    this->m_pProjectionMeshTrans[1] = CreateDefaultSubobject<UTresOceanGridMeshComponent>(TEXT("ProjGridTrans1"));
    this->m_pProjectionMeshTrans[2] = CreateDefaultSubobject<UTresOceanGridMeshComponent>(TEXT("ProjGridTrans2"));
    this->m_pProjectionMeshTrans[3] = CreateDefaultSubobject<UTresOceanGridMeshComponent>(TEXT("ProjGridTrans3"));
    this->m_pProjectionMeshTrans[4] = CreateDefaultSubobject<UTresOceanGridMeshComponent>(TEXT("ProjGridTrans4"));
    this->m_pProjectionMeshTrans[5] = CreateDefaultSubobject<UTresOceanGridMeshComponent>(TEXT("ProjGridTrans5"));
    this->m_pProjectionMeshTrans[6] = CreateDefaultSubobject<UTresOceanGridMeshComponent>(TEXT("ProjGridTrans6"));
    this->m_pProjectionMeshTrans[7] = CreateDefaultSubobject<UTresOceanGridMeshComponent>(TEXT("ProjGridTrans7"));
    this->TranslucencySortPriority = 0;
    this->CustomTranslucencySortPriorityEnable = false;
    this->SQEXGhostDraw = false;
    this->m_pMatParamCollection = NULL;
    this->m_SafetyArea = 500.00f;
    this->m_SafetyFOVScale = 1.50f;
    this->m_Amplitude = 0.00f;
    this->m_ProjectionZ = 0.00f;
    this->m_TranslucentDistance = 0.00f;
    this->m_BlendDistance = 0.00f;
    this->m_SkyIntensity = 1.00f;
    this->m_DebugDraw = false;
    this->m_FreezingUpdate = false;
    this->m_IslandLocationParamCollection = NULL;
    this->m_DefaultHeightMap = NULL;
    this->m_DefaultPosition = -0.50f;
    this->m_DefaultContrast = 10.00f;
    this->m_pOceanMatParamCollection = NULL;
}

