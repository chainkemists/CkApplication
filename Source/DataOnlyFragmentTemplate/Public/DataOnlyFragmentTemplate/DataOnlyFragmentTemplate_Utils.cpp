#include "DataOnlyFragmentTemplate_Utils.h"

#include "CkEcs/Processor/CkProcessorScript_Subsystem.h"

// --------------------------------------------------------------------------------------------------------------------

auto
    UUtils_DataOnlyFragmentTemplate_UE::
    Add(
        FCk_Handle                           InHandle,
        const FFragment_DataOnlyFragmentTemplate& InParams)
    -> void
{
    InHandle.Add<FFragment_DataOnlyFragmentTemplate>(InParams);
}

auto
    UUtils_DataOnlyFragmentTemplate_UE::
    Has(
        FCk_Handle InHandle)
    -> bool
{
    return InHandle.Has_All<FFragment_DataOnlyFragmentTemplate>();
}

auto
    UUtils_DataOnlyFragmentTemplate_UE::
    Ensure(
        FCk_Handle InHandle)
    -> bool
{
    CK_ENSURE_IF_NOT(Has(InHandle), TEXT("Handle [{}] does NOT have a DataOnlyFragmentTemplate"), InHandle)
    { return false; }

    return true;
}

auto
    UUtils_DataOnlyFragmentTemplate_UE::
    Get(
        FCk_Handle InHandle)
    -> FFragment_DataOnlyFragmentTemplate
{
    if (NOT Ensure(InHandle))
    { return {}; }

    return InHandle.Get<FFragment_DataOnlyFragmentTemplate>();
}

auto
    UUtils_DataOnlyFragmentTemplate_UE::
    BindTo_OnUpdate(
        FCk_Handle                                         InHandle,
        ECk_Signal_BindingPolicy                           InBehavior,
        ECk_Signal_PostFireBehavior                        InPostFireBehavior,
        const FDelegate_DataOnlyFragmentTemplate_OnUpdate& InDelegate)
    -> void
{
    if (NOT Ensure(InHandle))
    { return; }

    if (InPostFireBehavior == ECk_Signal_PostFireBehavior::DoNothing)
    { UUtils_Signal_DataOnlyFragmentTemplate_OnUpdate::Bind(InHandle, InDelegate, InBehavior); }
    else
    { UUtils_Signal_DataOnlyFragmentTemplate_OnUpdate_PostFireUnbind::Bind(InHandle, InDelegate, InBehavior); }
}

auto
    UUtils_DataOnlyFragmentTemplate_UE::
    UnbindFrom_OnUpdate(
        FCk_Handle                                         InHandle,
        const FDelegate_DataOnlyFragmentTemplate_OnUpdate& InDelegate)
    -> void
{
    if (NOT Ensure(InHandle))
    { return; }

    UUtils_Signal_DataOnlyFragmentTemplate_OnUpdate::Unbind(InHandle, InDelegate);
    UUtils_Signal_DataOnlyFragmentTemplate_OnUpdate_PostFireUnbind::Unbind(InHandle, InDelegate);
}

// --------------------------------------------------------------------------------------------------------------------
