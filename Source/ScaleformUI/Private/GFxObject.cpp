#include "GFxObject.h"

class UGFxMoviePlayer;

void UGFxObject::SetVisible(bool bVisible) {
}

void UGFxObject::SetScale(float XScale, float YScale) {
}

void UGFxObject::SetPosition(float X, float Y) {
}

void UGFxObject::SetMemberValueArray(UGFxMoviePlayer* MoviePlayer, const FString& MemberName, const TArray<FASValue>& Input) {
}

void UGFxObject::SetMemberValue(const FString& MemberName, const FASValue& Input) {
}

void UGFxObject::SetDisplayTransform(const FTransform& DisplayTransform) {
}

void UGFxObject::SetDisplayInfo(const FASDisplayInfo& UnrealDisplayInfo) {
}

void UGFxObject::SetColorTransform(const FASColorTransform& UnrealColorTransform) {
}

FASValue UGFxObject::Invoke(const FString& FunctionName, const TArray<FASValue>& Params) {
    return FASValue{};
}

void UGFxObject::GotoAndStopI(int32 FrameNumber) {
}

void UGFxObject::GotoAndStop(const FString& FrameString) {
}

void UGFxObject::GotoAndPlayI(int32 FrameNumber) {
}

void UGFxObject::GotoAndPlay(const FString& FrameString) {
}

bool UGFxObject::GetVisible() {
    return false;
}

bool UGFxObject::GetScale(float& XScale, float& YScale) {
    return false;
}

bool UGFxObject::GetPosition(float& X, float& Y) {
    return false;
}

TArray<FASValue> UGFxObject::GetMemberValueArray(const FString& MemberName) {
    return TArray<FASValue>();
}

FASValue UGFxObject::GetMemberValue(const FString& MemberName) {
    return FASValue{};
}

FTransform UGFxObject::GetDisplayTransform() {
    return FTransform{};
}

FASDisplayInfo UGFxObject::GetDisplayInfo() {
    return FASDisplayInfo{};
}

FASColorTransform UGFxObject::GetColorTransform() {
    return FASColorTransform{};
}

UGFxObject::UGFxObject() {
}

