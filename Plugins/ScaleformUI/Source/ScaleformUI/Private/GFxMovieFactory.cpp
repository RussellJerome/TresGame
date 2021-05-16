// Fill out your copyright notice in the Description page of Project Settings.

#include "GFxMovieFactory.h"
#include "SwfMovie.h"

UGFxMovieFactory::UGFxMovieFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	Formats.Add(TEXT("swf;SWF Movie"));
	Formats.Add(TEXT("gfx;SWF Movie (Stripped)"));
	bCreateNew = false;
	bEditAfterNew = true;
	bEditorImport = true;
	SupportedClass = USwfMovie::StaticClass();
}

UObject* UGFxMovieFactory::FactoryCreateBinary(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, const TCHAR* Type, const uint8*& Buffer, const uint8* BufferEnd, FFeedbackContext* Warn, bool& bOutOperationCanceled)
{
	USwfMovie* ImportedAsset = NewObject<USwfMovie>(InParent, Name, Flags);
	ImportedAsset->bSetSRGBOnImportedTextures = false;
	ImportedAsset->TextureRescale = EFlashTextureRescale::FlashTextureScale_High;
	ImportedAsset->bPackTextures = false;
	ImportedAsset->PackTextureSize = 1024;
	ImportedAsset->TextureFormat = "TGA";

	ImportedAsset->RawData.Empty(BufferEnd - Buffer);
	ImportedAsset->RawData.AddUninitialized(BufferEnd - Buffer);
	FMemory::Memcpy(ImportedAsset->RawData.GetData(), Buffer, ImportedAsset->RawData.Num());

	return ImportedAsset;
}