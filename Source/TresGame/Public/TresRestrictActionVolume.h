#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresRestrictActionVolume.generated.h"

UCLASS()
class TRESGAME_API ATresRestrictActionVolume : public ATresVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint32 m_TownArea: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 m_RestrictATTACK: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 m_RestrictMAGIC: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 m_RestrictITEM: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 m_RestrictSITUATION: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 m_RestrictLINK: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 m_RestrictATTRACTIONFLOW: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 m_RestrictSTYLE: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 m_RestrictFRIENDLINK: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 m_RestrictGUARD: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 m_RestrictJUMP: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 m_RestrictSHOOTLOCK: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 m_RestrictRUN: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 m_RestrictDIVEFALL: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 m_RestrictDeepDiving: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 m_RestrictCancelSituation: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 m_RestrictAlwaysUseSpawnPoint: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 m_RestrictPhotoMode: 1;
    
public:
    ATresRestrictActionVolume();
};

