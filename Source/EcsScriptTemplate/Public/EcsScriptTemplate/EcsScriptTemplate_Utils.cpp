#include "EcsScriptTemplate_Utils.h"

#include "CkEcs/Processor/CkProcessorScript_Subsystem.h"

#include "EcsScriptTemplate/EcsScriptTemplate_Processor.h"

// --------------------------------------------------------------------------------------------------------------------
/*

!!!WARNING!!!
GENERATED FILE - DO NOT MODIFY

*/
// --------------------------------------------------------------------------------------------------------------------

auto
    UUtils_EcsScriptTemplate_UE::
    Add(
        FCk_Handle& InHandle,
        const FFragment_EcsScriptTemplate_Params& InParams)
    -> FHandle_EcsScriptTemplate
{
    InHandle.Add<FFragment_EcsScriptTemplate_Params>(InParams);
    InHandle.Add<FFragment_EcsScriptTemplate_Current>();
    InHandle.Add<FTag_EcsScriptTemplate_Setup>();

    return Cast(InHandle);
}

// --------------------------------------------------------------------------------------------------------------------

CK_DEFINE_HAS_CAST_CONV_HANDLE_TYPESAFE(UUtils_EcsScriptTemplate_UE, FHandle_EcsScriptTemplate, FFragment_EcsScriptTemplate_Params, FFragment_EcsScriptTemplate_Current);

// --------------------------------------------------------------------------------------------------------------------

auto
    UUtils_EcsScriptTemplate_UE::
    ForEach(
        FCk_Handle& InAnyValidHandle,
        const FInstancedStruct& InOptionalPayload,
        const FCk_Lambda_InHandle& InDelegate)
    -> TArray<FHandle_EcsScriptTemplate>
{
    CK_ENSURE_IF_NOT(ck::IsValid(InAnyValidHandle),
        TEXT("Unable to iterate over all Entities with the EcsScriptTemplate Feature as the passed in Entity [{}] is INVALID.{}"),
        InAnyValidHandle, ck::Context(InDelegate.GetFunctionName()))
    { return {}; }

    auto EntitiesWithFragment = TArray<FHandle_EcsScriptTemplate>{};

    InAnyValidHandle.View<FFragment_EcsScriptTemplate_Params, FFragment_EcsScriptTemplate_Current, CK_IGNORE_PENDING_KILL>()
    .ForEach([&](FCk_Entity InEntity, FFragment_EcsScriptTemplate_Params& InParams, FFragment_EcsScriptTemplate_Current& InCurrent)
    {
        const auto Handle = ck::MakeHandle(InEntity, InAnyValidHandle);
        const auto TypeSafeHandle = Cast(Handle);

        EntitiesWithFragment.Add(TypeSafeHandle);

        std::ignore = InDelegate.ExecuteIfBound(Handle, InOptionalPayload);
    });

    return EntitiesWithFragment;
}

auto
    UUtils_EcsScriptTemplate_UE::
    Request(
        FHandle_EcsScriptTemplate& InHandle,
        const FInstancedStruct& InRequest)
    -> void
{
    InHandle.AddOrGet<FFragment_EcsScriptTemplate_Requests>()._Requests.Emplace(InRequest);
}

auto
    UUtils_EcsScriptTemplate_UE::
    BindTo_OnDataChanged(
        FHandle_EcsScriptTemplate& InHandle,
        ECk_Signal_BindingPolicy InBehavior,
        ECk_Signal_PostFireBehavior InPostFireBehavior,
        const FDelegate_EcsScriptTemplate_OnDataChanged& InDelegate)
    -> void
{
    CK_SIGNAL_BIND(UUtils_Signal_EcsScriptTemplate_OnUpdate, InHandle, InDelegate, InBehavior, InPostFireBehavior);
}

auto
    UUtils_EcsScriptTemplate_UE::
    UnbindFrom_OnDataChanged(
        FHandle_EcsScriptTemplate& InHandle,
        const FDelegate_EcsScriptTemplate_OnDataChanged& InDelegate)
    -> void
{
    CK_SIGNAL_UNBIND(UUtils_Signal_EcsScriptTemplate_OnUpdate, InHandle, InDelegate);
}

auto
    UUtils_EcsScriptTemplate_UE::
    Get_Params(
        const FHandle_EcsScriptTemplate& InHandle)
    -> const FFragment_EcsScriptTemplate_Params&
{
    return InHandle.Get<FFragment_EcsScriptTemplate_Params>();
}

auto
    UUtils_EcsScriptTemplate_UE::
    Get_Current(
        const FHandle_EcsScriptTemplate& InHandle)
    -> const FFragment_EcsScriptTemplate_Current&
{
    return InHandle.Get<FFragment_EcsScriptTemplate_Current>();
}

// --------------------------------------------------------------------------------------------------------------------
