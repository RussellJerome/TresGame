#pragma once
#include "CoreMinimal.h"
#include "TresGummiShipHeader.h"
#include "GameFramework/SaveGame.h"
#include "TresGummiShipSticker.h"
#include "TresGummiShipPartsStruct.h"
#include "TinyShipSaveLoad.generated.h"

UCLASS()
class UTinyShipSaveLoad : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FTresGummiShipHeader m_header;
    
    UPROPERTY(EditDefaultsOnly)
    FTresGummiShipSticker m_Sticker[8];
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresGummiShipPartsStruct> m_body;
    
    UPROPERTY(VisibleAnywhere)
    FString TinyShipSaveSlotName;
    
    UPROPERTY(VisibleAnywhere)
    uint32 UserIndex;
    
    UTinyShipSaveLoad();
};

