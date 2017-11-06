// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BolaHibrida.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBolaHibrida() {}
// Cross Module References
	BOLA2_API UFunction* Z_Construct_UFunction_ABolaHibrida_MyOnBeginOverlap();
	BOLA2_API UClass* Z_Construct_UClass_ABolaHibrida();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BOLA2_API UFunction* Z_Construct_UFunction_ABolaHibrida_MyOnEndOverlap();
	BOLA2_API UClass* Z_Construct_UClass_ABolaHibrida_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bola2();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	static FName NAME_ABolaHibrida_MyOnBeginOverlap = FName(TEXT("MyOnBeginOverlap"));
	void ABolaHibrida::MyOnBeginOverlap(AActor* MyOverlappedActor, AActor* OtherActor)
	{
		BolaHibrida_eventMyOnBeginOverlap_Parms Parms;
		Parms.MyOverlappedActor=MyOverlappedActor;
		Parms.OtherActor=OtherActor;
		ProcessEvent(FindFunctionChecked(NAME_ABolaHibrida_MyOnBeginOverlap),&Parms);
	}
	static FName NAME_ABolaHibrida_MyOnEndOverlap = FName(TEXT("MyOnEndOverlap"));
	void ABolaHibrida::MyOnEndOverlap(AActor* MyOverlappedActor, AActor* OtherActor)
	{
		BolaHibrida_eventMyOnEndOverlap_Parms Parms;
		Parms.MyOverlappedActor=MyOverlappedActor;
		Parms.OtherActor=OtherActor;
		ProcessEvent(FindFunctionChecked(NAME_ABolaHibrida_MyOnEndOverlap),&Parms);
	}
	void ABolaHibrida::StaticRegisterNativesABolaHibrida()
	{
		UClass* Class = ABolaHibrida::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "MyOnBeginOverlap", (Native)&ABolaHibrida::execMyOnBeginOverlap },
			{ "MyOnEndOverlap", (Native)&ABolaHibrida::execMyOnEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ABolaHibrida_MyOnBeginOverlap()
	{
		UObject* Outer = Z_Construct_UClass_ABolaHibrida();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MyOnBeginOverlap"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08080C00, 65535, sizeof(BolaHibrida_eventMyOnBeginOverlap_Parms));
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, BolaHibrida_eventMyOnBeginOverlap_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_MyOverlappedActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MyOverlappedActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MyOverlappedActor, BolaHibrida_eventMyOnBeginOverlap_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BolaHibrida.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABolaHibrida_MyOnEndOverlap()
	{
		UObject* Outer = Z_Construct_UClass_ABolaHibrida();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MyOnEndOverlap"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08080C00, 65535, sizeof(BolaHibrida_eventMyOnEndOverlap_Parms));
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, BolaHibrida_eventMyOnEndOverlap_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_MyOverlappedActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MyOverlappedActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MyOverlappedActor, BolaHibrida_eventMyOnEndOverlap_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BolaHibrida.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABolaHibrida_NoRegister()
	{
		return ABolaHibrida::StaticClass();
	}
	UClass* Z_Construct_UClass_ABolaHibrida()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Bola2();
			OuterClass = ABolaHibrida::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ABolaHibrida_MyOnBeginOverlap());
				OuterClass->LinkChild(Z_Construct_UFunction_ABolaHibrida_MyOnEndOverlap());

				UProperty* NewProp_Particles = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Particles"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Particles, ABolaHibrida), 0x0020080000080009, Z_Construct_UClass_UParticleSystemComponent_NoRegister());
				UProperty* NewProp_Text = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Text"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Text, ABolaHibrida), 0x002008000008001d, Z_Construct_UClass_UTextRenderComponent_NoRegister());
				UProperty* NewProp_Mesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Mesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Mesh, ABolaHibrida), 0x0020080000080009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_Sphere = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Sphere"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Sphere, ABolaHibrida), 0x0020080000080009, Z_Construct_UClass_USphereComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABolaHibrida_MyOnBeginOverlap(), "MyOnBeginOverlap"); // 2110292988
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABolaHibrida_MyOnEndOverlap(), "MyOnEndOverlap"); // 4150371792
				static TCppClassTypeInfo<TCppClassTypeTraits<ABolaHibrida> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BolaHibrida.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BolaHibrida.h"));
				MetaData->SetValue(NewProp_Particles, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_Particles, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Particles, TEXT("ModuleRelativePath"), TEXT("BolaHibrida.h"));
				MetaData->SetValue(NewProp_Text, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_Text, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Text, TEXT("ModuleRelativePath"), TEXT("BolaHibrida.h"));
				MetaData->SetValue(NewProp_Mesh, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_Mesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Mesh, TEXT("ModuleRelativePath"), TEXT("BolaHibrida.h"));
				MetaData->SetValue(NewProp_Sphere, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_Sphere, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Sphere, TEXT("ModuleRelativePath"), TEXT("BolaHibrida.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABolaHibrida, 2530500713);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABolaHibrida(Z_Construct_UClass_ABolaHibrida, &ABolaHibrida::StaticClass, TEXT("/Script/Bola2"), TEXT("ABolaHibrida"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABolaHibrida);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
