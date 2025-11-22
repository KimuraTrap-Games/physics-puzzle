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
ENGINE_API UClass* Z_Construct_UClass_AActor();
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
		{ "IncludePath", "BallActor.h" },
		{ "ModuleRelativePath", "BallActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABallActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABallActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PhysicsPuzzleMaze,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABallActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABallActor_Statics::ClassParams = {
	&ABallActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_ABallActor, ABallActor::StaticClass, TEXT("ABallActor"), &Z_Registration_Info_UClass_ABallActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABallActor), 755907838U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_scott_Desktop_GameDevProjects_physics_puzzle_PhysicsPuzzleMaze_Source_PhysicsPuzzleMaze_BallActor_h__Script_PhysicsPuzzleMaze_4201643930(TEXT("/Script/PhysicsPuzzleMaze"),
	Z_CompiledInDeferFile_FID_Users_scott_Desktop_GameDevProjects_physics_puzzle_PhysicsPuzzleMaze_Source_PhysicsPuzzleMaze_BallActor_h__Script_PhysicsPuzzleMaze_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_scott_Desktop_GameDevProjects_physics_puzzle_PhysicsPuzzleMaze_Source_PhysicsPuzzleMaze_BallActor_h__Script_PhysicsPuzzleMaze_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
