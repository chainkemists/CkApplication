#pragma once

#include "InstancedStruct.h"

#include "CkCore/Macros/CkMacros.h"

#include "CkEcs/EntityConstructionScript/CkEntity_ConstructionScript.h"
#include "CkEcs/Tag/CkTag.h"
#include "CkEcs/Handle/CkHandle_TypeSafe.h"

#include "UObject/ObjectSaveContext.h"

#include "EcsScriptTemplate_Fragment.generated.h"

// --------------------------------------------------------------------------------------------------------------------

USTRUCT(BlueprintType, meta=(HasNativeMake, HasNativeBreak))
struct ECSSCRIPTTEMPLATE_API FHandle_EcsScriptTemplate : public FCk_Handle_TypeSafe { GENERATED_BODY() CK_GENERATED_BODY_HANDLE_TYPESAFE(FHandle_EcsScriptTemplate); };
CK_DEFINE_CUSTOM_ISVALID_AND_FORMATTER_HANDLE_TYPESAFE(FHandle_EcsScriptTemplate);

// --------------------------------------------------------------------------------------------------------------------

USTRUCT(BlueprintType)
struct ECSSCRIPTTEMPLATE_API FFragment_EcsScriptTemplate_Params
{
    GENERATED_BODY()

public:
    CK_GENERATED_BODY(FFragment_EcsScriptTemplate_Params);

private:
    // remove/replace once you have own data
    UPROPERTY(EditAnywhere, BlueprintReadWrite,
        meta=(AllowPrivateAccess))
    int32 _DummyVariable = 0;
};

// --------------------------------------------------------------------------------------------------------------------

USTRUCT(BlueprintType)
struct ECSSCRIPTTEMPLATE_API FFragment_EcsScriptTemplate_Current
{
    GENERATED_BODY()

public:
    CK_GENERATED_BODY(FFragment_EcsScriptTemplate_Current);

private:
    // remove/replace once you have own data
    UPROPERTY(EditAnywhere, BlueprintReadWrite,
        meta=(AllowPrivateAccess))
    int32 _DummyVariable = 0;
};

// --------------------------------------------------------------------------------------------------------------------

UCLASS(BlueprintType)
class ECSSCRIPTTEMPLATE_API UCk_DataViewer_PDA : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    CK_GENERATED_BODY(UCk_DataViewer_PDA);



    auto
    PostLoad()
        -> void override;

    auto PostCDOCompiled() -> void override;

    void PostEditChangeProperty(
        FPropertyChangedEvent& PropertyChangedEvent) override;

    UFUNCTION(CallInEditor)
    void Reload();

private:
    UPROPERTY(EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCk_Entity_ConstructionScript_PDA> _ConstructionScript;

    UPROPERTY(EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCk_Entity_ConstructionScript_PDA> _Test;

    TMap<FName, TWeakObjectPtr<FStructProperty>> _PropertiesInOther;
};
