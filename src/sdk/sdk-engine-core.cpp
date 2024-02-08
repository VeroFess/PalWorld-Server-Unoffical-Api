#include "SDKDirect.h"

SDK::TUObjectArray *SDK::UObject::GObjects = nullptr;

bool SDK::UObject::HasTypeFlag(SDK::EClassCastFlags TypeFlag) const {
    return TypeFlag != SDK::EClassCastFlags::None ? Class->CastFlags & TypeFlag : true;
}

std::string SDK::UObject::GetName() const {
    return this ? Name.ToString() : "None";
}

std::string SDK::UObject::GetFullName() const {
    if (Class) {
        std::string Temp;

        for (UObject *NextOuter = Outer; NextOuter; NextOuter = NextOuter->Outer) {
            Temp = NextOuter->GetName() + "." + Temp;
        }

        std::string Name = Class->GetName();
        Name += " ";
        Name += Temp;
        Name += GetName();

        return Name;
    }

    return "None";
}

bool SDK::UObject::IsA(class UClass *Clss) const {
    for (UStruct *Super = Class; Super; Super = Super->Super) {
        if (Super == Clss) {
            return true;
        }
    }

    return false;
}

class SDK::UFunction *SDK::UClass::GetFunction(const std::string &ClassName, const std::string &FuncName) {
    for (SDK::UStruct *Clss = this; Clss; Clss = Clss->Super) {
        if (Clss->GetName() == ClassName) {
            for (SDK::UField *Field = Clss->Children; Field; Field = Field->Next) {
                if (Field->HasTypeFlag(SDK::EClassCastFlags::Function) && Field->GetName() == FuncName) {
                    return static_cast<class SDK::UFunction *>(Field);
                }
            }
        }
    }
    return nullptr;
}

class SDK::UClass *SDK::APalFunnelCharacter::StaticClass() {
    static class SDK::UClass *Clss = nullptr;

    if (!Clss)
        Clss = SDK::UObject::FindClassFast("PalFunnelCharacter");

    return Clss;
}

class SDK::UClass *SDK::APalPlayerCharacter::StaticClass() {
    static class SDK::UClass *Clss = nullptr;

    if (!Clss)
        Clss = SDK::UObject::FindClassFast("PalPlayerCharacter");

    return Clss;
}

class SDK::UClass *SDK::APalNPC::StaticClass() {
    static class SDK::UClass *Clss = nullptr;

    if (!Clss)
        Clss = SDK::UObject::FindClassFast("PalNPC");

    return Clss;
}

class SDK::UClass *SDK::APalMonsterCharacter::StaticClass() {
    static class SDK::UClass *Clss = nullptr;

    if (!Clss)
        Clss = SDK::UObject::FindClassFast("PalMonsterCharacter");

    return Clss;
}

class SDK::UClass *SDK::APalSpectator::StaticClass() {
    static class SDK::UClass *Clss = nullptr;

    if (!Clss)
        Clss = SDK::UObject::FindClassFast("PalSpectator");

    return Clss;
}

class SDK::UClass *SDK::APalPlayerController::StaticClass() {
    static class SDK::UClass *Clss = nullptr;

    if (!Clss)
        Clss = SDK::UObject::FindClassFast("PalPlayerController");

    return Clss;
}