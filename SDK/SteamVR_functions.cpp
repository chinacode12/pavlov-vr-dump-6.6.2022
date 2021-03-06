
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

// DelegateFunction SteamVR.SteamVRChaperoneComponent.SteamVRChaperoneEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void USteamVRChaperoneComponent::SteamVRChaperoneEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction SteamVR.SteamVRChaperoneComponent.SteamVRChaperoneEvent__DelegateSignature");

	USteamVRChaperoneComponent_SteamVRChaperoneEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamVR.SteamVRChaperoneComponent.GetBounds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> USteamVRChaperoneComponent::GetBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVR.SteamVRChaperoneComponent.GetBounds");

	USteamVRChaperoneComponent_GetBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamVR.SteamVRFunctionLibrary.GetValidTrackedDeviceIds
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// ESteamVRTrackedDeviceType      DeviceType                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    OutTrackedDeviceIds            (Parm, OutParm, ZeroConstructor)

void USteamVRFunctionLibrary::STATIC_GetValidTrackedDeviceIds(ESteamVRTrackedDeviceType DeviceType, TArray<int>* OutTrackedDeviceIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVR.SteamVRFunctionLibrary.GetValidTrackedDeviceIds");

	USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Params params;
	params.DeviceType = DeviceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTrackedDeviceIds != nullptr)
		*OutTrackedDeviceIds = params.OutTrackedDeviceIds;
}


// Function SteamVR.SteamVRFunctionLibrary.GetTrackedDevicePositionAndOrientation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            DeviceID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutPosition                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OutOrientation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamVRFunctionLibrary::STATIC_GetTrackedDevicePositionAndOrientation(int DeviceID, struct FVector* OutPosition, struct FRotator* OutOrientation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVR.SteamVRFunctionLibrary.GetTrackedDevicePositionAndOrientation");

	USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Params params;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPosition != nullptr)
		*OutPosition = params.OutPosition;
	if (OutOrientation != nullptr)
		*OutOrientation = params.OutOrientation;

	return params.ReturnValue;
}


// Function SteamVR.SteamVRFunctionLibrary.GetHandPositionAndOrientation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ControllerIndex                (Parm, ZeroConstructor, IsPlainOldData)
// EControllerHand                hand                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutPosition                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OutOrientation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamVRFunctionLibrary::STATIC_GetHandPositionAndOrientation(int ControllerIndex, EControllerHand hand, struct FVector* OutPosition, struct FRotator* OutOrientation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVR.SteamVRFunctionLibrary.GetHandPositionAndOrientation");

	USteamVRFunctionLibrary_GetHandPositionAndOrientation_Params params;
	params.ControllerIndex = ControllerIndex;
	params.hand = hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPosition != nullptr)
		*OutPosition = params.OutPosition;
	if (OutOrientation != nullptr)
		*OutOrientation = params.OutOrientation;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
