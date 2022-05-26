#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "TresSpawnRuleChildGenerator.h"
#include "TresSpawnRuleFromSplineSection.generated.h"

class ASQEX_SplineActor;
class AActor;
class UTresGeneratorPlacePaternFromSplineBase;
class UTresRotatorRuleBase;

USTRUCT(BlueprintType)
struct FTresSpawnRuleFromSplineSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ASQEX_SplineActor* StartActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ASQEX_SplineActor* EndActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<AActor>> GeneratedClassArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AActor> GeneratedClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AActor> FirstGeneratedClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AActor> LastGeneratedClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UTresGeneratorPlacePaternFromSplineBase* PlacePatern;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float Interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Offset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UTresRotatorRuleBase* RotatorRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTresSpawnRuleChildGenerator ChildRule;
    
    TRESGAME_API FTresSpawnRuleFromSplineSection();
};

