// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGame_StructsAndEnums.h"
#include "TresFieldVoice.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresFieldVoice : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFieldVoice")
	bool m_IsFaceAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFieldVoice")
	class USoundBase* m_pSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFieldVoice")
	float m_SoundDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFieldVoice")
	float m_DispSubtitleTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFieldVoice")
	TArray<struct FTresFieldVoiceTextData> m_TextDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFieldVoice")
	TEnumAsByte<ETresChrUniqueID> m_Talker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFieldVoice")
	FName m_TalkerName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFieldVoice")
	FName m_EyeAnimName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFieldVoice")
	FName m_LipAnimName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFieldVoice")
	TArray<struct FTresFieldVoiceAnimData> m_AnimDataArray;
};
