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

CK_DEFINE_ECS_TAG(FTag_EcsScriptTemplate_Setup);

// --------------------------------------------------------------------------------------------------------------------

USTRUCT(BlueprintType)
struct ECSSCRIPTTEMPLATE_API FFragment_EcsScriptTemplate_Requests
{
    GENERATED_BODY()

public:
    CK_GENERATED_BODY(FFragment_EcsScriptTemplate_Requests);

public:
    friend class UUtils_EcsScriptTemplate_UE;

private:
    UPROPERTY(EditAnywhere, BlueprintReadWrite,
        meta=(AllowPrivateAccess))
    TArray<FInstancedStruct> _Requests;

public:
    CK_PROPERTY_GET(_Requests)
};

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
    UFUNCTION(BlueprintImplementableEvent)
    void
    ForEachEntity(
        FCk_Time InTime,
        FCk_Handle InHandle,
        UPARAM(ref) FFragment_EcsScriptTemplate_Params& InEcsScriptTemplate_Params,
        UPARAM(ref) FFragment_EcsScriptTemplate_Current& InEcsScriptTemplate_Current) const;

public:
    auto
    Tick(
        TimeType InTime) -> void override;

private:
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess))
    FCk_Handle _CurrentHandle;
};

// --------------------------------------------------------------------------------------------------------------------

UCLASS(Abstract, Blueprintable)
class ECSSCRIPTTEMPLATE_API UProcessor_EcsScriptTemplate_Update_UE : public UCk_Ecs_ProcessorScript_Base_UE
{
    GENERATED_BODY()

public:
    CK_GENERATED_BODY(UProcessor_EcsScriptTemplate_Update_UE);

public:
    CK_DEFINE_STAT(STAT_ForEachEntity, UProcessor_EcsScriptTemplate_Update_UE, FStatGroup_STATGROUP_CkProcessors_Details);
    CK_DEFINE_STAT(STAT_Tick, UProcessor_EcsScriptTemplate_Update_UE, FStatGroup_STATGROUP_CkProcessors);

protected:
    UFUNCTION(BlueprintCallable,
        BlueprintPure = false,
        DisplayName = "[EcsScriptTemplate] Broadcast OnUpdate",
        meta=(HideSelfPin = true, CompactNodeTitle="Broadcast OnUpdate"))
    void
    Broadcast_OnUpdate(
        const FCk_Handle& InHandle,
        const FInstancedStruct& InOptionalPayload) const;

    UFUNCTION(BlueprintImplementableEvent)
    void
    ForEachEntity(
        FCk_Time InTime,
        FCk_Handle InHandle,
        const FFragment_EcsScriptTemplate_Params& InEcsScriptTemplate_Params,
        UPARAM(ref) FFragment_EcsScriptTemplate_Current& InEcsScriptTemplate_Current) const;

public:
    auto
    Tick(
        TimeType InTime) -> void override;

private:
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess))
    FCk_Handle _CurrentHandle;
};

// --------------------------------------------------------------------------------------------------------------------

UCLASS(Abstract, Blueprintable)
class ECSSCRIPTTEMPLATE_API UProcessor_EcsScriptTemplate_HandleRequests_UE : public UCk_Ecs_ProcessorScript_Base_UE
{
    GENERATED_BODY()

public:
    CK_GENERATED_BODY(UProcessor_EcsScriptTemplate_HandleRequests_UE);

public:
    CK_DEFINE_STAT(STAT_ForEachEntity, UProcessor_EcsScriptTemplate_HandleRequests_UE, FStatGroup_STATGROUP_CkProcessors_Details);
    CK_DEFINE_STAT(STAT_Tick, UProcessor_EcsScriptTemplate_HandleRequests_UE, FStatGroup_STATGROUP_CkProcessors);

protected:
    UFUNCTION(BlueprintCallable,
        BlueprintPure = false,
        DisplayName = "[EcsScriptTemplate] Broadcast OnUpdate",
        meta=(HideSelfPin = true, CompactNodeTitle="Broadcast OnUpdate"))
    void
    Broadcast_OnUpdate(
        const FCk_Handle& InHandle,
        const FInstancedStruct& InOptionalPayload) const;

    UFUNCTION(BlueprintImplementableEvent)
    void
    ForEachEntity(
        FCk_Time InTime,
        FCk_Handle InHandle,
        const FFragment_EcsScriptTemplate_Params& InEcsScriptTemplate_Params,
        UPARAM(ref) FFragment_EcsScriptTemplate_Current& InEcsScriptTemplate_Current,
        const FFragment_EcsScriptTemplate_Requests& InEcsScriptTemplate_Requests) const;

public:
    auto
    Tick(
        TimeType InTime) -> void override;

private:
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess))
    FCk_Handle _CurrentHandle;
};

// --------------------------------------------------------------------------------------------------------------------
