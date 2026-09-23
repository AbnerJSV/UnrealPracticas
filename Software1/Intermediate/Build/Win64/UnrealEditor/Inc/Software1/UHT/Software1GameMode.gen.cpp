// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Software1GameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSoftware1GameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SOFTWARE1_API UClass* Z_Construct_UClass_ASoftware1GameMode();
SOFTWARE1_API UClass* Z_Construct_UClass_ASoftware1GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Software1();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASoftware1GameMode *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ASoftware1GameMode;
UClass* ASoftware1GameMode::GetPrivateStaticClass()
{
	using TClass = ASoftware1GameMode;
	if (!Z_Registration_Info_UClass_ASoftware1GameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Software1GameMode"),
			Z_Registration_Info_UClass_ASoftware1GameMode.InnerSingleton,
			StaticRegisterNativesASoftware1GameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ASoftware1GameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ASoftware1GameMode_NoRegister()
{
	return ASoftware1GameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASoftware1GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple Game Mode for a top-down perspective game\n *  Sets the default gameplay framework classes\n *  Check the Blueprint derived class for the set values\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Software1GameMode.h" },
		{ "ModuleRelativePath", "Software1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple Game Mode for a top-down perspective game\nSets the default gameplay framework classes\nCheck the Blueprint derived class for the set values" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ASoftware1GameMode constinit property declarations ***********************
// ********** End Class ASoftware1GameMode constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoftware1GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ASoftware1GameMode_Statics
UObject* (*const Z_Construct_UClass_ASoftware1GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Software1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoftware1GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASoftware1GameMode_Statics::ClassParams = {
	&ASoftware1GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASoftware1GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASoftware1GameMode_Statics::Class_MetaDataParams)
};
void ASoftware1GameMode::StaticRegisterNativesASoftware1GameMode()
{
}
UClass* Z_Construct_UClass_ASoftware1GameMode()
{
	if (!Z_Registration_Info_UClass_ASoftware1GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASoftware1GameMode.OuterSingleton, Z_Construct_UClass_ASoftware1GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASoftware1GameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ASoftware1GameMode);
ASoftware1GameMode::~ASoftware1GameMode() {}
// ********** End Class ASoftware1GameMode *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_multi_Documents_Unreal_Projects_Software1_Source_Software1_Software1GameMode_h__Script_Software1_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASoftware1GameMode, ASoftware1GameMode::StaticClass, TEXT("ASoftware1GameMode"), &Z_Registration_Info_UClass_ASoftware1GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASoftware1GameMode), 4268541180U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_multi_Documents_Unreal_Projects_Software1_Source_Software1_Software1GameMode_h__Script_Software1_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_multi_Documents_Unreal_Projects_Software1_Source_Software1_Software1GameMode_h__Script_Software1_1797003398{
	TEXT("/Script/Software1"),
	Z_CompiledInDeferFile_FID_Users_multi_Documents_Unreal_Projects_Software1_Source_Software1_Software1GameMode_h__Script_Software1_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_multi_Documents_Unreal_Projects_Software1_Source_Software1_Software1GameMode_h__Script_Software1_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
