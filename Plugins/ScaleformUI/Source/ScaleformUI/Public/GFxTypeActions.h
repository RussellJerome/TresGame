// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AssetTypeActions_Base.h"
#include "SwfMovie.h"

class USwfMovie;

/**
 * 
 */
class FGFxTypeActions : public FAssetTypeActions_Base
{
public:
	virtual FText GetName() const override { return FText::FromString("Swf Movie"); };
	virtual FColor GetTypeColor() const override { return FColor::Silver; };
	virtual UClass* GetSupportedClass() const override { return USwfMovie::StaticClass(); };
	virtual uint32 GetCategories() override { return EAssetTypeCategories::UI; };
	virtual bool HasActions(const TArray<UObject*>& InObjects) const override { return true; }
    virtual void GetActions(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder) override
	{
		auto SwfMovieDataImports = GetTypedWeakObjectPtrs<USwfMovie>(InObjects);

		MenuBuilder.AddMenuEntry(
			FText::FromString("Reimport"),
			FText::FromString("Reimports Swf Movies"),
			FSlateIcon(),
			FUIAction(
				FExecuteAction::CreateSP(this, &FGFxTypeActions::ExecuteReimport, SwfMovieDataImports),
				FCanExecuteAction()
			)
		);
	};
	
	void ExecuteReimport(TArray<TWeakObjectPtr<USwfMovie>> Objects)
	{
		for (auto ObjIt = Objects.CreateConstIterator(); ObjIt; ++ObjIt)
		{
			auto Object = (*ObjIt).Get();
			if (Object)
			{
				FReimportManager::Instance()->Reimport(Object, true);
			}
		}
	};
};
