#pragma once

#include "InstancedStruct.h"

#include "CkCore/Macros/CkMacros.h"

#include "CkEcs/Tag/CkTag.h"
#include "CkEcs/Handle/CkHandle_TypeSafe.h"

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
