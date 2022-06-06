#pragma once

// Name: Pavlov_internal, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GlobalPlayerEffects.BP_GlobalPlayerEffects_C
// 0x0008 (0x03D8 - 0x03D0)
class ABP_GlobalPlayerEffects_C : public AGlobalPlayerEffects
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GlobalPlayerEffects.BP_GlobalPlayerEffects_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_GlobalPlayerEffects(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
