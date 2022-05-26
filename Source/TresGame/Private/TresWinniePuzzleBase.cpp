#include "TresWinniePuzzleBase.h"
#include "TresWinniePuzzlePlayerController.h"
#include "TresWinniePuzzleUnitController.h"
#include "TresWinniePuzzleGuideLine.h"
#include "TresWinniePuzzlePlayerUnitController.h"
#include "TresWinniePuzzleWallVolumeController.h"
#include "TresWinniePuzzlePowerGaugeController.h"
#include "TresWinniePuzzleCharacterBonusController.h"
#include "TresWinniePuzzleShootTimesController.h"
#include "TresWinniePuzzleRule.h"
#include "TresWinniePuzzleResult.h"
#include "TresWinniePuzzleTurnController.h"
#include "TresWinniePuzzleBonusController.h"
#include "TresWinniePuzzleScoreController.h"
#include "TresWinniePuzzleBucketController.h"
#include "TresWinniePuzzleObjectPool.h"
#include "TresWinniePuzzleSoundPlayer.h"

ATresWinniePuzzleBase::ATresWinniePuzzleBase() {
    this->DebugFixedCameraMoveSpeed = 0.00f;
    this->DebugFixedCameraFOVChangeSpeed = 0.00f;
    this->RaycastDistance = 0.00f;
    this->AimingDegreeMin = 0.00f;
    this->AimingDegreeMax = 0.00f;
    this->AimingSpeedNormal = 0.00f;
    this->AimingSpeedAcceleration = 0.00f;
    this->ShootType = WinniePuzzleShootType::Pressed;
    this->StopElapsedTimeTiming = WinniePuzzleStopElapsedTimeTiming::WhenShoot;
    this->GraceTimeOfStopElapsedTimeCounting = 0.00f;
    this->UIAppearWaitTime = 0.00f;
    this->UnitCtrl = CreateDefaultSubobject<UTresWinniePuzzleUnitController>(TEXT("UTresWinniePuzzleUnitController"));
    this->PlayerUnitCtrl = CreateDefaultSubobject<UTresWinniePuzzlePlayerUnitController>(TEXT("UTresWinniePuzzlePlayerUnitController"));
    this->GuideLine = CreateDefaultSubobject<UTresWinniePuzzleGuideLine>(TEXT("UTresWinniePuzzleGuideLine"));
    this->WallVolumeCtrl = CreateDefaultSubobject<UTresWinniePuzzleWallVolumeController>(TEXT("UTresWinniePuzzleWallVolumeController"));
    this->PlayerCtrl = CreateDefaultSubobject<UTresWinniePuzzlePlayerController>(TEXT("UTresWinniePuzzlePlayerController"));
    this->PowerGaugeCtrl = CreateDefaultSubobject<UTresWinniePuzzlePowerGaugeController>(TEXT("UTresWinniePuzzlePowerGaugeController"));
    this->CharacterBonusCtrl = CreateDefaultSubobject<UTresWinniePuzzleCharacterBonusController>(TEXT("UTresWinniePuzzleCharacterBonusController"));
    this->ShootTimesCtrl = CreateDefaultSubobject<UTresWinniePuzzleShootTimesController>(TEXT("UTresWinniePuzzleShootTimesController"));
    this->Rule = CreateDefaultSubobject<UTresWinniePuzzleRule>(TEXT("UTresWinniePuzzleRule"));
    this->GameResult = CreateDefaultSubobject<UTresWinniePuzzleResult>(TEXT("UTresWinniePuzzleResult"));
    this->TurnCtrl = CreateDefaultSubobject<UTresWinniePuzzleTurnController>(TEXT("UTresWinniePuzzleTurnController"));
    this->BonusCtrl = CreateDefaultSubobject<UTresWinniePuzzleBonusController>(TEXT("UTresWinniePuzzleBonusController"));
    this->ScoreCtrl = CreateDefaultSubobject<UTresWinniePuzzleScoreController>(TEXT("UTresWinniePuzzleScoreController"));
    this->BucketCtrl = CreateDefaultSubobject<UTresWinniePuzzleBucketController>(TEXT("UTresWinniePuzzleBucketController"));
    this->ObjectPool = CreateDefaultSubobject<UTresWinniePuzzleObjectPool>(TEXT("UTresWinniePuzzleObjectPool"));
    this->SoundPlayer = CreateDefaultSubobject<UTresWinniePuzzleSoundPlayer>(TEXT("UTresWinniePuzzleSoundPlayer"));
}

