// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADCollisionEventSeComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADCollisionEventSeComponent() {}
// Cross Module References
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADCollisionEventSeComponent_OnBeginOverlap();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADCollisionEventSeComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADCollisionEventSeComponent_OnComponentHit();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADCollisionEventSeComponent_OnEndOverlap();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADCollisionEventSeComponent_OnFracture();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADCollisionEventSeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	ENGINE_API UClass* Z_Construct_UClass_UDestructibleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void USQEXSEADCollisionEventSeComponent::StaticRegisterNativesUSQEXSEADCollisionEventSeComponent()
	{
		UClass* Class = USQEXSEADCollisionEventSeComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnBeginOverlap", (Native)&USQEXSEADCollisionEventSeComponent::execOnBeginOverlap },
			{ "OnComponentHit", (Native)&USQEXSEADCollisionEventSeComponent::execOnComponentHit },
			{ "OnEndOverlap", (Native)&USQEXSEADCollisionEventSeComponent::execOnEndOverlap },
			{ "OnFracture", (Native)&USQEXSEADCollisionEventSeComponent::execOnFracture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_USQEXSEADCollisionEventSeComponent_OnBeginOverlap()
	{
		struct SQEXSEADCollisionEventSeComponent_eventOnBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADCollisionEventSeComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnBeginOverlap"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00420401, 65535, sizeof(SQEXSEADCollisionEventSeComponent_eventOnBeginOverlap_Parms));
			UProperty* NewProp_SweepResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SweepResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SweepResult, SQEXSEADCollisionEventSeComponent_eventOnBeginOverlap_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFromSweep, SQEXSEADCollisionEventSeComponent_eventOnBeginOverlap_Parms);
			UProperty* NewProp_bFromSweep = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bFromSweep"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFromSweep, SQEXSEADCollisionEventSeComponent_eventOnBeginOverlap_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bFromSweep, SQEXSEADCollisionEventSeComponent_eventOnBeginOverlap_Parms), sizeof(bool), true);
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, SQEXSEADCollisionEventSeComponent_eventOnBeginOverlap_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, SQEXSEADCollisionEventSeComponent_eventOnBeginOverlap_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, SQEXSEADCollisionEventSeComponent_eventOnBeginOverlap_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComponent, SQEXSEADCollisionEventSeComponent_eventOnBeginOverlap_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADCollisionEventSeComponent.h"));
			MetaData->SetValue(NewProp_SweepResult, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADCollisionEventSeComponent_OnComponentHit()
	{
		struct SQEXSEADCollisionEventSeComponent_eventOnComponentHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADCollisionEventSeComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnComponentHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00C20401, 65535, sizeof(SQEXSEADCollisionEventSeComponent_eventOnComponentHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hit, SQEXSEADCollisionEventSeComponent_eventOnComponentHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, SQEXSEADCollisionEventSeComponent_eventOnComponentHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, SQEXSEADCollisionEventSeComponent_eventOnComponentHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, SQEXSEADCollisionEventSeComponent_eventOnComponentHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_HitComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitComponent, SQEXSEADCollisionEventSeComponent_eventOnComponentHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADCollisionEventSeComponent.h"));
			MetaData->SetValue(NewProp_Hit, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_HitComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADCollisionEventSeComponent_OnEndOverlap()
	{
		struct SQEXSEADCollisionEventSeComponent_eventOnEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADCollisionEventSeComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnEndOverlap"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535, sizeof(SQEXSEADCollisionEventSeComponent_eventOnEndOverlap_Parms));
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, SQEXSEADCollisionEventSeComponent_eventOnEndOverlap_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, SQEXSEADCollisionEventSeComponent_eventOnEndOverlap_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, SQEXSEADCollisionEventSeComponent_eventOnEndOverlap_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComponent, SQEXSEADCollisionEventSeComponent_eventOnEndOverlap_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADCollisionEventSeComponent.h"));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADCollisionEventSeComponent_OnFracture()
	{
		struct SQEXSEADCollisionEventSeComponent_eventOnFracture_Parms
		{
			FVector HitPoint;
			FVector HitDirection;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADCollisionEventSeComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnFracture"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00C20401, 65535, sizeof(SQEXSEADCollisionEventSeComponent_eventOnFracture_Parms));
			UProperty* NewProp_HitDirection = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitDirection"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(HitDirection, SQEXSEADCollisionEventSeComponent_eventOnFracture_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_HitPoint = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitPoint"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(HitPoint, SQEXSEADCollisionEventSeComponent_eventOnFracture_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADCollisionEventSeComponent.h"));
			MetaData->SetValue(NewProp_HitDirection, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_HitPoint, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USQEXSEADCollisionEventSeComponent_NoRegister()
	{
		return USQEXSEADCollisionEventSeComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADCollisionEventSeComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADCollisionEventSeComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;

				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADCollisionEventSeComponent_OnBeginOverlap());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADCollisionEventSeComponent_OnComponentHit());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADCollisionEventSeComponent_OnEndOverlap());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADCollisionEventSeComponent_OnFracture());

				UProperty* NewProp_MyDestructibleComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MyDestructibleComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MyDestructibleComponent, USQEXSEADCollisionEventSeComponent), 0x0040000000082008, Z_Construct_UClass_UDestructibleComponent_NoRegister());
				UProperty* NewProp_MyMeshComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MyMeshComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MyMeshComponent, USQEXSEADCollisionEventSeComponent), 0x0040000000082008, Z_Construct_UClass_UMeshComponent_NoRegister());
				UProperty* NewProp_OnFractureSoundAsset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnFractureSoundAsset"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OnFractureSoundAsset, USQEXSEADCollisionEventSeComponent), 0x0010000000000015, Z_Construct_UClass_USoundBase_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bPawnOverlapOnly, USQEXSEADCollisionEventSeComponent);
				UProperty* NewProp_bPawnOverlapOnly = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bPawnOverlapOnly"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bPawnOverlapOnly, USQEXSEADCollisionEventSeComponent), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bPawnOverlapOnly, USQEXSEADCollisionEventSeComponent), sizeof(uint8), false);
				UProperty* NewProp_OnEndOverlapSoundAsset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnEndOverlapSoundAsset"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OnEndOverlapSoundAsset, USQEXSEADCollisionEventSeComponent), 0x0010000000000015, Z_Construct_UClass_USoundBase_NoRegister());
				UProperty* NewProp_OnBeginOverlapSoundAsset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnBeginOverlapSoundAsset"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OnBeginOverlapSoundAsset, USQEXSEADCollisionEventSeComponent), 0x0010000000000015, Z_Construct_UClass_USoundBase_NoRegister());
				UProperty* NewProp_HitDistanceThreshold = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HitDistanceThreshold"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(HitDistanceThreshold, USQEXSEADCollisionEventSeComponent), 0x0010000000000001);
				UProperty* NewProp_OnPawnHitSoundAsset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnPawnHitSoundAsset"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OnPawnHitSoundAsset, USQEXSEADCollisionEventSeComponent), 0x0010000000000015, Z_Construct_UClass_USoundBase_NoRegister());
				UProperty* NewProp_OnHitSoundAsset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnHitSoundAsset"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OnHitSoundAsset, USQEXSEADCollisionEventSeComponent), 0x0010000000000015, Z_Construct_UClass_USoundBase_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADCollisionEventSeComponent_OnBeginOverlap(), "OnBeginOverlap"); // 3658833184
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADCollisionEventSeComponent_OnComponentHit(), "OnComponentHit"); // 4144808452
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADCollisionEventSeComponent_OnEndOverlap(), "OnEndOverlap"); // 478130660
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADCollisionEventSeComponent_OnFracture(), "OnFracture"); // 3542514036
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADCollisionEventSeComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADCollisionEventSeComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADCollisionEventSeComponent.h"));
				MetaData->SetValue(NewProp_MyDestructibleComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MyDestructibleComponent, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADCollisionEventSeComponent.h"));
				MetaData->SetValue(NewProp_MyMeshComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MyMeshComponent, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADCollisionEventSeComponent.h"));
				MetaData->SetValue(NewProp_OnFractureSoundAsset, TEXT("Category"), TEXT("SQEXSEADCollisionEventSeComponent"));
				MetaData->SetValue(NewProp_OnFractureSoundAsset, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADCollisionEventSeComponent.h"));
				MetaData->SetValue(NewProp_bPawnOverlapOnly, TEXT("Category"), TEXT("SQEXSEADCollisionEventSeComponent"));
				MetaData->SetValue(NewProp_bPawnOverlapOnly, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADCollisionEventSeComponent.h"));
				MetaData->SetValue(NewProp_OnEndOverlapSoundAsset, TEXT("Category"), TEXT("SQEXSEADCollisionEventSeComponent"));
				MetaData->SetValue(NewProp_OnEndOverlapSoundAsset, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADCollisionEventSeComponent.h"));
				MetaData->SetValue(NewProp_OnBeginOverlapSoundAsset, TEXT("Category"), TEXT("SQEXSEADCollisionEventSeComponent"));
				MetaData->SetValue(NewProp_OnBeginOverlapSoundAsset, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADCollisionEventSeComponent.h"));
				MetaData->SetValue(NewProp_HitDistanceThreshold, TEXT("Category"), TEXT("SQEXSEADCollisionEventSeComponent"));
				MetaData->SetValue(NewProp_HitDistanceThreshold, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADCollisionEventSeComponent.h"));
				MetaData->SetValue(NewProp_OnPawnHitSoundAsset, TEXT("Category"), TEXT("SQEXSEADCollisionEventSeComponent"));
				MetaData->SetValue(NewProp_OnPawnHitSoundAsset, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADCollisionEventSeComponent.h"));
				MetaData->SetValue(NewProp_OnHitSoundAsset, TEXT("Category"), TEXT("SQEXSEADCollisionEventSeComponent"));
				MetaData->SetValue(NewProp_OnHitSoundAsset, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADCollisionEventSeComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADCollisionEventSeComponent, 2422362274);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADCollisionEventSeComponent(Z_Construct_UClass_USQEXSEADCollisionEventSeComponent, &USQEXSEADCollisionEventSeComponent::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADCollisionEventSeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADCollisionEventSeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
