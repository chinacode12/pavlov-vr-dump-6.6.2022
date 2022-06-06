#pragma once

#include "../SDK.h"

// Name: Pavlov_internal, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function UI_Hand.UI_Hand_C.SetScoreboard
struct UUI_Hand_C_SetScoreboard_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Hand.UI_Hand_C.Construct
struct UUI_Hand_C_Construct_Params
{
};

// Function UI_Hand.UI_Hand_C.ExecuteUbergraph_UI_Hand
struct UUI_Hand_C_ExecuteUbergraph_UI_Hand_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
