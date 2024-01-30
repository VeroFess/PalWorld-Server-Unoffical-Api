#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
	//Initialize GObjects using InitGObjects()
	TUObjectArray* UObject::GObjects = nullptr;

	bool UObject::HasTypeFlag(EClassCastFlags TypeFlag) const
	{
		return TypeFlag != EClassCastFlags::None ? Class->CastFlags & TypeFlag : true;
	}

	std::string UObject::GetName() const
	{
		return this ? Name.ToString() : "None";
	}

	std::string UObject::GetFullName() const
	{
		if (Class)
		{
			std::string Temp;

			for (UObject* NextOuter = Outer; NextOuter; NextOuter = NextOuter->Outer)
			{
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

	bool UObject::IsA(class UClass* Clss) const
	{
		for (UStruct* Super = Class; Super; Super = Super->Super)
		{
			if (Super == Clss)
			{
				return true;
			}
		}

		return false;
	}

	FVector2D FVector2D::operator+(const FVector2D& Other) const
	{
		return { X + Other.X, Y + Other.Y };
	}

	FVector2D FVector2D::operator-(const FVector2D& Other) const
	{
		return { X - Other.X, Y - Other.Y };
	}

	FVector2D FVector2D::operator*(decltype(X) Scalar) const
	{
		return { X * Scalar, Y * Scalar };
	}

	FVector2D FVector2D::operator/(decltype(X) Scalar) const
	{
		if (Scalar == 0.0f)
			return FVector2D();

		return { X / Scalar, Y / Scalar };
	}

	class UFunction* UClass::GetFunction(const std::string& ClassName, const std::string& FuncName)
	{
		for(UStruct* Clss = this; Clss; Clss = Clss->Super)
		{
			if (Clss->GetName() == ClassName)
			{
				for (UField* Field = Clss->Children; Field; Field = Field->Next)
				{
					if(Field->HasTypeFlag(EClassCastFlags::Function) && Field->GetName() == FuncName)
					{
						return static_cast<class UFunction*>(Field);
					}	
				}
			}
		}
		return nullptr;
	}

	FVector FVector::operator+(const FVector& Other) const
	{
		return { X + Other.X, Y + Other.Y, Z + Other.Z };
	}

	FVector FVector::operator-(const FVector& Other) const
	{
		return { X - Other.X, Y - Other.Y, Z - Other.Z };
	}

	FVector FVector::operator*(decltype(X) Scalar) const
	{
		return { X * Scalar, Y * Scalar, Z * Scalar };
	}

	FVector FVector::operator/(decltype(X) Scalar) const
	{
		if (Scalar == 0.0f)
			return FVector();

		return { X / Scalar, Y / Scalar, Z / Scalar };
	}

	FRotator FRotator::operator+(const FRotator& Other) const
	{
		return { Pitch + Other.Pitch, Yaw + Other.Yaw, Roll + Other.Roll };
	}

	FRotator FRotator::operator-(const FRotator& Other) const
	{
		return { Pitch - Other.Pitch, Yaw - Other.Yaw, Roll - Other.Roll };
	}

	FRotator FRotator::operator*(decltype(Pitch) Scalar) const
	{
		return { Pitch * Scalar, Yaw * Scalar, Roll * Scalar };
	}

	FRotator FRotator::operator/(decltype(Pitch) Scalar) const
	{
		if (Scalar == 0.0f)
			return FRotator();

		return { Pitch / Scalar, Yaw / Scalar, Roll / Scalar };
	}

	FVector4 FVector4::operator+(const FVector4& Other) const
	{
		return { X + Other.X, Y + Other.Y, Z + Other.Z, W + Other.W };
	}

	FVector4 FVector4::operator-(const FVector4& Other) const
	{
		return { X - Other.X, Y - Other.Y, Z - Other.Z, W - Other.W };
	}

	FVector4 FVector4::operator*(decltype(X) Scalar) const
	{
		return { X * Scalar, Y * Scalar, Z * Scalar, W * Scalar };
	}

	FVector4 FVector4::operator/(decltype(X) Scalar) const
	{
		if (Scalar == 0.0f)
			return FVector4();

		return { X / Scalar, Y / Scalar, Z / Scalar, W / Scalar };
	}

	FQuat FQuat::operator+(const FQuat& Other) const
	{
		return { X + Other.X, Y + Other.Y, Z + Other.Z, W + Other.W };
	}

	FQuat FQuat::operator-(const FQuat& Other) const
	{
		return { X - Other.X, Y - Other.Y, Z - Other.Z, W - Other.W };
	}

	FQuat FQuat::operator*(decltype(X) Scalar) const
	{
		return { X * Scalar, Y * Scalar, Z * Scalar, W * Scalar };
	}

	FQuat FQuat::operator/(decltype(X) Scalar) const
	{
		if (Scalar == 0.0f)
			return FQuat();

		return { X / Scalar, Y / Scalar, Z / Scalar, W / Scalar };
	}

//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CoreUObject.Object
// (None)

class UClass* UObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Object");

	return Clss;
}


// Object CoreUObject.Default__Object
// (Public, ClassDefaultObject, ArchetypeObject)

class UObject* UObject::GetDefaultObj()
{
	static class UObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UObject*>(UObject::StaticClass()->DefaultObject);

	return Default;
}


// Function CoreUObject.Object.ExecuteUbergraph
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObject::ExecuteUbergraph(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Object", "ExecuteUbergraph");

	Params::UObject_ExecuteUbergraph_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Class CoreUObject.Interface
// (None)

class UClass* IInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interface");

	return Clss;
}


// Interface CoreUObject.Default__Interface
// (Public, ClassDefaultObject, ArchetypeObject)

class IInterface* IInterface::GetDefaultObj()
{
	static class IInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterface*>(IInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.Package
// (Package)

class UClass* UPackage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Package");

	return Clss;
}


// Package CoreUObject.Default__Package
// (Public, ClassDefaultObject, ArchetypeObject)

class UPackage* UPackage::GetDefaultObj()
{
	static class UPackage* Default = nullptr;

	if (!Default)
		Default = static_cast<UPackage*>(UPackage::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.Field
// (Field)

class UClass* UField::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Field");

	return Clss;
}


// Field CoreUObject.Default__Field
// (Public, ClassDefaultObject, ArchetypeObject)

class UField* UField::GetDefaultObj()
{
	static class UField* Default = nullptr;

	if (!Default)
		Default = static_cast<UField*>(UField::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.Struct
// (Field, Struct)

class UClass* UStruct::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Struct");

	return Clss;
}


// Struct CoreUObject.Default__Struct
// (Public, ClassDefaultObject, ArchetypeObject)

class UStruct* UStruct::GetDefaultObj()
{
	static class UStruct* Default = nullptr;

	if (!Default)
		Default = static_cast<UStruct*>(UStruct::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.Class
// (Field, Struct, Class)

class UClass* UClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Class");

	return Clss;
}


// Class CoreUObject.Default__Class
// (Public, ClassDefaultObject, ArchetypeObject)

class UClass* UClass::GetDefaultObj()
{
	static class UClass* Default = nullptr;

	if (!Default)
		Default = static_cast<UClass*>(UClass::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.GCObjectReferencer
// (None)

class UClass* UGCObjectReferencer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCObjectReferencer");

	return Clss;
}


// GCObjectReferencer CoreUObject.Default__GCObjectReferencer
// (Public, ClassDefaultObject, ArchetypeObject)

class UGCObjectReferencer* UGCObjectReferencer::GetDefaultObj()
{
	static class UGCObjectReferencer* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCObjectReferencer*>(UGCObjectReferencer::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.TextBuffer
// (None)

class UClass* UTextBuffer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextBuffer");

	return Clss;
}


// TextBuffer CoreUObject.Default__TextBuffer
// (Public, ClassDefaultObject, ArchetypeObject)

class UTextBuffer* UTextBuffer::GetDefaultObj()
{
	static class UTextBuffer* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextBuffer*>(UTextBuffer::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.ScriptStruct
// (Field, Struct, ScriptStruct)

class UClass* UScriptStruct::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScriptStruct");

	return Clss;
}


// ScriptStruct CoreUObject.Default__ScriptStruct
// (Public, ClassDefaultObject, ArchetypeObject)

class UScriptStruct* UScriptStruct::GetDefaultObj()
{
	static class UScriptStruct* Default = nullptr;

	if (!Default)
		Default = static_cast<UScriptStruct*>(UScriptStruct::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.Function
// (Field, Struct, Function)

class UClass* UFunction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Function");

	return Clss;
}


// Function CoreUObject.Default__Function
// (Public, ClassDefaultObject, ArchetypeObject)

class UFunction* UFunction::GetDefaultObj()
{
	static class UFunction* Default = nullptr;

	if (!Default)
		Default = static_cast<UFunction*>(UFunction::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.DelegateFunction
// (Field, Struct, Function, DelegateFunction)

class UClass* UDelegateFunction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DelegateFunction");

	return Clss;
}


// DelegateFunction CoreUObject.Default__DelegateFunction
// (Public, ClassDefaultObject, ArchetypeObject)

class UDelegateFunction* UDelegateFunction::GetDefaultObj()
{
	static class UDelegateFunction* Default = nullptr;

	if (!Default)
		Default = static_cast<UDelegateFunction*>(UDelegateFunction::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.SparseDelegateFunction
// (Field, Struct, Function, DelegateFunction, SparseDelegateFunction)

class UClass* USparseDelegateFunction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SparseDelegateFunction");

	return Clss;
}


// SparseDelegateFunction CoreUObject.Default__SparseDelegateFunction
// (Public, ClassDefaultObject, ArchetypeObject)

class USparseDelegateFunction* USparseDelegateFunction::GetDefaultObj()
{
	static class USparseDelegateFunction* Default = nullptr;

	if (!Default)
		Default = static_cast<USparseDelegateFunction*>(USparseDelegateFunction::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.DynamicClass
// (Field, Struct, Class)

class UClass* UDynamicClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicClass");

	return Clss;
}


// DynamicClass CoreUObject.Default__DynamicClass
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicClass* UDynamicClass::GetDefaultObj()
{
	static class UDynamicClass* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicClass*>(UDynamicClass::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.PackageMap
// (None)

class UClass* UPackageMap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PackageMap");

	return Clss;
}


// PackageMap CoreUObject.Default__PackageMap
// (Public, ClassDefaultObject, ArchetypeObject)

class UPackageMap* UPackageMap::GetDefaultObj()
{
	static class UPackageMap* Default = nullptr;

	if (!Default)
		Default = static_cast<UPackageMap*>(UPackageMap::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.Enum
// (Field, Enum)

class UClass* UEnum::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Enum");

	return Clss;
}


// Enum CoreUObject.Default__Enum
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnum* UEnum::GetDefaultObj()
{
	static class UEnum* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnum*>(UEnum::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.LinkerPlaceholderClass
// (Field, Struct, Class)

class UClass* ULinkerPlaceholderClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LinkerPlaceholderClass");

	return Clss;
}


// LinkerPlaceholderClass CoreUObject.Default__LinkerPlaceholderClass
// (Public, ClassDefaultObject, ArchetypeObject)

class ULinkerPlaceholderClass* ULinkerPlaceholderClass::GetDefaultObj()
{
	static class ULinkerPlaceholderClass* Default = nullptr;

	if (!Default)
		Default = static_cast<ULinkerPlaceholderClass*>(ULinkerPlaceholderClass::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.LinkerPlaceholderExportObject
// (None)

class UClass* ULinkerPlaceholderExportObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LinkerPlaceholderExportObject");

	return Clss;
}


// LinkerPlaceholderExportObject CoreUObject.Default__LinkerPlaceholderExportObject
// (Public, ClassDefaultObject, ArchetypeObject)

class ULinkerPlaceholderExportObject* ULinkerPlaceholderExportObject::GetDefaultObj()
{
	static class ULinkerPlaceholderExportObject* Default = nullptr;

	if (!Default)
		Default = static_cast<ULinkerPlaceholderExportObject*>(ULinkerPlaceholderExportObject::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.LinkerPlaceholderFunction
// (Field, Struct, Function)

class UClass* ULinkerPlaceholderFunction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LinkerPlaceholderFunction");

	return Clss;
}


// LinkerPlaceholderFunction CoreUObject.Default__LinkerPlaceholderFunction
// (Public, ClassDefaultObject, ArchetypeObject)

class ULinkerPlaceholderFunction* ULinkerPlaceholderFunction::GetDefaultObj()
{
	static class ULinkerPlaceholderFunction* Default = nullptr;

	if (!Default)
		Default = static_cast<ULinkerPlaceholderFunction*>(ULinkerPlaceholderFunction::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.MetaData
// (None)

class UClass* UMetaData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetaData");

	return Clss;
}


// MetaData CoreUObject.Default__MetaData
// (Public, ClassDefaultObject, ArchetypeObject)

class UMetaData* UMetaData::GetDefaultObj()
{
	static class UMetaData* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetaData*>(UMetaData::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.ObjectRedirector
// (None)

class UClass* UObjectRedirector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectRedirector");

	return Clss;
}


// ObjectRedirector CoreUObject.Default__ObjectRedirector
// (Public, ClassDefaultObject, ArchetypeObject)

class UObjectRedirector* UObjectRedirector::GetDefaultObj()
{
	static class UObjectRedirector* Default = nullptr;

	if (!Default)
		Default = static_cast<UObjectRedirector*>(UObjectRedirector::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.Property
// (Field, Property)

class UClass* UProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Property");

	return Clss;
}


// Property CoreUObject.Default__Property
// (Public, ClassDefaultObject, ArchetypeObject)

class UProperty* UProperty::GetDefaultObj()
{
	static class UProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<UProperty*>(UProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.EnumProperty
// (Field, Property, EnumProperty)

class UClass* UEnumProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnumProperty");

	return Clss;
}


// EnumProperty CoreUObject.Default__EnumProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnumProperty* UEnumProperty::GetDefaultObj()
{
	static class UEnumProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnumProperty*>(UEnumProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.ArrayProperty
// (Field, Property, ArrayProperty)

class UClass* UArrayProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArrayProperty");

	return Clss;
}


// ArrayProperty CoreUObject.Default__ArrayProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class UArrayProperty* UArrayProperty::GetDefaultObj()
{
	static class UArrayProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<UArrayProperty*>(UArrayProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.ObjectPropertyBase
// (Field, Property, ObjectPropertyBase)

class UClass* UObjectPropertyBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectPropertyBase");

	return Clss;
}


// ObjectPropertyBase CoreUObject.Default__ObjectPropertyBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UObjectPropertyBase* UObjectPropertyBase::GetDefaultObj()
{
	static class UObjectPropertyBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UObjectPropertyBase*>(UObjectPropertyBase::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.BoolProperty
// (Field, Property, BoolProperty)

class UClass* UBoolProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BoolProperty");

	return Clss;
}


// BoolProperty CoreUObject.Default__BoolProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class UBoolProperty* UBoolProperty::GetDefaultObj()
{
	static class UBoolProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<UBoolProperty*>(UBoolProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.NumericProperty
// (Field, Property, NumericProperty)

class UClass* UNumericProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NumericProperty");

	return Clss;
}


// NumericProperty CoreUObject.Default__NumericProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class UNumericProperty* UNumericProperty::GetDefaultObj()
{
	static class UNumericProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<UNumericProperty*>(UNumericProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.ByteProperty
// (Field, ByteProperty, Property, NumericProperty)

class UClass* UByteProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ByteProperty");

	return Clss;
}


// ByteProperty CoreUObject.Default__ByteProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class UByteProperty* UByteProperty::GetDefaultObj()
{
	static class UByteProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<UByteProperty*>(UByteProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.ObjectProperty
// (Field, Property, ObjectProperty, ObjectPropertyBase)

class UClass* UObjectProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectProperty");

	return Clss;
}


// ObjectProperty CoreUObject.Default__ObjectProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class UObjectProperty* UObjectProperty::GetDefaultObj()
{
	static class UObjectProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<UObjectProperty*>(UObjectProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.ClassProperty
// (Field, ClassProperty, Property, ObjectProperty, ObjectPropertyBase)

class UClass* UClassProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClassProperty");

	return Clss;
}


// ClassProperty CoreUObject.Default__ClassProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class UClassProperty* UClassProperty::GetDefaultObj()
{
	static class UClassProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<UClassProperty*>(UClassProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.DelegateProperty
// (Field, Property, DelegateProperty)

class UClass* UDelegateProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DelegateProperty");

	return Clss;
}


// DelegateProperty CoreUObject.Default__DelegateProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class UDelegateProperty* UDelegateProperty::GetDefaultObj()
{
	static class UDelegateProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<UDelegateProperty*>(UDelegateProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.DoubleProperty
// (Field, Property, NumericProperty, DoubleProperty)

class UClass* UDoubleProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoubleProperty");

	return Clss;
}


// DoubleProperty CoreUObject.Default__DoubleProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class UDoubleProperty* UDoubleProperty::GetDefaultObj()
{
	static class UDoubleProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoubleProperty*>(UDoubleProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.FloatProperty
// (Field, FloatProperty, Property, NumericProperty)

class UClass* UFloatProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FloatProperty");

	return Clss;
}


// FloatProperty CoreUObject.Default__FloatProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class UFloatProperty* UFloatProperty::GetDefaultObj()
{
	static class UFloatProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<UFloatProperty*>(UFloatProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.IntProperty
// (Field, IntProperty, Property, NumericProperty)

class UClass* UIntProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IntProperty");

	return Clss;
}


// IntProperty CoreUObject.Default__IntProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class UIntProperty* UIntProperty::GetDefaultObj()
{
	static class UIntProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<UIntProperty*>(UIntProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.Int8Property
// (Field, Int8Property, Property, NumericProperty)

class UClass* UInt8Property::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Int8Property");

	return Clss;
}


// Int8Property CoreUObject.Default__Int8Property
// (Public, ClassDefaultObject, ArchetypeObject)

class UInt8Property* UInt8Property::GetDefaultObj()
{
	static class UInt8Property* Default = nullptr;

	if (!Default)
		Default = static_cast<UInt8Property*>(UInt8Property::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.Int16Property
// (Field, Property, NumericProperty, Int16Property)

class UClass* UInt16Property::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Int16Property");

	return Clss;
}


// Int16Property CoreUObject.Default__Int16Property
// (Public, ClassDefaultObject, ArchetypeObject)

class UInt16Property* UInt16Property::GetDefaultObj()
{
	static class UInt16Property* Default = nullptr;

	if (!Default)
		Default = static_cast<UInt16Property*>(UInt16Property::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.Int64Property
// (Field, Property, Int64Property, NumericProperty)

class UClass* UInt64Property::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Int64Property");

	return Clss;
}


// Int64Property CoreUObject.Default__Int64Property
// (Public, ClassDefaultObject, ArchetypeObject)

class UInt64Property* UInt64Property::GetDefaultObj()
{
	static class UInt64Property* Default = nullptr;

	if (!Default)
		Default = static_cast<UInt64Property*>(UInt64Property::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.InterfaceProperty
// (Field, InterfaceProperty, Property)

class UClass* UInterfaceProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterfaceProperty");

	return Clss;
}


// InterfaceProperty CoreUObject.Default__InterfaceProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterfaceProperty* UInterfaceProperty::GetDefaultObj()
{
	static class UInterfaceProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterfaceProperty*>(UInterfaceProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.LazyObjectProperty
// (Field, Property, ObjectPropertyBase, LazyObjectProperty)

class UClass* ULazyObjectProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LazyObjectProperty");

	return Clss;
}


// LazyObjectProperty CoreUObject.Default__LazyObjectProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class ULazyObjectProperty* ULazyObjectProperty::GetDefaultObj()
{
	static class ULazyObjectProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<ULazyObjectProperty*>(ULazyObjectProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.MapProperty
// (Field, Property, MapProperty)

class UClass* UMapProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapProperty");

	return Clss;
}


// MapProperty CoreUObject.Default__MapProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class UMapProperty* UMapProperty::GetDefaultObj()
{
	static class UMapProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapProperty*>(UMapProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.MulticastDelegateProperty
// (Field, Property, MulticastDelegateProperty)

class UClass* UMulticastDelegateProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MulticastDelegateProperty");

	return Clss;
}


// MulticastDelegateProperty CoreUObject.Default__MulticastDelegateProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class UMulticastDelegateProperty* UMulticastDelegateProperty::GetDefaultObj()
{
	static class UMulticastDelegateProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<UMulticastDelegateProperty*>(UMulticastDelegateProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.MulticastInlineDelegateProperty
// (Field, Property, MulticastDelegateProperty, MulticastInlineDelegateProperty)

class UClass* UMulticastInlineDelegateProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MulticastInlineDelegateProperty");

	return Clss;
}


// MulticastInlineDelegateProperty CoreUObject.Default__MulticastInlineDelegateProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class UMulticastInlineDelegateProperty* UMulticastInlineDelegateProperty::GetDefaultObj()
{
	static class UMulticastInlineDelegateProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<UMulticastInlineDelegateProperty*>(UMulticastInlineDelegateProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.MulticastSparseDelegateProperty
// (Field, Property, MulticastDelegateProperty, MulticastSparseDelegateProperty)

class UClass* UMulticastSparseDelegateProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MulticastSparseDelegateProperty");

	return Clss;
}


// MulticastSparseDelegateProperty CoreUObject.Default__MulticastSparseDelegateProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class UMulticastSparseDelegateProperty* UMulticastSparseDelegateProperty::GetDefaultObj()
{
	static class UMulticastSparseDelegateProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<UMulticastSparseDelegateProperty*>(UMulticastSparseDelegateProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.NameProperty
// (Field, NameProperty, Property)

class UClass* UNameProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NameProperty");

	return Clss;
}


// NameProperty CoreUObject.Default__NameProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class UNameProperty* UNameProperty::GetDefaultObj()
{
	static class UNameProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<UNameProperty*>(UNameProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.SetProperty
// (Field, Property, SetProperty)

class UClass* USetProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SetProperty");

	return Clss;
}


// SetProperty CoreUObject.Default__SetProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class USetProperty* USetProperty::GetDefaultObj()
{
	static class USetProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<USetProperty*>(USetProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.SoftObjectProperty
// (Field, Property, ObjectPropertyBase, SoftObjectProperty)

class UClass* USoftObjectProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoftObjectProperty");

	return Clss;
}


// SoftObjectProperty CoreUObject.Default__SoftObjectProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class USoftObjectProperty* USoftObjectProperty::GetDefaultObj()
{
	static class USoftObjectProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<USoftObjectProperty*>(USoftObjectProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.SoftClassProperty
// (Field, Property, ObjectPropertyBase, SoftObjectProperty, SoftClassProperty)

class UClass* USoftClassProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoftClassProperty");

	return Clss;
}


// SoftClassProperty CoreUObject.Default__SoftClassProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class USoftClassProperty* USoftClassProperty::GetDefaultObj()
{
	static class USoftClassProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<USoftClassProperty*>(USoftClassProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.StrProperty
// (Field, StrProperty, Property)

class UClass* UStrProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StrProperty");

	return Clss;
}


// StrProperty CoreUObject.Default__StrProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class UStrProperty* UStrProperty::GetDefaultObj()
{
	static class UStrProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<UStrProperty*>(UStrProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.StructProperty
// (Field, Property, StructProperty)

class UClass* UStructProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StructProperty");

	return Clss;
}


// StructProperty CoreUObject.Default__StructProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class UStructProperty* UStructProperty::GetDefaultObj()
{
	static class UStructProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<UStructProperty*>(UStructProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.UInt16Property
// (Field, Property, UInt16Property, NumericProperty)

class UClass* UUInt16Property::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UInt16Property");

	return Clss;
}


// UInt16Property CoreUObject.Default__UInt16Property
// (Public, ClassDefaultObject, ArchetypeObject)

class UUInt16Property* UUInt16Property::GetDefaultObj()
{
	static class UUInt16Property* Default = nullptr;

	if (!Default)
		Default = static_cast<UUInt16Property*>(UUInt16Property::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.UInt32Property
// (Field, UInt32Property, Property, NumericProperty)

class UClass* UUInt32Property::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UInt32Property");

	return Clss;
}


// UInt32Property CoreUObject.Default__UInt32Property
// (Public, ClassDefaultObject, ArchetypeObject)

class UUInt32Property* UUInt32Property::GetDefaultObj()
{
	static class UUInt32Property* Default = nullptr;

	if (!Default)
		Default = static_cast<UUInt32Property*>(UUInt32Property::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.UInt64Property
// (Field, UInt64Property, Property, NumericProperty)

class UClass* UUInt64Property::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UInt64Property");

	return Clss;
}


// UInt64Property CoreUObject.Default__UInt64Property
// (Public, ClassDefaultObject, ArchetypeObject)

class UUInt64Property* UUInt64Property::GetDefaultObj()
{
	static class UUInt64Property* Default = nullptr;

	if (!Default)
		Default = static_cast<UUInt64Property*>(UUInt64Property::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.WeakObjectProperty
// (Field, Property, ObjectPropertyBase, WeakObjectProperty)

class UClass* UWeakObjectProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeakObjectProperty");

	return Clss;
}


// WeakObjectProperty CoreUObject.Default__WeakObjectProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeakObjectProperty* UWeakObjectProperty::GetDefaultObj()
{
	static class UWeakObjectProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeakObjectProperty*>(UWeakObjectProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.TextProperty
// (Field, Property, TextProperty)

class UClass* UTextProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextProperty");

	return Clss;
}


// TextProperty CoreUObject.Default__TextProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class UTextProperty* UTextProperty::GetDefaultObj()
{
	static class UTextProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextProperty*>(UTextProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.PropertyWrapper
// (None)

class UClass* UPropertyWrapper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyWrapper");

	return Clss;
}


// PropertyWrapper CoreUObject.Default__PropertyWrapper
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyWrapper* UPropertyWrapper::GetDefaultObj()
{
	static class UPropertyWrapper* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyWrapper*>(UPropertyWrapper::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.MulticastDelegatePropertyWrapper
// (None)

class UClass* UMulticastDelegatePropertyWrapper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MulticastDelegatePropertyWrapper");

	return Clss;
}


// MulticastDelegatePropertyWrapper CoreUObject.Default__MulticastDelegatePropertyWrapper
// (Public, ClassDefaultObject, ArchetypeObject)

class UMulticastDelegatePropertyWrapper* UMulticastDelegatePropertyWrapper::GetDefaultObj()
{
	static class UMulticastDelegatePropertyWrapper* Default = nullptr;

	if (!Default)
		Default = static_cast<UMulticastDelegatePropertyWrapper*>(UMulticastDelegatePropertyWrapper::StaticClass()->DefaultObject);

	return Default;
}


// Class CoreUObject.MulticastInlineDelegatePropertyWrapper
// (None)

class UClass* UMulticastInlineDelegatePropertyWrapper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MulticastInlineDelegatePropertyWrapper");

	return Clss;
}


// MulticastInlineDelegatePropertyWrapper CoreUObject.Default__MulticastInlineDelegatePropertyWrapper
// (Public, ClassDefaultObject, ArchetypeObject)

class UMulticastInlineDelegatePropertyWrapper* UMulticastInlineDelegatePropertyWrapper::GetDefaultObj()
{
	static class UMulticastInlineDelegatePropertyWrapper* Default = nullptr;

	if (!Default)
		Default = static_cast<UMulticastInlineDelegatePropertyWrapper*>(UMulticastInlineDelegatePropertyWrapper::StaticClass()->DefaultObject);

	return Default;
}

}


