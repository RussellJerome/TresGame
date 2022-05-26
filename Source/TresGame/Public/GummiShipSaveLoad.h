#pragma once
#include "CoreMinimal.h"
#include "TresGummiShipAbility.h"
#include "TresGummiShipHeader.h"
#include "GameFramework/SaveGame.h"
#include "TresGummiShipSticker.h"
#include "TresGummiShipPartsStruct.h"
#include "GummiShipSaveLoad.generated.h"

UCLASS()
class UGummiShipSaveLoad : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FTresGummiShipHeader m_header;
    
    UPROPERTY(EditDefaultsOnly)
    FTresGummiShipAbility m_Ability;
    
    UPROPERTY(EditDefaultsOnly)
    FTresGummiShipSticker m_Sticker[8];
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresGummiShipPartsStruct> m_body;
    
    UPROPERTY(VisibleAnywhere)
    FString GummiShipSaveSlotName;
    
    UPROPERTY(VisibleAnywhere)
    uint32 UserIndex;
    
    UGummiShipSaveLoad();
};

