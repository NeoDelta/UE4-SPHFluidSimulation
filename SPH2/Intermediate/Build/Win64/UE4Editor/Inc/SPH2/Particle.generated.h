// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPH2_Particle_generated_h
#error "Particle.generated.h already included, missing '#pragma once' in Particle.h"
#endif
#define SPH2_Particle_generated_h

#define SPH2_Source_SPH2_Particle_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdate) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_dt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Update(Z_Param_Out_dt); \
		P_NATIVE_END; \
	}


#define SPH2_Source_SPH2_Particle_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdate) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_dt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Update(Z_Param_Out_dt); \
		P_NATIVE_END; \
	}


#define SPH2_Source_SPH2_Particle_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParticle(); \
	friend SPH2_API class UClass* Z_Construct_UClass_AParticle(); \
public: \
	DECLARE_CLASS(AParticle, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SPH2"), NO_API) \
	DECLARE_SERIALIZER(AParticle) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SPH2_Source_SPH2_Particle_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAParticle(); \
	friend SPH2_API class UClass* Z_Construct_UClass_AParticle(); \
public: \
	DECLARE_CLASS(AParticle, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SPH2"), NO_API) \
	DECLARE_SERIALIZER(AParticle) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SPH2_Source_SPH2_Particle_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParticle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParticle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParticle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParticle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParticle(AParticle&&); \
	NO_API AParticle(const AParticle&); \
public:


#define SPH2_Source_SPH2_Particle_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParticle(AParticle&&); \
	NO_API AParticle(const AParticle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParticle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParticle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AParticle)


#define SPH2_Source_SPH2_Particle_h_12_PRIVATE_PROPERTY_OFFSET
#define SPH2_Source_SPH2_Particle_h_9_PROLOG
#define SPH2_Source_SPH2_Particle_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SPH2_Source_SPH2_Particle_h_12_PRIVATE_PROPERTY_OFFSET \
	SPH2_Source_SPH2_Particle_h_12_RPC_WRAPPERS \
	SPH2_Source_SPH2_Particle_h_12_INCLASS \
	SPH2_Source_SPH2_Particle_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SPH2_Source_SPH2_Particle_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SPH2_Source_SPH2_Particle_h_12_PRIVATE_PROPERTY_OFFSET \
	SPH2_Source_SPH2_Particle_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SPH2_Source_SPH2_Particle_h_12_INCLASS_NO_PURE_DECLS \
	SPH2_Source_SPH2_Particle_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SPH2_Source_SPH2_Particle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
