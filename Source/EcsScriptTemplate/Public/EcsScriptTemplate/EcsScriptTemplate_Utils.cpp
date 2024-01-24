#include "EcsScriptTemplate_Utils.h"

#include "CkEcs/Processor/CkProcessorScript_Subsystem.h"

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
    -> void
{
    InHandle.Add<FFragment_EcsScriptTemplate_Params>(InParams);
    InHandle.Add<FFragment_EcsScriptTemplate_Current>();
    InHandle.Add<FTag_EcsScriptTemplate_Setup>();
}

auto
    UUtils_EcsScriptTemplate_UE::
    Has(
        const FCk_Handle& InHandle)
    -> bool
{
    return InHandle.Has_All<FFragment_EcsScriptTemplate_Params>();
}

auto
    UUtils_EcsScriptTemplate_UE::
    Ensure(
        const FCk_Handle& InHandle)
    -> bool
{
    CK_ENSURE_IF_NOT(Has(InHandle), TEXT("Handle [{}] does NOT have a EcsScriptTemplate"), InHandle)
    { return false; }

    return true;
}

auto
    UUtils_EcsScriptTemplate_UE::
    ForEach_EcsScriptTemplate(
        FCk_Handle InAnyValidHandle,
        const FCk_Lambda_InHandle& InDelegate)
    -> void
{
    CK_ENSURE_IF_NOT(ck::IsValid(InAnyValidHandle),
        TEXT("Unable to iterate over all Entities with the EcsScriptTemplate Feature as the passed in Entity [{}] is INVALID.{}"),
        InAnyValidHandle, ck::Context(InDelegate.GetFunctionName()))
    { return; }

    InAnyValidHandle->View<FFragment_EcsScriptTemplate_Params, FFragment_EcsScriptTemplate_Current, CK_IGNORE_PENDING_KILL>().ForEach(
    [&](FCk_Entity InEntity, FFragment_EcsScriptTemplate_Params& InParams, FFragment_EcsScriptTemplate_Current& InCurrent)
    {
        const auto Handle = ck::MakeHandle(InEntity, InAnyValidHandle);

        InDelegate.Execute(Handle);
    });
}

auto
    UUtils_EcsScriptTemplate_UE::
    Request(
        FCk_Handle& InHandle,
        const FFragment_EcsScriptTemplate_Request& InRequest)
    -> void
{
    if (NOT Ensure(InHandle))
    { return; }

    InHandle.AddOrGet<TArray<FFragment_EcsScriptTemplate_Request>>().Emplace(InRequest);
}

auto
    UUtils_EcsScriptTemplate_UE::
    BindTo_OnUpdate(
        FCk_Handle& InHandle,
        ECk_Signal_BindingPolicy InBehavior,
        ECk_Signal_PostFireBehavior InPostFireBehavior,
        const FDelegate_EcsScriptTemplate_OnUpdate& InDelegate)
    -> void
{
    if (NOT Ensure(InHandle))
    { return; }

    if (InPostFireBehavior == ECk_Signal_PostFireBehavior::DoNothing)
    { UUtils_Signal_EcsScriptTemplate_OnUpdate::Bind(InHandle, InDelegate, InBehavior); }
    else
    { UUtils_Signal_EcsScriptTemplate_OnUpdate_PostFireUnbind::Bind(InHandle, InDelegate, InBehavior); }
}

auto
    UUtils_EcsScriptTemplate_UE::
    UnbindFrom_OnUpdate(
        FCk_Handle& InHandle,
        const FDelegate_EcsScriptTemplate_OnUpdate& InDelegate)
    -> void
{
    if (NOT Ensure(InHandle))
    { return; }

    UUtils_Signal_EcsScriptTemplate_OnUpdate::Unbind(InHandle, InDelegate);
    UUtils_Signal_EcsScriptTemplate_OnUpdate_PostFireUnbind::Unbind(InHandle, InDelegate);
}

auto
    UUtils_EcsScriptTemplate_UE::
    Get_Params(
        const FCk_Handle& InHandle)
    -> const FFragment_EcsScriptTemplate_Params&
{
    if (NOT Ensure(InHandle))
    {
        static auto Invalid = FFragment_EcsScriptTemplate_Params{};
        return Invalid;
    }

    return InHandle.Get<FFragment_EcsScriptTemplate_Params>();
}

auto
    UUtils_EcsScriptTemplate_UE::
    Get_Current(
        const FCk_Handle& InHandle)
    -> const FFragment_EcsScriptTemplate_Current&
{
    if (NOT Ensure(InHandle))
    {
        static auto Invalid = FFragment_EcsScriptTemplate_Current{};
        return Invalid;
    }

    return InHandle.Get<FFragment_EcsScriptTemplate_Current>();
}

// --------------------------------------------------------------------------------------------------------------------
