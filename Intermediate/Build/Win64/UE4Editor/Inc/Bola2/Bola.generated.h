// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BOLA2_Bola_generated_h
#error "Bola.generated.h already included, missing '#pragma once' in Bola.h"
#endif
#define BOLA2_Bola_generated_h

#define Bola2_Source_Bola2_Bola_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMyOnEndOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_MyOverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MyOnEndOverlap(Z_Param_MyOverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMyOnBeginOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_MyOverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MyOnBeginOverlap(Z_Param_MyOverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define Bola2_Source_Bola2_Bola_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMyOnEndOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_MyOverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MyOnEndOverlap(Z_Param_MyOverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMyOnBeginOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_MyOverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MyOnBeginOverlap(Z_Param_MyOverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define Bola2_Source_Bola2_Bola_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABola(); \
	friend BOLA2_API class UClass* Z_Construct_UClass_ABola(); \
public: \
	DECLARE_CLASS(ABola, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bola2"), NO_API) \
	DECLARE_SERIALIZER(ABola) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bola2_Source_Bola2_Bola_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABola(); \
	friend BOLA2_API class UClass* Z_Construct_UClass_ABola(); \
public: \
	DECLARE_CLASS(ABola, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bola2"), NO_API) \
	DECLARE_SERIALIZER(ABola) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bola2_Source_Bola2_Bola_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABola(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABola) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABola); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABola); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABola(ABola&&); \
	NO_API ABola(const ABola&); \
public:


#define Bola2_Source_Bola2_Bola_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABola(ABola&&); \
	NO_API ABola(const ABola&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABola); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABola); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABola)


#define Bola2_Source_Bola2_Bola_h_12_PRIVATE_PROPERTY_OFFSET
#define Bola2_Source_Bola2_Bola_h_9_PROLOG
#define Bola2_Source_Bola2_Bola_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bola2_Source_Bola2_Bola_h_12_PRIVATE_PROPERTY_OFFSET \
	Bola2_Source_Bola2_Bola_h_12_RPC_WRAPPERS \
	Bola2_Source_Bola2_Bola_h_12_INCLASS \
	Bola2_Source_Bola2_Bola_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bola2_Source_Bola2_Bola_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bola2_Source_Bola2_Bola_h_12_PRIVATE_PROPERTY_OFFSET \
	Bola2_Source_Bola2_Bola_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Bola2_Source_Bola2_Bola_h_12_INCLASS_NO_PURE_DECLS \
	Bola2_Source_Bola2_Bola_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bola2_Source_Bola2_Bola_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
