#include "TresWinniePuzzleFruitV0.h"
#include "TresWinniePuzzleUnitVibrationController.h"
#include "TresWinniePuzzleAutoIncreaseController.h"
#include "TresWinniePuzzleShootTimeLimitController.h"

ATresWinniePuzzleFruitV0::ATresWinniePuzzleFruitV0() {
    this->RabbitPawn = NULL;
    this->LumpyPawn = NULL;
    this->UnitVibrationCtrl = CreateDefaultSubobject<UTresWinniePuzzleUnitVibrationController>(TEXT("UTresWinniePuzzleUnitVibrationController"));
    this->AutoIncreaseCtrl = CreateDefaultSubobject<UTresWinniePuzzleAutoIncreaseController>(TEXT("UTresWinniePuzzleAutoIncreaseController"));
    this->ShootTimeLimitCtrl = CreateDefaultSubobject<UTresWinniePuzzleShootTimeLimitController>(TEXT("UTresWinniePuzzleShootTimeLimitController"));
    this->m_pRabbitPawn = NULL;
    this->m_pLumpyPawn = NULL;
}

