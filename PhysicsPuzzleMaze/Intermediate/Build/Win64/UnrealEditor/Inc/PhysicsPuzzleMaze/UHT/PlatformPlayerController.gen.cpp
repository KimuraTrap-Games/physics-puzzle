// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsPuzzleMaze/PlatformPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlatformPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
PHYSICSPUZZLEMAZE_API UClass* Z_Construct_UClass_APlatformActor_NoRegister();
PHYSICSPUZZLEMAZE_API UClass* Z_Construct_UClass_APlatformPlayerController();
PHYSICSPUZZLEMAZE_API UClass* Z_Construct_UClass_APlatformPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_PhysicsPuzzleMaze();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APlatformPlayerController ************************************************
void APlatformPlayerController::StaticRegisterNativesAPlatformPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APlatformPlayerController;
UClass* APlatformPlayerController::GetPrivateStaticClass()
{
	using TClass = APlatformPlayerController;
	if (!Z_Registration_Info_UClass_APlatformPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlatformPlayerController"),
			Z_Registration_Info_UClass_APlatformPlayerController.InnerSingleton,
			StaticRegisterNativesAPlatformPlayerController,
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
	return Z_Registration_Info_UClass_APlatformPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_APlatformPlayerController_NoRegister()
{
	return APlatformPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlatformPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlatformPlayerController.h" },
		{ "ModuleRelativePath", "PlatformPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_TiltForward_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input Actions\n" },
#endif
		{ "ModuleRelativePath", "PlatformPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Actions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_TiltRight_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "PlatformPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformRef_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reference to the platform\n" },
#endif
		{ "ModuleRelativePath", "PlatformPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the platform" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_TiltForward;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_TiltRight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlatformRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformPlayerController_Statics::NewProp_IA_TiltForward = { "IA_TiltForward", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformPlayerController, IA_TiltForward), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_TiltForward_MetaData), NewProp_IA_TiltForward_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformPlayerController_Statics::NewProp_IA_TiltRight = { "IA_TiltRight", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformPlayerController, IA_TiltRight), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_TiltRight_MetaData), NewProp_IA_TiltRight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformPlayerController_Statics::NewProp_PlatformRef = { "PlatformRef", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformPlayerController, PlatformRef), Z_Construct_UClass_APlatformActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformRef_MetaData), NewProp_PlatformRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatformPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformPlayerController_Statics::NewProp_IA_TiltForward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformPlayerController_Statics::NewProp_IA_TiltRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformPlayerController_Statics::NewProp_PlatformRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlatformPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_PhysicsPuzzleMaze,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlatformPlayerController_Statics::ClassParams = {
	&APlatformPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlatformPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlatformPlayerController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_APlatformPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlatformPlayerController()
{
	if (!Z_Registration_Info_UClass_APlatformPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlatformPlayerController.OuterSingleton, Z_Construct_UClass_APlatformPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlatformPlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformPlayerController);
APlatformPlayerController::~APlatformPlayerController() {}
// ********** End Class APlatformPlayerController **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_scott_Desktop_GameDevProjects_physics_puzzle_PhysicsPuzzleMaze_Source_PhysicsPuzzleMaze_PlatformPlayerController_h__Script_PhysicsPuzzleMaze_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlatformPlayerController, APlatformPlayerController::StaticClass, TEXT("APlatformPlayerController"), &Z_Registration_Info_UClass_APlatformPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlatformPlayerController), 4046111278U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_scott_Desktop_GameDevProjects_physics_puzzle_PhysicsPuzzleMaze_Source_PhysicsPuzzleMaze_PlatformPlayerController_h__Script_PhysicsPuzzleMaze_392600391(TEXT("/Script/PhysicsPuzzleMaze"),
	Z_CompiledInDeferFile_FID_Users_scott_Desktop_GameDevProjects_physics_puzzle_PhysicsPuzzleMaze_Source_PhysicsPuzzleMaze_PlatformPlayerController_h__Script_PhysicsPuzzleMaze_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_scott_Desktop_GameDevProjects_physics_puzzle_PhysicsPuzzleMaze_Source_PhysicsPuzzleMaze_PlatformPlayerController_h__Script_PhysicsPuzzleMaze_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
