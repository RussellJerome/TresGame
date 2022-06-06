#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntityControlVolume.h"
#include "UObject/NoExportTypes.h"
#include "TresAttractionFlowDrawingInterface.h"
#include "TresAttractionFlowDrawingEntry.h"
#include "TresBattleVolume.generated.h"

UCLASS()
class TRESGAME_API ATresBattleVolume : public ATresLevelEntityControlVolume, public ITresAttractionFlowDrawingInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGuid m_GUID;
    
    UPROPERTY(EditAnywhere)
    bool m_NotifyMovedOutOfBattleArea;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresAttractionFlowDrawingEntry> m_DrawingTable;
    
    UPROPERTY(EditAnywhere)
    bool m_EnableDrawing;
    
    UPROPERTY(Transient)
    bool m_BattleStarted;
    
public:
    ATresBattleVolume();
    
    // Fix for true pure virtual functions not being implemented
};

