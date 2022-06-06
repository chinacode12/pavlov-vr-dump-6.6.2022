
#include "../SDK.h"

// Name: Pavlov_internal, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function UI_Hand.UI_Hand_C.SetScoreboard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Hand_C::SetScoreboard(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Hand.UI_Hand_C.SetScoreboard");

	UUI_Hand_C_SetScoreboard_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Hand.UI_Hand_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Hand_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Hand.UI_Hand_C.Construct");

	UUI_Hand_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Hand.UI_Hand_C.ExecuteUbergraph_UI_Hand
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Hand_C::ExecuteUbergraph_UI_Hand(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Hand.UI_Hand_C.ExecuteUbergraph_UI_Hand");

	UUI_Hand_C_ExecuteUbergraph_UI_Hand_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
