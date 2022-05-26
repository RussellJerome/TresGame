#include "TresGummiEditorActor.h"

ATresGummiEditorActor::ATresGummiEditorActor() {
    this->m_pStaticMesh_Center = NULL;
    this->m_pStaticMesh_Cursor = NULL;
    this->m_pStaticMesh_StickerCursor = NULL;
    this->m_pMesh_StickerPlaneCursor = NULL;
    this->m_pStaticMesh_BaseGrid = NULL;
    this->m_pStaticMesh_TinyBaseGrid = NULL;
    this->m_pStaticMesh_Arrow = NULL;
    this->m_pStaticMesh_TinyArrow = NULL;
    this->m_pMesh_GummiLine = NULL;
    this->m_pMesh_TinyLine = NULL;
    this->m_pGummiStickerMaterial = NULL;
    this->m_pGummiLineMaterial0 = NULL;
    this->m_pGummiLineMaterial1 = NULL;
    this->m_pTinyLineMaterial0 = NULL;
    this->m_pTinyLineMaterial1 = NULL;
    this->m_pSceneComponent = NULL;
    this->m_pAttachRootComponent = NULL;
    this->m_pAttachPartsRootComponent = NULL;
    this->m_pRootComponent = NULL;
    this->m_pBaseGridComponent = NULL;
    this->m_pArrowComponentUp = NULL;
    this->m_pArrowComponentDown = NULL;
    this->m_pLineComponentUD = NULL;
    this->m_pLineComponentLR = NULL;
    this->m_pLineComponentFB = NULL;
    this->m_pCursorComponent = NULL;
    this->m_pCenterComponent = NULL;
    this->m_pStickerCursorComponent = NULL;
    this->m_pStickerPlaneComponent = NULL;
    this->m_pGummiLineElement0_UD = NULL;
    this->m_pGummiLineElement1_UD = NULL;
    this->m_pTinyLineElement0_UD = NULL;
    this->m_pTinyLineElement1_UD = NULL;
    this->m_pGummiLineElement0_LR = NULL;
    this->m_pGummiLineElement1_LR = NULL;
    this->m_pTinyLineElement0_LR = NULL;
    this->m_pTinyLineElement1_LR = NULL;
    this->m_pGummiLineElement0_FB = NULL;
    this->m_pGummiLineElement1_FB = NULL;
    this->m_pTinyLineElement0_FB = NULL;
    this->m_pTinyLineElement1_FB = NULL;
    this->m_pGummiEditorDataTableSet = NULL;
    this->m_pCaptureComponent = NULL;
}

