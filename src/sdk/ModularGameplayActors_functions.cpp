#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ModularGameplayActors.ModularAIController
// (Actor)

class UClass* AModularAIController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModularAIController");

	return Clss;
}


// ModularAIController ModularGameplayActors.Default__ModularAIController
// (Public, ClassDefaultObject, ArchetypeObject)

class AModularAIController* AModularAIController::GetDefaultObj()
{
	static class AModularAIController* Default = nullptr;

	if (!Default)
		Default = static_cast<AModularAIController*>(AModularAIController::StaticClass()->DefaultObject);

	return Default;
}


// Class ModularGameplayActors.ModularCharacter
// (Actor, Pawn)

class UClass* AModularCharacter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModularCharacter");

	return Clss;
}


// ModularCharacter ModularGameplayActors.Default__ModularCharacter
// (Public, ClassDefaultObject, ArchetypeObject)

class AModularCharacter* AModularCharacter::GetDefaultObj()
{
	static class AModularCharacter* Default = nullptr;

	if (!Default)
		Default = static_cast<AModularCharacter*>(AModularCharacter::StaticClass()->DefaultObject);

	return Default;
}


// Class ModularGameplayActors.ModularGameModeBase
// (Actor)

class UClass* AModularGameModeBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModularGameModeBase");

	return Clss;
}


// ModularGameModeBase ModularGameplayActors.Default__ModularGameModeBase
// (Public, ClassDefaultObject, ArchetypeObject)

class AModularGameModeBase* AModularGameModeBase::GetDefaultObj()
{
	static class AModularGameModeBase* Default = nullptr;

	if (!Default)
		Default = static_cast<AModularGameModeBase*>(AModularGameModeBase::StaticClass()->DefaultObject);

	return Default;
}


// Class ModularGameplayActors.ModularGameMode
// (Actor)

class UClass* AModularGameMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModularGameMode");

	return Clss;
}


// ModularGameMode ModularGameplayActors.Default__ModularGameMode
// (Public, ClassDefaultObject, ArchetypeObject)

class AModularGameMode* AModularGameMode::GetDefaultObj()
{
	static class AModularGameMode* Default = nullptr;

	if (!Default)
		Default = static_cast<AModularGameMode*>(AModularGameMode::StaticClass()->DefaultObject);

	return Default;
}


// Class ModularGameplayActors.ModularGameStateBase
// (Actor)

class UClass* AModularGameStateBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModularGameStateBase");

	return Clss;
}


// ModularGameStateBase ModularGameplayActors.Default__ModularGameStateBase
// (Public, ClassDefaultObject, ArchetypeObject)

class AModularGameStateBase* AModularGameStateBase::GetDefaultObj()
{
	static class AModularGameStateBase* Default = nullptr;

	if (!Default)
		Default = static_cast<AModularGameStateBase*>(AModularGameStateBase::StaticClass()->DefaultObject);

	return Default;
}


// Class ModularGameplayActors.ModularGameState
// (Actor)

class UClass* AModularGameState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModularGameState");

	return Clss;
}


// ModularGameState ModularGameplayActors.Default__ModularGameState
// (Public, ClassDefaultObject, ArchetypeObject)

class AModularGameState* AModularGameState::GetDefaultObj()
{
	static class AModularGameState* Default = nullptr;

	if (!Default)
		Default = static_cast<AModularGameState*>(AModularGameState::StaticClass()->DefaultObject);

	return Default;
}


// Class ModularGameplayActors.ModularPawn
// (Actor, Pawn)

class UClass* AModularPawn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModularPawn");

	return Clss;
}


// ModularPawn ModularGameplayActors.Default__ModularPawn
// (Public, ClassDefaultObject, ArchetypeObject)

class AModularPawn* AModularPawn::GetDefaultObj()
{
	static class AModularPawn* Default = nullptr;

	if (!Default)
		Default = static_cast<AModularPawn*>(AModularPawn::StaticClass()->DefaultObject);

	return Default;
}


// Class ModularGameplayActors.ModularPlayerController
// (Actor, PlayerController)

class UClass* AModularPlayerController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModularPlayerController");

	return Clss;
}


// ModularPlayerController ModularGameplayActors.Default__ModularPlayerController
// (Public, ClassDefaultObject, ArchetypeObject)

class AModularPlayerController* AModularPlayerController::GetDefaultObj()
{
	static class AModularPlayerController* Default = nullptr;

	if (!Default)
		Default = static_cast<AModularPlayerController*>(AModularPlayerController::StaticClass()->DefaultObject);

	return Default;
}


// Class ModularGameplayActors.ModularPlayerState
// (Actor)

class UClass* AModularPlayerState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModularPlayerState");

	return Clss;
}


// ModularPlayerState ModularGameplayActors.Default__ModularPlayerState
// (Public, ClassDefaultObject, ArchetypeObject)

class AModularPlayerState* AModularPlayerState::GetDefaultObj()
{
	static class AModularPlayerState* Default = nullptr;

	if (!Default)
		Default = static_cast<AModularPlayerState*>(AModularPlayerState::StaticClass()->DefaultObject);

	return Default;
}

}


