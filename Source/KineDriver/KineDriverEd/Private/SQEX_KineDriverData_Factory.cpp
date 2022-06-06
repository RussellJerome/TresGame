// Fill out your copyright notice in the Description page of Project Settings.

#include "KineDriver/KineDriverEd/Public/SQEX_KineDriverData_Factory.h"

#include "AssetTypeCategories.h"
#include "Package.h"
#include "PackageName.h"
#include "Paths.h"
#include "SQEX_KineDriverData.h"

USQEX_KineDriverData_Factory::USQEX_KineDriverData_Factory()
{
	Formats.Add(TEXT("xml;KineDriver Data"));
	bCreateNew = true;
	bEditAfterNew = true;
	bEditorImport = true;
	SupportedClass = USQEX_KineDriverData::StaticClass();
}

static bool bSoundFactorySuppressImportOverwriteDialog = false;

uint32 USQEX_KineDriverData_Factory::GetMenuCategories() const { return EAssetTypeCategories::Physics; }

UObject * USQEX_KineDriverData_Factory::FactoryCreateNew(UClass * InClass, UObject * InParent, FName InName, EObjectFlags flags, UObject * Cntext, FFeedbackContext * Warn)
{
	return NewObject<USQEX_KineDriverData>(InParent, InClass, InName, flags);
}

UObject* USQEX_KineDriverData_Factory::FactoryCreateBinary(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, const TCHAR* Type, const uint8*& Buffer, const uint8* BufferEnd, FFeedbackContext* Warn, bool& bOutOperationCanceled)
{
	FString PackagePath = FPackageName::GetLongPackagePath(InParent->GetOutermost()->GetName());

	USQEX_KineDriverData* ImportedAsset = NewObject<USQEX_KineDriverData>(InParent, Name, Flags);
	FString FilePath = FPaths::GetPath(CurrentFilename);
	FPaths::MakePathRelativeTo(FilePath, *FPaths::GameDir());
	return ImportedAsset;
}

bool USQEX_KineDriverData_Factory::CanReimport(UObject* Obj, TArray<FString>& OutFilenames)
{
	USQEX_KineDriverData* ImportedAsset = Cast<USQEX_KineDriverData>(Obj);
	if (ImportedAsset)
	{
		//OutFilenames.Add(FPaths::ConvertRelativePathToFull(FPaths::GameDir(), ImportedAsset->SourceFile));
		return true;
	}
	return false;
}

void USQEX_KineDriverData_Factory::SetReimportPaths(UObject* Obj, const TArray<FString>& NewReimportPaths)
{
	USQEX_KineDriverData* ImportedAsset = Cast<USQEX_KineDriverData>(Obj);
	if (ImportedAsset && ensure(NewReimportPaths.Num() == 1))
	{
		FString FilePath = FPaths::GetPath(NewReimportPaths[0]);
		FPaths::MakePathRelativeTo(FilePath, *FPaths::GameDir());
		//ImportedAsset->SourceFile = FilePath + "/" + FPaths::GetCleanFilename(NewReimportPaths[0]);
	}
}

EReimportResult::Type USQEX_KineDriverData_Factory::Reimport(UObject* Obj)
{
	USQEX_KineDriverData* ImportedAsset = Cast<USQEX_KineDriverData>(Obj);
	if (!ImportedAsset) { return EReimportResult::Failed; }
	//const FString Filename = FPaths::ConvertRelativePathToFull(FPaths::GameDir(), ImportedAsset->SourceFile);
	bool OutCanceled = false;
	/*if (FPaths::GetExtension(Filename).Equals(TEXT("xml"), ESearchCase::IgnoreCase))
	{
		if (ImportObject(ImportedAsset->GetClass(), ImportedAsset->GetOuter(), *ImportedAsset->GetName(), RF_Public | RF_Standalone, Filename, nullptr, OutCanceled) != nullptr)
		{
			ImportedAsset->Modify();
			ImportedAsset->MarkPackageDirty();
			//ImportedAsset->SourceFileTimestamp = IFileManager::Get().GetTimeStamp(*UFactory::CurrentFilename).ToString();
			return EReimportResult::Succeeded;
		}
		else
		{
			/*if (OutCanceled) { UE_LOG(LogTemp, Warning, TEXT("SWF Movie Import Canceled!")); }
			else { UE_LOG(LogTemp, Warning, TEXT("SWF Movie Import Failed!")); }
			return EReimportResult::Failed;
		}
	}*/
	//else { return EReimportResult::Failed; }


	return EReimportResult::Succeeded;
}