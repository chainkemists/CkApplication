#pragma once

#include "CkAttribute/Public/CkAttribute/CkAttribute_Fragment.h"

#include "CkCore/Macros/CkMacros.h"

#include "CkEcs/Delegates/CkDelegates.h"

#include "CkEcsBasics/CkEcsBasics_Utils.h"

#include "CkSignal/CkSignal_Macros.h"

#include "EcsScriptTemplate/EcsScriptTemplate_Fragment.h"

#include "EcsScriptTemplate_Utils.generated.h"

// --------------------------------------------------------------------------------------------------------------------
/*

!!!WARNING!!!
GENERATED FILE - DO NOT MODIFY

*/

// --------------------------------------------------------------------------------------------------------------------

DECLARE_DYNAMIC_DELEGATE_TwoParams(
    FDelegate_EcsScriptTemplate_OnUpdate,
    FCk_Handle, InHandle,
    FFragment_EcsScriptTemplate_Current, InEcsScriptTemplate);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
    FDelegate_EcsScriptTemplate_OnUpdate_MC,
    FCk_Handle, InHandle,
    FFragment_EcsScriptTemplate_Current, InEcsScriptTemplate);
// --------------------------------------------------------------------------------------------------------------------

CK_DEFINE_SIGNAL_AND_UTILS_WITH_DELEGATE(ECSSCRIPTTEMPLATE_API, EcsScriptTemplate_OnUpdate,
    FDelegate_EcsScriptTemplate_OnUpdate_MC, FCk_Handle, FFragment_EcsScriptTemplate_Current);

// --------------------------------------------------------------------------------------------------------------------

UCLASS(NotBlueprintable)
class ECSSCRIPTTEMPLATE_API UUtils_EcsScriptTemplate_UE : public UCk_Utils_Ecs_Base_UE
{
    GENERATED_BODY()

public:
    CK_GENERATED_BODY(UUtils_EcsScriptTemplate_UE);

public:
    UFUNCTION(BlueprintCallable,
              Category = "Ck|Utils|EcsScriptTemplate",
              DisplayName="[Add Feature] EcsScriptTemplate")
    static void
    Add(
        UPARAM(ref) FCk_Handle& InHandle,
        const FFragment_EcsScriptTemplate_Params& InParams);

    UFUNCTION(BlueprintPure,
              Category = "Ck|Utils|EcsScriptTemplate",
              DisplayName="[Has Feature] EcsScriptTemplate")
    static bool
    Has(
        const FCk_Handle& InHandle);

    UFUNCTION(BlueprintPure,
              Category = "Ck|Utils|EcsScriptTemplate",
              DisplayName="[Ensure Has Feature] EcsScriptTemplate")
    static bool
    Ensure(
        const FCk_Handle& InHandle);

    UFUNCTION(BlueprintPure,
              Category = "Ck|Utils|EcsScriptTemplate",
              DisplayName="Get EcsScriptTemplate Params")
    static const FFragment_EcsScriptTemplate_Params&
    Get_Params(
        const FCk_Handle& InHandle);

    UFUNCTION(BlueprintPure,
              Category = "Ck|Utils|EcsScriptTemplate",
              DisplayName="Get EcsScriptTemplate Current")
    static const FFragment_EcsScriptTemplate_Current&
    Get_Current(
        const FCk_Handle& InHandle);

public:
    UFUNCTION(BlueprintCallable,
              Category = "Ck|Utils|EcsScriptTemplate",
              DisplayName="For Each EcsScriptTemplate",
              meta=(AutoCreateRefTerm="InDelegate"))
    static void
    ForEach_EcsScriptTemplate(
        FCk_Handle InAnyValidHandle,
        const FCk_Lambda_InHandle& InDelegate);

public:
    UFUNCTION(BlueprintCallable,
              Category = "Ck|Utils|EcsScriptTemplate",
              DisplayName="Make EcsScriptTemplate Request")
    static void
    Request(
        UPARAM(ref) FCk_Handle& InHandle,
        const FFragment_EcsScriptTemplate_Request& InRequest);

public:
    UFUNCTION(BlueprintCallable,
              Category = "Ck|Utils|EcsScriptTemplate",
              DisplayName = "Bind To OnEcsScriptTemplate Updated")
    static void
    BindTo_OnUpdate(
        UPARAM(ref) FCk_Handle& InHandle,
        ECk_Signal_BindingPolicy InBehavior,
        ECk_Signal_PostFireBehavior InPostFireBehavior,
        const FDelegate_EcsScriptTemplate_OnUpdate& InDelegate);

    UFUNCTION(BlueprintCallable,
              Category = "Ck|Utils|EcsScriptTemplate",
              DisplayName = "Unbind From OnEcsScriptTemplate Updated")
    static void
    UnbindFrom_OnUpdate(
        UPARAM(ref) FCk_Handle& InHandle,
        const FDelegate_EcsScriptTemplate_OnUpdate& InDelegate);
};

// --------------------------------------------------------------------------------------------------------------------

