#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipGimmickTreasureDataTable.generated.h"

USTRUCT()
struct FTresGumiShipGimmickTreasureDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString m_Labels;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Dir;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Dirtime;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_InitalRot;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_AnswerRot;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_PrizeOutPos;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_DummyMesh;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_PrizeOutOffset;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FString> m_ImpactMash;
    
    TRESGAME_API FTresGumiShipGimmickTreasureDataTable();
};

