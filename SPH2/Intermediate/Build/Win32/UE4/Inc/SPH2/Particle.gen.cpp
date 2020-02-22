// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Particle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticle() {}
// Cross Module References
	SPH2_API UClass* Z_Construct_UClass_AParticle_NoRegister();
	SPH2_API UClass* Z_Construct_UClass_AParticle();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SPH2();
	SPH2_API UFunction* Z_Construct_UFunction_AParticle_Update();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AParticle::StaticRegisterNativesAParticle()
	{
		UClass* Class = AParticle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Update", &AParticle::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AParticle_Update()
	{
		struct Particle_eventUpdate_Parms
		{
			float dt;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dt_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt = { UE4CodeGen_Private::EPropertyClass::Float, "dt", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(Particle_eventUpdate_Parms, dt), METADATA_PARAMS(NewProp_dt_MetaData, ARRAY_COUNT(NewProp_dt_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_dt,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Particle.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AParticle, "Update", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(Particle_eventUpdate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AParticle_NoRegister()
	{
		return AParticle::StaticClass();
	}
	UClass* Z_Construct_UClass_AParticle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_SPH2,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AParticle_Update, "Update" }, // 1435108149
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Particle.h" },
				{ "ModuleRelativePath", "Particle.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gridIdx_MetaData[] = {
				{ "Category", "Particle" },
				{ "ModuleRelativePath", "Particle.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_gridIdx = { UE4CodeGen_Private::EPropertyClass::Float, "gridIdx", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AParticle, gridIdx), METADATA_PARAMS(NewProp_gridIdx_MetaData, ARRAY_COUNT(NewProp_gridIdx_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pressure_MetaData[] = {
				{ "Category", "Particle" },
				{ "ModuleRelativePath", "Particle.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_pressure = { UE4CodeGen_Private::EPropertyClass::Float, "pressure", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AParticle, pressure), METADATA_PARAMS(NewProp_pressure_MetaData, ARRAY_COUNT(NewProp_pressure_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_density_MetaData[] = {
				{ "Category", "Particle" },
				{ "ModuleRelativePath", "Particle.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_density = { UE4CodeGen_Private::EPropertyClass::Float, "density", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AParticle, density), METADATA_PARAMS(NewProp_density_MetaData, ARRAY_COUNT(NewProp_density_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_acceleration_MetaData[] = {
				{ "Category", "Particle" },
				{ "ModuleRelativePath", "Particle.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_acceleration = { UE4CodeGen_Private::EPropertyClass::Struct, "acceleration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AParticle, acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_acceleration_MetaData, ARRAY_COUNT(NewProp_acceleration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_velocity_MetaData[] = {
				{ "Category", "Particle" },
				{ "ModuleRelativePath", "Particle.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_velocity = { UE4CodeGen_Private::EPropertyClass::Struct, "velocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AParticle, velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_velocity_MetaData, ARRAY_COUNT(NewProp_velocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_prevPosition_MetaData[] = {
				{ "Category", "Particle" },
				{ "ModuleRelativePath", "Particle.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_prevPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "prevPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AParticle, prevPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_prevPosition_MetaData, ARRAY_COUNT(NewProp_prevPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[] = {
				{ "Category", "Particle" },
				{ "ModuleRelativePath", "Particle.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_position = { UE4CodeGen_Private::EPropertyClass::Struct, "position", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AParticle, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_position_MetaData, ARRAY_COUNT(NewProp_position_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_gridIdx,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pressure,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_density,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_acceleration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_velocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_prevPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_position,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AParticle>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AParticle::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AParticle, 1148776891);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParticle(Z_Construct_UClass_AParticle, &AParticle::StaticClass, TEXT("/Script/SPH2"), TEXT("AParticle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParticle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
