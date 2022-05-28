// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/FDirectInputDeviceForceFeedbackChannel.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFDirectInputDeviceForceFeedbackChannel() {}
// Cross Module References
	DIRECTINPUT_API UEnum* Z_Construct_UEnum_DirectInput_FDirectInputDeviceForceFeedbackChannel();
	UPackage* Z_Construct_UPackage__Script_DirectInput();
// End Cross Module References
static UEnum* FDirectInputDeviceForceFeedbackChannel_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_DirectInput_FDirectInputDeviceForceFeedbackChannel, Z_Construct_UPackage__Script_DirectInput(), TEXT("FDirectInputDeviceForceFeedbackChannel"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FDirectInputDeviceForceFeedbackChannel(FDirectInputDeviceForceFeedbackChannel_StaticEnum, TEXT("/Script/DirectInput"), TEXT("FDirectInputDeviceForceFeedbackChannel"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_DirectInput_FDirectInputDeviceForceFeedbackChannel()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_DirectInput();
		extern uint32 Get_Z_Construct_UEnum_DirectInput_FDirectInputDeviceForceFeedbackChannel_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FDirectInputDeviceForceFeedbackChannel"), 0, Get_Z_Construct_UEnum_DirectInput_FDirectInputDeviceForceFeedbackChannel_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FDirectInputDeviceForceFeedbackChannel"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("FDirectInputDeviceForceFeedbackChannel::LEFT_LARGE"), 0);
			EnumNames.Emplace(TEXT("FDirectInputDeviceForceFeedbackChannel::LEFT_SMALL"), 1);
			EnumNames.Emplace(TEXT("FDirectInputDeviceForceFeedbackChannel::LEFT_ANY"), 2);
			EnumNames.Emplace(TEXT("FDirectInputDeviceForceFeedbackChannel::RIGHT_LARGE"), 3);
			EnumNames.Emplace(TEXT("FDirectInputDeviceForceFeedbackChannel::RIGHT_SMALL"), 4);
			EnumNames.Emplace(TEXT("FDirectInputDeviceForceFeedbackChannel::RIGHT_ANY"), 5);
			EnumNames.Emplace(TEXT("FDirectInputDeviceForceFeedbackChannel::ANY"), 6);
			EnumNames.Emplace(TEXT("FDirectInputDeviceForceFeedbackChannel::OFF"), 7);
			EnumNames.Emplace(TEXT("FDirectInputDeviceForceFeedbackChannel::FDirectInputDeviceForceFeedbackChannel_MAX"), 8);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("FDirectInputDeviceForceFeedbackChannel");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/FDirectInputDeviceForceFeedbackChannel.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_DirectInput_FDirectInputDeviceForceFeedbackChannel_CRC() { return 1728421779U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
