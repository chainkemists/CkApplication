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
    UFUNCTION(BlueprintCallable,
        BlueprintPure = false,
        DisplayName = "[EcsScriptTemplate] Broadcast OnDataChanged",
        meta=(HideSelfPin = true, CompactNodeTitle="Broadcast OnDataChanged", AutoCreateRefTerm = "InOptionalPayload"))
    void
    Broadcast_OnDataChanged(
        UPARAM(ref) FHandle_EcsScriptTemplate& InHandle,
        const FInstancedStruct& InOptionalPayload) const;

    UFUNCTION(BlueprintImplementableEvent)
    void
    ForEachEntity(
        FCk_Time InTime,
        UPARAM(ref) FHandle_EcsScriptTemplate& InHandle,
        UPARAM(ref) FFragment_EcsScriptTemplate_Params& InEcsScriptTemplate_Params,
        UPARAM(ref) FFragment_EcsScriptTemplate_Current& InEcsScriptTemplate_Current) const;

public:
    auto
    Tick(
        TimeType InTime) -> void override;
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

public:
    UProcessor_EcsScriptTemplate_Update_UE(
        const FObjectInitializer& InObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable,
        BlueprintPure = false,
        DisplayName = "[EcsScriptTemplate] Broadcast OnDataChanged",
        meta=(HideSelfPin = true, CompactNodeTitle="Broadcast OnDataChanged", AutoCreateRefTerm = "InOptionalPayload"))
    void
    Broadcast_OnDataChanged(
        UPARAM(ref) FHandle_EcsScriptTemplate& InHandle,
        const FInstancedStruct& InOptionalPayload) const;

    UFUNCTION(BlueprintImplementableEvent)
    void
    ForEachEntity(
        FCk_Time InTime,
        UPARAM(ref) FHandle_EcsScriptTemplate& InHandle,
        const FFragment_EcsScriptTemplate_Params& InEcsScriptTemplate_Params,
        UPARAM(ref) FFragment_EcsScriptTemplate_Current& InEcsScriptTemplate_Current) const;

public:
    auto
    Tick(
        TimeType InTime) -> void override;

public:
    auto
    DoTick(
        TimeType InTime) -> void;

private:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess))
    FCk_Time _TickRate;

private:
    struct VariableTickProcessor : public ck::TProcessorBase<VariableTickProcessor>
    {
    public:
        using Super = ck::TProcessorBase<VariableTickProcessor>;
        using TimeType = FCk_Time;

    public:
        VariableTickProcessor(
            UProcessor_EcsScriptTemplate_Update_UE* InScriptProcessor);

    public:
        auto
        DoTick(TimeType InDeltaT);

    private:
        // the pointer is guaranteed to be valid, no need for a TWeakObjectPtr
        UProcessor_EcsScriptTemplate_Update_UE* _ScriptProcessor;
    };

    TUniquePtr<VariableTickProcessor> _VariableTickProcessor;
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
        DisplayName = "[EcsScriptTemplate] Broadcast OnDataChanged",
        meta=(HideSelfPin = true, CompactNodeTitle="Broadcast OnDataChanged", AutoCreateRefTerm = "InOptionalPayload"))
    void
    Broadcast_OnDataChanged(
        UPARAM(ref) FHandle_EcsScriptTemplate& InHandle,
        const FInstancedStruct& InOptionalPayload) const;

    UFUNCTION(BlueprintImplementableEvent)
    void
    ForEachEntity(
        FCk_Time InTime,
        UPARAM(ref) FHandle_EcsScriptTemplate& InHandle,
        const FFragment_EcsScriptTemplate_Params& InEcsScriptTemplate_Params,
        UPARAM(ref) FFragment_EcsScriptTemplate_Current& InEcsScriptTemplate_Current,
        const FFragment_EcsScriptTemplate_Requests& InEcsScriptTemplate_Requests) const;

public:
    auto
    Tick(
        TimeType InTime) -> void override;
};

// --------------------------------------------------------------------------------------------------------------------

UCLASS(Abstract, Blueprintable)
class ECSSCRIPTTEMPLATE_API UProcessor_EcsScriptTemplate_Teardown_UE : public UCk_Ecs_ProcessorScript_Base_UE
{
    GENERATED_BODY()

public:
    CK_GENERATED_BODY(UProcessor_EcsScriptTemplate_Teardown_UE);

public:
    CK_DEFINE_STAT(STAT_ForEachEntity, UProcessor_EcsScriptTemplate_Teardown_UE, FStatGroup_STATGROUP_CkProcessors_Details);
    CK_DEFINE_STAT(STAT_Tick, UProcessor_EcsScriptTemplate_Teardown_UE, FStatGroup_STATGROUP_CkProcessors);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void
    ForEachEntity(
        FCk_Time InTime,
        UPARAM(ref) FHandle_EcsScriptTemplate& InHandle,
        const FFragment_EcsScriptTemplate_Params& InEcsScriptTemplate_Params,
        UPARAM(ref) FFragment_EcsScriptTemplate_Current& InEcsScriptTemplate_Current) const;

public:
    auto
    Tick(
        TimeType InTime) -> void override;
};

// --------------------------------------------------------------------------------------------------------------------
