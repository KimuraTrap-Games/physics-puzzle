// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsPuzzleMaze/BallActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBallActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PHYSICSPUZZLEMAZE_API UClass* Z_Construct_UClass_ABallActor();
PHYSICSPUZZLEMAZE_API UClass* Z_Construct_UClass_ABallActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_PhysicsPuzzleMaze();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABallActor ***************************************************************
void ABallActor::StaticRegisterNativesABallActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABallActor;
UClass* ABallActor::GetPrivateStaticClass()
{
	using TClass = ABallActor;
	if (!Z_Registration_Info_UClass_ABallActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BallActor"),
			Z_Registration_Info_UClass_ABallActor.InnerSingleton,
			StaticRegisterNativesABallActor,
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
	return Z_Registration_Info_UClass_ABallActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ABallActor_NoRegister()
{
	return ABallActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABallActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BallActor.h" },
		{ "ModuleRelativePath", "BallActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BallMesh_MetaData[] = {
		{ "Category", "BallActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ball mesh\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BallActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ball mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "BallActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Spring arm for the camera\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BallActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spring arm for the camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "BallActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BallActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BallMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABallActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABallActor_Statics::NewProp_BallMesh = { "BallMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABallActor, BallMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BallMesh_MetaData), NewProp_BallMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABallActor_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABallActor, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABallActor_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABallActor, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABallActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallActor_Statics::NewProp_BallMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallActor_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallActor_Statics::NewProp_Camera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABallActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABallActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_PhysicsPuzzleMaze,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABallActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABallActor_Statics::ClassParams = {
	&ABallActor::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABallActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABallActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABallActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ABallActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABallActor()
{
	if (!Z_Registration_Info_UClass_ABallActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABallActor.OuterSingleton, Z_Construct_UClass_ABallActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABallActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABallActor);
ABallActor::~ABallActor() {}
// ********** End Class ABallActor *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_scott_Desktop_GameDevProjects_physics_puzzle_PhysicsPuzzleMaze_Source_PhysicsPuzzleMaze_BallActor_h__Script_PhysicsPuzzleMaze_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABallActor, ABallActor::StaticClass, TEXT("ABallActor"), &Z_Registration_Info_UClass_ABallActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABallActor), 2732910103U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_scott_Desktop_GameDevProjects_physics_puzzle_PhysicsPuzzleMaze_Source_PhysicsPuzzleMaze_BallActor_h__Script_PhysicsPuzzleMaze_61059496(TEXT("/Script/PhysicsPuzzleMaze"),
	Z_CompiledInDeferFile_FID_Users_scott_Desktop_GameDevProjects_physics_puzzle_PhysicsPuzzleMaze_Source_PhysicsPuzzleMaze_BallActor_h__Script_PhysicsPuzzleMaze_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_scott_Desktop_GameDevProjects_physics_puzzle_PhysicsPuzzleMaze_Source_PhysicsPuzzleMaze_BallActor_h__Script_PhysicsPuzzleMaze_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
