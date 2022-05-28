// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Mercuna3DMovementComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMercuna3DMovementComponent() {}
// Cross Module References
	MERCUNA3DMOVEMENT_API UFunction* Z_Construct_UFunction_UMercuna3DMovementComponent_GetLocalVelocity();
	MERCUNA3DMOVEMENT_API UClass* Z_Construct_UClass_UMercuna3DMovementComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MERCUNA3DMOVEMENT_API UClass* Z_Construct_UClass_UMercuna3DMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Mercuna3DMovement();
	MERCUNA3DMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FMercuna3DMovementProperties();
	MERCUNA3DMOVEMENT_API UClass* Z_Construct_UClass_UMercuna3DMovementInterface_NoRegister();
// End Cross Module References
	void UMercuna3DMovementComponent::StaticRegisterNativesUMercuna3DMovementComponent()
	{
		UClass* Class = UMercuna3DMovementComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetLocalVelocity", (Native)&UMercuna3DMovementComponent::execGetLocalVelocity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UMercuna3DMovementComponent_GetLocalVelocity()
	{
		struct Mercuna3DMovementComponent_eventGetLocalVelocity_Parms
		{
			FVector ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMercuna3DMovementComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetLocalVelocity"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54820401, 65535, sizeof(Mercuna3DMovementComponent_eventGetLocalVelocity_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, Mercuna3DMovementComponent_eventGetLocalVelocity_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Mercuna3DMovementComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMercuna3DMovementComponent_NoRegister()
	{
		return UMercuna3DMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UMercuna3DMovementComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UPawnMovementComponent();
			Z_Construct_UPackage__Script_Mercuna3DMovement();
			OuterClass = UMercuna3DMovementComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00084u;

				OuterClass->LinkChild(Z_Construct_UFunction_UMercuna3DMovementComponent_GetLocalVelocity());

				UProperty* NewProp_AngularVelocity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AngularVelocity"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AngularVelocity, UMercuna3DMovementComponent), 0x0020080000002014, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_Acceleration = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Acceleration"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Acceleration, UMercuna3DMovementComponent), 0x0020080000002014, Z_Construct_UScriptStruct_FVector());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bPositionCorrected, UMercuna3DMovementComponent);
				UProperty* NewProp_bPositionCorrected = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bPositionCorrected"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bPositionCorrected, UMercuna3DMovementComponent), 0x0020080000002000, CPP_BOOL_PROPERTY_BITMASK(bPositionCorrected, UMercuna3DMovementComponent), sizeof(uint8), false);
				UProperty* NewProp_MovementProperties = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MovementProperties"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(MovementProperties, UMercuna3DMovementComponent), 0x0020080000010015, Z_Construct_UScriptStruct_FMercuna3DMovementProperties());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercuna3DMovementComponent_GetLocalVelocity(), "GetLocalVelocity"); // 785471912
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UMercuna3DMovementComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->Interfaces.Add(FImplementedInterface(Z_Construct_UClass_UMercuna3DMovementInterface_NoRegister(), VTABLE_OFFSET(UMercuna3DMovementComponent, IMercuna3DMovementInterface), false ));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Mercuna3DMovementComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Mercuna3DMovementComponent.h"));
				MetaData->SetValue(NewProp_AngularVelocity, TEXT("Category"), TEXT("Mercuna3DMovementComponent"));
				MetaData->SetValue(NewProp_AngularVelocity, TEXT("ModuleRelativePath"), TEXT("Public/Mercuna3DMovementComponent.h"));
				MetaData->SetValue(NewProp_Acceleration, TEXT("Category"), TEXT("Mercuna3DMovementComponent"));
				MetaData->SetValue(NewProp_Acceleration, TEXT("ModuleRelativePath"), TEXT("Public/Mercuna3DMovementComponent.h"));
				MetaData->SetValue(NewProp_bPositionCorrected, TEXT("ModuleRelativePath"), TEXT("Public/Mercuna3DMovementComponent.h"));
				MetaData->SetValue(NewProp_MovementProperties, TEXT("Category"), TEXT("Mercuna3DMovementComponent"));
				MetaData->SetValue(NewProp_MovementProperties, TEXT("ModuleRelativePath"), TEXT("Public/Mercuna3DMovementComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMercuna3DMovementComponent, 1985210945);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMercuna3DMovementComponent(Z_Construct_UClass_UMercuna3DMovementComponent, &UMercuna3DMovementComponent::StaticClass, TEXT("/Script/Mercuna3DMovement"), TEXT("UMercuna3DMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMercuna3DMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
