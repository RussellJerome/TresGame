#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SQEX_KineDriverConnectEZParamLink.h"
#include "SQEX_KineDriverOperatorHead.h"
#include "SQEX_KineDriverSource.h"
#include "SQEX_KineDriverTargetDircns.h"
#include "SQEX_KineDriverComputeSpaceBases.h"
#include "SQEX_KineDriverSourceRotate.h"
#include "SQEX_KineDriverSourceTranslate.h"
#include "SQEX_KineDriverTargetRotate.h"
#include "SQEX_KineDriverSourceOther.h"
#include "SQEX_KineDriverTargetTranslate.h"
#include "SQEX_KineDriverTargetScale.h"
#include "SQEX_KineDriverTargetBendRoll.h"
#include "SQEX_KineDriverTargetBendSTRoll.h"
#include "SQEX_KineDriverTargetPoscns.h"
#include "SQEX_KineDriverTargetOricns.h"
#include "SQEX_KineDriverTargetOther.h"
#include "SQEX_KineDriverConnectEquals.h"
#include "SQEX_KineDriverConnectLinkWith.h"
#include "SQEX_KineDriverConnectEZParamLinkLinear.h"
#include "SQEX_KineDriverData.generated.h"

class USkeleton;

UCLASS()
class KINEDRIVERRT_API USQEX_KineDriverData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* Skeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WorkNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PreComputeObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PreComputeObjectBoneNameArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ComputedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ComputedObjectBoneNameArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_KineDriverOperatorHead> Operators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_KineDriverComputeSpaceBases> ComputeSpaceBasesBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_KineDriverSource> SourceBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_KineDriverSourceTranslate> SourceTranslateBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_KineDriverSourceRotate> SourceRotateBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_KineDriverSourceOther> SourceOtherBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_KineDriverTargetTranslate> TargetTranslateBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_KineDriverTargetScale> TargetScaleBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_KineDriverTargetRotate> TargetRotateBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_KineDriverTargetBendRoll> TargetBendRollBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_KineDriverTargetBendSTRoll> TargetBendSTRollBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_KineDriverTargetPoscns> TargetPoscnsBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_KineDriverTargetOricns> TargetOricnsBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_KineDriverTargetDircns> TargetDircnsBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_KineDriverTargetOther> TargetOtherBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_KineDriverConnectEquals> ConnectEqualsBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_KineDriverConnectLinkWith> ConnectLinkWithBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_KineDriverConnectEZParamLink> ConnectEZParamLinkBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_KineDriverConnectEZParamLinkLinear> ConnectEZParamLinkLinearBody;
    
public:
    USQEX_KineDriverData();
};

