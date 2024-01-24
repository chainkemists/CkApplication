#include "EcsScriptTemplate_Processor.h"

#include "CkEcs/Processor/CkProcessorScript_Subsystem.h"

#include "EcsScriptTemplate/EcsScriptTemplate_Fragment.h"
#include "EcsScriptTemplate/EcsScriptTemplate_Utils.h"

// --------------------------------------------------------------------------------------------------------------------
/*

!!!WARNING!!!
GENERATED FILE - DO NOT MODIFY

*/
// --------------------------------------------------------------------------------------------------------------------

auto
    UProcessor_EcsScriptTemplate_Setup_UE::
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
            _Registry->View<FFragment_EcsScriptTemplate_Params, FFragment_EcsScriptTemplate_Current,
                FTag_EcsScriptTemplate_Setup, CK_IGNORE_PENDING_KILL>().ForEach(
            [&](EntityType InEntity, FFragment_EcsScriptTemplate_Params& InParams, FFragment_EcsScriptTemplate_Current& InCurrent)
            {
                CK_STAT(STAT_ForEachEntity);

                const auto Handle = HandleType{InEntity, *_Registry};
                _CurrentHandle = Handle;

                if (ProcessEntity_If(Handle))
                {
                    ForEachEntity(InTime, Handle, InParams, InCurrent);
                }
            });

            break;
        }
        case ECk_Ecs_ForEach_Policy::AllEntities:
        {
            _Registry->View<FFragment_EcsScriptTemplate_Params, FFragment_EcsScriptTemplate_Current,
                FTag_EcsScriptTemplate_Setup>().ForEach(
            [&](EntityType InEntity, FFragment_EcsScriptTemplate_Params& InParams, FFragment_EcsScriptTemplate_Current& InCurrent)
            {
                CK_STAT(STAT_ForEachEntity);

                const auto Handle = HandleType{InEntity, *_Registry};
                _CurrentHandle = Handle;

                if (ProcessEntity_If(Handle))
                {
                    ForEachEntity(InTime, Handle, InParams, InCurrent);
                }
            });

            break;
        }
    }

    _CurrentHandle = {};
    _Registry->Clear<FTag_EcsScriptTemplate_Setup>();
}

// --------------------------------------------------------------------------------------------------------------------

auto
    UProcessor_EcsScriptTemplate_Update_UE::
    Broadcast_OnUpdate(
        FCk_Handle& InHandle,
        const FFragment_EcsScriptTemplate_Current& InEcsScriptTemplate) const
    -> void
{
    UUtils_Signal_EcsScriptTemplate_OnUpdate::Broadcast(InHandle, ck::MakePayload(InHandle, InEcsScriptTemplate));
}

auto
    UProcessor_EcsScriptTemplate_Update_UE::
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
            _Registry->View<FFragment_EcsScriptTemplate_Params, FFragment_EcsScriptTemplate_Current,
                ck::TExclude<FTag_EcsScriptTemplate_Setup>, CK_IGNORE_PENDING_KILL>().ForEach(
            [&](EntityType InEntity, const FFragment_EcsScriptTemplate_Params& InParams, FFragment_EcsScriptTemplate_Current& InCurrent)
            {
                CK_STAT(STAT_ForEachEntity);

                const auto Handle = HandleType{InEntity, *_Registry};
                _CurrentHandle = Handle;

                if (ProcessEntity_If(Handle))
                {
                    ForEachEntity(InTime, Handle, InParams, InCurrent);
                }
            });

            break;
        }
        case ECk_Ecs_ForEach_Policy::AllEntities:
        {
            _Registry->View<FFragment_EcsScriptTemplate_Params, FFragment_EcsScriptTemplate_Current,
                ck::TExclude<FTag_EcsScriptTemplate_Setup>>().ForEach(
            [&](EntityType InEntity, const FFragment_EcsScriptTemplate_Params& InParams, FFragment_EcsScriptTemplate_Current& InCurrent)
            {
                CK_STAT(STAT_ForEachEntity);

                const auto Handle = HandleType{InEntity, *_Registry};
                _CurrentHandle = Handle;

                if (ProcessEntity_If(Handle))
                {
                    ForEachEntity(InTime, Handle, InParams, InCurrent);
                }
            });

            break;
        }
    }

    _CurrentHandle = {};
}

// --------------------------------------------------------------------------------------------------------------------

auto
    UProcessor_EcsScriptTemplate_HandleRequests_UE::
    Broadcast_OnUpdate(
        FCk_Handle& InHandle,
        const FFragment_EcsScriptTemplate_Current& InEcsScriptTemplate) const
        -> void
{
    UUtils_Signal_EcsScriptTemplate_OnUpdate::Broadcast(InHandle, ck::MakePayload(InHandle, InEcsScriptTemplate));
}

auto
    UProcessor_EcsScriptTemplate_HandleRequests_UE::
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
            _Registry->View<FFragment_EcsScriptTemplate_Params, FFragment_EcsScriptTemplate_Current,
                TArray<FFragment_EcsScriptTemplate_Request>, CK_IGNORE_PENDING_KILL>().ForEach(
            [&](EntityType InEntity, const FFragment_EcsScriptTemplate_Params& InParams, FFragment_EcsScriptTemplate_Current& InCurrent,
                const TArray<FFragment_EcsScriptTemplate_Request>& InRequests)
            {
                CK_STAT(STAT_ForEachEntity);

                const auto Handle = HandleType{InEntity, *_Registry};
                _CurrentHandle = Handle;

                if (ProcessEntity_If(Handle))
                {
                    ForEachEntity(InTime, Handle, InParams, InCurrent, InRequests);
                }
            });

            break;
        }
        case ECk_Ecs_ForEach_Policy::AllEntities:
        {
            _Registry->View<FFragment_EcsScriptTemplate_Params, FFragment_EcsScriptTemplate_Current,
                TArray<FFragment_EcsScriptTemplate_Request>>().ForEach(
            [&](EntityType InEntity, const FFragment_EcsScriptTemplate_Params& InParams, FFragment_EcsScriptTemplate_Current& InCurrent,
                const TArray<FFragment_EcsScriptTemplate_Request>& InRequests)
            {
                CK_STAT(STAT_ForEachEntity);

                const auto Handle = HandleType{InEntity, *_Registry};
                _CurrentHandle = Handle;

                if (ProcessEntity_If(Handle))
                {
                    ForEachEntity(InTime, Handle, InParams, InCurrent, InRequests);
                }
            });

            break;
        }
    }

    _CurrentHandle = {};
    _Registry->Clear<TArray<FFragment_EcsScriptTemplate_Request>>();
}

// --------------------------------------------------------------------------------------------------------------------
