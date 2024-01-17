#pragma once

#include "CkAttribute/Public/CkAttribute/CkAttribute_Fragment.h"

#include "CkCore/Macros/CkMacros.h"

#include "CkEcsBasics/CkEcsBasics_Utils.h"

#include "CkSignal/CkSignal_Macros.h"

#include "DataOnlyFragmentTemplate/DataOnlyFragmentTemplate_Fragment.h"

#include "DataOnlyFragmentTemplate_Utils.generated.h"

// --------------------------------------------------------------------------------------------------------------------
/*

!!!WARNING!!!
GENERATED FILE - DO NOT MODIFY

*/

// --------------------------------------------------------------------------------------------------------------------

DECLARE_DYNAMIC_DELEGATE_TwoParams(
    FDelegate_DataOnlyFragmentTemplate_OnUpdate,
    FCk_Handle, InHandle,
    FFragment_DataOnlyFragmentTemplate, InDataOnlyFragmentTemplate);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
    FDelegate_DataOnlyFragmentTemplate_OnUpdate_MC,
    FCk_Handle, InHandle,
    FFragment_DataOnlyFragmentTemplate, InDataOnlyFragmentTemplate);
// --------------------------------------------------------------------------------------------------------------------

CK_DEFINE_SIGNAL_AND_UTILS_WITH_DELEGATE(DATAONLYFRAGMENTTEMPLATE_API, DataOnlyFragmentTemplate_OnUpdate,
    FDelegate_DataOnlyFragmentTemplate_OnUpdate_MC, FCk_Handle, FFragment_DataOnlyFragmentTemplate);

// --------------------------------------------------------------------------------------------------------------------

UCLASS(NotBlueprintable)
class DATAONLYFRAGMENTTEMPLATE_API UUtils_DataOnlyFragmentTemplate_UE : public UCk_Utils_Ecs_Base_UE
{
    GENERATED_BODY()

public:
    CK_GENERATED_BODY(UUtils_DataOnlyFragmentTemplate_UE);

public:
    UFUNCTION(BlueprintCallable,
              Category = "Ck|Utils|DataOnlyFragmentTemplate",
              DisplayName="Add New DataOnlyFragmentTemplate")
    static void
    Add(
        FCk_Handle InHandle,
        const FFragment_DataOnlyFragmentTemplate& InParams);

    UFUNCTION(BlueprintPure,
              Category = "Ck|Utils|DataOnlyFragmentTemplate",
              DisplayName="Has DataOnlyFragmentTemplate")
    static bool
    Has(
        FCk_Handle InHandle);

    UFUNCTION(BlueprintPure,
              Category = "Ck|Utils|DataOnlyFragmentTemplate",
              DisplayName="Ensure Has DataOnlyFragmentTemplate")
    static bool
    Ensure(
        FCk_Handle InHandle);

    UFUNCTION(BlueprintPure,
              Category = "Ck|Utils|DataOnlyFragmentTemplate",
              DisplayName="Get DataOnlyFragmentTemplate")
    static FFragment_DataOnlyFragmentTemplate
    Get(
        FCk_Handle InHandle);

public:
    UFUNCTION(BlueprintCallable,
              Category = "Ck|Utils|DataOnlyFragmentTemplate",
              DisplayName = "Bind To OnDataOnlyFragmentTemplate Updated")
    static void
    BindTo_OnUpdate(
        FCk_Handle InHandle,
        ECk_Signal_BindingPolicy InBehavior,
        ECk_Signal_PostFireBehavior InPostFireBehavior,
        const FDelegate_DataOnlyFragmentTemplate_OnUpdate& InDelegate);

    UFUNCTION(BlueprintCallable,
              Category = "Ck|Utils|DataOnlyFragmentTemplate",
              DisplayName = "Unbind From OnDataOnlyFragmentTemplate Updated")
    static void
    UnbindFrom_OnUpdate(
        FCk_Handle InHandle,
        const FDelegate_DataOnlyFragmentTemplate_OnUpdate& InDelegate);
};

// --------------------------------------------------------------------------------------------------------------------

