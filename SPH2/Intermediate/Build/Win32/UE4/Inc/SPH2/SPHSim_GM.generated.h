// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AParticle;
#ifdef SPH2_SPHSim_GM_generated_h
#error "SPHSim_GM.generated.h already included, missing '#pragma once' in SPHSim_GM.h"
#endif
#define SPH2_SPHSim_GM_generated_h

#define SPH2_Source_SPH2_SPHSim_GM_h_16_GENERATED_BODY \
	friend SPH2_API class UScriptStruct* Z_Construct_UScriptStruct_FNestedArray(); \
	SPH2_API static class UScriptStruct* StaticStruct();


#define SPH2_Source_SPH2_SPHSim_GM_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execpopParticleFromGrid) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->popParticleFromGrid(Z_Param_idx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetGrid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setGrid(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetH) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_h); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setH(Z_Param_h); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComputeForces) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ComputeForces(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComputeDensities) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ComputeDensities(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructGrid) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_numParticles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConstructGrid(Z_Param_numParticles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckParticlePlanesCollision) \
	{ \
		P_GET_OBJECT(AParticle,Z_Param_particle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckParticlePlanesCollision(Z_Param_particle); \
		P_NATIVE_END; \
	}


#define SPH2_Source_SPH2_SPHSim_GM_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execpopParticleFromGrid) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->popParticleFromGrid(Z_Param_idx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetGrid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setGrid(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetH) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_h); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setH(Z_Param_h); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComputeForces) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ComputeForces(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComputeDensities) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ComputeDensities(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructGrid) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_numParticles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConstructGrid(Z_Param_numParticles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckParticlePlanesCollision) \
	{ \
		P_GET_OBJECT(AParticle,Z_Param_particle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckParticlePlanesCollision(Z_Param_particle); \
		P_NATIVE_END; \
	}


#define SPH2_Source_SPH2_SPHSim_GM_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASPHSim_GM(); \
	friend SPH2_API class UClass* Z_Construct_UClass_ASPHSim_GM(); \
public: \
	DECLARE_CLASS(ASPHSim_GM, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/SPH2"), NO_API) \
	DECLARE_SERIALIZER(ASPHSim_GM) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SPH2_Source_SPH2_SPHSim_GM_h_32_INCLASS \
private: \
	static void StaticRegisterNativesASPHSim_GM(); \
	friend SPH2_API class UClass* Z_Construct_UClass_ASPHSim_GM(); \
public: \
	DECLARE_CLASS(ASPHSim_GM, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/SPH2"), NO_API) \
	DECLARE_SERIALIZER(ASPHSim_GM) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SPH2_Source_SPH2_SPHSim_GM_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASPHSim_GM(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPHSim_GM) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPHSim_GM); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPHSim_GM); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPHSim_GM(ASPHSim_GM&&); \
	NO_API ASPHSim_GM(const ASPHSim_GM&); \
public:


#define SPH2_Source_SPH2_SPHSim_GM_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPHSim_GM(ASPHSim_GM&&); \
	NO_API ASPHSim_GM(const ASPHSim_GM&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPHSim_GM); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPHSim_GM); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASPHSim_GM)


#define SPH2_Source_SPH2_SPHSim_GM_h_32_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__grid() { return STRUCT_OFFSET(ASPHSim_GM, grid); } \
	FORCEINLINE static uint32 __PPO__cellSize() { return STRUCT_OFFSET(ASPHSim_GM, cellSize); } \
	FORCEINLINE static uint32 __PPO__h() { return STRUCT_OFFSET(ASPHSim_GM, h); } \
	FORCEINLINE static uint32 __PPO__h2() { return STRUCT_OFFSET(ASPHSim_GM, h2); } \
	FORCEINLINE static uint32 __PPO__WPoly6C() { return STRUCT_OFFSET(ASPHSim_GM, WPoly6C); } \
	FORCEINLINE static uint32 __PPO__Lapl_WViscosityC() { return STRUCT_OFFSET(ASPHSim_GM, Lapl_WViscosityC); } \
	FORCEINLINE static uint32 __PPO__Grad_WSpikeC() { return STRUCT_OFFSET(ASPHSim_GM, Grad_WSpikeC); }


#define SPH2_Source_SPH2_SPHSim_GM_h_29_PROLOG
#define SPH2_Source_SPH2_SPHSim_GM_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SPH2_Source_SPH2_SPHSim_GM_h_32_PRIVATE_PROPERTY_OFFSET \
	SPH2_Source_SPH2_SPHSim_GM_h_32_RPC_WRAPPERS \
	SPH2_Source_SPH2_SPHSim_GM_h_32_INCLASS \
	SPH2_Source_SPH2_SPHSim_GM_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SPH2_Source_SPH2_SPHSim_GM_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SPH2_Source_SPH2_SPHSim_GM_h_32_PRIVATE_PROPERTY_OFFSET \
	SPH2_Source_SPH2_SPHSim_GM_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	SPH2_Source_SPH2_SPHSim_GM_h_32_INCLASS_NO_PURE_DECLS \
	SPH2_Source_SPH2_SPHSim_GM_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SPH2_Source_SPH2_SPHSim_GM_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
