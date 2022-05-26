#pragma once
#include "CoreMinimal.h"
#include "EEX354_FieldID.h"
#include "EX354_FieldChangeRemote.generated.h"

USTRUCT(BlueprintType)
struct FEX354_FieldChangeRemote {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEX354_FieldID> FieldID;
    
    UPROPERTY(EditDefaultsOnly)
    FName RemoteName;
    
    UPROPERTY(EditDefaultsOnly)
    FName RemoteName_OneFrameChange;
    
    UPROPERTY(EditDefaultsOnly)
    FName RemoteName_NoCinematic;
    
    UPROPERTY(EditDefaultsOnly)
    FName XigbalMoveRemoteName;
    
    UPROPERTY(EditDefaultsOnly)
    FName AIRestartRemoteName;
    
    UPROPERTY(EditDefaultsOnly)
    FName XigbalMoveActorTagName;
    
    TRESGAME_API FEX354_FieldChangeRemote();
};

