#include "DataOnlyFragmentTemplate_Processor.h"

#include "CkEcs/Processor/CkProcessorScript_Subsystem.h"

#include "DataOnlyFragmentTemplate/DataOnlyFragmentTemplate_Fragment.h"
#include "DataOnlyFragmentTemplate/DataOnlyFragmentTemplate_Utils.h"

// --------------------------------------------------------------------------------------------------------------------
/*

!!!WARNING!!!
GENERATED FILE - DO NOT MODIFY

*/
// --------------------------------------------------------------------------------------------------------------------

auto
    UProcessor_DataOnlyFragmentTemplate_Setup_UE::
    ForEachEntity_Implementation(
        FCk_Time                                         InTime,
        FCk_Handle                                       InHandle,
        const FFragment_DataOnlyFragmentTemplate_Params& InDataOnlyFragmentTemplate_Params,
        FFragment_DataOnlyFragmentTemplate_Current&      InDataOnlyFragmentTemplate_Current) const
    -> void
{
}

auto
    UProcessor_DataOnlyFragmentTemplate_Setup_UE::
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
            _Registry->View<FFragment_DataOnlyFragmentTemplate_Params, FFragment_DataOnlyFragmentTemplate_Current,
                FTag_DataOnlyFragmentTemplate_Setup, CK_IGNORE_PENDING_KILL>().ForEach(
            [&](EntityType InEntity, const FFragment_DataOnlyFragmentTemplate_Params& InParams, FFragment_DataOnlyFragmentTemplate_Current& InCurrent)
            {
                CK_STAT(STAT_ForEachEntity);

                const auto Handle = HandleType{InEntity, *_Registry};

                if (ProcessEntity_If(Handle))
                { ForEachEntity(InTime, Handle, InParams, InCurrent); }
            });

            break;
        }
        case ECk_Ecs_ForEach_Policy::AllEntities:
        {
            _Registry->View<FFragment_DataOnlyFragmentTemplate_Params, FFragment_DataOnlyFragmentTemplate_Current,
                FTag_DataOnlyFragmentTemplate_Setup>().ForEach(
            [&](EntityType InEntity, const FFragment_DataOnlyFragmentTemplate_Params& InParams, FFragment_DataOnlyFragmentTemplate_Current& InCurrent)
            {
                CK_STAT(STAT_ForEachEntity);

                const auto Handle = HandleType{InEntity, *_Registry};

                if (ProcessEntity_If(Handle))
                { ForEachEntity(InTime, Handle, InParams, InCurrent); }
            });
            break;
        }
    }

    _Registry->Clear<FTag_DataOnlyFragmentTemplate_Setup>();
}

// --------------------------------------------------------------------------------------------------------------------

auto
    UProcessor_DataOnlyFragmentTemplate_UE::
    ForEachEntity_Implementation(
        FCk_Time                            InTime,
        FCk_Handle                          InHandle,
        const FFragment_DataOnlyFragmentTemplate_Params& InDataOnlyFragmentTemplate_Params,
        FFragment_DataOnlyFragmentTemplate_Current& InDataOnlyFragmentTemplate_Current) const
    -> void
{
}

auto
    UProcessor_DataOnlyFragmentTemplate_UE::
    Broadcast_OnUpdate(
        FCk_Handle&                         InHandle,
        const FFragment_DataOnlyFragmentTemplate_Current& InDataOnlyFragmentTemplate)
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
            _Registry->View<FFragment_DataOnlyFragmentTemplate_Params, FFragment_DataOnlyFragmentTemplate_Current,
                ck::TExclude<FTag_DataOnlyFragmentTemplate_Setup>, CK_IGNORE_PENDING_KILL>().ForEach(
            [&](EntityType InEntity, const FFragment_DataOnlyFragmentTemplate_Params& InParams, FFragment_DataOnlyFragmentTemplate_Current& InCurrent)
            {
                CK_STAT(STAT_ForEachEntity);

                const auto Handle = HandleType{InEntity, *_Registry};

                if (ProcessEntity_If(Handle))
                { ForEachEntity(InTime, Handle, InParams, InCurrent); }
            });
            break;
        }
        case ECk_Ecs_ForEach_Policy::AllEntities:
        {
            _Registry->View<FFragment_DataOnlyFragmentTemplate_Params, FFragment_DataOnlyFragmentTemplate_Current,
                ck::TExclude<FTag_DataOnlyFragmentTemplate_Setup>>().ForEach(
            [&](EntityType InEntity, const FFragment_DataOnlyFragmentTemplate_Params& InParams, FFragment_DataOnlyFragmentTemplate_Current& InCurrent)
            {
                CK_STAT(STAT_ForEachEntity);

                const auto Handle = HandleType{InEntity, *_Registry};

                if (ProcessEntity_If(Handle))
                { ForEachEntity(InTime, Handle, InParams, InCurrent); }
            });
            break;
        }
    }
}

// --------------------------------------------------------------------------------------------------------------------

auto
    UProcessor_DataOnlyFragmentTemplate_ProcessRequests_UE::
    Broadcast_OnUpdate(
        FCk_Handle&                                       InHandle,
        const FFragment_DataOnlyFragmentTemplate_Current& InDataOnlyFragmentTemplate)
        -> void
{
    UUtils_Signal_DataOnlyFragmentTemplate_OnUpdate::Broadcast(InHandle, ck::MakePayload(InHandle, InDataOnlyFragmentTemplate));
}

auto
    UProcessor_DataOnlyFragmentTemplate_ProcessRequests_UE::
    ForEachEntity_Implementation(
        FCk_Time                                         InTime,
        FCk_Handle                                       InHandle,
        const FFragment_DataOnlyFragmentTemplate_Params& InDataOnlyFragmentTemplate_Params,
        FFragment_DataOnlyFragmentTemplate_Current&      InDataOnlyFragmentTemplate_Current,
        const TArray<FFragment_DataOnlyFragmentTemplate_Request>& InDataOnlyFragmentTemplate_Requests) const
    -> void
{
}

auto
    UProcessor_DataOnlyFragmentTemplate_ProcessRequests_UE::
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
            _Registry->View<FFragment_DataOnlyFragmentTemplate_Params, FFragment_DataOnlyFragmentTemplate_Current,
                TArray<FFragment_DataOnlyFragmentTemplate_Request>, CK_IGNORE_PENDING_KILL>().ForEach(
            [&](EntityType InEntity, const FFragment_DataOnlyFragmentTemplate_Params& InParams, FFragment_DataOnlyFragmentTemplate_Current& InCurrent,
                const TArray<FFragment_DataOnlyFragmentTemplate_Request>& InRequests)
            {
                CK_STAT(STAT_ForEachEntity);

                const auto Handle = HandleType{InEntity, *_Registry};

                if (ProcessEntity_If(Handle))
                { ForEachEntity(InTime, Handle, InParams, InCurrent, InRequests); }
            });
            break;
        }
        case ECk_Ecs_ForEach_Policy::AllEntities:
        {
            _Registry->View<FFragment_DataOnlyFragmentTemplate_Params, FFragment_DataOnlyFragmentTemplate_Current,
                TArray<FFragment_DataOnlyFragmentTemplate_Request>>().ForEach(
            [&](EntityType InEntity, const FFragment_DataOnlyFragmentTemplate_Params& InParams, FFragment_DataOnlyFragmentTemplate_Current& InCurrent,
                const TArray<FFragment_DataOnlyFragmentTemplate_Request>& InRequests)
            {
                CK_STAT(STAT_ForEachEntity);

                const auto Handle = HandleType{InEntity, *_Registry};

                if (ProcessEntity_If(Handle))
                { ForEachEntity(InTime, Handle, InParams, InCurrent, InRequests); }
            });
            break;
        }
    }

    _Registry->Clear<TArray<FFragment_DataOnlyFragmentTemplate_Request>>();
}

// --------------------------------------------------------------------------------------------------------------------
