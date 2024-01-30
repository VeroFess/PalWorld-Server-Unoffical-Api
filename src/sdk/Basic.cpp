#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

void InitGObjects()
{
	UObject::GObjects = reinterpret_cast<TUObjectArray*>(uintptr_t(GetImageBaseOffset()) + Offsets::GObjects);
}		

FString FSoftObjectPtr::GetSubPathString()
{
	return ObjectID.SubPathString;
}

std::string FSoftObjectPtr::GetSubPathStringStr()
{
	return ObjectID.SubPathString.ToString();
}

template<class SoftObjectPath>
SoftObjectPath& FSoftObjectPtr::GetObjectPath()
{
	static_assert(std::is_same_v<SoftObjectPath, FSoftObjectPath>, "Only use this with FSoftObjectPath. This function is only templated as a workaround to C++ type-checks.");

	return reinterpret_cast<FSoftObjectPath&>(ObjectID);
}

void Dummy() { FSoftObjectPtr().GetObjectPath(); }


class UObject* FWeakObjectPtr::Get() const
{
	return UObject::GObjects->GetByIndex(ObjectIndex);
}

class UObject* FWeakObjectPtr::operator->() const
{
	return UObject::GObjects->GetByIndex(ObjectIndex);
}

bool FWeakObjectPtr::operator==(const FWeakObjectPtr& Other) const
{
	return ObjectIndex == Other.ObjectIndex;
}
bool FWeakObjectPtr::operator!=(const FWeakObjectPtr& Other) const
{
	return ObjectIndex != Other.ObjectIndex;
}

bool FWeakObjectPtr::operator==(const class UObject* Other) const
{
	return ObjectIndex == Other->Index;
}
bool FWeakObjectPtr::operator!=(const class UObject* Other) const
{
	return ObjectIndex != Other->Index;
}
}


