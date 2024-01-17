#pragma once

#include "CkCore/Macros/CkMacros.h"

#include "CkEcs/Processor/CkProcessor.h"
#include "CkEcs/Processor/CkProcessorScript.h"
#include "CkEcs/Subsystem/CkEcsWorld_Subsystem.h"

#include "CkEcsBasics/CkEcsBasics_Utils.h"

#include "CkRecord/Record/CkRecord_Utils.h"

#include "DataOnlyFragmentTemplate_Fragment.generated.h"

// --------------------------------------------------------------------------------------------------------------------

USTRUCT(BlueprintType)
struct DATAONLYFRAGMENTTEMPLATE_API FCk_Fragment_DataOnlyFragmentTemplate
{
    GENERATED_BODY()

public:
    CK_GENERATED_BODY(FCk_Fragment_DataOnlyFragmentTemplate);

private:
    UPROPERTY(EditAnywhere, BlueprintReadWrite,
        meta=(AllowPrivateAccess))
    int32 _Variable;

public:
    CK_PROPERTY_GET(_Variable);

    CK_DEFINE_CONSTRUCTORS(FCk_Fragment_DataOnlyFragmentTemplate, _Variable);
};

// --------------------------------------------------------------------------------------------------------------------

UCLASS(Abstract, Blueprintable)
class DATAONLYFRAGMENTTEMPLATE_API UCk_Processor_DataOnlyFragmentTemplate_UE : public UCk_Ecs_ProcessorScript_Base
{
    GENERATED_BODY()

public:
    CK_GENERATED_BODY(UCk_Processor_DataOnlyFragmentTemplate_UE);

public:
    CK_DEFINE_STAT(STAT_ForEachEntity, UCk_Processor_DataOnlyFragmentTemplate_UE, FStatGroup_STATGROUP_CkProcessors_Details);
    CK_DEFINE_STAT(STAT_Tick, UCk_Processor_DataOnlyFragmentTemplate_UE, FStatGroup_STATGROUP_CkProcessors);

public:
    auto
    Tick(
        TimeType InTime) -> void override;
};

// --------------------------------------------------------------------------------------------------------------------

UCLASS(Abstract, Blueprintable, NotBlueprintType)
class DATAONLYFRAGMENTTEMPLATE_API UCk_DataOnlyFragmentTemplate_ProcessorInjector : public UCk_EcsWorld_ProcessorInjector_Base
{
    GENERATED_BODY()

protected:
    auto
    DoInjectProcessors(
        EcsWorldType& InWorld) -> void override;

private:
    UPROPERTY(EditDefaultsOnly, meta=(AllowPrivateAccess))
    TSubclassOf<UCk_Processor_DataOnlyFragmentTemplate_UE> _Processor;
};

// --------------------------------------------------------------------------------------------------------------------

UCLASS(NotBlueprintable)
class DATAONLYFRAGMENTTEMPLATE_API UCk_Utils_DataOnlyFragmentTemplate_UE : public UCk_Utils_Ecs_Base_UE
{
    GENERATED_BODY()

public:
    CK_GENERATED_BODY(UCk_Utils_DataOnlyFragmentTemplate_UE);

public:
    UFUNCTION(BlueprintCallable,
              Category = "Ck|Fragments|DataOnlyFragmentTemplate",
              DisplayName="Add New DataOnlyFragmentTemplate")
    static void
    Add(
        FCk_Handle InHandle,
        const FCk_Fragment_DataOnlyFragmentTemplate& InParams);

    UFUNCTION(BlueprintPure,
              Category = "Ck|Fragments|DataOnlyFragmentTemplate",
              DisplayName="Has DataOnlyFragmentTemplate")
    static bool
    Has(
        FCk_Handle InHandle);

    UFUNCTION(BlueprintPure,
              Category = "Ck|Fragments|DataOnlyFragmentTemplate",
              DisplayName="Ensure Has DataOnlyFragmentTemplate")
    static bool
    Ensure(
        FCk_Handle InHandle);

    UFUNCTION(BlueprintPure,
              Category = "Ck|Fragments|DataOnlyFragmentTemplate",
              DisplayName="Get DataOnlyFragmentTemplate")
    static FCk_Fragment_DataOnlyFragmentTemplate
    Get(
        FCk_Handle InHandle);
};
// --------------------------------------------------------------------------------------------------------------------

