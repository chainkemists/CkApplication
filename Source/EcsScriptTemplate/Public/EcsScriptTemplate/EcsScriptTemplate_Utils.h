#pragma once

#include "CkAttribute/Public/CkAttribute/CkAttribute_Fragment.h"

#include "CkCore/Macros/CkMacros.h"

#include "CkEcs/Delegates/CkDelegates.h"

#include "CkEcsBasics/CkEcsBasics_Utils.h"

#include "CkSignal/CkSignal_Macros.h"

#include "EcsScriptTemplate/EcsScriptTemplate_Fragment.h"

#include <InstancedStruct.h>

#include "EcsScriptTemplate_Utils.generated.h"

// --------------------------------------------------------------------------------------------------------------------
/*

!!!WARNING!!!
GENERATED FILE - DO NOT MODIFY

*/

// --------------------------------------------------------------------------------------------------------------------

DECLARE_DYNAMIC_DELEGATE_TwoParams(
    FDelegate_EcsScriptTemplate_OnDataChanged,
    FCk_Handle, InHandle,
    FInstancedStruct, InOptionalPayload);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
    FDelegate_EcsScriptTemplate_OnDataChanged_MC,
    FCk_Handle, InHandle,
    FInstancedStruct, InOptionalPayload);

// --------------------------------------------------------------------------------------------------------------------

CK_DEFINE_SIGNAL_AND_UTILS_WITH_DELEGATE(ECSSCRIPTTEMPLATE_API, EcsScriptTemplate_OnUpdate,
    FDelegate_EcsScriptTemplate_OnDataChanged_MC, FCk_Handle, FInstancedStruct);

// --------------------------------------------------------------------------------------------------------------------

UCLASS(NotBlueprintable)
class ECSSCRIPTTEMPLATE_API UUtils_EcsScriptTemplate_UE : public UCk_Utils_Ecs_Base_UE
{
    GENERATED_BODY()

public:
    CK_GENERATED_BODY(UUtils_EcsScriptTemplate_UE);

public:
    friend class UUtilsExt_EcsScriptTemplate_UE;

public:
    UFUNCTION(BlueprintCallable,
              Category = "Ck|Utils|EcsScriptTemplate",
              DisplayName="[Ck][EcsScriptTemplate] Add Feature")
    static void
    Add(
        UPARAM(ref) FCk_Handle& InHandle,
        const FFragment_EcsScriptTemplate_Params& InParams);

    UFUNCTION(BlueprintPure,
              Category = "Ck|Utils|EcsScriptTemplate",
              DisplayName="[Ck][EcsScriptTemplate] Has Feature")
    static bool
    Has(
        const FCk_Handle& InHandle);

    UFUNCTION(BlueprintPure,
              Category = "Ck|Utils|EcsScriptTemplate",
              DisplayName="[Ck][EcsScriptTemplate] Ensure Has Feature")
    static bool
    Ensure(
        const FCk_Handle& InHandle);

public:
    UFUNCTION(BlueprintCallable,
              Category = "Ck|Utils|EcsScriptTemplate",
              DisplayName="[Ck][EcsScriptTemplate] For Each",
              meta=(AutoCreateRefTerm="InOptionalPayload"))
    static void
    ForEach(
        FCk_Handle InAnyValidHandle,
        const FInstancedStruct& InOptionalPayload,
        const FCk_Lambda_InHandle& InDelegate);


public:
    UFUNCTION(BlueprintCallable,
              Category = "Ck|Utils|EcsScriptTemplate",
              DisplayName="[Ck][EcsScriptTemplate] Add Request")
    static void
    Request(
        UPARAM(ref) FCk_Handle& InHandle,
        const FInstancedStruct& InRequest);

public:
    UFUNCTION(BlueprintCallable,
              Category = "Ck|Utils|EcsScriptTemplate",
              DisplayName = "[Ck][EcsScriptTemplate] Bind To OnDataChanged")
    static void
    BindTo_OnDataChanged(
        UPARAM(ref) FCk_Handle& InHandle,
        ECk_Signal_BindingPolicy InBehavior,
        ECk_Signal_PostFireBehavior InPostFireBehavior,
        const FDelegate_EcsScriptTemplate_OnDataChanged& InDelegate);

    UFUNCTION(BlueprintCallable,
              Category = "Ck|Utils|EcsScriptTemplate",
              DisplayName = "[Ck][EcsScriptTemplate] Unbind From OnDataChanged")
    static void
    UnbindFrom_OnDataChanged(
        UPARAM(ref) FCk_Handle& InHandle,
        const FDelegate_EcsScriptTemplate_OnDataChanged& InDelegate);

private:
    static auto
    Get_Params(
        const FCk_Handle& InHandle) -> const FFragment_EcsScriptTemplate_Params&;

    static auto
    Get_Current(
        const FCk_Handle& InHandle) -> const FFragment_EcsScriptTemplate_Current&;
};

// --------------------------------------------------------------------------------------------------------------------

