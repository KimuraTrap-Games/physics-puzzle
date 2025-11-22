// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlatformPlayerController.h"

#ifdef PHYSICSPUZZLEMAZE_PlatformPlayerController_generated_h
#error "PlatformPlayerController.generated.h already included, missing '#pragma once' in PlatformPlayerController.h"
#endif
#define PHYSICSPUZZLEMAZE_PlatformPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APlatformPlayerController ************************************************
PHYSICSPUZZLEMAZE_API UClass* Z_Construct_UClass_APlatformPlayerController_NoRegister();

#define FID_Users_scott_Desktop_GameDevProjects_physics_puzzle_PhysicsPuzzleMaze_Source_PhysicsPuzzleMaze_PlatformPlayerController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlatformPlayerController(); \
	friend struct Z_Construct_UClass_APlatformPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PHYSICSPUZZLEMAZE_API UClass* Z_Construct_UClass_APlatformPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(APlatformPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysicsPuzzleMaze"), Z_Construct_UClass_APlatformPlayerController_NoRegister) \
	DECLARE_SERIALIZER(APlatformPlayerController)


#define FID_Users_scott_Desktop_GameDevProjects_physics_puzzle_PhysicsPuzzleMaze_Source_PhysicsPuzzleMaze_PlatformPlayerController_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlatformPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	APlatformPlayerController(APlatformPlayerController&&) = delete; \
	APlatformPlayerController(const APlatformPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlatformPlayerController) \
	NO_API virtual ~APlatformPlayerController();


#define FID_Users_scott_Desktop_GameDevProjects_physics_puzzle_PhysicsPuzzleMaze_Source_PhysicsPuzzleMaze_PlatformPlayerController_h_10_PROLOG
#define FID_Users_scott_Desktop_GameDevProjects_physics_puzzle_PhysicsPuzzleMaze_Source_PhysicsPuzzleMaze_PlatformPlayerController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_scott_Desktop_GameDevProjects_physics_puzzle_PhysicsPuzzleMaze_Source_PhysicsPuzzleMaze_PlatformPlayerController_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_scott_Desktop_GameDevProjects_physics_puzzle_PhysicsPuzzleMaze_Source_PhysicsPuzzleMaze_PlatformPlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APlatformPlayerController;

// ********** End Class APlatformPlayerController **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_scott_Desktop_GameDevProjects_physics_puzzle_PhysicsPuzzleMaze_Source_PhysicsPuzzleMaze_PlatformPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
