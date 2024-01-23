#pragma once

#include "CkCore/Macros/CkMacros.h"

#include "CkEcs/Tag/CkTag.h"

#include "EcsScriptTemplate_Fragment.generated.h"

// --------------------------------------------------------------------------------------------------------------------

CK_DEFINE_ECS_TAG(FTag_EcsScriptTemplate_Setup);

// --------------------------------------------------------------------------------------------------------------------

USTRUCT(BlueprintType)
struct ECSSCRIPTTEMPLATE_API FFragment_EcsScriptTemplate_Params
{
    GENERATED_BODY()

public:
    CK_GENERATED_BODY(FFragment_EcsScriptTemplate_Params);

private:
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
    // remove once you have own data
    UPROPERTY(EditAnywhere, BlueprintReadWrite,
        meta=(AllowPrivateAccess))
    int32 _DummyVariable = 0;
};

// --------------------------------------------------------------------------------------------------------------------

USTRUCT(BlueprintType)
struct ECSSCRIPTTEMPLATE_API FFragment_EcsScriptTemplate_Requests
{
    GENERATED_BODY()

public:
    CK_GENERATED_BODY(FFragment_EcsScriptTemplate_Requests);

private:
    // remove once you have your own data, if you do NOT have Requests, leave this struct/var as-is
    int32 _DummyVariable = 0;
};

// --------------------------------------------------------------------------------------------------------------------
