#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresWinniePuzzleBase.h"
#include "TresWinniePuzzleCharacterBonusBombParam.h"
#include "TresWinniePuzzleFlower.generated.h"

class UTresWinniePuzzlePoohController;
class UTresWinniePuzzleHoneypotController;
class ATresWinniePuzzleRabbitPawn;
class ATresWinniePuzzlePoohPawn;
class ATresWinniePuzzleGopherPawn;

UCLASS()
class ATresWinniePuzzleFlower : public ATresWinniePuzzleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWinniePuzzleRabbitPawn> RabbitPawn;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWinniePuzzlePoohPawn> PoohPawn;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWinniePuzzleGopherPawn> GopherPawn;
    
    UPROPERTY(EditDefaultsOnly)
    FTresWinniePuzzleCharacterBonusBombParam BombParam;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresWinniePuzzleHoneypotController* HoneypotCtrl;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresWinniePuzzlePoohController* PoohCtrl;
    
private:
    UPROPERTY(Transient)
    ATresWinniePuzzleRabbitPawn* m_pRabbitPawn;
    
    UPROPERTY(Transient)
    ATresWinniePuzzlePoohPawn* m_pPoohPawn;
    
    UPROPERTY(Transient)
    ATresWinniePuzzleGopherPawn* m_pGopherPawn;
    
public:
    ATresWinniePuzzleFlower();
};

