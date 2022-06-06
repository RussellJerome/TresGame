#include "TresWinniePuzzleRule.h"

UTresWinniePuzzleRule::UTresWinniePuzzleRule() {
    this->GameOverCondition = WinniePuzzleRuleGameOverCondition::None;
    this->LimitTime = 0.00f;
    this->earnedUnitsNum = 0;
    this->DecreaseColumnsNum = 0;
    this->IncreaseColumnsNum = 0;
    this->ChallengeModeLimitTime = 0.00f;
    this->LimitTimeMax = 0;
    this->LimitTimeMaxOnChallengeMode = 0;
    this->TimerYellowWarningTime = 0.00f;
    this->TimerRedWarningTime = 0.00f;
}

