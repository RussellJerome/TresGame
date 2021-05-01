// Fill out your copyright notice in the Description page of Project Settings.

#include "SQEXSEADSoundFactory.h"

USQEXSEADSoundFactory::USQEXSEADSoundFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	Formats.Add(TEXT("sab;SAB Data"));
	bCreateNew = false;
	bEditAfterNew = true;
	bEditorImport = true;
	SupportedClass = USQEXSEADSound::StaticClass();
}

UObject* USQEXSEADSoundFactory::FactoryCreateBinary(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, const TCHAR* Type, const uint8*& Buffer, const uint8* BufferEnd, FFeedbackContext* Warn, bool& bOutOperationCanceled)
{
	USQEXSEADSound* SABAsset = nullptr;
	TArray<uint8> data;

	if (FFileHelper::LoadFileToArray(data, *CurrentFilename))
	{
		SABAsset = NewObject<USQEXSEADSound>(InParent, Class, Name, Flags);
		//SABAsset->Data = data;
	}

	return SABAsset;
}