#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresMapSetObjData.h"
#include "TresMapSetDataArray.h"
#include "TresMapSet.generated.h"

UCLASS()
class TRESGAME_API UTresMapSet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> m_CmdArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresMapSetObjData> m_ObjArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresMapSetDataArray> m_Data;
    
    UTresMapSet();
};

