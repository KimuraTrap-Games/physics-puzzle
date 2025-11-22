// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsPuzzleMaze/PlatformActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlatformActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PHYSICSPUZZLEMAZE_API UClass* Z_Construct_UClass_APlatformActor();
PHYSICSPUZZLEMAZE_API UClass* Z_Construct_UClass_APlatformActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_PhysicsPuzzleMaze();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APlatformActor ***********************************************************
void APlatformActor::StaticRegisterNativesAPlatformActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APlatformActor;
UClass* APlatformActor::GetPrivateStaticClass()
{
	using TClass = APlatformActor;
	if (!Z_Registration_Info_UClass_APlatformActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlatformActor"),
			Z_Registration_Info_UClass_APlatformActor.InnerSingleton,
			StaticRegisterNativesAPlatformActor,
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
	return Z_Registration_Info_UClass_APlatformActor.InnerSingleton;
}
UClass* Z_Construct_UClass_APlatformActor_NoRegister()
{
	return APlatformActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlatformActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlatformActor.h" },
		{ "ModuleRelativePath", "PlatformActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatfromMesh_MetaData[] = {
		{ "Category", "PlatformActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Platform mesh\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlatformActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Platform mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardInput_MetaData[] = {
		{ "Category", "Tilt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tilt variables\n" },
#endif
		{ "ModuleRelativePath", "PlatformActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tilt variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightInput_MetaData[] = {
		{ "Category", "Tilt" },
		{ "ModuleRelativePath", "PlatformActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TiltSpeed_MetaData[] = {
		{ "Category", "Tilt" },
		{ "ModuleRelativePath", "PlatformActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTiltAngle_MetaData[] = {
		{ "Category", "Tilt" },
		{ "ModuleRelativePath", "PlatformActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlatfromMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardInput;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightInput;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TiltSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTiltAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformActor_Statics::NewProp_PlatfromMesh = { "PlatfromMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformActor, PlatfromMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatfromMesh_MetaData), NewProp_PlatfromMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlatformActor_Statics::NewProp_ForwardInput = { "ForwardInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformActor, ForwardInput), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardInput_MetaData), NewProp_ForwardInput_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlatformActor_Statics::NewProp_RightInput = { "RightInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformActor, RightInput), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightInput_MetaData), NewProp_RightInput_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlatformActor_Statics::NewProp_TiltSpeed = { "TiltSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformActor, TiltSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TiltSpeed_MetaData), NewProp_TiltSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlatformActor_Statics::NewProp_MaxTiltAngle = { "MaxTiltAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformActor, MaxTiltAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTiltAngle_MetaData), NewProp_MaxTiltAngle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatformActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformActor_Statics::NewProp_PlatfromMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformActor_Statics::NewProp_ForwardInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformActor_Statics::NewProp_RightInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformActor_Statics::NewProp_TiltSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformActor_Statics::NewProp_MaxTiltAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlatformActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PhysicsPuzzleMaze,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlatformActor_Statics::ClassParams = {
	&APlatformActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlatformActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlatformActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APlatformActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlatformActor()
{
	if (!Z_Registration_Info_UClass_APlatformActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlatformActor.OuterSingleton, Z_Construct_UClass_APlatformActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlatformActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformActor);
APlatformActor::~APlatformActor() {}
// ********** End Class APlatformActor *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_scott_Desktop_GameDevProjects_physics_puzzle_PhysicsPuzzleMaze_Source_PhysicsPuzzleMaze_PlatformActor_h__Script_PhysicsPuzzleMaze_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlatformActor, APlatformActor::StaticClass, TEXT("APlatformActor"), &Z_Registration_Info_UClass_APlatformActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlatformActor), 1416106306U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_scott_Desktop_GameDevProjects_physics_puzzle_PhysicsPuzzleMaze_Source_PhysicsPuzzleMaze_PlatformActor_h__Script_PhysicsPuzzleMaze_3974284868(TEXT("/Script/PhysicsPuzzleMaze"),
	Z_CompiledInDeferFile_FID_Users_scott_Desktop_GameDevProjects_physics_puzzle_PhysicsPuzzleMaze_Source_PhysicsPuzzleMaze_PlatformActor_h__Script_PhysicsPuzzleMaze_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_scott_Desktop_GameDevProjects_physics_puzzle_PhysicsPuzzleMaze_Source_PhysicsPuzzleMaze_PlatformActor_h__Script_PhysicsPuzzleMaze_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
