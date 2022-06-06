#include "TresWinniePuzzleFruit.h"
#include "TresWinniePuzzleUnitVibrationController.h"
#include "TresWinniePuzzleAutoIncreaseController.h"

ATresWinniePuzzleFruit::ATresWinniePuzzleFruit() {
    this->RabbitPawn = NULL;
    this->LumpyPawn = NULL;
    this->UnitVibrationCtrl = CreateDefaultSubobject<UTresWinniePuzzleUnitVibrationController>(TEXT("UTresWinniePuzzleUnitVibrationController"));
    this->AutoIncreaseCtrl = CreateDefaultSubobject<UTresWinniePuzzleAutoIncreaseController>(TEXT("UTresWinniePuzzleAutoIncreaseController"));
    this->m_pRabbitPawn = NULL;
    this->m_pLumpyPawn = NULL;
}

