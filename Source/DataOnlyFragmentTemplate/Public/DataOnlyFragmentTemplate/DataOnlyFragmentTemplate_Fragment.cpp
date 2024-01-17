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
    const auto& Processor = UCk_Utils_ProcessorScript_Subsystem_UE::Request_CreateNewProcessorScript(GetWorld(),
        UCk_Processor_DataOnlyFragmentTemplate_UE::StaticClass());

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
}

auto
    UCk_Utils_DataOnlyFragmentTemplate_UE::
    Has(
        FCk_Handle InHandle)
    -> bool
{
    return false;
}

auto
    UCk_Utils_DataOnlyFragmentTemplate_UE::
    Ensure(
        FCk_Handle InTimer)
    -> bool
{
    return false;
}
