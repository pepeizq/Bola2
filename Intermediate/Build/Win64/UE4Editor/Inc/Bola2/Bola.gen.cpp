// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Bola.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBola() {}
// Cross Module References
	BOLA2_API UFunction* Z_Construct_UFunction_ABola_MyOnBeginOverlap();
	BOLA2_API UClass* Z_Construct_UClass_ABola();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BOLA2_API UFunction* Z_Construct_UFunction_ABola_MyOnEndOverlap();
	BOLA2_API UClass* Z_Construct_UClass_ABola_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bola2();
// End Cross Module References
	void ABola::StaticRegisterNativesABola()
	{
		UClass* Class = ABola::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "MyOnBeginOverlap", (Native)&ABola::execMyOnBeginOverlap },
			{ "MyOnEndOverlap", (Native)&ABola::execMyOnEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ABola_MyOnBeginOverlap()
	{
		struct Bola_eventMyOnBeginOverlap_Parms
		{
			AActor* MyOverlappedActor;
			AActor* OtherActor;
		};
		UObject* Outer = Z_Construct_UClass_ABola();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MyOnBeginOverlap"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00080401, 65535, sizeof(Bola_eventMyOnBeginOverlap_Parms));
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, Bola_eventMyOnBeginOverlap_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_MyOverlappedActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MyOverlappedActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MyOverlappedActor, Bola_eventMyOnBeginOverlap_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Bola.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABola_MyOnEndOverlap()
	{
		struct Bola_eventMyOnEndOverlap_Parms
		{
			AActor* MyOverlappedActor;
			AActor* OtherActor;
		};
		UObject* Outer = Z_Construct_UClass_ABola();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MyOnEndOverlap"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00080401, 65535, sizeof(Bola_eventMyOnEndOverlap_Parms));
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, Bola_eventMyOnEndOverlap_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_MyOverlappedActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MyOverlappedActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MyOverlappedActor, Bola_eventMyOnEndOverlap_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Bola.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABola_NoRegister()
	{
		return ABola::StaticClass();
	}
	UClass* Z_Construct_UClass_ABola()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Bola2();
			OuterClass = ABola::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ABola_MyOnBeginOverlap());
				OuterClass->LinkChild(Z_Construct_UFunction_ABola_MyOnEndOverlap());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABola_MyOnBeginOverlap(), "MyOnBeginOverlap"); // 1903093952
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABola_MyOnEndOverlap(), "MyOnEndOverlap"); // 3794020153
				static TCppClassTypeInfo<TCppClassTypeTraits<ABola> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Bola.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Bola.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABola, 414122609);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABola(Z_Construct_UClass_ABola, &ABola::StaticClass, TEXT("/Script/Bola2"), TEXT("ABola"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABola);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
