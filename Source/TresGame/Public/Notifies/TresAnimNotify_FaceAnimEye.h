// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresGame.h"
#include "TresAnimNotify_FaceAnimEye.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotify_FaceAnimEye : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_FaceAnim")
	ETresFaceAnimType m_AnimType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_FaceAnim")
	FName m_AnimName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_FaceAnim")
	bool m_bIsBattleFaceEnd;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_FaceAnim")
	float m_BlendInTime;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_FaceAnim")
	bool m_bIsLoop;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_FaceAnim")
	float m_PlaySpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_FaceAnim")
	FVector m_BlendParam;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_FaceAnim")
	bool m_bSameCheck;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_FaceAnim")
	TEnumAsByte<ETresFaceAnimPlayPriority> m_PlayPriority;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_FaceAnim")
	bool m_bEnable0Frame;
};
