#pragma once

#include "CkCore/Macros/CkMacros.h"

#include "DataOnlyFragmentTemplate_Fragment.generated.h"

// --------------------------------------------------------------------------------------------------------------------

USTRUCT(BlueprintType)
struct DATAONLYFRAGMENTTEMPLATE_API FFragment_DataOnlyFragmentTemplate
{
    GENERATED_BODY()

public:
    CK_GENERATED_BODY(FFragment_DataOnlyFragmentTemplate);

private:
    UPROPERTY(EditAnywhere, BlueprintReadWrite,
        meta=(AllowPrivateAccess))
    int32 _Variable;

public:
    CK_PROPERTY_GET(_Variable);

    CK_DEFINE_CONSTRUCTORS(FFragment_DataOnlyFragmentTemplate, _Variable);
};

// --------------------------------------------------------------------------------------------------------------------
