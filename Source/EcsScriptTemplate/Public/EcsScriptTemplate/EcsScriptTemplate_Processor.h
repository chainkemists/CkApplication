#pragma once

#include "CkCore/Macros/CkMacros.h"

#include "CkEcs/Processor/CkProcessor.h"
#include "CkEcs/Subsystem/CkEcsWorld_Subsystem.h"

#include "CkProfile/Stats/CkStats.h"

#include "EcsScriptTemplate/EcsScriptTemplate_Fragment.h"

#include "EcsScriptTemplate_Processor.generated.h"

// --------------------------------------------------------------------------------------------------------------------
/*

!!!WARNING!!!
GENERATED FILE - DO NOT MODIFY

*/
// --------------------------------------------------------------------------------------------------------------------

UCLASS(Abstract, Blueprintable)
class ECSSCRIPTTEMPLATE_API UProcessor_EcsScriptTemplate_Setup_UE : public UCk_Ecs_ProcessorScript_Base_UE
{
    GENERATED_BODY()

public:
    CK_GENERATED_BODY(UProcessor_EcsScriptTemplate_Setup_UE);

public:
    CK_DEFINE_STAT(STAT_ForEachEntity, UProcessor_EcsScriptTemplate_Setup_UE, FStatGroup_STATGROUP_CkProcessors_Details);
    CK_DEFINE_STAT(STAT_Tick, UProcessor_EcsScriptTemplate_Setup_UE, FStatGroup_STATGROUP_CkProcessors);

protected:
    UFUNCTION(BlueprintNativeEvent)
    void
    ForEachEntity(
        FCk_Time InTime,
        FCk_Handle InHandle,
        UPARAM(ref) FFragment_EcsScriptTemplate_Params& InEcsScriptTemplate_Params,
        UPARAM(ref) FFragment_EcsScriptTemplate_Current& InEcsScriptTemplate_Current);

public:
    auto
    Tick(
        TimeType InTime) -> void override;
};

// --------------------------------------------------------------------------------------------------------------------

UCLASS(Abstract, Blueprintable)
class ECSSCRIPTTEMPLATE_API UProcessor_EcsScriptTemplate_UE : public UCk_Ecs_ProcessorScript_Base_UE
{
    GENERATED_BODY()

public:
    CK_GENERATED_BODY(UProcessor_EcsScriptTemplate_UE);

public:
    CK_DEFINE_STAT(STAT_ForEachEntity, UProcessor_EcsScriptTemplate_UE, FStatGroup_STATGROUP_CkProcessors_Details);
    CK_DEFINE_STAT(STAT_Tick, UProcessor_EcsScriptTemplate_UE, FStatGroup_STATGROUP_CkProcessors);

protected:
    UFUNCTION(BlueprintCallable,
        meta=(DefaultToSelf, CompactNodeTitle="Broadcast_OnUpdate"))
    static void
    Broadcast_OnUpdate(
        UPARAM(ref) FCk_Handle& InHandle,
        const FFragment_EcsScriptTemplate_Current& InEcsScriptTemplate);

    UFUNCTION(BlueprintNativeEvent)
    void
    ForEachEntity(
        FCk_Time InTime,
        FCk_Handle InHandle,
        const FFragment_EcsScriptTemplate_Params& InEcsScriptTemplate_Params,
        UPARAM(ref) FFragment_EcsScriptTemplate_Current& InEcsScriptTemplate_Current);

public:
    auto
    Tick(
        TimeType InTime) -> void override;
};

// --------------------------------------------------------------------------------------------------------------------

UCLASS(Abstract, Blueprintable)
class ECSSCRIPTTEMPLATE_API UProcessor_EcsScriptTemplate_ProcessRequests_UE : public UCk_Ecs_ProcessorScript_Base_UE
{
    GENERATED_BODY()

public:
    CK_GENERATED_BODY(UProcessor_EcsScriptTemplate_ProcessRequests_UE);

public:
    CK_DEFINE_STAT(STAT_ForEachEntity, UProcessor_EcsScriptTemplate_UE, FStatGroup_STATGROUP_CkProcessors_Details);
    CK_DEFINE_STAT(STAT_Tick, UProcessor_EcsScriptTemplate_UE, FStatGroup_STATGROUP_CkProcessors);

protected:
    UFUNCTION(BlueprintCallable,
        meta=(DefaultToSelf, CompactNodeTitle="Broadcast_OnUpdate"))
    static void
    Broadcast_OnUpdate(
        UPARAM(ref) FCk_Handle& InHandle,
        const FFragment_EcsScriptTemplate_Current& InEcsScriptTemplate);

    UFUNCTION(BlueprintNativeEvent)
    void
    ForEachEntity(
        FCk_Time InTime,
        FCk_Handle InHandle,
        const FFragment_EcsScriptTemplate_Params& InEcsScriptTemplate_Params,
        UPARAM(ref) FFragment_EcsScriptTemplate_Current& InEcsScriptTemplate_Current,
        const TArray<FFragment_EcsScriptTemplate_Request>& InEcsScriptTemplate_Requests);

public:
    auto
    Tick(
        TimeType InTime) -> void override;
};

// --------------------------------------------------------------------------------------------------------------------
