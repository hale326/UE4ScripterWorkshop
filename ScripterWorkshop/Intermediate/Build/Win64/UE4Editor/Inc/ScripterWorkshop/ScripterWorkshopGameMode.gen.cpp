// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ScripterWorkshopGameMode.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScripterWorkshopGameMode() {}
// Cross Module References
	SCRIPTERWORKSHOP_API UClass* Z_Construct_UClass_AScripterWorkshopGameMode_NoRegister();
	SCRIPTERWORKSHOP_API UClass* Z_Construct_UClass_AScripterWorkshopGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ScripterWorkshop();
// End Cross Module References
	void AScripterWorkshopGameMode::StaticRegisterNativesAScripterWorkshopGameMode()
	{
	}
	UClass* Z_Construct_UClass_AScripterWorkshopGameMode_NoRegister()
	{
		return AScripterWorkshopGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AScripterWorkshopGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_ScripterWorkshop();
			OuterClass = AScripterWorkshopGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<AScripterWorkshopGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ScripterWorkshopGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ScripterWorkshopGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AScripterWorkshopGameMode, 2296339328);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScripterWorkshopGameMode(Z_Construct_UClass_AScripterWorkshopGameMode, &AScripterWorkshopGameMode::StaticClass, TEXT("/Script/ScripterWorkshop"), TEXT("AScripterWorkshopGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScripterWorkshopGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
