// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresGame.h"
#include "TresAnimNotify_FaceAnim.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotify_FaceAnim : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_FaceAnim")
	ETresFaceAnimType FaceAnimType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_FaceAnim")
	FName FaceAnimName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_FaceAnim")
	bool m_bIsBattleFaceEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_FaceAnim")
	float m_BlendInTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_FaceAnim")
	bool IsLoop;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_FaceAnim")
	float PlaySpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_FaceAnim")
	FVector BlendParam;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_FaceAnim")
	bool SameCheck;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_FaceAnim")
	TEnumAsByte<ETresFaceAnimPlayPriority> m_PlayPriority;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_FaceAnim")
	bool m_bEnable0Frame; 
};
