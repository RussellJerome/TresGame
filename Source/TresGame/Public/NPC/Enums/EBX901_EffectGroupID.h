#pragma once
#include "CoreMinimal.h"
#include "EBX901_EffectGroupID.generated.h"

UENUM(BlueprintType)
enum EBX901_EffectGroupID {
    EBX901_EffectGroupID_RunLeg,
    EBX901_EffectGroupID_WalkLeg,
    EBX901_EffectGroupID_HaltLeg,
    EBX901_EffectGroupID_WingJet,
    EBX901_EffectGroupID_WingJetLarge,
    EBX901_EffectGroupID_BodyBlock,
    EBX901_EffectGroupID_WingBlock,
    EBX901_EffectGroupID_WingDisp,
    EBX901_EffectGroupID_Aura,
    EBX901_EffectGroupID_Max,
};

