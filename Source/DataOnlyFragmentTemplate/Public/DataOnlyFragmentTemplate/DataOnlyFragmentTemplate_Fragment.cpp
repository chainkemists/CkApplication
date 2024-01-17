#include "DataOnlyFragmentTemplate_Fragment.h"

#include "CkEcs/Processor/CkProcessorScript_Subsystem.h"

// --------------------------------------------------------------------------------------------------------------------

auto
    UCk_Processor_DataOnlyFragmentTemplate_UE::
    Tick(
        TimeType InTime)
    -> void
{
    CK_STAT(STAT_Tick);

    Super::Tick(InTime);
    _Registry->View<FCk_Fragment_DataOnlyFragmentTemplate>().ForEach(
    [&](EntityType InEntity, FCk_Fragment_DataOnlyFragmentTemplate& InFragment)
    {
        CK_STAT(STAT_ForEachEntity);

        const auto Handle = HandleType{InEntity, *_Registry};
        DoTick(InTime, Handle);
    });
}

// --------------------------------------------------------------------------------------------------------------------

auto
    UCk_DataOnlyFragmentTemplate_ProcessorInjector::
    DoInjectProcessors(
        EcsWorldType& InWorld)
    -> void
{
    const auto& Processor = UCk_Utils_ProcessorScript_Subsystem_UE::Request_CreateNewProcessorScript(GetWorld(), _Processor);
    InWorld.Add(Processor);
}

// --------------------------------------------------------------------------------------------------------------------

auto
    UCk_Utils_DataOnlyFragmentTemplate_UE::
    Add(
        FCk_Handle                           InHandle,
        const FCk_Fragment_DataOnlyFragmentTemplate& InParams)
    -> void
{
    InHandle.Add<FCk_Fragment_DataOnlyFragmentTemplate>(InParams);
}

auto
    UCk_Utils_DataOnlyFragmentTemplate_UE::
    Has(
        FCk_Handle InHandle)
    -> bool
{
    return InHandle.Has_All<FCk_Fragment_DataOnlyFragmentTemplate>();
}

auto
    UCk_Utils_DataOnlyFragmentTemplate_UE::
    Ensure(
        FCk_Handle InHandle)
    -> bool
{
    CK_ENSURE_IF_NOT(Has(InHandle), TEXT("Handle [{}] does NOT have a DataOnlyFragmentTemplate"), InHandle)
    { return false; }

    return true;
}

auto
    UCk_Utils_DataOnlyFragmentTemplate_UE::
    Get(
        FCk_Handle InHandle)
    -> FCk_Fragment_DataOnlyFragmentTemplate
{
    if (NOT Ensure(InHandle))
    { return {}; }

    return InHandle.Get<FCk_Fragment_DataOnlyFragmentTemplate>();
}
