// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MaterialSwitcher.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialSwitcher() {}
// Cross Module References
	SCRIPTERWORKSHOP_API UClass* Z_Construct_UClass_UMaterialSwitcher_NoRegister();
	SCRIPTERWORKSHOP_API UClass* Z_Construct_UClass_UMaterialSwitcher();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ScripterWorkshop();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
// End Cross Module References
	void UMaterialSwitcher::StaticRegisterNativesUMaterialSwitcher()
	{
	}
	UClass* Z_Construct_UClass_UMaterialSwitcher_NoRegister()
	{
		return UMaterialSwitcher::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialSwitcher()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_ScripterWorkshop();
			OuterClass = UMaterialSwitcher::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;


				UProperty* NewProp_MeshToPaint = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MeshToPaint"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MeshToPaint, UMaterialSwitcher), 0x0010000000000001, Z_Construct_UClass_AStaticMeshActor_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<UMaterialSwitcher> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MaterialSwitcher.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MaterialSwitcher.h"));
				MetaData->SetValue(NewProp_MeshToPaint, TEXT("Category"), TEXT("MaterialSwitcher"));
				MetaData->SetValue(NewProp_MeshToPaint, TEXT("ModuleRelativePath"), TEXT("MaterialSwitcher.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialSwitcher, 562311863);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialSwitcher(Z_Construct_UClass_UMaterialSwitcher, &UMaterialSwitcher::StaticClass, TEXT("/Script/ScripterWorkshop"), TEXT("UMaterialSwitcher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialSwitcher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
