#pragma once

#include "CkAttribute/Public/CkAttribute/CkAttribute_Fragment.h"

#include "CkCore/Macros/CkMacros.h"

#include "CkEcs/Delegates/CkDelegates.h"

#include "CkEcsExt/CkEcsExt_Utils.h"

#include "CkEcs/Signal/CkSignal_Macros.h"

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
    FHandle_EcsScriptTemplate, InHandle,
    FInstancedStruct, InOptionalPayload);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
    FDelegate_EcsScriptTemplate_OnDataChanged_MC,
    FHandle_EcsScriptTemplate, InHandle,
    FInstancedStruct, InOptionalPayload);

// --------------------------------------------------------------------------------------------------------------------

CK_DEFINE_SIGNAL_AND_UTILS_WITH_DELEGATE(ECSSCRIPTTEMPLATE_API, EcsScriptTemplate_OnUpdate,
    FDelegate_EcsScriptTemplate_OnDataChanged_MC, FHandle_EcsScriptTemplate, FInstancedStruct);

// --------------------------------------------------------------------------------------------------------------------

UCLASS(NotBlueprintable)
class ECSSCRIPTTEMPLATE_API UUtils_EcsScriptTemplate_UE : public UCk_Utils_Ecs_Base_UE
{
    GENERATED_BODY()

public:
    CK_GENERATED_BODY(UUtils_EcsScriptTemplate_UE);
    CK_DEFINE_CPP_CASTCHECKED_TYPESAFE(FHandle_EcsScriptTemplate);

public:
    friend class UUtilsExt_EcsScriptTemplate_UE;

public:
    UFUNCTION(BlueprintCallable,
              Category = "Utils|EcsScriptTemplate",
              DisplayName="[EcsScriptTemplate] Add Feature")
    static FHandle_EcsScriptTemplate
    Add(
        UPARAM(ref) FCk_Handle& InHandle,
        const FFragment_EcsScriptTemplate_Params& InParams);

public:
    UFUNCTION(BlueprintPure,
              Category = "Utils|EcsScriptTemplate",
              DisplayName="[EcsScriptTemplate] Has Feature")
    static bool
    Has(
        const FCk_Handle& InHandle);

private:
    UFUNCTION(BlueprintCallable,
        Category = "Utils|EcsScriptTemplate",
        DisplayName="[EcsScriptTemplate] Cast",
        meta = (ExpandEnumAsExecs = "OutResult"))
    static FHandle_EcsScriptTemplate
    DoCast(
        UPARAM(ref) FCk_Handle& InHandle,
        ECk_SucceededFailed& OutResult);

    UFUNCTION(BlueprintPure,
        Category = "Utils|EcsScriptTemplate",
        DisplayName="[EcsScriptTemplate] Handle -> EcsScriptTemplate Handle",
        meta = (CompactNodeTitle = "<AsEcsScriptTemplate>", BlueprintAutocast))
    static FHandle_EcsScriptTemplate
    DoCastChecked(
        FCk_Handle InHandle);

    UFUNCTION(BlueprintPure,
        DisplayName = "[Ck] Get Invalid EcsScriptTemplate Handle",
        Category = "Ck|Utils|EcsScriptTemplate",
        meta = (CompactNodeTitle = "INVALID_EcsScriptTemplateHandle", Keywords = "make"))
    static FHandle_EcsScriptTemplate
    Get_InvalidHandle() { return {}; };

public:
    UFUNCTION(BlueprintCallable,
              Category = "Utils|EcsScriptTemplate",
              DisplayName="[EcsScriptTemplate] For Each",
              meta=(AutoCreateRefTerm="InOptionalPayload, InDelegate"))
    static TArray<FHandle_EcsScriptTemplate>
    ForEach(
        UPARAM(ref) FCk_Handle& InAnyValidHandle,
        const FInstancedStruct& InOptionalPayload,
        const FCk_Lambda_InHandle& InDelegate);

public:
    UFUNCTION(BlueprintCallable,
              Category = "Utils|EcsScriptTemplate",
              DisplayName="[EcsScriptTemplate] Add Request")
    static void
    Request(
        UPARAM(ref) FHandle_EcsScriptTemplate& InHandle,
        const FInstancedStruct& InRequest);

public:
    UFUNCTION(BlueprintCallable,
              Category = "Utils|EcsScriptTemplate",
              DisplayName = "[EcsScriptTemplate] Bind To OnDataChanged")
    static void
    BindTo_OnDataChanged(
        UPARAM(ref) FHandle_EcsScriptTemplate& InHandle,
        ECk_Signal_BindingPolicy InBehavior,
        ECk_Signal_PostFireBehavior InPostFireBehavior,
        const FDelegate_EcsScriptTemplate_OnDataChanged& InDelegate);

    UFUNCTION(BlueprintCallable,
              Category = "Utils|EcsScriptTemplate",
              DisplayName = "[EcsScriptTemplate] Unbind From OnDataChanged")
    static void
    UnbindFrom_OnDataChanged(
        UPARAM(ref) FHandle_EcsScriptTemplate& InHandle,
        const FDelegate_EcsScriptTemplate_OnDataChanged& InDelegate);

private:
    static auto
    Get_Params(
        const FHandle_EcsScriptTemplate& InHandle) -> const FFragment_EcsScriptTemplate_Params&;

    static auto
    Get_Current(
        const FHandle_EcsScriptTemplate& InHandle) -> const FFragment_EcsScriptTemplate_Current&;
};

// --------------------------------------------------------------------------------------------------------------------

