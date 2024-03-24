#include "EcsScriptTemplate_Fragment.h"

#include "CkCore/Object/CkObject_Utils.h"
#include "EcsScriptTemplate/EcsScriptTemplate_Log.h"

#include "Kismet2/BlueprintEditorUtils.h"
#include "Kismet2/KismetEditorUtilities.h"

#include "UObject/PropertyAccessUtil.h"
#include "UObject/UnrealType.h"
#include "UObject/UnrealTypePrivate.h"

// --------------------------------------------------------------------------------------------------------------------

CK_INTENTIONALLY_EMPTY()

auto
    UCk_DataViewer_PDA::
    PostCDOCompiled()
    -> void
{
    //if (ck::Is_NOT_Valid(_ConstructionScript))
    //{ return; }

    //auto Blueprint = Cast<UBlueprint>(UCk_Utils_Object_UE::Get_ClassGeneratedByBlueprint(GetClass()));

    //if (NOT ck::IsValid(Blueprint))
    //{ return; }

    ////for (const auto Property : _Properties)
    ////{
    ////    FBlueprintEditorUtils::RemoveMemberVariable(Blueprint, Property);
    ////}

    //bool CompileAgainIfSelfProperties = false;

    //for (auto Itr = TFieldIterator<FProperty>{GetClass()}; Itr; ++Itr)
    //{
    //    FField* Field = *Itr;
    //    FStructProperty* Property = static_cast<FStructProperty*>(Field);

    //    if (NOT (Property->PropertyFlags & CPF_BlueprintVisible))
    //    { continue; }

    //    CompileAgainIfSelfProperties = true;

    //    FBlueprintEditorUtils::RemoveMemberVariable(Blueprint, *Itr->GetNameCPP());
    //    ecs_script_template::Log(TEXT("Self Property: {}"), Itr->GetNameCPP());
    //}

    //if (CompileAgainIfSelfProperties)
    //{
    //    FKismetEditorUtilities::CompileBlueprint(Blueprint);
    //}

    //for (auto Itr = TFieldIterator<FProperty>{_ConstructionScript.Get()}; Itr; ++Itr)
    //{
    //    FField* Field = *Itr;
    //    FStructProperty* Property = static_cast<FStructProperty*>(Field);

    //    if (NOT (Property->PropertyFlags & CPF_ExposeOnSpawn))
    //    { continue; }

    //    auto PinType          = FEdGraphPinType{};
    //    //PinType.PinCategory   = UEdGraphSchema_K2::PC_Struct; // *Itr->GetCPPType();
    //    //PinType.ContainerType = EPinContainerType::None;
    //    //_Properties.Add(*Itr->GetDisplayNameText().ToString());
    //    //FBlueprintEditorUtils::AddMemberVariable(Blueprint, *Itr->GetDisplayNameText().ToString(), PinType);

    //    if (Property-> IsA(FBoolProperty::StaticClass()))
    //    {
    //        PinType.PinCategory = UEdGraphSchema_K2::PC_Boolean;
    //    }
    //    else if (Property->IsA(FInt8Property::StaticClass()))
    //    {
    //        PinType.PinCategory = UEdGraphSchema_K2::PC_Byte;
    //    }
    //    else if (Property->IsA(FInt16Property::StaticClass()))
    //    {
    //        PinType.PinCategory = UEdGraphSchema_K2::PC_Int;
    //    }
    //    else if (Property->IsA(FIntProperty::StaticClass()))
    //    {
    //        PinType.PinCategory = UEdGraphSchema_K2::PC_Int;
    //    }
    //    else if (Property->IsA(FInt64Property::StaticClass()))
    //    {
    //        PinType.PinCategory = UEdGraphSchema_K2::PC_Int64;
    //    }
    //    else if (Property->IsA(FFloatProperty::StaticClass()))
    //    {
    //        PinType.PinCategory = UEdGraphSchema_K2::PC_Float;
    //    }
    //    else if (Property->IsA(FDoubleProperty::StaticClass()))
    //    {
    //        PinType.PinCategory = UEdGraphSchema_K2::PC_Double;
    //    }
    //    else if (Property->IsA(FStrProperty::StaticClass()))
    //    {
    //        PinType.PinCategory = UEdGraphSchema_K2::PC_String;
    //    }
    //    else if (Property->IsA(FNameProperty::StaticClass()))
    //    {
    //        PinType.PinCategory = UEdGraphSchema_K2::PC_Name;
    //    }
    //    else if (Property->IsA(FTextProperty::StaticClass()))
    //    {
    //        PinType.PinCategory = UEdGraphSchema_K2::PC_Text;
    //    }
    //    else if (Property->IsA(FByteProperty::StaticClass()))
    //    {
    //        PinType.PinCategory = UEdGraphSchema_K2::PC_Enum;
    //    }
    //    else if (Property->IsA(FObjectPropertyBase::StaticClass()))
    //    {
    //        PinType.PinCategory = UEdGraphSchema_K2::PC_Object;
    //        PinType.PinSubCategoryObject = Property->Struct;
    //    }
    //    else if (Property->IsA(FArrayProperty::StaticClass()))
    //    {
    //        continue;
    //    }
    //    else if (Property->IsA(FMapProperty::StaticClass()))
    //    {
    //        continue;
    //    }
    //    else if (Property->IsA(FSetProperty::StaticClass()))
    //    {
    //        continue;
    //    }
    //    else if (Property->IsA(FStructProperty::StaticClass()))
    //    {
    //        PinType.PinCategory = UEdGraphSchema_K2::PC_Struct;
    //        PinType.PinSubCategoryObject = Property->Struct;
    //    }
    //    // Add more checks for other property types as needed...
    //    else
    //    {
    //        continue;
    //    }

    //    _Properties.Add(*Itr->GetDisplayNameText().ToString());
    //    FBlueprintEditorUtils::AddMemberVariable(Blueprint, *Itr->GetDisplayNameText().ToString(), PinType);


    //    //ecs_script_template::Log(TEXT("Name {} Type {}"), Itr->GetDisplayNameText(), Itr->GetCPPType());

    //    ////UStructProperty* StructProperty = Cast<UStructProperty>(Itr.);

    //    //auto SubObject = const_cast<UObject*>(Cast<UObject>(Itr.GetStruct()));

    //    //FStructProperty* StructProp = static_cast<FStructProperty*>(Field);

    //    //auto SubCategoryObject = Cast<UObject>(Itr.GetStruct());
    //    //auto PinType          = FEdGraphPinType{};
    //    //PinType.PinCategory   = UEdGraphSchema_K2::PC_Struct; // *Itr->GetCPPType();
    //    //PinType.PinSubCategoryObject = StructProp->Struct;
    //    //PinType.ContainerType = EPinContainerType::None;
    //    //_Properties.Add(*Itr->GetDisplayNameText().ToString());
    //    //FBlueprintEditorUtils::AddMemberVariable(Blueprint, *Itr->GetDisplayNameText().ToString(), PinType);
    //}

    Super::PostCDOCompiled();

    return;
}

void
    UCk_DataViewer_PDA::PostEditChangeProperty(
        FPropertyChangedEvent& InPropertyChangedEvent)
{
    Super::PostEditChangeProperty(InPropertyChangedEvent);

    auto ThisBlueprint = Cast<UBlueprint>(UCk_Utils_Object_UE::Get_ClassGeneratedByBlueprint(GetClass()));

    if (NOT ck::IsValid(ThisBlueprint))
    { return; }

    auto Blueprint = Cast<UBlueprint>(UCk_Utils_Object_UE::Get_ClassGeneratedByBlueprint(_ConstructionScript.Get()));

    if (NOT Blueprint)
    { return; }

    if (InPropertyChangedEvent.Property->GetFName() == TEXT("New Var"))
    {
        //auto Found = _ConstructionScript.Get()->FindPropertyByName(TEXT("NewVar"));
        //if (Found)
        //{
            //PropertyAccessUtil::FindPropertyByName(TEXT("New Var"), Blueprint);
            //PropertyAccessUtil::SetPropertyValue_Object(*Found, Blueprint, InPropertyChangedEvent.Property,
        {

            auto Found = Blueprint->NewVariables.FindByPredicate([&](const FBPVariableDescription& InVarDesc)
            {
                if (InVarDesc.VarName == TEXT("NewVar"))
                { return true; }

                return false;
            });

            if (Found)
            {
                const UObject* ThisDO = this;
                const uint8* ThisContainer = (const uint8*)ThisDO;

                uint8* ThatContainer = (uint8*)Blueprint;

                FString Value;
                FBlueprintEditorUtils::PropertyValueToString(InPropertyChangedEvent.Property, ThisContainer, Value);
                    Found->DefaultValue = Value;

                FKismetEditorUtilities::CompileBlueprint(Blueprint);
                std::ignore = Blueprint->MarkPackageDirty();
                return;
            }
        }

        //    FBlueprintEditorUtils::PropertyValueFromString(Found, Value, ThatContainer);
        //}

        return;

        for (auto Itr = TFieldIterator<FProperty>{_ConstructionScript.Get()}; Itr; ++Itr)
        {
            FField* Field = *Itr;
            FStructProperty* Property = static_cast<FStructProperty*>(Field);

            Property->SetMetaData(TEXT("ExposeToCinematics"), TEXT("True"));

            if (Property->GetDisplayNameText().ToString() == TEXT("New Var"))
            {
                //InPropertyChangedEvent.Property->CopySingleValue(Property, InPropertyChangedEvent.Property);
                FString Value;

                const UObject* ThisDO = this;
                const uint8* ThisContainer = (const uint8*)ThisDO;

                UObject* ThatDO = Blueprint;
                uint8* ThatContainer = (uint8*)_ConstructionScript.Get();

                UObject* ThatDOCDO = Blueprint;
                uint8* ThatContainerCDO = (uint8*)ThatDOCDO;

                FBlueprintEditorUtils::PropertyValueToString(InPropertyChangedEvent.Property, ThisContainer, Value);
                FBlueprintEditorUtils::PropertyValueFromString(Property, Value, ThatContainer);
                FBlueprintEditorUtils::PropertyValueFromString(Property, Value, ThatContainerCDO);
            }
        }
    }
}

void
    UCk_DataViewer_PDA::DoIt()
{
    if (ck::Is_NOT_Valid(_ConstructionScript))
    { return; }

    auto Blueprint = Cast<UBlueprint>(UCk_Utils_Object_UE::Get_ClassGeneratedByBlueprint(GetClass()));

    if (NOT ck::IsValid(Blueprint))
    { return; }

    for (auto Itr = TFieldIterator<FProperty>{GetClass()}; Itr; ++Itr)
    {
        FField* Field = *Itr;
        FStructProperty* Property = static_cast<FStructProperty*>(Field);

        if (NOT (Property->PropertyFlags & CPF_BlueprintVisible))
        { continue; }

        FBlueprintEditorUtils::RemoveMemberVariable(Blueprint, *Itr->GetNameCPP());
        ecs_script_template::Log(TEXT("Self Property: {}"), Itr->GetNameCPP());
    }

    for (auto Itr = TFieldIterator<FProperty>{_ConstructionScript.Get()}; Itr; ++Itr)
    {
        FField* Field = *Itr;
        FStructProperty* Property = static_cast<FStructProperty*>(Field);

        if (NOT (Property->PropertyFlags & CPF_ExposeOnSpawn))
        { continue; }

        auto PinType          = FEdGraphPinType{};
        //PinType.PinCategory   = UEdGraphSchema_K2::PC_Struct; // *Itr->GetCPPType();
        //PinType.ContainerType = EPinContainerType::None;
        //_Properties.Add(*Itr->GetDisplayNameText().ToString());
        //FBlueprintEditorUtils::AddMemberVariable(Blueprint, *Itr->GetDisplayNameText().ToString(), PinType);

        if (Property-> IsA(FBoolProperty::StaticClass()))
        {
            PinType.PinCategory = UEdGraphSchema_K2::PC_Boolean;
        }
        else if (Property->IsA(FInt8Property::StaticClass()))
        {
            PinType.PinCategory = UEdGraphSchema_K2::PC_Byte;
        }
        else if (Property->IsA(FInt16Property::StaticClass()))
        {
            PinType.PinCategory = UEdGraphSchema_K2::PC_Int;
        }
        else if (Property->IsA(FIntProperty::StaticClass()))
        {
            PinType.PinCategory = UEdGraphSchema_K2::PC_Int;
        }
        else if (Property->IsA(FInt64Property::StaticClass()))
        {
            PinType.PinCategory = UEdGraphSchema_K2::PC_Int64;
        }
        else if (Property->IsA(FFloatProperty::StaticClass()))
        {
            PinType.PinCategory = UEdGraphSchema_K2::PC_Float;
        }
        else if (Property->IsA(FDoubleProperty::StaticClass()))
        {
            PinType.PinCategory = UEdGraphSchema_K2::PC_Double;
        }
        else if (Property->IsA(FStrProperty::StaticClass()))
        {
            PinType.PinCategory = UEdGraphSchema_K2::PC_String;
        }
        else if (Property->IsA(FNameProperty::StaticClass()))
        {
            PinType.PinCategory = UEdGraphSchema_K2::PC_Name;
        }
        else if (Property->IsA(FTextProperty::StaticClass()))
        {
            PinType.PinCategory = UEdGraphSchema_K2::PC_Text;
        }
        else if (Property->IsA(FByteProperty::StaticClass()))
        {
            PinType.PinCategory = UEdGraphSchema_K2::PC_Enum;
        }
        else if (Property->IsA(FObjectPropertyBase::StaticClass()))
        {
            PinType.PinCategory = UEdGraphSchema_K2::PC_Object;
            PinType.PinSubCategoryObject = Property->Struct;
        }
        else if (Property->IsA(FArrayProperty::StaticClass()))
        {
            continue;
        }
        else if (Property->IsA(FMapProperty::StaticClass()))
        {
            continue;
        }
        else if (Property->IsA(FSetProperty::StaticClass()))
        {
            continue;
        }
        else if (Property->IsA(FStructProperty::StaticClass()))
        {
            PinType.PinCategory = UEdGraphSchema_K2::PC_Struct;
            PinType.PinSubCategoryObject = Property->Struct;
        }
        // Add more checks for other property types as needed...
        else
        {
            continue;
        }

        FBlueprintEditorUtils::AddMemberVariable(Blueprint, *Itr->GetDisplayNameText().ToString(), PinType);

        auto Found = Blueprint->NewVariables.FindByPredicate([&](const FBPVariableDescription& InVarDesc)
        {
            if (InVarDesc.VarName == *Itr->GetDisplayNameText().ToString())
            { return true; }

            return false;
        });

        if (Found)
        {
            Found->RemoveMetaData("BlueprintPrivate");
        }
    }

    FKismetEditorUtilities::CompileBlueprint(Blueprint);
}
