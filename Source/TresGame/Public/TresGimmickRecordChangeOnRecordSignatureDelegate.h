#pragma once
#include "CoreMinimal.h"
#include "TresGimmickRecordChangeOnRecordSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGimmickRecordChangeOnRecordSignature, bool, OnRecord);

