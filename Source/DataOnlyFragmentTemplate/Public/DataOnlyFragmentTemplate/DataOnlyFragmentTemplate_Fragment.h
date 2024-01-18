#pragma once

#include "CkCore/Macros/CkMacros.h"

#include "CkEcs/Tag/CkTag.h"

#include "DataOnlyFragmentTemplate_Fragment.generated.h"

// --------------------------------------------------------------------------------------------------------------------

CK_DEFINE_ECS_TAG(FTag_DataOnlyFragmentTemplate_Setup);

// --------------------------------------------------------------------------------------------------------------------

USTRUCT(BlueprintType)
struct DATAONLYFRAGMENTTEMPLATE_API FFragment_DataOnlyFragmentTemplate_Params
{
    GENERATED_BODY()

public:
    CK_GENERATED_BODY(FFragment_DataOnlyFragmentTemplate_Params);

private:
    UPROPERTY(EditAnywhere, BlueprintReadWrite,
        meta=(AllowPrivateAccess))
    int32 _Variable = 0;

public:
    CK_PROPERTY_GET(_Variable);

    CK_DEFINE_CONSTRUCTORS(FFragment_DataOnlyFragmentTemplate_Params, _Variable);
};

// --------------------------------------------------------------------------------------------------------------------

USTRUCT(BlueprintType)
struct DATAONLYFRAGMENTTEMPLATE_API FFragment_DataOnlyFragmentTemplate_Current
{
    GENERATED_BODY()

public:
    CK_GENERATED_BODY(FFragment_DataOnlyFragmentTemplate_Current);

private:
    UPROPERTY(EditAnywhere, BlueprintReadWrite,
        meta=(AllowPrivateAccess))
    int32 _Variable = 0;

public:
    CK_PROPERTY_GET(_Variable);

    CK_DEFINE_CONSTRUCTORS(FFragment_DataOnlyFragmentTemplate_Current, _Variable);
};

// --------------------------------------------------------------------------------------------------------------------

USTRUCT(BlueprintType)
struct DATAONLYFRAGMENTTEMPLATE_API FFragment_DataOnlyFragmentTemplate_Request
{
    GENERATED_BODY()

public:
    CK_GENERATED_BODY(FFragment_DataOnlyFragmentTemplate_Request);

private:
    UPROPERTY(EditAnywhere, BlueprintReadWrite,
        meta=(AllowPrivateAccess))
    int32 _Variable = 0;

public:
    CK_PROPERTY_GET(_Variable);

    CK_DEFINE_CONSTRUCTORS(FFragment_DataOnlyFragmentTemplate_Request, _Variable);
};

// --------------------------------------------------------------------------------------------------------------------
