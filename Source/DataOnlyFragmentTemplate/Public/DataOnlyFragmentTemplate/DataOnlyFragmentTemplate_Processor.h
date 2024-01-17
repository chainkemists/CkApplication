#pragma once

#include "CkCore/Macros/CkMacros.h"

#include "CkEcs/Processor/CkProcessor.h"
#include "CkEcs/Subsystem/CkEcsWorld_Subsystem.h"

#include "CkProfile/Stats/CkStats.h"

#include "DataOnlyFragmentTemplate/DataOnlyFragmentTemplate_Fragment.h"

#include "DataOnlyFragmentTemplate_Processor.generated.h"

// --------------------------------------------------------------------------------------------------------------------
/*

!!!WARNING!!!
GENERATED FILE - DO NOT MODIFY

*/
// --------------------------------------------------------------------------------------------------------------------

UCLASS(Abstract, Blueprintable)
class DATAONLYFRAGMENTTEMPLATE_API UProcessor_DataOnlyFragmentTemplate_UE : public UCk_Ecs_ProcessorScript_Base_UE
{
    GENERATED_BODY()

public:
    CK_GENERATED_BODY(UProcessor_DataOnlyFragmentTemplate_UE);

public:
    CK_DEFINE_STAT(STAT_ForEachEntity, UProcessor_DataOnlyFragmentTemplate_UE, FStatGroup_STATGROUP_CkProcessors_Details);
    CK_DEFINE_STAT(STAT_Tick, UProcessor_DataOnlyFragmentTemplate_UE, FStatGroup_STATGROUP_CkProcessors);

protected:
    UFUNCTION(BlueprintCallable,
        meta=(DefaultToSelf, CompactNodeTitle="Broadcast_OnUpdate"))
    static void
    Broadcast_OnUpdate(
        UPARAM(ref) FCk_Handle& InHandle,
        const FFragment_DataOnlyFragmentTemplate& InDataOnlyFragmentTemplate);

    UFUNCTION(BlueprintNativeEvent)
    void
    ForEachEntity(
        FCk_Time InTime,
        FCk_Handle InHandle,
        UPARAM(ref) FFragment_DataOnlyFragmentTemplate& InDataOnlyFragmentTemplate) const;

public:
    auto
    Tick(
        TimeType InTime) -> void override;
};

// --------------------------------------------------------------------------------------------------------------------

UCLASS(Abstract, Blueprintable, NotBlueprintType)
class DATAONLYFRAGMENTTEMPLATE_API UProcessorInjector_DataOnlyFragmentTemplate_UE : public UCk_EcsWorld_ProcessorInjector_Base_UE
{
    GENERATED_BODY()

public:
    CK_GENERATED_BODY(UProcessorInjector_DataOnlyFragmentTemplate_UE);

protected:
    auto
    DoInjectProcessors(
        EcsWorldType& InWorld) -> void override;

private:
    UPROPERTY(EditDefaultsOnly, meta=(AllowPrivateAccess))
    TSubclassOf<UProcessor_DataOnlyFragmentTemplate_UE> _Processor;
};

// --------------------------------------------------------------------------------------------------------------------
