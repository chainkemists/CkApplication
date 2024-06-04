#pragma once

#include "CkCore/Macros/CkMacros.h"

#include "CkEcs/Delegates/CkDelegates.h"

#include "CkEcsExt/CkEcsExt_Utils.h"

#include "EcsScriptTemplate/EcsScriptTemplate_Fragment.h"

#include "EcsScriptTemplate_UtilsExt.generated.h"

// --------------------------------------------------------------------------------------------------------------------

UCLASS(NotBlueprintable)
class ECSSCRIPTTEMPLATE_API UUtilsExt_EcsScriptTemplate_UE : public UCk_Utils_Ecs_Base_UE
{
    GENERATED_BODY()

public:
    CK_GENERATED_BODY(UUtilsExt_EcsScriptTemplate_UE);

public:
    // put your extension functions for the fragment here
    // Avoid:
    // - returning fragments directly (return individual pieces of it instead)
    // - mutating fragments directly (that should be done in the processor)
    // - make individual requests and avoid exposing the Requests fragment directly

    // -----------------------
    // SAMPLE GETTER
    // -----------------------
    //UFUNCTION(BlueprintPure,
    //    Category = "Utils|EcsScriptTemplate",
    //    DisplayName="[EcsScriptTemplate] Get X")
    //static const X&
    //Get_X(
    //    const FHandle_EcsScriptTemplate& InHandle);
};

// --------------------------------------------------------------------------------------------------------------------

