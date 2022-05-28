// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADPhysObjSeComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADPhysObjSeComponent() {}
// Cross Module References
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADPhysObjSeComponent_OnComponentHit();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADPhysObjSeComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADPhysObjSeComponent_StopCalculation();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADPhysObjSeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADPhysObjSeComponentSetting_NoRegister();
// End Cross Module References
	void USQEXSEADPhysObjSeComponent::StaticRegisterNativesUSQEXSEADPhysObjSeComponent()
	{
		UClass* Class = USQEXSEADPhysObjSeComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnComponentHit", (Native)&USQEXSEADPhysObjSeComponent::execOnComponentHit },
			{ "StopCalculation", (Native)&USQEXSEADPhysObjSeComponent::execStopCalculation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_USQEXSEADPhysObjSeComponent_OnComponentHit()
	{
		struct SQEXSEADPhysObjSeComponent_eventOnComponentHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADPhysObjSeComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnComponentHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00C20401, 65535, sizeof(SQEXSEADPhysObjSeComponent_eventOnComponentHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hit, SQEXSEADPhysObjSeComponent_eventOnComponentHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, SQEXSEADPhysObjSeComponent_eventOnComponentHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, SQEXSEADPhysObjSeComponent_eventOnComponentHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, SQEXSEADPhysObjSeComponent_eventOnComponentHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_HitComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitComponent, SQEXSEADPhysObjSeComponent_eventOnComponentHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADPhysObjSeComponent.h"));
			MetaData->SetValue(NewProp_Hit, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_HitComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADPhysObjSeComponent_StopCalculation()
	{
		struct SQEXSEADPhysObjSeComponent_eventStopCalculation_Parms
		{
			float StopInnerSoundsFadeTime;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADPhysObjSeComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopCalculation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535, sizeof(SQEXSEADPhysObjSeComponent_eventStopCalculation_Parms));
			UProperty* NewProp_StopInnerSoundsFadeTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("StopInnerSoundsFadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StopInnerSoundsFadeTime, SQEXSEADPhysObjSeComponent_eventStopCalculation_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADPhysObjSeComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USQEXSEADPhysObjSeComponent_NoRegister()
	{
		return USQEXSEADPhysObjSeComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADPhysObjSeComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADPhysObjSeComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;

				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADPhysObjSeComponent_OnComponentHit());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADPhysObjSeComponent_StopCalculation());

				UProperty* NewProp_VelocityAudioComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VelocityAudioComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(VelocityAudioComponent, USQEXSEADPhysObjSeComponent), 0x0040000000082008, Z_Construct_UClass_UAudioComponent_NoRegister());
				UProperty* NewProp_MyMeshComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MyMeshComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MyMeshComponent, USQEXSEADPhysObjSeComponent), 0x0040000000082008, Z_Construct_UClass_UMeshComponent_NoRegister());
				UProperty* NewProp_Setting = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Setting"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Setting, USQEXSEADPhysObjSeComponent), 0x0010000000000001, Z_Construct_UClass_USQEXSEADPhysObjSeComponentSetting_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADPhysObjSeComponent_OnComponentHit(), "OnComponentHit"); // 1702543904
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADPhysObjSeComponent_StopCalculation(), "StopCalculation"); // 2534956938
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADPhysObjSeComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADPhysObjSeComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADPhysObjSeComponent.h"));
				MetaData->SetValue(NewProp_VelocityAudioComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_VelocityAudioComponent, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADPhysObjSeComponent.h"));
				MetaData->SetValue(NewProp_MyMeshComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MyMeshComponent, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADPhysObjSeComponent.h"));
				MetaData->SetValue(NewProp_Setting, TEXT("Category"), TEXT("SQEXSEADPhysObjSeComponent"));
				MetaData->SetValue(NewProp_Setting, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADPhysObjSeComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADPhysObjSeComponent, 1753781228);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADPhysObjSeComponent(Z_Construct_UClass_USQEXSEADPhysObjSeComponent, &USQEXSEADPhysObjSeComponent::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADPhysObjSeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADPhysObjSeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
