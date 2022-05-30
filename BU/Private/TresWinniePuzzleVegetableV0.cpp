#include "TresWinniePuzzleVegetableV0.h"
#include "TresWinniePuzzleUnitControllerBase.h"
#include "TresWinniePuzzlePlayerUnitControllerBase.h"
#include "TresWinniePuzzleBossController.h"
#include "TresWinniePuzzleSlopeActionController.h"

ATresWinniePuzzleVegetableV0::ATresWinniePuzzleVegetableV0() {
    this->UnitCtrlBase = CreateDefaultSubobject<UTresWinniePuzzleUnitControllerBase>(TEXT("UTresWinniePuzzleUnitControllerBase"));
    this->PlayerUnitCtrlBase = CreateDefaultSubobject<UTresWinniePuzzlePlayerUnitControllerBase>(TEXT("UTresWinniePuzzlePlayerUnitControllerBase"));
    this->SlopeActionCtrl = CreateDefaultSubobject<UTresWinniePuzzleSlopeActionController>(TEXT("UTresWinniePuzzleSlopeActionController"));
    this->BossCtrl = CreateDefaultSubobject<UTresWinniePuzzleBossController>(TEXT("UTresWinniePuzzleBossController"));
}

