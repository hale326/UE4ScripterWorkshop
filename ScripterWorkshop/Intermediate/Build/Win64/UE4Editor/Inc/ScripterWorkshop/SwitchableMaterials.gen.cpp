// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SwitchableMaterials.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwitchableMaterials() {}
// Cross Module References
	SCRIPTERWORKSHOP_API UClass* Z_Construct_UClass_USwitchableMaterials_NoRegister();
	SCRIPTERWORKSHOP_API UClass* Z_Construct_UClass_USwitchableMaterials();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ScripterWorkshop();
// End Cross Module References
	void USwitchableMaterials::StaticRegisterNativesUSwitchableMaterials()
	{
	}
	UClass* Z_Construct_UClass_USwitchableMaterials_NoRegister()
	{
		return USwitchableMaterials::StaticClass();
	}
	UClass* Z_Construct_UClass_USwitchableMaterials()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_ScripterWorkshop();
			OuterClass = USwitchableMaterials::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<USwitchableMaterials> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SwitchableMaterials.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("SwitchableMaterials.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USwitchableMaterials, 915460105);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USwitchableMaterials(Z_Construct_UClass_USwitchableMaterials, &USwitchableMaterials::StaticClass, TEXT("/Script/ScripterWorkshop"), TEXT("USwitchableMaterials"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USwitchableMaterials);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
