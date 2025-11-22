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

// ********** Begin Class APlatformActor Function SetTiltInput *************************************
struct Z_Construct_UFunction_APlatformActor_SetTiltInput_Statics
{
	struct PlatformActor_eventSetTiltInput_Parms
	{
		float Forward;
		float Right;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlatformActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Forward;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Right;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlatformActor_SetTiltInput_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlatformActor_eventSetTiltInput_Parms, Forward), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlatformActor_SetTiltInput_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlatformActor_eventSetTiltInput_Parms, Right), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlatformActor_SetTiltInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformActor_SetTiltInput_Statics::NewProp_Forward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformActor_SetTiltInput_Statics::NewProp_Right,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformActor_SetTiltInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlatformActor_SetTiltInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlatformActor, nullptr, "SetTiltInput", Z_Construct_UFunction_APlatformActor_SetTiltInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformActor_SetTiltInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlatformActor_SetTiltInput_Statics::PlatformActor_eventSetTiltInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformActor_SetTiltInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlatformActor_SetTiltInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlatformActor_SetTiltInput_Statics::PlatformActor_eventSetTiltInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlatformActor_SetTiltInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlatformActor_SetTiltInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlatformActor::execSetTiltInput)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Forward);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Right);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTiltInput(Z_Param_Forward,Z_Param_Right);
	P_NATIVE_END;
}
// ********** End Class APlatformActor Function SetTiltInput ***************************************

// ********** Begin Class APlatformActor ***********************************************************
void APlatformActor::StaticRegisterNativesAPlatformActor()
{
	UClass* Class = APlatformActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetTiltInput", &APlatformActor::execSetTiltInput },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformMesh_MetaData[] = {
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlatformMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardInput;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightInput;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TiltSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTiltAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlatformActor_SetTiltInput, "SetTiltInput" }, // 2039537420
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformActor_Statics::NewProp_PlatformMesh = { "PlatformMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformActor, PlatformMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformMesh_MetaData), NewProp_PlatformMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlatformActor_Statics::NewProp_ForwardInput = { "ForwardInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformActor, ForwardInput), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardInput_MetaData), NewProp_ForwardInput_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlatformActor_Statics::NewProp_RightInput = { "RightInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformActor, RightInput), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightInput_MetaData), NewProp_RightInput_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlatformActor_Statics::NewProp_TiltSpeed = { "TiltSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformActor, TiltSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TiltSpeed_MetaData), NewProp_TiltSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlatformActor_Statics::NewProp_MaxTiltAngle = { "MaxTiltAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformActor, MaxTiltAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTiltAngle_MetaData), NewProp_MaxTiltAngle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatformActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformActor_Statics::NewProp_PlatformMesh,
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
	FuncInfo,
	Z_Construct_UClass_APlatformActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_APlatformActor, APlatformActor::StaticClass, TEXT("APlatformActor"), &Z_Registration_Info_UClass_APlatformActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlatformActor), 3355938347U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_scott_Desktop_GameDevProjects_physics_puzzle_PhysicsPuzzleMaze_Source_PhysicsPuzzleMaze_PlatformActor_h__Script_PhysicsPuzzleMaze_3064114461(TEXT("/Script/PhysicsPuzzleMaze"),
	Z_CompiledInDeferFile_FID_Users_scott_Desktop_GameDevProjects_physics_puzzle_PhysicsPuzzleMaze_Source_PhysicsPuzzleMaze_PlatformActor_h__Script_PhysicsPuzzleMaze_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_scott_Desktop_GameDevProjects_physics_puzzle_PhysicsPuzzleMaze_Source_PhysicsPuzzleMaze_PlatformActor_h__Script_PhysicsPuzzleMaze_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
