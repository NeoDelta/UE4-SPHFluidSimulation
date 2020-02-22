// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SPHSim_GM.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPHSim_GM() {}
// Cross Module References
	SPH2_API UScriptStruct* Z_Construct_UScriptStruct_FNestedArray();
	UPackage* Z_Construct_UPackage__Script_SPH2();
	SPH2_API UClass* Z_Construct_UClass_ASPHSim_GM_NoRegister();
	SPH2_API UClass* Z_Construct_UClass_ASPHSim_GM();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SPH2_API UFunction* Z_Construct_UFunction_ASPHSim_GM_CheckParticlePlanesCollision();
	SPH2_API UClass* Z_Construct_UClass_AParticle_NoRegister();
	SPH2_API UFunction* Z_Construct_UFunction_ASPHSim_GM_ComputeDensities();
	SPH2_API UFunction* Z_Construct_UFunction_ASPHSim_GM_ComputeForces();
	SPH2_API UFunction* Z_Construct_UFunction_ASPHSim_GM_ConstructGrid();
	SPH2_API UFunction* Z_Construct_UFunction_ASPHSim_GM_popParticleFromGrid();
	SPH2_API UFunction* Z_Construct_UFunction_ASPHSim_GM_setGrid();
	SPH2_API UFunction* Z_Construct_UFunction_ASPHSim_GM_setH();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FNestedArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPH2_API uint32 Get_Z_Construct_UScriptStruct_FNestedArray_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNestedArray, Z_Construct_UPackage__Script_SPH2(), TEXT("NestedArray"), sizeof(FNestedArray), Get_Z_Construct_UScriptStruct_FNestedArray_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNestedArray(FNestedArray::StaticStruct, TEXT("/Script/SPH2"), TEXT("NestedArray"), false, nullptr, nullptr);
static struct FScriptStruct_SPH2_StaticRegisterNativesFNestedArray
{
	FScriptStruct_SPH2_StaticRegisterNativesFNestedArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NestedArray")),new UScriptStruct::TCppStructOps<FNestedArray>);
	}
} ScriptStruct_SPH2_StaticRegisterNativesFNestedArray;
	UScriptStruct* Z_Construct_UScriptStruct_FNestedArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNestedArray_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SPH2();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NestedArray"), sizeof(FNestedArray), Get_Z_Construct_UScriptStruct_FNestedArray_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "SPHSim_GM.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNestedArray>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_partList_MetaData[] = {
				{ "ModuleRelativePath", "SPHSim_GM.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_partList = { UE4CodeGen_Private::EPropertyClass::Array, "partList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNestedArray, partList), METADATA_PARAMS(NewProp_partList_MetaData, ARRAY_COUNT(NewProp_partList_MetaData)) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_partList_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "partList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_partList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_partList_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SPH2,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NestedArray",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FNestedArray),
				alignof(FNestedArray),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNestedArray_CRC() { return 856112791U; }
	void ASPHSim_GM::StaticRegisterNativesASPHSim_GM()
	{
		UClass* Class = ASPHSim_GM::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckParticlePlanesCollision", &ASPHSim_GM::execCheckParticlePlanesCollision },
			{ "ComputeDensities", &ASPHSim_GM::execComputeDensities },
			{ "ComputeForces", &ASPHSim_GM::execComputeForces },
			{ "ConstructGrid", &ASPHSim_GM::execConstructGrid },
			{ "popParticleFromGrid", &ASPHSim_GM::execpopParticleFromGrid },
			{ "setGrid", &ASPHSim_GM::execsetGrid },
			{ "setH", &ASPHSim_GM::execsetH },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASPHSim_GM_CheckParticlePlanesCollision()
	{
		struct SPHSim_GM_eventCheckParticlePlanesCollision_Parms
		{
			AParticle* particle;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_particle = { UE4CodeGen_Private::EPropertyClass::Object, "particle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SPHSim_GM_eventCheckParticlePlanesCollision_Parms, particle), Z_Construct_UClass_AParticle_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_particle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "SPHSim_GM.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPHSim_GM, "CheckParticlePlanesCollision", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SPHSim_GM_eventCheckParticlePlanesCollision_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASPHSim_GM_ComputeDensities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "SPHSim_GM.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPHSim_GM, "ComputeDensities", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASPHSim_GM_ComputeForces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "SPHSim_GM.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPHSim_GM, "ComputeForces", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASPHSim_GM_ConstructGrid()
	{
		struct SPHSim_GM_eventConstructGrid_Parms
		{
			int32 numParticles;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_numParticles = { UE4CodeGen_Private::EPropertyClass::Int, "numParticles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SPHSim_GM_eventConstructGrid_Parms, numParticles), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_numParticles,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "SPHSim_GM.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPHSim_GM, "ConstructGrid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SPHSim_GM_eventConstructGrid_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASPHSim_GM_popParticleFromGrid()
	{
		struct SPHSim_GM_eventpopParticleFromGrid_Parms
		{
			int32 idx;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_idx = { UE4CodeGen_Private::EPropertyClass::Int, "idx", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SPHSim_GM_eventpopParticleFromGrid_Parms, idx), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_idx,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "SPHSim_GM.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPHSim_GM, "popParticleFromGrid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SPHSim_GM_eventpopParticleFromGrid_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASPHSim_GM_setGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "SPHSim_GM.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPHSim_GM, "setGrid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASPHSim_GM_setH()
	{
		struct SPHSim_GM_eventsetH_Parms
		{
			float h;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_h = { UE4CodeGen_Private::EPropertyClass::Float, "h", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SPHSim_GM_eventsetH_Parms, h), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_h,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "SPHSim_GM.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPHSim_GM, "setH", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SPHSim_GM_eventsetH_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASPHSim_GM_NoRegister()
	{
		return ASPHSim_GM::StaticClass();
	}
	UClass* Z_Construct_UClass_ASPHSim_GM()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_SPH2,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASPHSim_GM_CheckParticlePlanesCollision, "CheckParticlePlanesCollision" }, // 2880461971
				{ &Z_Construct_UFunction_ASPHSim_GM_ComputeDensities, "ComputeDensities" }, // 1669898740
				{ &Z_Construct_UFunction_ASPHSim_GM_ComputeForces, "ComputeForces" }, // 3894923893
				{ &Z_Construct_UFunction_ASPHSim_GM_ConstructGrid, "ConstructGrid" }, // 4122671641
				{ &Z_Construct_UFunction_ASPHSim_GM_popParticleFromGrid, "popParticleFromGrid" }, // 1807396268
				{ &Z_Construct_UFunction_ASPHSim_GM_setGrid, "setGrid" }, // 3342641787
				{ &Z_Construct_UFunction_ASPHSim_GM_setH, "setH" }, // 1951367892
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "SPHSim_GM.h" },
				{ "ModuleRelativePath", "SPHSim_GM.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grad_WSpikeC_MetaData[] = {
				{ "ModuleRelativePath", "SPHSim_GM.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Grad_WSpikeC = { UE4CodeGen_Private::EPropertyClass::Float, "Grad_WSpikeC", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ASPHSim_GM, Grad_WSpikeC), METADATA_PARAMS(NewProp_Grad_WSpikeC_MetaData, ARRAY_COUNT(NewProp_Grad_WSpikeC_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lapl_WViscosityC_MetaData[] = {
				{ "ModuleRelativePath", "SPHSim_GM.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Lapl_WViscosityC = { UE4CodeGen_Private::EPropertyClass::Float, "Lapl_WViscosityC", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ASPHSim_GM, Lapl_WViscosityC), METADATA_PARAMS(NewProp_Lapl_WViscosityC_MetaData, ARRAY_COUNT(NewProp_Lapl_WViscosityC_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WPoly6C_MetaData[] = {
				{ "ModuleRelativePath", "SPHSim_GM.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WPoly6C = { UE4CodeGen_Private::EPropertyClass::Float, "WPoly6C", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ASPHSim_GM, WPoly6C), METADATA_PARAMS(NewProp_WPoly6C_MetaData, ARRAY_COUNT(NewProp_WPoly6C_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_h2_MetaData[] = {
				{ "ModuleRelativePath", "SPHSim_GM.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_h2 = { UE4CodeGen_Private::EPropertyClass::Float, "h2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ASPHSim_GM, h2), METADATA_PARAMS(NewProp_h2_MetaData, ARRAY_COUNT(NewProp_h2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_h_MetaData[] = {
				{ "ModuleRelativePath", "SPHSim_GM.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_h = { UE4CodeGen_Private::EPropertyClass::Float, "h", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ASPHSim_GM, h), METADATA_PARAMS(NewProp_h_MetaData, ARRAY_COUNT(NewProp_h_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cellSize_MetaData[] = {
				{ "ModuleRelativePath", "SPHSim_GM.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_cellSize = { UE4CodeGen_Private::EPropertyClass::Float, "cellSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ASPHSim_GM, cellSize), METADATA_PARAMS(NewProp_cellSize_MetaData, ARRAY_COUNT(NewProp_cellSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grid_MetaData[] = {
				{ "ModuleRelativePath", "SPHSim_GM.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_grid = { UE4CodeGen_Private::EPropertyClass::Array, "grid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ASPHSim_GM, grid), METADATA_PARAMS(NewProp_grid_MetaData, ARRAY_COUNT(NewProp_grid_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_grid_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "grid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNestedArray, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_simOffset_MetaData[] = {
				{ "Category", "SPHSim_GM" },
				{ "ModuleRelativePath", "SPHSim_GM.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_simOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "simOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASPHSim_GM, simOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_simOffset_MetaData, ARRAY_COUNT(NewProp_simOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gridDimension_MetaData[] = {
				{ "Category", "SPHSim_GM" },
				{ "ModuleRelativePath", "SPHSim_GM.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_gridDimension = { UE4CodeGen_Private::EPropertyClass::Struct, "gridDimension", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASPHSim_GM, gridDimension), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_gridDimension_MetaData, ARRAY_COUNT(NewProp_gridDimension_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gravity_MetaData[] = {
				{ "Category", "SPHSim_GM" },
				{ "ModuleRelativePath", "SPHSim_GM.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_gravity = { UE4CodeGen_Private::EPropertyClass::Struct, "gravity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASPHSim_GM, gravity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_gravity_MetaData, ARRAY_COUNT(NewProp_gravity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rest_density_MetaData[] = {
				{ "Category", "SPHSim_GM" },
				{ "ModuleRelativePath", "SPHSim_GM.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rest_density = { UE4CodeGen_Private::EPropertyClass::Float, "rest_density", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASPHSim_GM, rest_density), METADATA_PARAMS(NewProp_rest_density_MetaData, ARRAY_COUNT(NewProp_rest_density_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kp_MetaData[] = {
				{ "Category", "SPHSim_GM" },
				{ "ModuleRelativePath", "SPHSim_GM.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Kp = { UE4CodeGen_Private::EPropertyClass::Float, "Kp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASPHSim_GM, Kp), METADATA_PARAMS(NewProp_Kp_MetaData, ARRAY_COUNT(NewProp_Kp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tension_coeff_MetaData[] = {
				{ "Category", "SPHSim_GM" },
				{ "ModuleRelativePath", "SPHSim_GM.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_tension_coeff = { UE4CodeGen_Private::EPropertyClass::Float, "tension_coeff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASPHSim_GM, tension_coeff), METADATA_PARAMS(NewProp_tension_coeff_MetaData, ARRAY_COUNT(NewProp_tension_coeff_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_visc_coeff_MetaData[] = {
				{ "Category", "SPHSim_GM" },
				{ "ModuleRelativePath", "SPHSim_GM.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_visc_coeff = { UE4CodeGen_Private::EPropertyClass::Float, "visc_coeff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASPHSim_GM, visc_coeff), METADATA_PARAMS(NewProp_visc_coeff_MetaData, ARRAY_COUNT(NewProp_visc_coeff_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mass_MetaData[] = {
				{ "Category", "SPHSim_GM" },
				{ "ModuleRelativePath", "SPHSim_GM.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mass = { UE4CodeGen_Private::EPropertyClass::Float, "mass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASPHSim_GM, mass), METADATA_PARAMS(NewProp_mass_MetaData, ARRAY_COUNT(NewProp_mass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_particles_MetaData[] = {
				{ "Category", "SPHSim_GM" },
				{ "ModuleRelativePath", "SPHSim_GM.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_particles = { UE4CodeGen_Private::EPropertyClass::Array, "particles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASPHSim_GM, particles), METADATA_PARAMS(NewProp_particles_MetaData, ARRAY_COUNT(NewProp_particles_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_particles_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "particles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AParticle_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_planes_MetaData[] = {
				{ "Category", "SPHSim_GM" },
				{ "ModuleRelativePath", "SPHSim_GM.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_planes = { UE4CodeGen_Private::EPropertyClass::Array, "planes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASPHSim_GM, planes), METADATA_PARAMS(NewProp_planes_MetaData, ARRAY_COUNT(NewProp_planes_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_planes_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "planes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Grad_WSpikeC,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Lapl_WViscosityC,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WPoly6C,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_h2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_h,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_cellSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_grid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_grid_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_simOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_gridDimension,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_gravity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_rest_density,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Kp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_tension_coeff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_visc_coeff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_mass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_particles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_particles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_planes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_planes_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASPHSim_GM>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASPHSim_GM::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
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
	IMPLEMENT_CLASS(ASPHSim_GM, 1604129698);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPHSim_GM(Z_Construct_UClass_ASPHSim_GM, &ASPHSim_GM::StaticClass, TEXT("/Script/SPH2"), TEXT("ASPHSim_GM"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPHSim_GM);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
