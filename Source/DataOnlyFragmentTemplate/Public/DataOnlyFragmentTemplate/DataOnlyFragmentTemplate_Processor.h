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
class DATAONLYFRAGMENTTEMPLATE_API UProcessor_DataOnlyFragmentTemplate_Setup_UE : public UCk_Ecs_ProcessorScript_Base_UE
{
    GENERATED_BODY()

public:
    CK_GENERATED_BODY(UProcessor_DataOnlyFragmentTemplate_Setup_UE);

public:
    CK_DEFINE_STAT(STAT_ForEachEntity, UProcessor_DataOnlyFragmentTemplate_Setup_UE, FStatGroup_STATGROUP_CkProcessors_Details);
    CK_DEFINE_STAT(STAT_Tick, UProcessor_DataOnlyFragmentTemplate_Setup_UE, FStatGroup_STATGROUP_CkProcessors);

protected:
    UFUNCTION(BlueprintNativeEvent)
    void
    ForEachEntity(
        FCk_Time InTime,
        FCk_Handle InHandle,
        const FFragment_DataOnlyFragmentTemplate_Params& InDataOnlyFragmentTemplate_Params,
        UPARAM(ref) FFragment_DataOnlyFragmentTemplate_Current& InDataOnlyFragmentTemplate_Current) const;

public:
    auto
    Tick(
        TimeType InTime) -> void override;
};

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
        const FFragment_DataOnlyFragmentTemplate_Current& InDataOnlyFragmentTemplate);

    UFUNCTION(BlueprintNativeEvent)
    void
    ForEachEntity(
        FCk_Time InTime,
        FCk_Handle InHandle,
        const FFragment_DataOnlyFragmentTemplate_Params& InDataOnlyFragmentTemplate_Params,
        UPARAM(ref) FFragment_DataOnlyFragmentTemplate_Current& InDataOnlyFragmentTemplate_Current) const;

public:
    auto
    Tick(
        TimeType InTime) -> void override;
};

// --------------------------------------------------------------------------------------------------------------------

UCLASS(Abstract, Blueprintable)
class DATAONLYFRAGMENTTEMPLATE_API UProcessor_DataOnlyFragmentTemplate_ProcessRequests_UE : public UCk_Ecs_ProcessorScript_Base_UE
{
    GENERATED_BODY()

public:
    CK_GENERATED_BODY(UProcessor_DataOnlyFragmentTemplate_ProcessRequests_UE);

public:
    CK_DEFINE_STAT(STAT_ForEachEntity, UProcessor_DataOnlyFragmentTemplate_UE, FStatGroup_STATGROUP_CkProcessors_Details);
    CK_DEFINE_STAT(STAT_Tick, UProcessor_DataOnlyFragmentTemplate_UE, FStatGroup_STATGROUP_CkProcessors);

protected:
    UFUNCTION(BlueprintCallable,
        meta=(DefaultToSelf, CompactNodeTitle="Broadcast_OnUpdate"))
    static void
    Broadcast_OnUpdate(
        UPARAM(ref) FCk_Handle& InHandle,
        const FFragment_DataOnlyFragmentTemplate_Current& InDataOnlyFragmentTemplate);

    UFUNCTION(BlueprintNativeEvent)
    void
    ForEachEntity(
        FCk_Time InTime,
        FCk_Handle InHandle,
        const FFragment_DataOnlyFragmentTemplate_Params& InDataOnlyFragmentTemplate_Params,
        UPARAM(ref) FFragment_DataOnlyFragmentTemplate_Current& InDataOnlyFragmentTemplate_Current,
        const TArray<FFragment_DataOnlyFragmentTemplate_Request>& InDataOnlyFragmentTemplate_Requests) const;

public:
    auto
    Tick(
        TimeType InTime) -> void override;
};

// --------------------------------------------------------------------------------------------------------------------
