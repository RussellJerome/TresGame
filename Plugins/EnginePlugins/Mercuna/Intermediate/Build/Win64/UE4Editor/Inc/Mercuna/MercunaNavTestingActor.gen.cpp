// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MercunaNavTestingActor.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMercunaNavTestingActor() {}
// Cross Module References
	MERCUNA_API UFunction* Z_Construct_UFunction_AMercunaNavTestingActor_OnPathUpdate();
	MERCUNA_API UClass* Z_Construct_UClass_AMercunaNavTestingActor();
	MERCUNA_API UEnum* Z_Construct_UEnum_Mercuna_EMercunaPathEvent();
	MERCUNA_API UClass* Z_Construct_UClass_AMercunaNavTestingActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
	MERCUNA_API UClass* Z_Construct_UClass_UMercunaPath_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void AMercunaNavTestingActor::StaticRegisterNativesAMercunaNavTestingActor()
	{
		UClass* Class = AMercunaNavTestingActor::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnPathUpdate", (Native)&AMercunaNavTestingActor::execOnPathUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AMercunaNavTestingActor_OnPathUpdate()
	{
		struct MercunaNavTestingActor_eventOnPathUpdate_Parms
		{
			TEnumAsByte<EMercunaPathEvent::Type> PathEvent;
		};
		UObject* Outer = Z_Construct_UClass_AMercunaNavTestingActor();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnPathUpdate"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00080401, 65535, sizeof(MercunaNavTestingActor_eventOnPathUpdate_Parms));
			UProperty* NewProp_PathEvent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PathEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(PathEvent, MercunaNavTestingActor_eventOnPathUpdate_Parms), 0x0010000000000080, Z_Construct_UEnum_Mercuna_EMercunaPathEvent());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavTestingActor.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMercunaNavTestingActor_NoRegister()
	{
		return AMercunaNavTestingActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AMercunaNavTestingActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Mercuna();
			OuterClass = AMercunaNavTestingActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AMercunaNavTestingActor_OnPathUpdate());

				UProperty* NewProp_Path = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Path"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Path, AMercunaNavTestingActor), 0x0020080000002000, Z_Construct_UClass_UMercunaPath_NoRegister());
				UProperty* NewProp_SphereComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SphereComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SphereComponent, AMercunaNavTestingActor), 0x0020080000080008, Z_Construct_UClass_USphereComponent_NoRegister());
				UProperty* NewProp_PathNodesUsed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PathNodesUsed"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PathNodesUsed, AMercunaNavTestingActor), 0x0010000000022015);
				UProperty* NewProp_PathFindTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PathFindTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PathFindTime, AMercunaNavTestingActor), 0x0010000000022015);
				UProperty* NewProp_PathSteps = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PathSteps"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PathSteps, AMercunaNavTestingActor), 0x0010000000022015);
				UProperty* NewProp_PathLength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PathLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PathLength, AMercunaNavTestingActor), 0x0010000000022015);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bPathIsOutOfNodes, AMercunaNavTestingActor);
				UProperty* NewProp_bPathIsOutOfNodes = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bPathIsOutOfNodes"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bPathIsOutOfNodes, AMercunaNavTestingActor), 0x0010000000022015, CPP_BOOL_PROPERTY_BITMASK(bPathIsOutOfNodes, AMercunaNavTestingActor), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bPathIsPartial, AMercunaNavTestingActor);
				UProperty* NewProp_bPathIsPartial = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bPathIsPartial"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bPathIsPartial, AMercunaNavTestingActor), 0x0010000000022015, CPP_BOOL_PROPERTY_BITMASK(bPathIsPartial, AMercunaNavTestingActor), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bPathExist, AMercunaNavTestingActor);
				UProperty* NewProp_bPathExist = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bPathExist"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bPathExist, AMercunaNavTestingActor), 0x0010000000022015, CPP_BOOL_PROPERTY_BITMASK(bPathExist, AMercunaNavTestingActor), sizeof(uint8), false);
				UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, AMercunaNavTestingActor), 0x0010000000000001, Z_Construct_UClass_AMercunaNavTestingActor_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSearchStart, AMercunaNavTestingActor);
				UProperty* NewProp_bSearchStart = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bSearchStart"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSearchStart, AMercunaNavTestingActor), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bSearchStart, AMercunaNavTestingActor), sizeof(uint8), false);
				UProperty* NewProp_Radius = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Radius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Radius, AMercunaNavTestingActor), 0x0010000000000001);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMercunaNavTestingActor_OnPathUpdate(), "OnPathUpdate"); // 3634626870
				static TCppClassTypeInfo<TCppClassTypeTraits<AMercunaNavTestingActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MercunaNavTestingActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavTestingActor.h"));
				MetaData->SetValue(NewProp_Path, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavTestingActor.h"));
				MetaData->SetValue(NewProp_SphereComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_SphereComponent, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavTestingActor.h"));
				MetaData->SetValue(NewProp_PathNodesUsed, TEXT("Category"), TEXT("MercunaNavTestingActor"));
				MetaData->SetValue(NewProp_PathNodesUsed, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavTestingActor.h"));
				MetaData->SetValue(NewProp_PathFindTime, TEXT("Category"), TEXT("MercunaNavTestingActor"));
				MetaData->SetValue(NewProp_PathFindTime, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavTestingActor.h"));
				MetaData->SetValue(NewProp_PathSteps, TEXT("Category"), TEXT("MercunaNavTestingActor"));
				MetaData->SetValue(NewProp_PathSteps, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavTestingActor.h"));
				MetaData->SetValue(NewProp_PathLength, TEXT("Category"), TEXT("MercunaNavTestingActor"));
				MetaData->SetValue(NewProp_PathLength, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavTestingActor.h"));
				MetaData->SetValue(NewProp_bPathIsOutOfNodes, TEXT("Category"), TEXT("MercunaNavTestingActor"));
				MetaData->SetValue(NewProp_bPathIsOutOfNodes, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavTestingActor.h"));
				MetaData->SetValue(NewProp_bPathIsPartial, TEXT("Category"), TEXT("MercunaNavTestingActor"));
				MetaData->SetValue(NewProp_bPathIsPartial, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavTestingActor.h"));
				MetaData->SetValue(NewProp_bPathExist, TEXT("Category"), TEXT("MercunaNavTestingActor"));
				MetaData->SetValue(NewProp_bPathExist, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavTestingActor.h"));
				MetaData->SetValue(NewProp_OtherActor, TEXT("Category"), TEXT("MercunaNavTestingActor"));
				MetaData->SetValue(NewProp_OtherActor, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavTestingActor.h"));
				MetaData->SetValue(NewProp_bSearchStart, TEXT("Category"), TEXT("MercunaNavTestingActor"));
				MetaData->SetValue(NewProp_bSearchStart, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavTestingActor.h"));
				MetaData->SetValue(NewProp_Radius, TEXT("Category"), TEXT("MercunaNavTestingActor"));
				MetaData->SetValue(NewProp_Radius, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavTestingActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMercunaNavTestingActor, 174486692);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMercunaNavTestingActor(Z_Construct_UClass_AMercunaNavTestingActor, &AMercunaNavTestingActor::StaticClass, TEXT("/Script/Mercuna"), TEXT("AMercunaNavTestingActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMercunaNavTestingActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
