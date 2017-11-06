// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BOLA2_BolaHibrida_generated_h
#error "BolaHibrida.generated.h already included, missing '#pragma once' in BolaHibrida.h"
#endif
#define BOLA2_BolaHibrida_generated_h

#define Bola2_Source_Bola2_BolaHibrida_h_12_RPC_WRAPPERS \
	virtual void MyOnEndOverlap_Implementation(AActor* MyOverlappedActor, AActor* OtherActor); \
	virtual void MyOnBeginOverlap_Implementation(AActor* MyOverlappedActor, AActor* OtherActor); \
 \
	DECLARE_FUNCTION(execMyOnEndOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_MyOverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MyOnEndOverlap_Implementation(Z_Param_MyOverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMyOnBeginOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_MyOverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MyOnBeginOverlap_Implementation(Z_Param_MyOverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define Bola2_Source_Bola2_BolaHibrida_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMyOnEndOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_MyOverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MyOnEndOverlap_Implementation(Z_Param_MyOverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMyOnBeginOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_MyOverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MyOnBeginOverlap_Implementation(Z_Param_MyOverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define Bola2_Source_Bola2_BolaHibrida_h_12_EVENT_PARMS \
	struct BolaHibrida_eventMyOnBeginOverlap_Parms \
	{ \
		AActor* MyOverlappedActor; \
		AActor* OtherActor; \
	}; \
	struct BolaHibrida_eventMyOnEndOverlap_Parms \
	{ \
		AActor* MyOverlappedActor; \
		AActor* OtherActor; \
	};


#define Bola2_Source_Bola2_BolaHibrida_h_12_CALLBACK_WRAPPERS
#define Bola2_Source_Bola2_BolaHibrida_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABolaHibrida(); \
	friend BOLA2_API class UClass* Z_Construct_UClass_ABolaHibrida(); \
public: \
	DECLARE_CLASS(ABolaHibrida, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bola2"), NO_API) \
	DECLARE_SERIALIZER(ABolaHibrida) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bola2_Source_Bola2_BolaHibrida_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABolaHibrida(); \
	friend BOLA2_API class UClass* Z_Construct_UClass_ABolaHibrida(); \
public: \
	DECLARE_CLASS(ABolaHibrida, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bola2"), NO_API) \
	DECLARE_SERIALIZER(ABolaHibrida) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bola2_Source_Bola2_BolaHibrida_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABolaHibrida(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABolaHibrida) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABolaHibrida); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABolaHibrida); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABolaHibrida(ABolaHibrida&&); \
	NO_API ABolaHibrida(const ABolaHibrida&); \
public:


#define Bola2_Source_Bola2_BolaHibrida_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABolaHibrida(ABolaHibrida&&); \
	NO_API ABolaHibrida(const ABolaHibrida&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABolaHibrida); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABolaHibrida); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABolaHibrida)


#define Bola2_Source_Bola2_BolaHibrida_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Sphere() { return STRUCT_OFFSET(ABolaHibrida, Sphere); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ABolaHibrida, Mesh); } \
	FORCEINLINE static uint32 __PPO__Text() { return STRUCT_OFFSET(ABolaHibrida, Text); } \
	FORCEINLINE static uint32 __PPO__Particles() { return STRUCT_OFFSET(ABolaHibrida, Particles); }


#define Bola2_Source_Bola2_BolaHibrida_h_9_PROLOG \
	Bola2_Source_Bola2_BolaHibrida_h_12_EVENT_PARMS


#define Bola2_Source_Bola2_BolaHibrida_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bola2_Source_Bola2_BolaHibrida_h_12_PRIVATE_PROPERTY_OFFSET \
	Bola2_Source_Bola2_BolaHibrida_h_12_RPC_WRAPPERS \
	Bola2_Source_Bola2_BolaHibrida_h_12_CALLBACK_WRAPPERS \
	Bola2_Source_Bola2_BolaHibrida_h_12_INCLASS \
	Bola2_Source_Bola2_BolaHibrida_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bola2_Source_Bola2_BolaHibrida_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bola2_Source_Bola2_BolaHibrida_h_12_PRIVATE_PROPERTY_OFFSET \
	Bola2_Source_Bola2_BolaHibrida_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Bola2_Source_Bola2_BolaHibrida_h_12_CALLBACK_WRAPPERS \
	Bola2_Source_Bola2_BolaHibrida_h_12_INCLASS_NO_PURE_DECLS \
	Bola2_Source_Bola2_BolaHibrida_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bola2_Source_Bola2_BolaHibrida_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
