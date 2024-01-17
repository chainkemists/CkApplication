#include "DataOnlyFragmentTemplate_Processor.h"

#include "CkEcs/Processor/CkProcessorScript_Subsystem.h"

#include "DataOnlyFragmentTemplate/DataOnlyFragmentTemplate_Fragment.h"
#include "DataOnlyFragmentTemplate/DataOnlyFragmentTemplate_Utils.h"

// --------------------------------------------------------------------------------------------------------------------

auto
    UProcessor_DataOnlyFragmentTemplate_UE::
    ForEachEntity_Implementation(
        FCk_Time                            InTime,
        FCk_Handle                          InHandle,
        FFragment_DataOnlyFragmentTemplate& InDataOnlyFragmentTemplate) const
    -> void
{
}

auto
    UProcessor_DataOnlyFragmentTemplate_UE::
    Broadcast_OnUpdate(
        FCk_Handle&                         InHandle,
        const FFragment_DataOnlyFragmentTemplate& InDataOnlyFragmentTemplate)
    -> void
{
    UUtils_Signal_DataOnlyFragmentTemplate_OnUpdate::Broadcast(InHandle, ck::MakePayload(InHandle, InDataOnlyFragmentTemplate));
}

auto
    UProcessor_DataOnlyFragmentTemplate_UE::
    Tick(
        TimeType InTime)
    -> void
{
    CK_STAT(STAT_Tick);

    Super::Tick(InTime);

    switch(Get_ForEachPolicy())
    {
        case ECk_Ecs_ForEach_Policy::OnlyValidEntities:
        {
            _Registry->View<FFragment_DataOnlyFragmentTemplate, CK_IGNORE_PENDING_KILL>().ForEach(
            [&](EntityType InEntity, FFragment_DataOnlyFragmentTemplate& InFragment)
            {
                CK_STAT(STAT_ForEachEntity);

                const auto Handle = HandleType{InEntity, *_Registry};

                if (ProcessEntity_If(Handle))
                { ForEachEntity(InTime, Handle, InFragment); }
            });
            break;
        }
        case ECk_Ecs_ForEach_Policy::AllEntities:
        {
            _Registry->View<FFragment_DataOnlyFragmentTemplate>().ForEach(
            [&](EntityType InEntity, FFragment_DataOnlyFragmentTemplate& InFragment)
            {
                CK_STAT(STAT_ForEachEntity);

                const auto Handle = HandleType{InEntity, *_Registry};

                if (ProcessEntity_If(Handle))
                { ForEachEntity(InTime, Handle, InFragment); }
            });
            break;
        }
    }
}

// --------------------------------------------------------------------------------------------------------------------

auto
    UProcessorInjector_DataOnlyFragmentTemplate_UE::
    DoInjectProcessors(
        EcsWorldType& InWorld)
    -> void
{
    const auto& Processor = UCk_Utils_ProcessorScript_Subsystem_UE::Request_CreateNewProcessorScript(GetWorld(), _Processor);

    InWorld.Add(Processor);
}

// --------------------------------------------------------------------------------------------------------------------
