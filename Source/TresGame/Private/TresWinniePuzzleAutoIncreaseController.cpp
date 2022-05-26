#include "TresWinniePuzzleAutoIncreaseController.h"

UTresWinniePuzzleAutoIncreaseController::UTresWinniePuzzleAutoIncreaseController() {
    this->EnableAutoIncreaseWhenShootWait = false;
    this->EnableResetIncreaseWhenSameKindUnitsRemoving = false;
    this->EnableResetIncreaseWhenInvokeCharacterBonus = false;
    this->AutoIncreaseGaugeMaxValue = 0.00f;
    this->AutoIncreaseMoveSpeed = 0.00f;
    this->AutoIncreaseWarningVibrationTime = 0.00f;
    this->ForceIncreaseMinColumns = 0;
}

