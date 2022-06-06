
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

// Function Pavlov.ActionGunState.SetAction
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UActionGunState::SetAction(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ActionGunState.SetAction");

	UActionGunState_SetAction_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ActionGunState.OpenAction
// (Final, Native, Public, BlueprintCallable)

void UActionGunState::OpenAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ActionGunState.OpenAction");

	UActionGunState_OpenAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ActionGunState.CloseAction
// (Final, Native, Public, BlueprintCallable)

void UActionGunState::CloseAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ActionGunState.CloseAction");

	UActionGunState_CloseAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AirdropPlane.GeneratePath
// (Final, BlueprintAuthorityOnly, Native, Protected, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 DropLocation                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAirdropPlane::GeneratePath(const struct FVector& DropLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AirdropPlane.GeneratePath");

	AAirdropPlane_GeneratePath_Params params;
	params.DropLocation = DropLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.AirplaneRoyale.StartTravel
// (Final, Native, Public, BlueprintCallable)

void AAirplaneRoyale::StartTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AirplaneRoyale.StartTravel");

	AAirplaneRoyale_StartTravel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AirplaneRoyale.SetAsBase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovPawn*             Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void AAirplaneRoyale::SetAsBase(class APavlovPawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AirplaneRoyale.SetAsBase");

	AAirplaneRoyale_SetAsBase_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AirplaneRoyale.OnRep_Traveled
// (Final, Native, Private)

void AAirplaneRoyale::OnRep_Traveled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AirplaneRoyale.OnRep_Traveled");

	AAirplaneRoyale_OnRep_Traveled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AirplaneRoyale.ClearBase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovPawn*             Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void AAirplaneRoyale::ClearBase(class APavlovPawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AirplaneRoyale.ClearBase");

	AAirplaneRoyale_ClearBase_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AmmoBox.SetAmmoCount
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewAmmoCount                   (Parm, ZeroConstructor, IsPlainOldData)

void AAmmoBox::SetAmmoCount(int NewAmmoCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AmmoBox.SetAmmoCount");

	AAmmoBox_SetAmmoCount_Params params;
	params.NewAmmoCount = NewAmmoCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AmmoBox.RemoveAmmo
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            RemoveAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAmmoBox::RemoveAmmo(int RemoveAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AmmoBox.RemoveAmmo");

	AAmmoBox_RemoveAmmo_Params params;
	params.RemoveAmount = RemoveAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.AmmoBox.OnRep_AmmoCount
// (Final, Native, Private)

void AAmmoBox::OnRep_AmmoCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AmmoBox.OnRep_AmmoCount");

	AAmmoBox_OnRep_AmmoCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AmmoBox.OnAmmoCountChanged
// (Native, Event, Public, BlueprintEvent)

void AAmmoBox::OnAmmoCountChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AmmoBox.OnAmmoCountChanged");

	AAmmoBox_OnAmmoCountChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AmmoBox.GetAmmoType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EAmmoType                      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EAmmoType AAmmoBox::GetAmmoType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AmmoBox.GetAmmoType");

	AAmmoBox_GetAmmoType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.AmmoBox.AddAmmo
// (Final, Native, Public)
// Parameters:
// int                            AddAmount                      (Parm, ZeroConstructor, IsPlainOldData)

void AAmmoBox::AddAmmo(int AddAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AmmoBox.AddAmmo");

	AAmmoBox_AddAmmo_Params params;
	params.AddAmount = AddAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Attachment.TryAttach
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// unsigned char                  SlideModeSlot                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPlayFailureSound              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bSliding                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAttachment::TryAttach(unsigned char SlideModeSlot, bool bSliding, bool* bPlayFailureSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Attachment.TryAttach");

	AAttachment_TryAttach_Params params;
	params.SlideModeSlot = SlideModeSlot;
	params.bSliding = bSliding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPlayFailureSound != nullptr)
		*bPlayFailureSound = params.bPlayFailureSound;

	return params.ReturnValue;
}


// Function Pavlov.Attachment.SetSelectionEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AAttachment::SetSelectionEnable(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Attachment.SetSelectionEnable");

	AAttachment_SetSelectionEnable_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Attachment.OnSlideModeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bSlideMode                     (Parm, ZeroConstructor, IsPlainOldData)

void AAttachment::OnSlideModeChanged(bool bSlideMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Attachment.OnSlideModeChanged");

	AAttachment_OnSlideModeChanged_Params params;
	params.bSlideMode = bSlideMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Attachment.OnGunTickChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AAttachment::OnGunTickChanged(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Attachment.OnGunTickChanged");

	AAttachment_OnGunTickChanged_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Attachment.OnAttachmentModeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AAttachment::OnAttachmentModeChanged(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Attachment.OnAttachmentModeChanged");

	AAttachment_OnAttachmentModeChanged_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Attachment.MakeSlideModeSlot
// (Final, Native, Public)
// Parameters:
// class AGun*                    Gun                            (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char AAttachment::MakeSlideModeSlot(class AGun* Gun)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Attachment.MakeSlideModeSlot");

	AAttachment_MakeSlideModeSlot_Params params;
	params.Gun = Gun;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Attachment.GunTick
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AAttachment::GunTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Attachment.GunTick");

	AAttachment_GunTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Attachment.GetSlideTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              SlideTransform                 (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAttachment::GetSlideTransform(struct FTransform* SlideTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Attachment.GetSlideTransform");

	AAttachment_GetSlideTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlideTransform != nullptr)
		*SlideTransform = params.SlideTransform;

	return params.ReturnValue;
}


// Function Pavlov.Attachment.GetSlideModeSlot
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// unsigned char                  SlideModeSlot                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAttachment::GetSlideModeSlot(unsigned char* SlideModeSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Attachment.GetSlideModeSlot");

	AAttachment_GetSlideModeSlot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlideModeSlot != nullptr)
		*SlideModeSlot = params.SlideModeSlot;

	return params.ReturnValue;
}


// Function Pavlov.Attachment.GetGrabLoc
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AAttachment::GetGrabLoc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Attachment.GetGrabLoc");

	AAttachment_GetGrabLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Attachment.ClearSlideGun
// (Final, Native, Public, BlueprintCallable)

void AAttachment::ClearSlideGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Attachment.ClearSlideGun");

	AAttachment_ClearSlideGun_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Attachment.CanAttach
// (Native, Public, BlueprintCallable)
// Parameters:
// class AGun*                    Gun                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceAttach                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAttachment::CanAttach(class AGun* Gun, bool bForceAttach)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Attachment.CanAttach");

	AAttachment_CanAttach_Params params;
	params.Gun = Gun;
	params.bForceAttach = bForceAttach;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Attachment.AttachToGunServer
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AGun*                    Gun                            (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  SlideModeSlot                  (Parm, ZeroConstructor, IsPlainOldData)

void AAttachment::AttachToGunServer(class AGun* Gun, unsigned char SlideModeSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Attachment.AttachToGunServer");

	AAttachment_AttachToGunServer_Params params;
	params.Gun = Gun;
	params.SlideModeSlot = SlideModeSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Attachment.AttachToGun
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AGun*                    Gun                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceAttach                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAttachment::AttachToGun(class AGun* Gun, bool bForceAttach)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Attachment.AttachToGun");

	AAttachment_AttachToGun_Params params;
	params.Gun = Gun;
	params.bForceAttach = bForceAttach;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.AttachmentAccessory.SetAccessoryActive_Server
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void AAttachmentAccessory::SetAccessoryActive_Server(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AttachmentAccessory.SetAccessoryActive_Server");

	AAttachmentAccessory_SetAccessoryActive_Server_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AttachmentAccessory.SetAccessoryActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void AAttachmentAccessory::SetAccessoryActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AttachmentAccessory.SetAccessoryActive");

	AAttachmentAccessory_SetAccessoryActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AttachmentAccessory.OnRep_AccessoryOn
// (Final, Native, Protected)

void AAttachmentAccessory::OnRep_AccessoryOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AttachmentAccessory.OnRep_AccessoryOn");

	AAttachmentAccessory_OnRep_AccessoryOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AttachmentAccessory.OnAccessoryStateChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void AAttachmentAccessory::OnAccessoryStateChanged(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AttachmentAccessory.OnAccessoryStateChanged");

	AAttachmentAccessory_OnAccessoryStateChanged_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AttachmentAccessory.IsAccessoryOn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAttachmentAccessory::IsAccessoryOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AttachmentAccessory.IsAccessoryOn");

	AAttachmentAccessory_IsAccessoryOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.AttachmentAccessory.CheckDropped
// (Final, Native, Public)

void AAttachmentAccessory::CheckDropped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AttachmentAccessory.CheckDropped");

	AAttachmentAccessory_CheckDropped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AttachmentAccessory_Bayonet.StabPlayerMulti
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           bSlashed                       (Parm, ZeroConstructor, IsPlainOldData)

void AAttachmentAccessory_Bayonet::StabPlayerMulti(bool bSlashed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AttachmentAccessory_Bayonet.StabPlayerMulti");

	AAttachmentAccessory_Bayonet_StabPlayerMulti_Params params;
	params.bSlashed = bSlashed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AttachmentAccessory_Bayonet.StabPlayer
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FBayonetDamage          BayonetDamage                  (Parm)

void AAttachmentAccessory_Bayonet::StabPlayer(const struct FBayonetDamage& BayonetDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AttachmentAccessory_Bayonet.StabPlayer");

	AAttachmentAccessory_Bayonet_StabPlayer_Params params;
	params.BayonetDamage = BayonetDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AttachmentAccessory_Bayonet.OnSwitchToBlood
// (Event, Public, BlueprintEvent)

void AAttachmentAccessory_Bayonet::OnSwitchToBlood()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AttachmentAccessory_Bayonet.OnSwitchToBlood");

	AAttachmentAccessory_Bayonet_OnSwitchToBlood_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AttachmentCanted.OnFlipCantedSight
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bRightHanded                   (Parm, ZeroConstructor, IsPlainOldData)

void AAttachmentCanted::OnFlipCantedSight(bool bRightHanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AttachmentCanted.OnFlipCantedSight");

	AAttachmentCanted_OnFlipCantedSight_Params params;
	params.bRightHanded = bRightHanded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AttachmentSight.UpdateScopeHiddenActors
// (Final, Native, Public)

void AAttachmentSight::UpdateScopeHiddenActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AttachmentSight.UpdateScopeHiddenActors");

	AAttachmentSight_UpdateScopeHiddenActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AttachmentSight.SetScopeActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void AAttachmentSight::SetScopeActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AttachmentSight.SetScopeActive");

	AAttachmentSight_SetScopeActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AttachmentSight.OnScopeExploit
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bExploit                       (Parm, ZeroConstructor, IsPlainOldData)

void AAttachmentSight::OnScopeExploit(bool bExploit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AttachmentSight.OnScopeExploit");

	AAttachmentSight_OnScopeExploit_Params params;
	params.bExploit = bExploit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AttachmentSight.GetLenseMesh
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int                            MaterialIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMeshComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* AAttachmentSight::GetLenseMesh(int* MaterialIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AttachmentSight.GetLenseMesh");

	AAttachmentSight_GetLenseMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaterialIndex != nullptr)
		*MaterialIndex = params.MaterialIndex;

	return params.ReturnValue;
}


// Function Pavlov.AttachmentSight.DebugFOVAngle
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAttachmentSight::DebugFOVAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AttachmentSight.DebugFOVAngle");

	AAttachmentSight_DebugFOVAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.AttachmentSight.ApplyZeroing
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AAttachmentSight::ApplyZeroing(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AttachmentSight.ApplyZeroing");

	AAttachmentSight_ApplyZeroing_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AttachProxy.SetupOwnerAttachment
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FAttachProxyInfo        NewAttachInfo                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAttachProxy::SetupOwnerAttachment(const struct FAttachProxyInfo& NewAttachInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AttachProxy.SetupOwnerAttachment");

	AAttachProxy_SetupOwnerAttachment_Params params;
	params.NewAttachInfo = NewAttachInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.AttachProxy.SetAttachInfo
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FAttachProxyInfo        NewAttachInfo                  (Parm)

void AAttachProxy::SetAttachInfo(const struct FAttachProxyInfo& NewAttachInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AttachProxy.SetAttachInfo");

	AAttachProxy_SetAttachInfo_Params params;
	params.NewAttachInfo = NewAttachInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AttachProxy.OwnerKilled
// (Final, Native, Public)
// Parameters:
// class AActor*                  Killed                         (Parm, ZeroConstructor, IsPlainOldData)

void AAttachProxy::OwnerKilled(class AActor* Killed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AttachProxy.OwnerKilled");

	AAttachProxy_OwnerKilled_Params params;
	params.Killed = Killed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AttachProxy.OnRep_AttachInfo
// (Final, Native, Private)

void AAttachProxy::OnRep_AttachInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AttachProxy.OnRep_AttachInfo");

	AAttachProxy_OnRep_AttachInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AttachProxy.OnParentDestroyed
// (Final, Native, Protected)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void AAttachProxy::OnParentDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AttachProxy.OnParentDestroyed");

	AAttachProxy_OnParentDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AvatarSkin.Update
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UAvatarSkin::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AvatarSkin.Update");

	UAvatarSkin_Update_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AvatarSkin.SetStencilValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAvatarSkin::SetStencilValue(unsigned char Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AvatarSkin.SetStencilValue");

	UAvatarSkin_SetStencilValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AvatarSkin.SetRenderToCustomDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UAvatarSkin::SetRenderToCustomDepth(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AvatarSkin.SetRenderToCustomDepth");

	UAvatarSkin_SetRenderToCustomDepth_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AvatarSkin.RemoveUsedComponent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UActorComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAvatarSkin::RemoveUsedComponent(class UActorComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AvatarSkin.RemoveUsedComponent");

	UAvatarSkin_RemoveUsedComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AvatarSkin.OptimizeAvatar
// (Native, Public)
// Parameters:
// class USkeletalMeshComponent*  PawnAvatar                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAvatarSkin::OptimizeAvatar(class USkeletalMeshComponent* PawnAvatar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AvatarSkin.OptimizeAvatar");

	UAvatarSkin_OptimizeAvatar_Params params;
	params.PawnAvatar = PawnAvatar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AvatarSkin.GetPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APavlovPawn*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APavlovPawn* UAvatarSkin::GetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AvatarSkin.GetPawn");

	UAvatarSkin_GetPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.AvatarSkin.GetBaseMeshComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* UAvatarSkin::GetBaseMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AvatarSkin.GetBaseMeshComponent");

	UAvatarSkin_GetBaseMeshComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.AvatarSkin.CreateChildSkeletalMeshComponent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class USkeletalMesh*           SkeletalMesh                   (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* UAvatarSkin::CreateChildSkeletalMeshComponent(class USkeletalMesh* SkeletalMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AvatarSkin.CreateChildSkeletalMeshComponent");

	UAvatarSkin_CreateChildSkeletalMeshComponent_Params params;
	params.SkeletalMesh = SkeletalMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.AvatarSkin.AddUsedComponent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UActorComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAvatarSkin::AddUsedComponent(class UActorComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AvatarSkin.AddUsedComponent");

	UAvatarSkin_AddUsedComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AvatarSkinCustom.SetCustomMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   MeshName                       (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           CustomHandMesh                 (Parm, ZeroConstructor, IsPlainOldData)

void UAvatarSkinCustom::SetCustomMesh(const struct FName& MeshName, class USkeletalMesh* CustomHandMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AvatarSkinCustom.SetCustomMesh");

	UAvatarSkinCustom_SetCustomMesh_Params params;
	params.MeshName = MeshName;
	params.CustomHandMesh = CustomHandMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AzureGameMode.Travel
// (Final, Native, Public)

void AAzureGameMode::Travel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AzureGameMode.Travel");

	AAzureGameMode_Travel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AzureServer.SoftTick
// (Final, Native, Public)

void UAzureServer::SoftTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AzureServer.SoftTick");

	UAzureServer_SoftTick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.TerminateGameSession
// (Final, Native, Public, BlueprintCallable)

void APavlovGameMode::TerminateGameSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.TerminateGameSession");

	APavlovGameMode_TerminateGameSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.SwitchTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::SwitchTeam(class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.SwitchTeam");

	APavlovGameMode_SwitchTeam_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.Suicide
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::Suicide(class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.Suicide");

	APavlovGameMode_Suicide_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.StopReplayRecording
// (Final, Native, Protected, BlueprintCallable)

void APavlovGameMode::StopReplayRecording()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.StopReplayRecording");

	APavlovGameMode_StopReplayRecording_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.StartReplayRecording
// (Final, Native, Protected, BlueprintCallable)

void APavlovGameMode::StartReplayRecording()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.StartReplayRecording");

	APavlovGameMode_StartReplayRecording_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.SpawnVehicleWRef
// (Native, Public)
// Parameters:
// struct FAsyncVehicleSpawnData  AsyncVehicleSpawnData          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovGameMode::SpawnVehicleWRef(const struct FAsyncVehicleSpawnData& AsyncVehicleSpawnData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.SpawnVehicleWRef");

	APavlovGameMode_SpawnVehicleWRef_Params params;
	params.AsyncVehicleSpawnData = AsyncVehicleSpawnData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameMode.SpawnVehicleForPawn
// (Native, Public, BlueprintCallable)
// Parameters:
// class APavlovPawn*             Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovGameMode::SpawnVehicleForPawn(class APavlovPawn* Pawn, const struct FName& Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.SpawnVehicleForPawn");

	APavlovGameMode_SpawnVehicleForPawn_Params params;
	params.Pawn = Pawn;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameMode.SpawnVehicle
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              SpawnTransform                 (ConstParm, Parm, IsPlainOldData)
// struct FName                   VehicleID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovGameMode::SpawnVehicle(const struct FTransform& SpawnTransform, const struct FName& VehicleID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.SpawnVehicle");

	APavlovGameMode_SpawnVehicle_Params params;
	params.SpawnTransform = SpawnTransform;
	params.VehicleID = VehicleID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameMode.SpawnPlayer
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::SpawnPlayer(class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.SpawnPlayer");

	APavlovGameMode_SpawnPlayer_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.SpawnPavlovPawn
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class APavlovPawn*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APavlovPawn* APavlovGameMode::SpawnPavlovPawn(class AController* Controller, const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.SpawnPavlovPawn");

	APavlovGameMode_SpawnPavlovPawn_Params params;
	params.Controller = Controller;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameMode.SpawnAndPossesPawns
// (Final, Native, Public, BlueprintCallable)

void APavlovGameMode::SpawnAndPossesPawns()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.SpawnAndPossesPawns");

	APavlovGameMode_SpawnAndPossesPawns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.ShuffleTeams
// (Final, Native, Public, BlueprintCallable)

void APavlovGameMode::ShuffleTeams()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.ShuffleTeams");

	APavlovGameMode_ShuffleTeams_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.SetTTTRoundEndSoundEnabled
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::SetTTTRoundEndSoundEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.SetTTTRoundEndSoundEnabled");

	APavlovGameMode_SetTTTRoundEndSoundEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.SetTeamLockTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          LockTime                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::SetTeamLockTime(float LockTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.SetTeamLockTime");

	APavlovGameMode_SetTeamLockTime_Params params;
	params.LockTime = LockTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.SetTeamCash
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            CashAmmount                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::SetTeamCash(int TeamId, int CashAmmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.SetTeamCash");

	APavlovGameMode_SetTeamCash_Params params;
	params.TeamId = TeamId;
	params.CashAmmount = CashAmmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.SetRoundState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPavlovRoundState              State                          (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::SetRoundState(EPavlovRoundState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.SetRoundState");

	APavlovGameMode_SetRoundState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.SetPlayerScore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::SetPlayerScore(class APlayerState* PlayerState, int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.SetPlayerScore");

	APavlovGameMode_SetPlayerScore_Params params;
	params.PlayerState = PlayerState;
	params.Score = Score;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.SetPawnsInvulnerable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::SetPawnsInvulnerable(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.SetPawnsInvulnerable");

	APavlovGameMode_SetPawnsInvulnerable_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.SetMovement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::SetMovement(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.SetMovement");

	APavlovGameMode_SetMovement_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.SetLimitedAmmoMode
// (Final, Exec, Native, Public)
// Parameters:
// unsigned char                  LimitedAmmoType                (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::SetLimitedAmmoMode(unsigned char LimitedAmmoType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.SetLimitedAmmoMode");

	APavlovGameMode_SetLimitedAmmoMode_Params params;
	params.LimitedAmmoType = LimitedAmmoType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.SetInactivityThresholds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewInactivityThreashold        (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewInactivityDormantThreashold (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::SetInactivityThresholds(int NewInactivityThreashold, int NewInactivityDormantThreashold)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.SetInactivityThresholds");

	APavlovGameMode_SetInactivityThresholds_Params params;
	params.NewInactivityThreashold = NewInactivityThreashold;
	params.NewInactivityDormantThreashold = NewInactivityDormantThreashold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.SetGrenadePinPrevention
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bPreventGrenadePins            (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::SetGrenadePinPrevention(bool bPreventGrenadePins)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.SetGrenadePinPrevention");

	APavlovGameMode_SetGrenadePinPrevention_Params params;
	params.bPreventGrenadePins = bPreventGrenadePins;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.SetEveryoneCash
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            CashAmmount                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::SetEveryoneCash(int CashAmmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.SetEveryoneCash");

	APavlovGameMode_SetEveryoneCash_Params params;
	params.CashAmmount = CashAmmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.SetAttackingTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::SetAttackingTeam(int TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.SetAttackingTeam");

	APavlovGameMode_SetAttackingTeam_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.RotateMap
// (Final, Native, Public, BlueprintCallable)

void APavlovGameMode::RotateMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.RotateMap");

	APavlovGameMode_RotateMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.ResetSNDMatch
// (Event, Public, BlueprintEvent)

void APavlovGameMode::ResetSNDMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.ResetSNDMatch");

	APavlovGameMode_ResetSNDMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.ResetScore
// (Final, Native, Public, BlueprintCallable)

void APavlovGameMode::ResetScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.ResetScore");

	APavlovGameMode_ResetScore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.ReplenishPlayersAmmo
// (Final, Native, Public, BlueprintCallable)

void APavlovGameMode::ReplenishPlayersAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.ReplenishPlayersAmmo");

	APavlovGameMode_ReplenishPlayersAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.ReplaceVehicleSpawners
// (Native, Public)

void APavlovGameMode::ReplaceVehicleSpawners()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.ReplaceVehicleSpawners");

	APavlovGameMode_ReplaceVehicleSpawners_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.RefreshOutOfBounds
// (Final, Native, Public, BlueprintCallable)

void APavlovGameMode::RefreshOutOfBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.RefreshOutOfBounds");

	APavlovGameMode_RefreshOutOfBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.PunishTeamKiller
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovPlayerState*      TeamKiller                     (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::PunishTeamKiller(class APavlovPlayerState* TeamKiller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.PunishTeamKiller");

	APavlovGameMode_PunishTeamKiller_Params params;
	params.TeamKiller = TeamKiller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.PostStats
// (Final, Native, Protected)

void APavlovGameMode::PostStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.PostStats");

	APavlovGameMode_PostStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.PostRoundCleanUp
// (Final, Native, Public, BlueprintCallable)

void APavlovGameMode::PostRoundCleanUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.PostRoundCleanUp");

	APavlovGameMode_PostRoundCleanUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.OnSteamTicketValidation
// (Final, Native, Protected)
// Parameters:
// struct FString                 SteamUserId                    (Parm, ZeroConstructor)
// ESteamAuthResponse             Response                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OwnerSteamUserId               (Parm, ZeroConstructor)

void APavlovGameMode::OnSteamTicketValidation(const struct FString& SteamUserId, ESteamAuthResponse Response, const struct FString& OwnerSteamUserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.OnSteamTicketValidation");

	APavlovGameMode_OnSteamTicketValidation_Params params;
	params.SteamUserId = SteamUserId;
	params.Response = Response;
	params.OwnerSteamUserId = OwnerSteamUserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.OnspawnVehicleWRefAsync
// (Final, Native, Public)
// Parameters:
// class UClass*                  VehicleClass                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FAsyncVehicleSpawnData  AsyncVehicleSpawnData          (Parm)

void APavlovGameMode::OnspawnVehicleWRefAsync(class UClass* VehicleClass, const struct FAsyncVehicleSpawnData& AsyncVehicleSpawnData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.OnspawnVehicleWRefAsync");

	APavlovGameMode_OnspawnVehicleWRefAsync_Params params;
	params.VehicleClass = VehicleClass;
	params.AsyncVehicleSpawnData = AsyncVehicleSpawnData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.OnSpawnVehicleAsync
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UClass*                  VehicleClass                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SpawnTransform                 (ConstParm, Parm, IsPlainOldData)
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::OnSpawnVehicleAsync(class UClass* VehicleClass, const struct FTransform& SpawnTransform, int TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.OnSpawnVehicleAsync");

	APavlovGameMode_OnSpawnVehicleAsync_Params params;
	params.VehicleClass = VehicleClass;
	params.SpawnTransform = SpawnTransform;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.OnRoundStateChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// EPavlovRoundState              OldState                       (Parm, ZeroConstructor, IsPlainOldData)
// EPavlovRoundState              NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::OnRoundStateChanged(EPavlovRoundState OldState, EPavlovRoundState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.OnRoundStateChanged");

	APavlovGameMode_OnRoundStateChanged_Params params;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.OnPlayerSpawned
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class APavlovPlayerState*      PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class APavlovPawn*             Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::OnPlayerSpawned(class APavlovPlayerState* PlayerState, class AController* Controller, class APavlovPawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.OnPlayerSpawned");

	APavlovGameMode_OnPlayerSpawned_Params params;
	params.PlayerState = PlayerState;
	params.Controller = Controller;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.OnPlayerKilled
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class APavlovPlayerState*      PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class APavlovPawn*             Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::OnPlayerKilled(class APavlovPlayerState* PlayerState, class AController* Controller, class APavlovPawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.OnPlayerKilled");

	APavlovGameMode_OnPlayerKilled_Params params;
	params.PlayerState = PlayerState;
	params.Controller = Controller;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.OnPawnKilled
// (Final, Native, Protected)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::OnPawnKilled(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.OnPawnKilled");

	APavlovGameMode_OnPawnKilled_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.OnOutOfBoundsOverlap
// (Final, Native, Protected)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::OnOutOfBoundsOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.OnOutOfBoundsOverlap");

	APavlovGameMode_OnOutOfBoundsOverlap_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.OnOutOfBoundsEndOverlap
// (Final, Native, Protected)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::OnOutOfBoundsEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.OnOutOfBoundsEndOverlap");

	APavlovGameMode_OnOutOfBoundsEndOverlap_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.OnLimitedAmmoModeChanged
// (Final, Native, Public)
// Parameters:
// ELimitedAmmoType               LimitedAmmoType                (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::OnLimitedAmmoModeChanged(ELimitedAmmoType LimitedAmmoType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.OnLimitedAmmoModeChanged");

	APavlovGameMode_OnLimitedAmmoModeChanged_Params params;
	params.LimitedAmmoType = LimitedAmmoType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.OnKillVolumeOverlap
// (Final, Native, Protected)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::OnKillVolumeOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.OnKillVolumeOverlap");

	APavlovGameMode_OnKillVolumeOverlap_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.MakeNavmeshStatic
// (Final, Native, Protected)

void APavlovGameMode::MakeNavmeshStatic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.MakeNavmeshStatic");

	APavlovGameMode_MakeNavmeshStatic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.LogSNDWinner
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            LogRound                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            LogTeamID                      (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::LogSNDWinner(int LogRound, int LogTeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.LogSNDWinner");

	APavlovGameMode_LogSNDWinner_Params params;
	params.LogRound = LogRound;
	params.LogTeamID = LogTeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.LogBombExplosion
// (Final, Native, Protected, BlueprintCallable)

void APavlovGameMode::LogBombExplosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.LogBombExplosion");

	APavlovGameMode_LogBombExplosion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.LogBomb
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class AController*             Interactor                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBombPlanted                   (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::LogBomb(class AController* Interactor, bool bBombPlanted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.LogBomb");

	APavlovGameMode_LogBomb_Params params;
	params.Interactor = Interactor;
	params.bBombPlanted = bBombPlanted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.KickByStringId
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FText                   KickReason                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bBan                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::KickByStringId(const struct FString& ID, const struct FText& KickReason, bool bBan)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.KickByStringId");

	APavlovGameMode_KickByStringId_Params params;
	params.ID = ID;
	params.KickReason = KickReason;
	params.bBan = bBan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.KickByPlayerState
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APavlovPlayerState*      PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   KickReason                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bBan                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAddToBlacklist                (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::KickByPlayerState(class APavlovPlayerState* PlayerState, const struct FText& KickReason, bool bBan, bool bAddToBlacklist)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.KickByPlayerState");

	APavlovGameMode_KickByPlayerState_Params params;
	params.PlayerState = PlayerState;
	params.KickReason = KickReason;
	params.bBan = bBan;
	params.bAddToBlacklist = bAddToBlacklist;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.IsTeamDead
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovGameMode::IsTeamDead(int TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.IsTeamDead");

	APavlovGameMode_IsTeamDead_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameMode.InitializedVehicleSpawners
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bHasSpawners                   (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::InitializedVehicleSpawners(bool bHasSpawners)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.InitializedVehicleSpawners");

	APavlovGameMode_InitializedVehicleSpawners_Params params;
	params.bHasSpawners = bHasSpawners;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.IncrementTeamScore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::IncrementTeamScore(int TeamId, int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.IncrementTeamScore");

	APavlovGameMode_IncrementTeamScore_Params params;
	params.TeamId = TeamId;
	params.Score = Score;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.IncrementPlayerScore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::IncrementPlayerScore(class APlayerState* PlayerState, int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.IncrementPlayerScore");

	APavlovGameMode_IncrementPlayerScore_Params params;
	params.PlayerState = PlayerState;
	params.Score = Score;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.GiveTeamCash
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            CashAmmount                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::GiveTeamCash(int TeamId, int CashAmmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.GiveTeamCash");

	APavlovGameMode_GiveTeamCash_Params params;
	params.TeamId = TeamId;
	params.CashAmmount = CashAmmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.GiveItem
// (Native, Public, BlueprintCallable)
// Parameters:
// class APavlovPawn*             Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ItemClass                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlockDuration                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoaded                        (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::GiveItem(class APavlovPawn* Pawn, class UClass* ItemClass, float BlockDuration, bool bLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.GiveItem");

	APavlovGameMode_GiveItem_Params params;
	params.Pawn = Pawn;
	params.ItemClass = ItemClass;
	params.BlockDuration = BlockDuration;
	params.bLoaded = bLoaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.GiveEveryoneCash
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            CashAmmount                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::GiveEveryoneCash(int CashAmmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.GiveEveryoneCash");

	APavlovGameMode_GiveEveryoneCash_Params params;
	params.CashAmmount = CashAmmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.GetTeamStatus
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Casualties                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::GetTeamStatus(int TeamId, int* Num, int* Casualties)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.GetTeamStatus");

	APavlovGameMode_GetTeamStatus_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Num != nullptr)
		*Num = params.Num;
	if (Casualties != nullptr)
		*Casualties = params.Casualties;
}


// Function Pavlov.PavlovGameMode.GetTeamRealPlayerCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlovGameMode::GetTeamRealPlayerCount(int TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.GetTeamRealPlayerCount");

	APavlovGameMode_GetTeamRealPlayerCount_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameMode.GetSteamAudioGun
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString APavlovGameMode::GetSteamAudioGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.GetSteamAudioGun");

	APavlovGameMode_GetSteamAudioGun_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameMode.GetSpawnPointsForQuery
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            NumOfSpawnPoints               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class APlayerSpawnPoint*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class APlayerSpawnPoint*> APavlovGameMode::GetSpawnPointsForQuery(int NumOfSpawnPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.GetSpawnPointsForQuery");

	APavlovGameMode_GetSpawnPointsForQuery_Params params;
	params.NumOfSpawnPoints = NumOfSpawnPoints;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameMode.GetRoundNumber
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlovGameMode::GetRoundNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.GetRoundNumber");

	APavlovGameMode_GetRoundNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameMode.GetRealPlayerCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlovGameMode::GetRealPlayerCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.GetRealPlayerCount");

	APavlovGameMode_GetRealPlayerCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameMode.GetRandomController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TeamFilter                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRealPlayer                    (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AController* APavlovGameMode::GetRandomController(int TeamFilter, bool bRealPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.GetRandomController");

	APavlovGameMode_GetRandomController_Params params;
	params.TeamFilter = TeamFilter;
	params.bRealPlayer = bRealPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameMode.GetMaxPlayerCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlovGameMode::GetMaxPlayerCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.GetMaxPlayerCount");

	APavlovGameMode_GetMaxPlayerCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameMode.GetKillZHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APavlovGameMode::GetKillZHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.GetKillZHeight");

	APavlovGameMode_GetKillZHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameMode.GetKillReward
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class APavlovPlayerState*      Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class APavlovPlayerState*      Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageTrackInfo        LastHitInfo                    (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlovGameMode::GetKillReward(class APavlovPlayerState* Killer, class APavlovPlayerState* Victim, const struct FDamageTrackInfo& LastHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.GetKillReward");

	APavlovGameMode_GetKillReward_Params params;
	params.Killer = Killer;
	params.Victim = Victim;
	params.LastHitInfo = LastHitInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameMode.GetDynamicSpawnPointForTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerSpawnPoint*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerSpawnPoint* APavlovGameMode::GetDynamicSpawnPointForTeam(int TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.GetDynamicSpawnPointForTeam");

	APavlovGameMode_GetDynamicSpawnPointForTeam_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameMode.GetDynamicOccludedSpawnPoint
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerSpawnPoint*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerSpawnPoint* APavlovGameMode::GetDynamicOccludedSpawnPoint(int TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.GetDynamicOccludedSpawnPoint");

	APavlovGameMode_GetDynamicOccludedSpawnPoint_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameMode.FinalizeMapSwitch
// (Native, Protected)

void APavlovGameMode::FinalizeMapSwitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.FinalizeMapSwitch");

	APavlovGameMode_FinalizeMapSwitch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.FinalizeMapRotation
// (Native, Protected)

void APavlovGameMode::FinalizeMapRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.FinalizeMapRotation");

	APavlovGameMode_FinalizeMapRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.EndTTTRound
// (Event, Public, BlueprintEvent)

void APavlovGameMode::EndTTTRound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.EndTTTRound");

	APavlovGameMode_EndTTTRound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.EnableFallDamage
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bFallEnabled                   (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::EnableFallDamage(bool bFallEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.EnableFallDamage");

	APavlovGameMode_EnableFallDamage_Params params;
	params.bFallEnabled = bFallEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.DestroyPushSpawns
// (Native, Event, Public, BlueprintEvent)

void APavlovGameMode::DestroyPushSpawns()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.DestroyPushSpawns");

	APavlovGameMode_DestroyPushSpawns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.DestroyBot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::DestroyBot(class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.DestroyBot");

	APavlovGameMode_DestroyBot_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.CreateDedicatedServerSession
// (Final, Native, Public, BlueprintCallable)

void APavlovGameMode::CreateDedicatedServerSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.CreateDedicatedServerSession");

	APavlovGameMode_CreateDedicatedServerSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.CreateBot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AController* APavlovGameMode::CreateBot(int TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.CreateBot");

	APavlovGameMode_CreateBot_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameMode.CleanUpItems
// (Final, Native, Public, BlueprintCallable)

void APavlovGameMode::CleanUpItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.CleanUpItems");

	APavlovGameMode_CleanUpItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.CanRotateMap
// (Native, Protected, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovGameMode::CanRotateMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.CanRotateMap");

	APavlovGameMode_CanRotateMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameMode.CanChangeScore
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovGameMode::CanChangeScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.CanChangeScore");

	APavlovGameMode_CanChangeScore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameMode.AssignPlayerSkin
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APavlovPlayerState*      PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// class APavlovPawn*             Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::AssignPlayerSkin(class APavlovPlayerState* PlayerState, class APavlovPawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.AssignPlayerSkin");

	APavlovGameMode_AssignPlayerSkin_Params params;
	params.PlayerState = PlayerState;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.AddTTTGameInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  TTTGameInfoClass               (Parm, ZeroConstructor, IsPlainOldData)
// class UTTTGameInfo*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTTTGameInfo* APavlovGameMode::AddTTTGameInfo(class UClass* TTTGameInfoClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.AddTTTGameInfo");

	APavlovGameMode_AddTTTGameInfo_Params params;
	params.TTTGameInfoClass = TTTGameInfoClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameMode.AddStatByController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// EPlayerStats                   PlayerStat                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovGameMode::AddStatByController(class AController* Controller, EPlayerStats PlayerStat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.AddStatByController");

	APavlovGameMode_AddStatByController_Params params;
	params.Controller = Controller;
	params.PlayerStat = PlayerStat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameMode.AddStat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovPlayerState*      PavPlayerState                 (Parm, ZeroConstructor, IsPlainOldData)
// EPlayerStats                   PlayerStat                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovGameMode::AddStat(class APavlovPlayerState* PavPlayerState, EPlayerStats PlayerStat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.AddStat");

	APavlovGameMode_AddStat_Params params;
	params.PavPlayerState = PavPlayerState;
	params.PlayerStat = PlayerStat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameMode.AddExtraRoundTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ExtraTime                      (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::AddExtraRoundTime(float ExtraTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.AddExtraRoundTime");

	APavlovGameMode_AddExtraRoundTime_Params params;
	params.ExtraTime = ExtraTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.AddAssist
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovPlayerState*      PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::AddAssist(class APavlovPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.AddAssist");

	APavlovGameMode_AddAssist_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.BattlegroundsGameMode.PerformWaitingHeartBeat
// (Final, Native, Protected)

void ABattlegroundsGameMode::PerformWaitingHeartBeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.BattlegroundsGameMode.PerformWaitingHeartBeat");

	ABattlegroundsGameMode_PerformWaitingHeartBeat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.BattlegroundsGameMode.PerformGameHeartBeat
// (Final, Native, Protected)

void ABattlegroundsGameMode::PerformGameHeartBeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.BattlegroundsGameMode.PerformGameHeartBeat");

	ABattlegroundsGameMode_PerformGameHeartBeat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.BloodPuddle.OnPour
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABloodPuddle::OnPour(const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.BloodPuddle.OnPour");

	ABloodPuddle_OnPour_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.BloodPuddle.OnOwnerEndPlay
// (Final, Native, Private)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEndPlayReason>    Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void ABloodPuddle::OnOwnerEndPlay(class AActor* OwnerActor, TEnumAsByte<EEndPlayReason> Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.BloodPuddle.OnOwnerEndPlay");

	ABloodPuddle_OnOwnerEndPlay_Params params;
	params.OwnerActor = OwnerActor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.BloodSplatGeometry.FadeOut
// (Final, Native, Protected)

void ABloodSplatGeometry::FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.BloodSplatGeometry.FadeOut");

	ABloodSplatGeometry_FadeOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.ResetBombPosition
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void ABomb::ResetBombPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.ResetBombPosition");

	ABomb_ResetBombPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.PlantAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ABombPlantSpot*          Spot                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void ABomb::PlantAt(class ABombPlantSpot* Spot, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.PlantAt");

	ABomb_PlantAt_Params params;
	params.Spot = Spot;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.OnPlayerOcclusionChange
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNewOccluded                   (Parm, ZeroConstructor, IsPlainOldData)

void ABomb::OnPlayerOcclusionChange(bool bNewOccluded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.OnPlayerOcclusionChange");

	ABomb_OnPlayerOcclusionChange_Params params;
	params.bNewOccluded = bNewOccluded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.OnPlanted
// (Native, Event, Public, BlueprintEvent)

void ABomb::OnPlanted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.OnPlanted");

	ABomb_OnPlanted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.OnGrace
// (Native, Event, Public, BlueprintEvent)

void ABomb::OnGrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.OnGrace");

	ABomb_OnGrace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.OnDetonation
// (Native, Event, Public, BlueprintEvent)

void ABomb::OnDetonation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.OnDetonation");

	ABomb_OnDetonation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.OnDefuse
// (Native, Event, Public, BlueprintEvent)

void ABomb::OnDefuse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.OnDefuse");

	ABomb_OnDefuse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.OnCodeReset
// (Native, Event, Public, BlueprintEvent)

void ABomb::OnCodeReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.OnCodeReset");

	ABomb_OnCodeReset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.OnButtonPressed
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void ABomb::OnButtonPressed(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.OnButtonPressed");

	ABomb_OnButtonPressed_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.OnBeep
// (Native, Event, Public, BlueprintEvent)

void ABomb::OnBeep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.OnBeep");

	ABomb_OnBeep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.MulticastOnPlantAt
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class ABombPlantSpot*          Spot                           (Parm, ZeroConstructor, IsPlainOldData)

void ABomb::MulticastOnPlantAt(class ABombPlantSpot* Spot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.MulticastOnPlantAt");

	ABomb_MulticastOnPlantAt_Params params;
	params.Spot = Spot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.MulticastOnGrace
// (Net, Native, Event, NetMulticast, Public)

void ABomb::MulticastOnGrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.MulticastOnGrace");

	ABomb_MulticastOnGrace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.MulticastOnEnterCode
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           bSucceed                       (Parm, ZeroConstructor, IsPlainOldData)

void ABomb::MulticastOnEnterCode(bool bSucceed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.MulticastOnEnterCode");

	ABomb_MulticastOnEnterCode_Params params;
	params.bSucceed = bSucceed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.MulticastOnDetonation
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void ABomb::MulticastOnDetonation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.MulticastOnDetonation");

	ABomb_MulticastOnDetonation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.MulticastOnDefuse
// (Net, Native, Event, NetMulticast, Public)

void ABomb::MulticastOnDefuse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.MulticastOnDefuse");

	ABomb_MulticastOnDefuse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.MulticastOnCodeReset
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void ABomb::MulticastOnCodeReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.MulticastOnCodeReset");

	ABomb_MulticastOnCodeReset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.MulticastOnBeep
// (Net, Native, Event, NetMulticast, Public)

void ABomb::MulticastOnBeep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.MulticastOnBeep");

	ABomb_MulticastOnBeep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.IsWireCut
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABomb::IsWireCut(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.IsWireCut");

	ABomb_IsWireCut_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Bomb.IsButtonPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABomb::IsButtonPressed(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.IsButtonPressed");

	ABomb_IsButtonPressed_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Bomb.GetWireLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABomb::GetWireLocation(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.GetWireLocation");

	ABomb_GetWireLocation_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Bomb.GetClosestValidWireIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABomb::GetClosestValidWireIndex(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.GetClosestValidWireIndex");

	ABomb_GetClosestValidWireIndex_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Bomb.ExpireCode
// (Final, Native, Protected)

void ABomb::ExpireCode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.ExpireCode");

	ABomb_ExpireCode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.EnterDigit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Digit                          (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Presser                        (Parm, ZeroConstructor, IsPlainOldData)

void ABomb::EnterDigit(int Digit, class AController* Presser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.EnterDigit");

	ABomb_EnterDigit_Params params;
	params.Digit = Digit;
	params.Presser = Presser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.Detonate
// (Native, Public, BlueprintCallable)

void ABomb::Detonate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.Detonate");

	ABomb_Detonate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.Defuse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AController*             Defuser                        (Parm, ZeroConstructor, IsPlainOldData)

void ABomb::Defuse(class AController* Defuser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.Defuse");

	ABomb_Defuse_Params params;
	params.Defuser = Defuser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.CutWire
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Defuser                        (Parm, ZeroConstructor, IsPlainOldData)

void ABomb::CutWire(int Index, class AController* Defuser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.CutWire");

	ABomb_CutWire_Params params;
	params.Index = Index;
	params.Defuser = Defuser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.AllowAutoResetBomb
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAutoReset                     (Parm, ZeroConstructor, IsPlainOldData)

void ABomb::AllowAutoResetBomb(bool bAutoReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.AllowAutoResetBomb");

	ABomb_AllowAutoResetBomb_Params params;
	params.bAutoReset = bAutoReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.BombPlantSpot.UpdateEnabledState
// (Final, Native, Private)

void ABombPlantSpot::UpdateEnabledState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.BombPlantSpot.UpdateEnabledState");

	ABombPlantSpot_UpdateEnabledState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.BombPlantSpot.SetSpotEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void ABombPlantSpot::SetSpotEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.BombPlantSpot.SetSpotEnabled");

	ABombPlantSpot_SetSpotEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.BombPlantSpot.ResetSpot
// (Final, Native, Public, BlueprintCallable)

void ABombPlantSpot::ResetSpot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.BombPlantSpot.ResetSpot");

	ABombPlantSpot_ResetSpot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.BombPlantSpot.OnRep_PlantedHere
// (Final, Native, Private)

void ABombPlantSpot::OnRep_PlantedHere()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.BombPlantSpot.OnRep_PlantedHere");

	ABombPlantSpot_OnRep_PlantedHere_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.BombPlantSpot.MulticastOnPlantStateChanged
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           bPlanted                       (Parm, ZeroConstructor, IsPlainOldData)

void ABombPlantSpot::MulticastOnPlantStateChanged(bool bPlanted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.BombPlantSpot.MulticastOnPlantStateChanged");

	ABombPlantSpot_MulticastOnPlantStateChanged_Params params;
	params.bPlanted = bPlanted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.BootGameMode.OnAsyncLoadCompleted
// (Final, Native, Public)

void ABootGameMode::OnAsyncLoadCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.BootGameMode.OnAsyncLoadCompleted");

	ABootGameMode_OnAsyncLoadCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bullet.GetBulletMesh
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UStaticMeshComponent* ABullet::GetBulletMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bullet.GetBulletMesh");

	ABullet_GetBulletMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.UberWheel.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AUberWheel::SetEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UberWheel.SetEnabled");

	AUberWheel_SetEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.UberWheel.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUberWheel::IsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UberWheel.IsEnabled");

	AUberWheel_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.BuyMenu.OnScriptingReady
// (Final, Native, Private)

void ABuyMenu::OnScriptingReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.BuyMenu.OnScriptingReady");

	ABuyMenu_OnScriptingReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.BuyMenu.OnReadyForBindings
// (Final, Native, Private)

void ABuyMenu::OnReadyForBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.BuyMenu.OnReadyForBindings");

	ABuyMenu_OnReadyForBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.BuyMenu.OnCashUpdated
// (Final, Native, Private)
// Parameters:
// int                            Cash                           (Parm, ZeroConstructor, IsPlainOldData)

void ABuyMenu::OnCashUpdated(int Cash)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.BuyMenu.OnCashUpdated");

	ABuyMenu_OnCashUpdated_Params params;
	params.Cash = Cash;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.BuyMenu.OnBuyingChanged
// (Final, Native, Public)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuyMenu::OnBuyingChanged(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.BuyMenu.OnBuyingChanged");

	ABuyMenu_OnBuyingChanged_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.BuyMenuData.RemoveBuyMenuSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ItemName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuyMenuData::RemoveBuyMenuSlot(const struct FName& ItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.BuyMenuData.RemoveBuyMenuSlot");

	UBuyMenuData_RemoveBuyMenuSlot_Params params;
	params.ItemName = ItemName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.BuyMenuData.PropertiesToJson
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UJsonUtilsObj*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UJsonUtilsObj* UBuyMenuData::PropertiesToJson()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.BuyMenuData.PropertiesToJson");

	UBuyMenuData_PropertiesToJson_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.BuyMenuData.JsonStringToBuyWheelData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 JsonString                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuyMenuData::JsonStringToBuyWheelData(const struct FString& JsonString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.BuyMenuData.JsonStringToBuyWheelData");

	UBuyMenuData_JsonStringToBuyWheelData_Params params;
	params.JsonString = JsonString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.BuyMenuData.GetFilteredList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovPlayerState*      PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FBuyMenuSlot>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBuyMenuSlot> UBuyMenuData::GetFilteredList(class APavlovPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.BuyMenuData.GetFilteredList");

	UBuyMenuData_GetFilteredList_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.BuyMenuData.CreateBuyMenuData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 JsonString                     (Parm, ZeroConstructor)
// class UBuyMenuData*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBuyMenuData* UBuyMenuData::CreateBuyMenuData(const struct FString& JsonString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.BuyMenuData.CreateBuyMenuData");

	UBuyMenuData_CreateBuyMenuData_Params params;
	params.JsonString = JsonString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.BuyMenuData.AddBuyMenuSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FBuyMenuSlot            Slot                           (Parm)

void UBuyMenuData::AddBuyMenuSlot(const struct FBuyMenuSlot& Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.BuyMenuData.AddBuyMenuSlot");

	UBuyMenuData_AddBuyMenuSlot_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ChamberComponent.ResetChamber
// (Final, Native, Public, BlueprintCallable)

void UChamberComponent::ResetChamber()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ChamberComponent.ResetChamber");

	UChamberComponent_ResetChamber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ChamberComponent.OnOverlap
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UChamberComponent::OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ChamberComponent.OnOverlap");

	UChamberComponent_OnOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ChamberComponent.OnChamberStateChanged
// (Final, Native, Private)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// EVRGunChamberState             OldState                       (Parm, ZeroConstructor, IsPlainOldData)
// EVRGunChamberState             NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void UChamberComponent::OnChamberStateChanged(int Index, EVRGunChamberState OldState, EVRGunChamberState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ChamberComponent.OnChamberStateChanged");

	UChamberComponent_OnChamberStateChanged_Params params;
	params.Index = Index;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ChamberComponent.DestroyConstrainedMesh
// (Final, Native, Private)

void UChamberComponent::DestroyConstrainedMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ChamberComponent.DestroyConstrainedMesh");

	UChamberComponent_DestroyConstrainedMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ChamberComponent.DebugDraw
// (Final, Native, Public, BlueprintCallable, Const)

void UChamberComponent::DebugDraw()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ChamberComponent.DebugDraw");

	UChamberComponent_DebugDraw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ChamberComponent.CheckConstraintBreakThreshold
// (Final, Native, Private)

void UChamberComponent::CheckConstraintBreakThreshold()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ChamberComponent.CheckConstraintBreakThreshold");

	UChamberComponent_CheckConstraintBreakThreshold_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ChamberComponent.BreakCheck
// (Final, Native, Private)

void UChamberComponent::BreakCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ChamberComponent.BreakCheck");

	UChamberComponent_BreakCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ChamberComponent.AllowRemoval
// (Final, Native, Public, BlueprintCallable)

void UChamberComponent::AllowRemoval()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ChamberComponent.AllowRemoval");

	UChamberComponent_AllowRemoval_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.UIView.OnScriptingReady
// (Native, Protected)

void AUIView::OnScriptingReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UIView.OnScriptingReady");

	AUIView_OnScriptingReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.UIView.OnReadyForBindings
// (Native, Protected)

void AUIView::OnReadyForBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UIView.OnReadyForBindings");

	AUIView_OnReadyForBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MenuUniverseView.SetVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void AMenuUniverseView::SetVisible(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverseView.SetVisible");

	AMenuUniverseView_SetVisible_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MenuUniverseView.SetDockTransformOverride
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              T                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMenuUniverseView::SetDockTransformOverride(const struct FTransform& T)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverseView.SetDockTransformOverride");

	AMenuUniverseView_SetDockTransformOverride_Params params;
	params.T = T;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MenuUniverseView.IsVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMenuUniverseView::IsVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverseView.IsVisible");

	AMenuUniverseView_IsVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.MenuUniverseView.GetUniverseTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform AMenuUniverseView::GetUniverseTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverseView.GetUniverseTransform");

	AMenuUniverseView_GetUniverseTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.MenuUniverseView.GetTopRightLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D AMenuUniverseView::GetTopRightLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverseView.GetTopRightLocation");

	AMenuUniverseView_GetTopRightLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.MenuUniverseView.GetTopLeftLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D AMenuUniverseView::GetTopLeftLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverseView.GetTopLeftLocation");

	AMenuUniverseView_GetTopLeftLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.MenuUniverseView.GetOffset2D
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               Pivot2D                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D AMenuUniverseView::GetOffset2D(const struct FVector2D& Pivot2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverseView.GetOffset2D");

	AMenuUniverseView_GetOffset2D_Params params;
	params.Pivot2D = Pivot2D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.MenuUniverseView.GetOffset
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               Pivot2D                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AMenuUniverseView::GetOffset(const struct FVector2D& Pivot2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverseView.GetOffset");

	AMenuUniverseView_GetOffset_Params params;
	params.Pivot2D = Pivot2D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.MenuUniverseView.GetMenuUniverse
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AMenuUniverse*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AMenuUniverse* AMenuUniverseView::GetMenuUniverse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverseView.GetMenuUniverse");

	AMenuUniverseView_GetMenuUniverse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.MenuUniverseView.GetCenterLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D AMenuUniverseView::GetCenterLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverseView.GetCenterLocation");

	AMenuUniverseView_GetCenterLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.MenuUniverseView.GetBottomRightLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D AMenuUniverseView::GetBottomRightLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverseView.GetBottomRightLocation");

	AMenuUniverseView_GetBottomRightLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.MenuUniverseView.GetBottomLeftLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D AMenuUniverseView::GetBottomLeftLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverseView.GetBottomLeftLocation");

	AMenuUniverseView_GetBottomLeftLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.MenuUniverseView.FadeEnded
// (Final, Native, Protected)

void AMenuUniverseView::FadeEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverseView.FadeEnded");

	AMenuUniverseView_FadeEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MenuUniverseView.Fade
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void AMenuUniverseView::Fade(bool bVisible, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverseView.Fade");

	AMenuUniverseView_Fade_Params params;
	params.bVisible = bVisible;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MenuUniverseView.ClearDockTransformOverride
// (Final, Native, Public, BlueprintCallable)

void AMenuUniverseView::ClearDockTransformOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverseView.ClearDockTransformOverride");

	AMenuUniverseView_ClearDockTransformOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MenuUniverseView.AnimateTo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               NewPivotLocation               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                Rotator                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AMenuUniverseView::AnimateTo(const struct FVector2D& NewPivotLocation, const struct FRotator& Rotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverseView.AnimateTo");

	AMenuUniverseView_AnimateTo_Params params;
	params.NewPivotLocation = NewPivotLocation;
	params.Rotator = Rotator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ContentView.OnSideInterfaceChanged
// (Native, Protected)
// Parameters:
// EUserInterfaceType             PrimaryInterface               (Parm, ZeroConstructor, IsPlainOldData)
// EUserInterfaceType             OldInterface                   (Parm, ZeroConstructor, IsPlainOldData)

void AContentView::OnSideInterfaceChanged(EUserInterfaceType PrimaryInterface, EUserInterfaceType OldInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ContentView.OnSideInterfaceChanged");

	AContentView_OnSideInterfaceChanged_Params params;
	params.PrimaryInterface = PrimaryInterface;
	params.OldInterface = OldInterface;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ContentView.OnLobbyLeave
// (Native, Protected)

void AContentView::OnLobbyLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ContentView.OnLobbyLeave");

	AContentView_OnLobbyLeave_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ContentView.OnLobbyEnter
// (Native, Protected)
// Parameters:
// bool                           bFailure                       (Parm, ZeroConstructor, IsPlainOldData)

void AContentView::OnLobbyEnter(bool bFailure)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ContentView.OnLobbyEnter");

	AContentView_OnLobbyEnter_Params params;
	params.bFailure = bFailure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ContentView.OnInterfaceChanged
// (Native, Protected)
// Parameters:
// EUserInterfaceType             OldInterface                   (Parm, ZeroConstructor, IsPlainOldData)

void AContentView::OnInterfaceChanged(EUserInterfaceType OldInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ContentView.OnInterfaceChanged");

	AContentView_OnInterfaceChanged_Params params;
	params.OldInterface = OldInterface;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PlayOnlineView.UpdateLobbyData
// (Final, Native, Protected)

void APlayOnlineView::UpdateLobbyData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PlayOnlineView.UpdateLobbyData");

	APlayOnlineView_UpdateLobbyData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PlayOnlineView.OnServerBrowserUpdated
// (Final, Native, Protected)

void APlayOnlineView::OnServerBrowserUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PlayOnlineView.OnServerBrowserUpdated");

	APlayOnlineView_OnServerBrowserUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PlayOnlineView.OnPingUpdated
// (Final, Native, Protected)
// Parameters:
// class UServerContainer*        Container                      (Parm, ZeroConstructor, IsPlainOldData)

void APlayOnlineView::OnPingUpdated(class UServerContainer* Container)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PlayOnlineView.OnPingUpdated");

	APlayOnlineView_OnPingUpdated_Params params;
	params.Container = Container;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PlayOnlineView.OnOnlineError
// (Final, Native, Protected, HasOutParms)
// Parameters:
// EOnlineError                   Error                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ErrorMessage                   (ConstParm, Parm, OutParm, ReferenceParm)

void APlayOnlineView::OnOnlineError(EOnlineError Error, const struct FText& ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PlayOnlineView.OnOnlineError");

	APlayOnlineView_OnOnlineError_Params params;
	params.Error = Error;
	params.ErrorMessage = ErrorMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PlayOnlineView.OnMapBrowserDestroyed
// (Final, Native, Protected)

void APlayOnlineView::OnMapBrowserDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PlayOnlineView.OnMapBrowserDestroyed");

	APlayOnlineView_OnMapBrowserDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PlayOnlineView.OnMapBrowserCommit
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FModalCommitParams      Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void APlayOnlineView::OnMapBrowserCommit(const struct FModalCommitParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PlayOnlineView.OnMapBrowserCommit");

	APlayOnlineView_OnMapBrowserCommit_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PlayOnlineView.OnLobbyPinDestroyed
// (Final, Native, Protected)

void APlayOnlineView::OnLobbyPinDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PlayOnlineView.OnLobbyPinDestroyed");

	APlayOnlineView_OnLobbyPinDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PlayOnlineView.OnLobbyPinCommit
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FModalCommitParams      Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void APlayOnlineView::OnLobbyPinCommit(const struct FModalCommitParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PlayOnlineView.OnLobbyPinCommit");

	APlayOnlineView_OnLobbyPinCommit_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PlayOnlineView.LobbyTalkCheck
// (Final, Native, Protected)

void APlayOnlineView::LobbyTalkCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PlayOnlineView.LobbyTalkCheck");

	APlayOnlineView_LobbyTalkCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ConnectSpinnerModalView.OnWorkshopDownloadProgress
// (Final, Native, Protected)
// Parameters:
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)

void AConnectSpinnerModalView::OnWorkshopDownloadProgress(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ConnectSpinnerModalView.OnWorkshopDownloadProgress");

	AConnectSpinnerModalView_OnWorkshopDownloadProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.CosmeticTickActor.CosmeticTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ACosmeticTickActor::CosmeticTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.CosmeticTickActor.CosmeticTick");

	ACosmeticTickActor_CosmeticTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.CustomItem.SpawnItemProxy
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  CustomItemClass                (Parm, ZeroConstructor, IsPlainOldData)

void ACustomItem::SpawnItemProxy(class UClass* CustomItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.CustomItem.SpawnItemProxy");

	ACustomItem_SpawnItemProxy_Params params;
	params.CustomItemClass = CustomItemClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.CustomItem.SetPickDisabled
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDisabled                      (Parm, ZeroConstructor, IsPlainOldData)

void ACustomItem::SetPickDisabled(bool bDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.CustomItem.SetPickDisabled");

	ACustomItem_SetPickDisabled_Params params;
	params.bDisabled = bDisabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.CustomItem.PlayerDroppedItem
// (Final, Native, Public, BlueprintCallable)

void ACustomItem::PlayerDroppedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.CustomItem.PlayerDroppedItem");

	ACustomItem_PlayerDroppedItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.CustomItem.OnRep_CustomProxy
// (Final, Native, Public)

void ACustomItem::OnRep_CustomProxy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.CustomItem.OnRep_CustomProxy");

	ACustomItem_OnRep_CustomProxy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.CustomItem.GetPawn
// (Final, Native, Public)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* ACustomItem::GetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.CustomItem.GetPawn");

	ACustomItem_GetPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.CustomItem.GetItemState
// (Final, Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char ACustomItem::GetItemState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.CustomItem.GetItemState");

	ACustomItem_GetItemState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.CustomItem.GetItemSequence
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UAnimSequence*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimSequence* ACustomItem::GetItemSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.CustomItem.GetItemSequence");

	ACustomItem_GetItemSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.CustomItem.GetExcludeSlots
// (Final, Native, Public)
// Parameters:
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> ACustomItem::GetExcludeSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.CustomItem.GetExcludeSlots");

	ACustomItem_GetExcludeSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.CustomItem.DropItem
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDestroy                       (Parm, ZeroConstructor, IsPlainOldData)

void ACustomItem::DropItem(bool bDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.CustomItem.DropItem");

	ACustomItem_DropItem_Params params;
	params.bDestroy = bDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.CustomItem.CustomItemDestroyed
// (Final, Native, Public)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void ACustomItem::CustomItemDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.CustomItem.CustomItemDestroyed");

	ACustomItem_CustomItemDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.DamageEffectComponent.OwnerKilled
// (Final, Native, Protected)
// Parameters:
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void UDamageEffectComponent::OwnerKilled(class AActor* Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.DamageEffectComponent.OwnerKilled");

	UDamageEffectComponent_OwnerKilled_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.DamageEffectComponent.InitComponent
// (Final, Native, Public)

void UDamageEffectComponent::InitComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.DamageEffectComponent.InitComponent");

	UDamageEffectComponent_InitComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.DamageEffectComponent.EnableDebugging
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UDamageEffectComponent::EnableDebugging(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.DamageEffectComponent.EnableDebugging");

	UDamageEffectComponent_EnableDebugging_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.DamageEffectComponent.DisplayHit
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 BulletDirection                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDamageEffectComponent::DisplayHit(const struct FVector& BulletDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.DamageEffectComponent.DisplayHit");

	UDamageEffectComponent_DisplayHit_Params params;
	params.BulletDirection = BulletDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.DamageTrackerComponent.ResetTracking
// (Final, Native, Public, BlueprintCallable)

void UDamageTrackerComponent::ResetTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.DamageTrackerComponent.ResetTracking");

	UDamageTrackerComponent_ResetTracking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.DamageTrackerComponent.GetLastHit
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDamageTrackInfo        LastHit                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDamageTrackerComponent::GetLastHit(struct FDamageTrackInfo* LastHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.DamageTrackerComponent.GetLastHit");

	UDamageTrackerComponent_GetLastHit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LastHit != nullptr)
		*LastHit = params.LastHit;

	return params.ReturnValue;
}


// Function Pavlov.DamageTrackerComponent.GatherAssists
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FDamageTrackInfo> Assists                        (Parm, OutParm, ZeroConstructor)

void UDamageTrackerComponent::GatherAssists(TArray<struct FDamageTrackInfo>* Assists)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.DamageTrackerComponent.GatherAssists");

	UDamageTrackerComponent_GatherAssists_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Assists != nullptr)
		*Assists = params.Assists;
}


// Function Pavlov.DedicatedServer.TravelNextTick
// (Final, Native, Protected)

void UDedicatedServer::TravelNextTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.DedicatedServer.TravelNextTick");

	UDedicatedServer_TravelNextTick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.DedicatedServer.OnMapDownloaded
// (Final, Native, Protected)
// Parameters:
// bool                           bSucceed                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ID                             (Parm, ZeroConstructor)

void UDedicatedServer::OnMapDownloaded(bool bSucceed, const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.DedicatedServer.OnMapDownloaded");

	UDedicatedServer_OnMapDownloaded_Params params;
	params.bSucceed = bSucceed;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.DedicatedServer.GetServerDetails
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FServerDetails          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FServerDetails UDedicatedServer::GetServerDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.DedicatedServer.GetServerDetails");

	UDedicatedServer_GetServerDetails_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovObject.TickByInterval
// (Final, Native, Private)

void UPavlovObject::TickByInterval()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovObject.TickByInterval");

	UPavlovObject_TickByInterval_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Destructible.OnShatter
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 Normal                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ADestructible::OnShatter(const struct FVector& Normal, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Destructible.OnShatter");

	ADestructible_OnShatter_Params params;
	params.Normal = Normal;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Destructible.MulticastOnShatter
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FVector_NetQuantizeNormal Normal                         (Parm)
// struct FVector_NetQuantize     Location                       (Parm)

void ADestructible::MulticastOnShatter(const struct FVector_NetQuantizeNormal& Normal, const struct FVector_NetQuantize& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Destructible.MulticastOnShatter");

	ADestructible_MulticastOnShatter_Params params;
	params.Normal = Normal;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.DoubleBarrelGunState.SetBarrel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bOpen                          (Parm, ZeroConstructor, IsPlainOldData)

void UDoubleBarrelGunState::SetBarrel(bool bOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.DoubleBarrelGunState.SetBarrel");

	UDoubleBarrelGunState_SetBarrel_Params params;
	params.bOpen = bOpen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.FlyingHelmet.ApplyImpulse
// (Final, Native, Private)

void AFlyingHelmet::ApplyImpulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.FlyingHelmet.ApplyImpulse");

	AFlyingHelmet_ApplyImpulse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.FriendsView.UpdateFriendsModel
// (Final, Native, Protected)

void AFriendsView::UpdateFriendsModel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.FriendsView.UpdateFriendsModel");

	AFriendsView_UpdateFriendsModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GameSessionServer.ReportState
// (Final, Native, Private)

void UGameSessionServer::ReportState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GameSessionServer.ReportState");

	UGameSessionServer_ReportState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GameSessionServer.OnMapDownloaded
// (Final, Native, Private)
// Parameters:
// bool                           bSucceed                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ID                             (Parm, ZeroConstructor)

void UGameSessionServer::OnMapDownloaded(bool bSucceed, const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GameSessionServer.OnMapDownloaded");

	UGameSessionServer_OnMapDownloaded_Params params;
	params.bSucceed = bSucceed;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GameSessionServer.OnDownloadProgress
// (Final, Native, Private)
// Parameters:
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)

void UGameSessionServer::OnDownloadProgress(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GameSessionServer.OnDownloadProgress");

	UGameSessionServer_OnDownloadProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GameSessionServer.AttemptToDispatch
// (Final, Native, Public)

void UGameSessionServer::AttemptToDispatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GameSessionServer.AttemptToDispatch");

	UGameSessionServer_AttemptToDispatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GestureComponent.RegisterGesture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGestureSetup           Setup                          (Parm)

void UGestureComponent::RegisterGesture(const struct FGestureSetup& Setup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GestureComponent.RegisterGesture");

	UGestureComponent_RegisterGesture_Params params;
	params.Setup = Setup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovItemController.UpdateUIState
// (Final, Native, Protected)

void APavlovItemController::UpdateUIState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.UpdateUIState");

	APavlovItemController_UpdateUIState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovItemController.SetWheelEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovItemController::SetWheelEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.SetWheelEnabled");

	APavlovItemController_SetWheelEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovItemController.SetMenu
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovItemController::SetMenu(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.SetMenu");

	APavlovItemController_SetMenu_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovItemController.SetKillfeed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovItemController::SetKillfeed(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.SetKillfeed");

	APavlovItemController_SetKillfeed_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovItemController.ReleaseTwoHandGrip
// (Final, Native, Public, BlueprintCallable)

void APavlovItemController::ReleaseTwoHandGrip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.ReleaseTwoHandGrip");

	APavlovItemController_ReleaseTwoHandGrip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovItemController.OnTeamIdChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)

void APavlovItemController::OnTeamIdChanged(int TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.OnTeamIdChanged");

	APavlovItemController_OnTeamIdChanged_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovItemController.OnSelectionPicked
// (Final, Native, Protected)
// Parameters:
// class AVRItem*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovItemController::OnSelectionPicked(class AVRItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.OnSelectionPicked");

	APavlovItemController_OnSelectionPicked_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovItemController.IsWheelEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovItemController::IsWheelEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.IsWheelEnabled");

	APavlovItemController_IsWheelEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovItemController.IsTwoHandReloadEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovItemController::IsTwoHandReloadEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.IsTwoHandReloadEnabled");

	APavlovItemController_IsTwoHandReloadEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovItemController.IsTwoHandGripEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovItemController::IsTwoHandGripEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.IsTwoHandGripEnabled");

	APavlovItemController_IsTwoHandGripEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovItemController.IsMenuActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovItemController::IsMenuActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.IsMenuActive");

	APavlovItemController_IsMenuActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovItemController.GetOppositeHandController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APavlovItemController*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APavlovItemController* APavlovItemController::GetOppositeHandController()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.GetOppositeHandController");

	APavlovItemController_GetOppositeHandController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovItemController.GetHandMenuInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AHandMenu*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AHandMenu* APavlovItemController::GetHandMenuInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.GetHandMenuInstance");

	APavlovItemController_GetHandMenuInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovItemController.GetFingerPointLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector APavlovItemController::GetFingerPointLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.GetFingerPointLocation");

	APavlovItemController_GetFingerPointLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovItemController.ForceTwoHandGrip
// (Final, Native, Public, BlueprintCallable)

void APavlovItemController::ForceTwoHandGrip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.ForceTwoHandGrip");

	APavlovItemController_ForceTwoHandGrip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovItemController.ClientEmptyGrippedHand
// (Net, NetReliable, Native, Event, Protected, NetClient)

void APavlovItemController::ClientEmptyGrippedHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.ClientEmptyGrippedHand");

	APavlovItemController_ClientEmptyGrippedHand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovItemController.ClearWheelInstance
// (Final, Native, Public, BlueprintCallable)

void APavlovItemController::ClearWheelInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.ClearWheelInstance");

	APavlovItemController_ClearWheelInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GhostItemController.OnPointModeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EGhostPointMode                OldPointMode                   (Parm, ZeroConstructor, IsPlainOldData)

void AGhostItemController::OnPointModeChanged(EGhostPointMode OldPointMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GhostItemController.OnPointModeChanged");

	AGhostItemController_OnPointModeChanged_Params params;
	params.OldPointMode = OldPointMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GhostItemController.ChangePointMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EGhostPointMode                NewPointMode                   (Parm, ZeroConstructor, IsPlainOldData)

void AGhostItemController::ChangePointMode(EGhostPointMode NewPointMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GhostItemController.ChangePointMode");

	AGhostItemController_ChangePointMode_Params params;
	params.NewPointMode = NewPointMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawnBase.GetNonDominantController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovItemController*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APavlovItemController* APavlovPawnBase::GetNonDominantController()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawnBase.GetNonDominantController");

	APavlovPawnBase_GetNonDominantController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawnBase.GetDominantController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovItemController*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APavlovItemController* APavlovPawnBase::GetDominantController()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawnBase.GetDominantController");

	APavlovPawnBase_GetDominantController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.GhostPawn.SpawnTags
// (Final, Native, Public, BlueprintCallable)

void AGhostPawn::SpawnTags()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GhostPawn.SpawnTags");

	AGhostPawn_SpawnTags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GhostPawn.OnTraveledToSpectatorRoom
// (Event, Protected, BlueprintEvent)

void AGhostPawn::OnTraveledToSpectatorRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GhostPawn.OnTraveledToSpectatorRoom");

	AGhostPawn_OnTraveledToSpectatorRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GhostPawn.OnTeamIdChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)

void AGhostPawn::OnTeamIdChanged(int TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GhostPawn.OnTeamIdChanged");

	AGhostPawn_OnTeamIdChanged_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GhostPawn.OnGraceTimeEnded
// (Event, Public, BlueprintEvent)

void AGhostPawn::OnGraceTimeEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GhostPawn.OnGraceTimeEnded");

	AGhostPawn_OnGraceTimeEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GhostPawn.EndGraceTime
// (Final, Native, Protected)

void AGhostPawn::EndGraceTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GhostPawn.EndGraceTime");

	AGhostPawn_EndGraceTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GhostPawn.CreateVoiceComponent
// (Final, Native, Protected)

void AGhostPawn::CreateVoiceComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GhostPawn.CreateVoiceComponent");

	AGhostPawn_CreateVoiceComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GhostPawn.ClientTravelToSpectatorRoom
// (Net, NetReliable, Native, Event, Protected, NetClient)

void AGhostPawn::ClientTravelToSpectatorRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GhostPawn.ClientTravelToSpectatorRoom");

	AGhostPawn_ClientTravelToSpectatorRoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GhostPawn.ClientSpawnKillCam
// (Net, Native, Event, Public, NetClient)
// Parameters:
// struct FKillInfo               KillInfo                       (ConstParm, Parm, ReferenceParm)

void AGhostPawn::ClientSpawnKillCam(const struct FKillInfo& KillInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GhostPawn.ClientSpawnKillCam");

	AGhostPawn_ClientSpawnKillCam_Params params;
	params.KillInfo = KillInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GhostPawn.ClearTags
// (Final, Native, Public, BlueprintCallable)

void AGhostPawn::ClearTags()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GhostPawn.ClearTags");

	AGhostPawn_ClearTags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GlobalPlayerEffects.SwitchState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPlayerEffectState             NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void AGlobalPlayerEffects::SwitchState(EPlayerEffectState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GlobalPlayerEffects.SwitchState");

	AGlobalPlayerEffects_SwitchState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GlobalPlayerEffects.ResetGlobalEffects
// (Final, Native, Public)

void AGlobalPlayerEffects::ResetGlobalEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GlobalPlayerEffects.ResetGlobalEffects");

	AGlobalPlayerEffects_ResetGlobalEffects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GlobalPlayerEffects.InstigateFlashVision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ViewAlpha                      (Parm, ZeroConstructor, IsPlainOldData)

void AGlobalPlayerEffects::InstigateFlashVision(float Duration, float ViewAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GlobalPlayerEffects.InstigateFlashVision");

	AGlobalPlayerEffects_InstigateFlashVision_Params params;
	params.Duration = Duration;
	params.ViewAlpha = ViewAlpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GlobalPlayerEffects.InstigateFlash
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ViewAlpha                      (Parm, ZeroConstructor, IsPlainOldData)

void AGlobalPlayerEffects::InstigateFlash(float Duration, float ViewAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GlobalPlayerEffects.InstigateFlash");

	AGlobalPlayerEffects_InstigateFlash_Params params;
	params.Duration = Duration;
	params.ViewAlpha = ViewAlpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GlobalPlayerEffects.GetFlashDuration
// (Final, Native, Public, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGlobalPlayerEffects::GetFlashDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GlobalPlayerEffects.GetFlashDuration");

	AGlobalPlayerEffects_GetFlashDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.GlobalPlayerEffects.DisableWindSound
// (Final, Native, Public)

void AGlobalPlayerEffects::DisableWindSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GlobalPlayerEffects.DisableWindSound");

	AGlobalPlayerEffects_DisableWindSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.ServerRestoreSafetyPin
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AGrenade::ServerRestoreSafetyPin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.ServerRestoreSafetyPin");

	AGrenade_ServerRestoreSafetyPin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.ServerRemoveSafetyPin
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AGrenade::ServerRemoveSafetyPin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.ServerRemoveSafetyPin");

	AGrenade_ServerRemoveSafetyPin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.ServerReleaseSafetyLever
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          PinPull                        (Parm, ZeroConstructor, IsPlainOldData)

void AGrenade::ServerReleaseSafetyLever(float PinPull)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.ServerReleaseSafetyLever");

	AGrenade_ServerReleaseSafetyLever_Params params;
	params.PinPull = PinPull;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.RemoveSafetyPin
// (Final, Native, Public, BlueprintCallable)

void AGrenade::RemoveSafetyPin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.RemoveSafetyPin");

	AGrenade_RemoveSafetyPin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.ReleaseSafetyLever
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          PinPull                        (Parm, ZeroConstructor, IsPlainOldData)

void AGrenade::ReleaseSafetyLever(float PinPull)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.ReleaseSafetyLever");

	AGrenade_ReleaseSafetyLever_Params params;
	params.PinPull = PinPull;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.PullSafetyPin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Ratio                          (Parm, ZeroConstructor, IsPlainOldData)

void AGrenade::PullSafetyPin(float Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.PullSafetyPin");

	AGrenade_PullSafetyPin_Params params;
	params.Ratio = Ratio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.OnRep_ProjectileActive
// (Final, Native, Protected)

void AGrenade::OnRep_ProjectileActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.OnRep_ProjectileActive");

	AGrenade_OnRep_ProjectileActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.OnReleaseSafetyLever
// (Final, Native, Public)

void AGrenade::OnReleaseSafetyLever()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.OnReleaseSafetyLever");

	AGrenade_OnReleaseSafetyLever_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.OnProjectileStop
// (Native, Protected, HasOutParms)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGrenade::OnProjectileStop(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.OnProjectileStop");

	AGrenade_OnProjectileStop_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.OnProjectileBounce
// (Native, Protected, HasOutParms, HasDefaults)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactVelocity                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AGrenade::OnProjectileBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.OnProjectileBounce");

	AGrenade_OnProjectileBounce_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.OnPinReinserted
// (Event, Public, BlueprintEvent)

void AGrenade::OnPinReinserted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.OnPinReinserted");

	AGrenade_OnPinReinserted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.OnDetonation
// (Native, Event, Public, BlueprintEvent)

void AGrenade::OnDetonation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.OnDetonation");

	AGrenade_OnDetonation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.MulticastThrow
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)

void AGrenade::MulticastThrow(const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.MulticastThrow");

	AGrenade_MulticastThrow_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.MulticastOnSafetyPinRemoved
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AGrenade::MulticastOnSafetyPinRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.MulticastOnSafetyPinRemoved");

	AGrenade_MulticastOnSafetyPinRemoved_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.MulticastOnReleaseSafetyLever
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AGrenade::MulticastOnReleaseSafetyLever()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.MulticastOnReleaseSafetyLever");

	AGrenade_MulticastOnReleaseSafetyLever_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.MulticastOnDetonation
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AGrenade::MulticastOnDetonation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.MulticastOnDetonation");

	AGrenade_MulticastOnDetonation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.GetHolidayLeverSound
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class USoundCue*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundCue* AGrenade::GetHolidayLeverSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.GetHolidayLeverSound");

	AGrenade_GetHolidayLeverSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Grenade.FixClientPin
// (Net, NetReliable, Native, Event, Public, NetClient)

void AGrenade::FixClientPin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.FixClientPin");

	AGrenade_FixClientPin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.Detonate
// (Native, Public, BlueprintCallable)

void AGrenade::Detonate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.Detonate");

	AGrenade_Detonate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.CanPullPin
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGrenade::CanPullPin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.CanPullPin");

	AGrenade_CanPullPin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Gun.UpdateCanRemoveAttachments
// (Final, Native, Private)

void AGun::UpdateCanRemoveAttachments()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.UpdateCanRemoveAttachments");

	AGun_UpdateCanRemoveAttachments_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.ToggleAccessory_Server
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AGun::ToggleAccessory_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.ToggleAccessory_Server");

	AGun_ToggleAccessory_Server_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.ToggleAccessory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGun::ToggleAccessory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.ToggleAccessory");

	AGun_ToggleAccessory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Gun.SupportsSuppressorAttachments
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGun::SupportsSuppressorAttachments()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.SupportsSuppressorAttachments");

	AGun_SupportsSuppressorAttachments_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Gun.SupportsSightAttachments
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGun::SupportsSightAttachments()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.SupportsSightAttachments");

	AGun_SupportsSightAttachments_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Gun.SupportsGripAttachments
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGun::SupportsGripAttachments()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.SupportsGripAttachments");

	AGun_SupportsGripAttachments_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Gun.SupportsCantedAttachments
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGun::SupportsCantedAttachments()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.SupportsCantedAttachments");

	AGun_SupportsCantedAttachments_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Gun.SupportsAttachments
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGun::SupportsAttachments()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.SupportsAttachments");

	AGun_SupportsAttachments_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Gun.SupportsAccessoryAttachments
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGun::SupportsAccessoryAttachments()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.SupportsAccessoryAttachments");

	AGun_SupportsAccessoryAttachments_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Gun.StartSlideInputSound
// (Final, Native, Public, BlueprintCallable)

void AGun::StartSlideInputSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.StartSlideInputSound");

	AGun_StartSlideInputSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.SpawnAndAttachLowEndSight
// (Final, Native, Private)

void AGun::SpawnAndAttachLowEndSight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.SpawnAndAttachLowEndSight");

	AGun_SpawnAndAttachLowEndSight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.SlideInputSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          SlideInput                     (Parm, ZeroConstructor, IsPlainOldData)

void AGun::SlideInputSound(float SlideInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.SlideInputSound");

	AGun_SlideInputSound_Params params;
	params.SlideInput = SlideInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.SetupBulletSkin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UStaticMeshComponent*    BulletMesh                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AGun::SetupBulletSkin(class UStaticMeshComponent* BulletMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.SetupBulletSkin");

	AGun_SetupBulletSkin_Params params;
	params.BulletMesh = BulletMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.SetAccessoryDrawDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bLocallyOwned                  (Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMeshComponent*    OptimizeMesh                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AGun::SetAccessoryDrawDistance(bool bLocallyOwned, class UStaticMeshComponent* OptimizeMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.SetAccessoryDrawDistance");

	AGun_SetAccessoryDrawDistance_Params params;
	params.bLocallyOwned = bLocallyOwned;
	params.OptimizeMesh = OptimizeMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.ResetAttachmentMode
// (Final, Native, Public)

void AGun::ResetAttachmentMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.ResetAttachmentMode");

	AGun_ResetAttachmentMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.RecoilDrop
// (Event, Public, BlueprintEvent)

void AGun::RecoilDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.RecoilDrop");

	AGun_RecoilDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.OptimizeGun
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bLocallyOwned                  (Parm, ZeroConstructor, IsPlainOldData)

void AGun::OptimizeGun(bool bLocallyOwned)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.OptimizeGun");

	AGun_OptimizeGun_Params params;
	params.bLocallyOwned = bLocallyOwned;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.OnUnderExploitChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bUnderExploit                  (Parm, ZeroConstructor, IsPlainOldData)

void AGun::OnUnderExploitChanged(bool bUnderExploit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.OnUnderExploitChanged");

	AGun_OnUnderExploitChanged_Params params;
	params.bUnderExploit = bUnderExploit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.OnTwoHandGripChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AGun::OnTwoHandGripChanged(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.OnTwoHandGripChanged");

	AGun_OnTwoHandGripChanged_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.OnSpawnUnloaded
// (Event, Public, BlueprintEvent)

void AGun::OnSpawnUnloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.OnSpawnUnloaded");

	AGun_OnSpawnUnloaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.OnSliderUngrabbed
// (Final, Native, Private)

void AGun::OnSliderUngrabbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.OnSliderUngrabbed");

	AGun_OnSliderUngrabbed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.OnSliderInputReceived
// (Final, Native, Private, HasDefaults)
// Parameters:
// struct FVector                 Input                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InputDelta                     (Parm, ZeroConstructor, IsPlainOldData)

void AGun::OnSliderInputReceived(const struct FVector& Input, const struct FVector& InputDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.OnSliderInputReceived");

	AGun_OnSliderInputReceived_Params params;
	params.Input = Input;
	params.InputDelta = InputDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.OnSliderGrabbed
// (Final, Native, Private)

void AGun::OnSliderGrabbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.OnSliderGrabbed");

	AGun_OnSliderGrabbed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.OnSlideModeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bSliding                       (Parm, ZeroConstructor, IsPlainOldData)

void AGun::OnSlideModeChanged(bool bSliding)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.OnSlideModeChanged");

	AGun_OnSlideModeChanged_Params params;
	params.bSliding = bSliding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.OnRecoilDropCooldown
// (Final, Native, Private)

void AGun::OnRecoilDropCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.OnRecoilDropCooldown");

	AGun_OnRecoilDropCooldown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.OnAttachModeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bJustPicked                    (Parm, ZeroConstructor, IsPlainOldData)

void AGun::OnAttachModeChanged(bool bEnabled, bool bJustPicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.OnAttachModeChanged");

	AGun_OnAttachModeChanged_Params params;
	params.bEnabled = bEnabled;
	params.bJustPicked = bJustPicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.OnAttachmentChanged
// (Native, Event, Public, BlueprintEvent)

void AGun::OnAttachmentChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.OnAttachmentChanged");

	AGun_OnAttachmentChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.MulticastOnRecoilDrop
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AGun::MulticastOnRecoilDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.MulticastOnRecoilDrop");

	AGun_MulticastOnRecoilDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.IsUnderExploit
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGun::IsUnderExploit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.IsUnderExploit");

	AGun_IsUnderExploit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Gun.IsInAttachmentMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGun::IsInAttachmentMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.IsInAttachmentMode");

	AGun_IsInAttachmentMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Gun.IsBeingGrippedBy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APavlovItemController*   ByController                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGun::IsBeingGrippedBy(class APavlovItemController* ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.IsBeingGrippedBy");

	AGun_IsBeingGrippedBy_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Gun.IsBeingGripped
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGun::IsBeingGripped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.IsBeingGripped");

	AGun_IsBeingGripped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Gun.IsAttachmentCompatible
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  GunClass                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  AttachmentClass                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGun::STATIC_IsAttachmentCompatible(class UClass* GunClass, class UClass* AttachmentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.IsAttachmentCompatible");

	AGun_IsAttachmentCompatible_Params params;
	params.GunClass = GunClass;
	params.AttachmentClass = AttachmentClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Gun.HasAttachment
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  AttachmentClass                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGun::HasAttachment(class UClass* AttachmentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.HasAttachment");

	AGun_HasAttachment_Params params;
	params.AttachmentClass = AttachmentClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Gun.GetPicatinnySlideSpacer
// (Final, Native, Public, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGun::GetPicatinnySlideSpacer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.GetPicatinnySlideSpacer");

	AGun_GetPicatinnySlideSpacer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Gun.GetChamberMesh
// (Event, Public, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UStaticMeshComponent* AGun::GetChamberMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.GetChamberMesh");

	AGun_GetChamberMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Gun.GetAttachmentSocket
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  AttachmentClass                (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName AGun::GetAttachmentSocket(class UClass* AttachmentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.GetAttachmentSocket");

	AGun_GetAttachmentSocket_Params params;
	params.AttachmentClass = AttachmentClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Gun.GetAttachmentNames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> AGun::GetAttachmentNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.GetAttachmentNames");

	AGun_GetAttachmentNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Gun.GetAttachmentList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class AAttachment*>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AAttachment*> AGun::GetAttachmentList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.GetAttachmentList");

	AGun_GetAttachmentList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Gun.BayonetDamage_Server
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FBayonetDamage          BayonetDamage                  (Parm)

void AGun::BayonetDamage_Server(const struct FBayonetDamage& BayonetDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.BayonetDamage_Server");

	AGun_BayonetDamage_Server_Params params;
	params.BayonetDamage = BayonetDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.SkinComponent.LoadSkin
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USkinComponent::LoadSkin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SkinComponent.LoadSkin");

	USkinComponent_LoadSkin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.GunSkinComponent.HasBulletMaterial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGunSkinComponent::HasBulletMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GunSkinComponent.HasBulletMaterial");

	UGunSkinComponent_HasBulletMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.GunSkinComponent.GetBulletMaterial
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* UGunSkinComponent::GetBulletMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GunSkinComponent.GetBulletMaterial");

	UGunSkinComponent_GetBulletMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.HealEffectComponent.OwnerKilled
// (Final, Native, Public)
// Parameters:
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void UHealEffectComponent::OwnerKilled(class AActor* Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.HealEffectComponent.OwnerKilled");

	UHealEffectComponent_OwnerKilled_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.HealEffectComponent.Initialize
// (Final, Native, Public)
// Parameters:
// float                          HealTime                       (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      HealMat                        (Parm, ZeroConstructor, IsPlainOldData)

void UHealEffectComponent::Initialize(float HealTime, class UMaterialInterface* HealMat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.HealEffectComponent.Initialize");

	UHealEffectComponent_Initialize_Params params;
	params.HealTime = HealTime;
	params.HealMat = HealMat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.HighlightInterface.GetHighlightComponents
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// EHighlightColor                HighlightColor                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class UMeshComponent*>  HighlightMeshes                (Parm, OutParm, ZeroConstructor)

void UHighlightInterface::GetHighlightComponents(EHighlightColor* HighlightColor, TArray<class UMeshComponent*>* HighlightMeshes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.HighlightInterface.GetHighlightComponents");

	UHighlightInterface_GetHighlightComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HighlightColor != nullptr)
		*HighlightColor = params.HighlightColor;
	if (HighlightMeshes != nullptr)
		*HighlightMeshes = params.HighlightMeshes;
}


// Function Pavlov.HitBoxProxyComponent.OnBulletOverlap
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UHitBoxProxyComponent::OnBulletOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.HitBoxProxyComponent.OnBulletOverlap");

	UHitBoxProxyComponent_OnBulletOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.HolsterComponent.TakeItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovItemController*   Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void UHolsterComponent::TakeItem(class APavlovItemController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.HolsterComponent.TakeItem");

	UHolsterComponent_TakeItem_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.HolsterComponent.ServerTakeItem
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class APavlovItemController*   Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void UHolsterComponent::ServerTakeItem(class APavlovItemController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.HolsterComponent.ServerTakeItem");

	UHolsterComponent_ServerTakeItem_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.HolsterComponent.ServerHolster
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AVRItem*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UHolsterComponent::ServerHolster(class AVRItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.HolsterComponent.ServerHolster");

	UHolsterComponent_ServerHolster_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.HolsterComponent.OnRep_HolsteredItem
// (Final, Native, Private)

void UHolsterComponent::OnRep_HolsteredItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.HolsterComponent.OnRep_HolsteredItem");

	UHolsterComponent_OnRep_HolsteredItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.HolsterComponent.MulticastOnItemHolstered
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class AVRItem*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UHolsterComponent::MulticastOnItemHolstered(class AVRItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.HolsterComponent.MulticastOnItemHolstered");

	UHolsterComponent_MulticastOnItemHolstered_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.HolsterComponent.MulticastOnDrop
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class AVRItem*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UHolsterComponent::MulticastOnDrop(class AVRItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.HolsterComponent.MulticastOnDrop");

	UHolsterComponent_MulticastOnDrop_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.HolsterComponent.Mirror
// (Final, Native, Public, BlueprintCallable)

void UHolsterComponent::Mirror()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.HolsterComponent.Mirror");

	UHolsterComponent_Mirror_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.HolsterComponent.Holster
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AVRItem*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UHolsterComponent::Holster(class AVRItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.HolsterComponent.Holster");

	UHolsterComponent_Holster_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.HolsterComponent.Drop
// (Final, Native, Public, BlueprintCallable)

void UHolsterComponent::Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.HolsterComponent.Drop");

	UHolsterComponent_Drop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.HolsterComponent.AttachItemLocally
// (Final, Native, Private)

void UHolsterComponent::AttachItemLocally()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.HolsterComponent.AttachItemLocally");

	UHolsterComponent_AttachItemLocally_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.IconRemover.AddIcons
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UPrimitiveComponent*> IconArray                      (Parm, ZeroConstructor)

void UIconRemover::AddIcons(TArray<class UPrimitiveComponent*> IconArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.IconRemover.AddIcons");

	UIconRemover_AddIcons_Params params;
	params.IconArray = IconArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.IconRemover.AddIcon
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     Icon                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UIconRemover::AddIcon(class UPrimitiveComponent* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.IconRemover.AddIcon");

	UIconRemover_AddIcon_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ImpairInterface.MarkAsImpaired
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EImpairedType                  Type                           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Instigator                     (Parm, ZeroConstructor, IsPlainOldData)

void UImpairInterface::MarkAsImpaired(EImpairedType Type, class AActor* EventActor, class AController* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ImpairInterface.MarkAsImpaired");

	UImpairInterface_MarkAsImpaired_Params params;
	params.Type = Type;
	params.EventActor = EventActor;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ImpairInterface.GetImpairedEyesViewPoint
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 OutLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OutRotation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UImpairInterface::GetImpairedEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ImpairInterface.GetImpairedEyesViewPoint");

	UImpairInterface_GetImpairedEyesViewPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
}


// Function Pavlov.InstancedSourceBusComponent.SilenceAudioComponent
// (Final, Native, Protected)

void UInstancedSourceBusComponent::SilenceAudioComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.InstancedSourceBusComponent.SilenceAudioComponent");

	UInstancedSourceBusComponent_SilenceAudioComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.InstancedSourceBusComponent.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceNoOcclusion              (Parm, ZeroConstructor, IsPlainOldData)
// class UAudioComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAudioComponent* UInstancedSourceBusComponent::Play(class USoundBase* Sound, bool bForceNoOcclusion)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.InstancedSourceBusComponent.Play");

	UInstancedSourceBusComponent_Play_Params params;
	params.Sound = Sound;
	params.bForceNoOcclusion = bForceNoOcclusion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.InstancedSourceBusComponent.OnSourceBusAudioFinished
// (Final, Native, Protected)
// Parameters:
// class UAudioComponent*         Comp                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInstancedSourceBusComponent::OnSourceBusAudioFinished(class UAudioComponent* Comp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.InstancedSourceBusComponent.OnSourceBusAudioFinished");

	UInstancedSourceBusComponent_OnSourceBusAudioFinished_Params params;
	params.Comp = Comp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.InstancedSourceBusComponent.OnAudioFinished
// (Final, Native, Protected)
// Parameters:
// class UAudioComponent*         Comp                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInstancedSourceBusComponent::OnAudioFinished(class UAudioComponent* Comp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.InstancedSourceBusComponent.OnAudioFinished");

	UInstancedSourceBusComponent_OnAudioFinished_Params params;
	params.Comp = Comp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.InstancedSourceBusComponent.GetAudioComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAudioComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAudioComponent* UInstancedSourceBusComponent::GetAudioComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.InstancedSourceBusComponent.GetAudioComponent");

	UInstancedSourceBusComponent_GetAudioComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Killfeed.Show
// (Final, Native, Public, BlueprintCallable)

void AKillfeed::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Killfeed.Show");

	AKillfeed_Show_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Killfeed.OnDisplayModeUpdated
// (Event, Public, BlueprintEvent)

void AKillfeed::OnDisplayModeUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Killfeed.OnDisplayModeUpdated");

	AKillfeed_OnDisplayModeUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Killfeed.OnArmKillfeedChanged
// (Final, Native, Protected)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AKillfeed::OnArmKillfeedChanged(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Killfeed.OnArmKillfeedChanged");

	AKillfeed_OnArmKillfeedChanged_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Killfeed.Hide
// (Final, Native, Public, BlueprintCallable)

void AKillfeed::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Killfeed.Hide");

	AKillfeed_Hide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Knife.StartThrowSound_Multi
// (Final, Net, Native, Event, NetMulticast, Private)

void AKnife::StartThrowSound_Multi()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Knife.StartThrowSound_Multi");

	AKnife_StartThrowSound_Multi_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Knife.StartKnifeThrow
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void AKnife::StartKnifeThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Knife.StartKnifeThrow");

	AKnife_StartKnifeThrow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Knife.SpawnKnifeProxy
// (Final, Native, Public)
// Parameters:
// struct FAttachProxyInfo        AttachInfo                     (Parm)

void AKnife::SpawnKnifeProxy(const struct FAttachProxyInfo& AttachInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Knife.SpawnKnifeProxy");

	AKnife_SpawnKnifeProxy_Params params;
	params.AttachInfo = AttachInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Knife.SetBloody
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AKnife::SetBloody(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Knife.SetBloody");

	AKnife_SetBloody_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Knife.OnRep_Bloody
// (Final, Native, Private)

void AKnife::OnRep_Bloody()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Knife.OnRep_Bloody");

	AKnife_OnRep_Bloody_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Knife.OnEndOverlap
// (Final, Native, Private)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AKnife::OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Knife.OnEndOverlap");

	AKnife_OnEndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Knife.OnBloodyChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNewBloody                     (Parm, ZeroConstructor, IsPlainOldData)

void AKnife::OnBloodyChanged(bool bNewBloody)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Knife.OnBloodyChanged");

	AKnife_OnBloodyChanged_Params params;
	params.bNewBloody = bNewBloody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Knife.OnBeginOverlap
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AKnife::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Knife.OnBeginOverlap");

	AKnife_OnBeginOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Knife.MulticastOnStab
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           bDead                          (Parm, ZeroConstructor, IsPlainOldData)

void AKnife::MulticastOnStab(bool bDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Knife.MulticastOnStab");

	AKnife_MulticastOnStab_Params params;
	params.bDead = bDead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Knife.HasSpawnedProxy
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AKnife::HasSpawnedProxy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Knife.HasSpawnedProxy");

	AKnife_HasSpawnedProxy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Knife.GetKillConfirmationSound2D
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class USoundCue*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundCue* AKnife::GetKillConfirmationSound2D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Knife.GetKillConfirmationSound2D");

	AKnife_GetKillConfirmationSound2D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Knife.GetAlternativeStabSound
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class USoundCue*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundCue* AKnife::GetAlternativeStabSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Knife.GetAlternativeStabSound");

	AKnife_GetAlternativeStabSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Knife.EnableTicking
// (Final, Native, Public, BlueprintCallable)

void AKnife::EnableTicking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Knife.EnableTicking");

	AKnife_EnableTicking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Knife.DelayDestroyKnife
// (Final, Native, Public)

void AKnife::DelayDestroyKnife()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Knife.DelayDestroyKnife");

	AKnife_DelayDestroyKnife_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Knife.CheckThrowThreshold
// (Final, Native, Private)

void AKnife::CheckThrowThreshold()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Knife.CheckThrowThreshold");

	AKnife_CheckThrowThreshold_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.KOTHObjective.UpdateHillMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*      UpdateMaterial                 (Parm, ZeroConstructor, IsPlainOldData)

void AKOTHObjective::UpdateHillMaterial(class UMaterialInterface* UpdateMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.KOTHObjective.UpdateHillMaterial");

	AKOTHObjective_UpdateHillMaterial_Params params;
	params.UpdateMaterial = UpdateMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.KOTHObjective.SetHillActive
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void AKOTHObjective::SetHillActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.KOTHObjective.SetHillActive");

	AKOTHObjective_SetHillActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.KOTHObjective.OnRep_KOTHState
// (Final, Native, Public)
// Parameters:
// EHillState                     OldKOTHState                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AKOTHObjective::OnRep_KOTHState(EHillState OldKOTHState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.KOTHObjective.OnRep_KOTHState");

	AKOTHObjective_OnRep_KOTHState_Params params;
	params.OldKOTHState = OldKOTHState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.KOTHObjective.OnRep_KOTHProxy
// (Final, Native, Protected)

void AKOTHObjective::OnRep_KOTHProxy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.KOTHObjective.OnRep_KOTHProxy");

	AKOTHObjective_OnRep_KOTHProxy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.KOTHObjective.OnObjectiveInitialized
// (Event, Public, BlueprintEvent)

void AKOTHObjective::OnObjectiveInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.KOTHObjective.OnObjectiveInitialized");

	AKOTHObjective_OnObjectiveInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.KOTHObjective.OnHillActive
// (Net, Native, Event, NetMulticast, Public)

void AKOTHObjective::OnHillActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.KOTHObjective.OnHillActive");

	AKOTHObjective_OnHillActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.KOTHObjective.InitializeFromProxy
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AKOTHObjectiveProxy*     ObjectiveProxy                 (Parm, ZeroConstructor, IsPlainOldData)

void AKOTHObjective::InitializeFromProxy(class AKOTHObjectiveProxy* ObjectiveProxy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.KOTHObjective.InitializeFromProxy");

	AKOTHObjective_InitializeFromProxy_Params params;
	params.ObjectiveProxy = ObjectiveProxy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.LimitedAmmoComponent.ShowLimitedAmmoCounter
// (Final, Native, Public)
// Parameters:
// bool                           bCounterVisible                (Parm, ZeroConstructor, IsPlainOldData)

void ULimitedAmmoComponent::ShowLimitedAmmoCounter(bool bCounterVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LimitedAmmoComponent.ShowLimitedAmmoCounter");

	ULimitedAmmoComponent_ShowLimitedAmmoCounter_Params params;
	params.bCounterVisible = bCounterVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.LimitedAmmoComponent.SetupAmmoUI_Server
// (Final, Native, Public)
// Parameters:
// class APavlovPawn*             PavPawn                        (Parm, ZeroConstructor, IsPlainOldData)

void ULimitedAmmoComponent::SetupAmmoUI_Server(class APavlovPawn* PavPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LimitedAmmoComponent.SetupAmmoUI_Server");

	ULimitedAmmoComponent_SetupAmmoUI_Server_Params params;
	params.PavPawn = PavPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.LimitedAmmoComponent.SetupAmmoCounter_Client
// (Net, NetReliable, Native, Event, Public, NetClient)

void ULimitedAmmoComponent::SetupAmmoCounter_Client()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LimitedAmmoComponent.SetupAmmoCounter_Client");

	ULimitedAmmoComponent_SetupAmmoCounter_Client_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.LimitedAmmoComponent.RemoveAmmo
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// EAmmoType                      AmmoType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            RemoveAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULimitedAmmoComponent::RemoveAmmo(EAmmoType AmmoType, int RemoveAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LimitedAmmoComponent.RemoveAmmo");

	ULimitedAmmoComponent_RemoveAmmo_Params params;
	params.AmmoType = AmmoType;
	params.RemoveAmount = RemoveAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.LimitedAmmoComponent.PlayerDied
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class APavlovPawn*             Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void ULimitedAmmoComponent::PlayerDied(class APavlovPawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LimitedAmmoComponent.PlayerDied");

	ULimitedAmmoComponent_PlayerDied_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.LimitedAmmoComponent.MagToAmmo
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AVRMagazine*             Mag                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULimitedAmmoComponent::MagToAmmo(class AVRMagazine* Mag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LimitedAmmoComponent.MagToAmmo");

	ULimitedAmmoComponent_MagToAmmo_Params params;
	params.Mag = Mag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.LimitedAmmoComponent.HasAmmoOfType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EAmmoType                      AmmoType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULimitedAmmoComponent::HasAmmoOfType(EAmmoType AmmoType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LimitedAmmoComponent.HasAmmoOfType");

	ULimitedAmmoComponent_HasAmmoOfType_Params params;
	params.AmmoType = AmmoType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.LimitedAmmoComponent.GiveAmmoForBuy
// (Native, Public, BlueprintCallable)
// Parameters:
// class AVRGun*                  Gun                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            AmmoLimit                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULimitedAmmoComponent::GiveAmmoForBuy(class AVRGun* Gun, int AmmoLimit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LimitedAmmoComponent.GiveAmmoForBuy");

	ULimitedAmmoComponent_GiveAmmoForBuy_Params params;
	params.Gun = Gun;
	params.AmmoLimit = AmmoLimit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.LimitedAmmoComponent.GetGunAmmoType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AVRGun*                  Gun                            (Parm, ZeroConstructor, IsPlainOldData)
// EAmmoType                      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EAmmoType ULimitedAmmoComponent::STATIC_GetGunAmmoType(class AVRGun* Gun)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LimitedAmmoComponent.GetGunAmmoType");

	ULimitedAmmoComponent_GetGunAmmoType_Params params;
	params.Gun = Gun;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.LimitedAmmoComponent.GetAmmoTypeName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EAmmoType                      AmmoType                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ULimitedAmmoComponent::GetAmmoTypeName(EAmmoType AmmoType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LimitedAmmoComponent.GetAmmoTypeName");

	ULimitedAmmoComponent_GetAmmoTypeName_Params params;
	params.AmmoType = AmmoType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.LimitedAmmoComponent.GetAmmoTypeFromName
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   AmmoId                         (Parm, ZeroConstructor, IsPlainOldData)
// EAmmoType                      AmmoType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULimitedAmmoComponent::GetAmmoTypeFromName(const struct FName& AmmoId, EAmmoType* AmmoType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LimitedAmmoComponent.GetAmmoTypeFromName");

	ULimitedAmmoComponent_GetAmmoTypeFromName_Params params;
	params.AmmoId = AmmoId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoType != nullptr)
		*AmmoType = params.AmmoType;

	return params.ReturnValue;
}


// Function Pavlov.LimitedAmmoComponent.GetAmmoClassFromType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EAmmoType                      AmmoType                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* ULimitedAmmoComponent::GetAmmoClassFromType(EAmmoType AmmoType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LimitedAmmoComponent.GetAmmoClassFromType");

	ULimitedAmmoComponent_GetAmmoClassFromType_Params params;
	params.AmmoType = AmmoType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.LimitedAmmoComponent.GetAmmoClassFromName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   AmmoId                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* ULimitedAmmoComponent::GetAmmoClassFromName(const struct FName& AmmoId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LimitedAmmoComponent.GetAmmoClassFromName");

	ULimitedAmmoComponent_GetAmmoClassFromName_Params params;
	params.AmmoId = AmmoId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.LimitedAmmoComponent.GetAmmoAmount
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EAmmoType                      AmmoType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULimitedAmmoComponent::GetAmmoAmount(EAmmoType AmmoType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LimitedAmmoComponent.GetAmmoAmount");

	ULimitedAmmoComponent_GetAmmoAmount_Params params;
	params.AmmoType = AmmoType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.LimitedAmmoComponent.AddBulkAmmo
// (BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TMap<EAmmoType, int>           BulkAmmo                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ULimitedAmmoComponent::AddBulkAmmo(TMap<EAmmoType, int> BulkAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LimitedAmmoComponent.AddBulkAmmo");

	ULimitedAmmoComponent_AddBulkAmmo_Params params;
	params.BulkAmmo = BulkAmmo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.LimitedAmmoComponent.AddAmmo
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// EAmmoType                      AmmoType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULimitedAmmoComponent::AddAmmo(EAmmoType AmmoType, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LimitedAmmoComponent.AddAmmo");

	ULimitedAmmoComponent_AddAmmo_Params params;
	params.AmmoType = AmmoType;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.LimitedAmmoBoxlessComponent.AddAmmoBox
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// EAmmoType                      AmmoType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULimitedAmmoBoxlessComponent::AddAmmoBox(EAmmoType AmmoType, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LimitedAmmoBoxlessComponent.AddAmmoBox");

	ULimitedAmmoBoxlessComponent_AddAmmoBox_Params params;
	params.AmmoType = AmmoType;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.LimitedAmmoCounter.ShowAmmoCounter
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void ALimitedAmmoCounter::ShowAmmoCounter(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LimitedAmmoCounter.ShowAmmoCounter");

	ALimitedAmmoCounter_ShowAmmoCounter_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.LoadoutData.RemoveLoadout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 LoadoutName                    (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULoadoutData::RemoveLoadout(const struct FString& LoadoutName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LoadoutData.RemoveLoadout");

	ULoadoutData_RemoveLoadout_Params params;
	params.LoadoutName = LoadoutName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.LoadoutData.PropertiesToJson
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UJsonUtilsObj*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UJsonUtilsObj* ULoadoutData::PropertiesToJson()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LoadoutData.PropertiesToJson");

	ULoadoutData_PropertiesToJson_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.LoadoutData.JsonStringToLoadoutProperties
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 JsonString                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULoadoutData::JsonStringToLoadoutProperties(const struct FString& JsonString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LoadoutData.JsonStringToLoadoutProperties");

	ULoadoutData_JsonStringToLoadoutProperties_Params params;
	params.JsonString = JsonString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.LoadoutData.CreateLoadoutProperties
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 JsonString                     (Parm, ZeroConstructor)
// class ULoadoutData*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULoadoutData* ULoadoutData::CreateLoadoutProperties(const struct FString& JsonString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LoadoutData.CreateLoadoutProperties");

	ULoadoutData_CreateLoadoutProperties_Params params;
	params.JsonString = JsonString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.LoadoutData.CanUseLoadout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovPlayerState*      PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 LoadoutName                    (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULoadoutData::CanUseLoadout(class APavlovPlayerState* PlayerState, const struct FString& LoadoutName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LoadoutData.CanUseLoadout");

	ULoadoutData_CanUseLoadout_Params params;
	params.PlayerState = PlayerState;
	params.LoadoutName = LoadoutName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.LoadoutData.AddLoadout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 LoadoutName                    (Parm, ZeroConstructor)
// struct FLoadout                Loadout                        (Parm)

void ULoadoutData::AddLoadout(const struct FString& LoadoutName, const struct FLoadout& Loadout)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LoadoutData.AddLoadout");

	ULoadoutData_AddLoadout_Params params;
	params.LoadoutName = LoadoutName;
	params.Loadout = Loadout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.LobbyStatusModel.OnLobbyStatusMessage
// (Final, Native, Protected)
// Parameters:
// struct FString                 InMessage                      (Parm, ZeroConstructor)
// bool                           bInDownloading                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          InProgress                     (Parm, ZeroConstructor, IsPlainOldData)

void ULobbyStatusModel::OnLobbyStatusMessage(const struct FString& InMessage, bool bInDownloading, float InProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LobbyStatusModel.OnLobbyStatusMessage");

	ULobbyStatusModel_OnLobbyStatusMessage_Params params;
	params.InMessage = InMessage;
	params.bInDownloading = bInDownloading;
	params.InProgress = InProgress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.LootSpawner.SetLootIndexByName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bNetUpdate                     (Parm, ZeroConstructor, IsPlainOldData)

void ALootSpawner::SetLootIndexByName(const struct FName& Name, bool bNetUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LootSpawner.SetLootIndexByName");

	ALootSpawner_SetLootIndexByName_Params params;
	params.Name = Name;
	params.bNetUpdate = bNetUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.LootSpawner.OnRep_LootIndex
// (Final, Native, Protected)

void ALootSpawner::OnRep_LootIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LootSpawner.OnRep_LootIndex");

	ALootSpawner_OnRep_LootIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.LootSpawner.OnLootChanged
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// unsigned char                  Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ALootSpawner::OnLootChanged(unsigned char Index, const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LootSpawner.OnLootChanged");

	ALootSpawner_OnLootChanged_Params params;
	params.Index = Index;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.LootSpawner.NetworkUpdate
// (Final, Native, Public, BlueprintCallable)

void ALootSpawner::NetworkUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LootSpawner.NetworkUpdate");

	ALootSpawner_NetworkUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.LootSpawner.IsClear
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALootSpawner::IsClear()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LootSpawner.IsClear");

	ALootSpawner_IsClear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.LootSpawner.GetLootNameByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ALootSpawner::GetLootNameByIndex(unsigned char Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LootSpawner.GetLootNameByIndex");

	ALootSpawner_GetLootNameByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.LootSpawner.GetLootName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ALootSpawner::GetLootName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LootSpawner.GetLootName");

	ALootSpawner_GetLootName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.LootSpawner.GetLootIndexByName
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char ALootSpawner::GetLootIndexByName(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LootSpawner.GetLootIndexByName");

	ALootSpawner_GetLootIndexByName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.LootSpawner.ClearLoot
// (Final, Native, Public, BlueprintCallable)

void ALootSpawner::ClearLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.LootSpawner.ClearLoot");

	ALootSpawner_ClearLoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MainMenu.OnUpdateScoreboard
// (Event, Public, BlueprintEvent)

void AMainMenu::OnUpdateScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MainMenu.OnUpdateScoreboard");

	AMainMenu_OnUpdateScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MainMenuView.OnVoteKickModalCommit
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FModalCommitParams      Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void AMainMenuView::OnVoteKickModalCommit(const struct FModalCommitParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MainMenuView.OnVoteKickModalCommit");

	AMainMenuView_OnVoteKickModalCommit_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MainMenuView.LeaveImpl
// (Final, Native, Protected)

void AMainMenuView::LeaveImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MainMenuView.LeaveImpl");

	AMainMenuView_LeaveImpl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MainMenuView.ExitGameImpl
// (Final, Native, Protected)

void AMainMenuView::ExitGameImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MainMenuView.ExitGameImpl");

	AMainMenuView_ExitGameImpl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MapBrowserModel.OnSubscritionChanged
// (Final, Native, Protected)
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSubscribed                    (Parm, ZeroConstructor, IsPlainOldData)

void UMapBrowserModel::OnSubscritionChanged(const struct FName& ID, bool bSubscribed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MapBrowserModel.OnSubscritionChanged");

	UMapBrowserModel_OnSubscritionChanged_Params params;
	params.ID = ID;
	params.bSubscribed = bSubscribed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MapBrowserModel.OnRequestUserVote
// (Final, Native, Protected)
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)
// EWorkshopVoteType              VoteType                       (Parm, ZeroConstructor, IsPlainOldData)

void UMapBrowserModel::OnRequestUserVote(const struct FName& ID, EWorkshopVoteType VoteType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MapBrowserModel.OnRequestUserVote");

	UMapBrowserModel_OnRequestUserVote_Params params;
	params.ID = ID;
	params.VoteType = VoteType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MapBrowserModel.OnPreviewLoaded
// (Final, Native, Protected)
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UMapBrowserModel::OnPreviewLoaded(const struct FName& ID, class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MapBrowserModel.OnPreviewLoaded");

	UMapBrowserModel_OnPreviewLoaded_Params params;
	params.ID = ID;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MapBrowserModel.OnDownloadProgress
// (Final, Native, Protected)
// Parameters:
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)

void UMapBrowserModel::OnDownloadProgress(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MapBrowserModel.OnDownloadProgress");

	UMapBrowserModel_OnDownloadProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MapBrowserModel.OnDownloadBegin
// (Final, Native, Protected)

void UMapBrowserModel::OnDownloadBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MapBrowserModel.OnDownloadBegin");

	UMapBrowserModel_OnDownloadBegin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MapBrowserModel.OnCustomMapQueryCompleted
// (Final, Native, Protected)

void UMapBrowserModel::OnCustomMapQueryCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MapBrowserModel.OnCustomMapQueryCompleted");

	UMapBrowserModel_OnCustomMapQueryCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MapBrowserModel.OnCustomMapDownloadCompleted
// (Final, Native, Protected)
// Parameters:
// bool                           bSucceed                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ID                             (Parm, ZeroConstructor)

void UMapBrowserModel::OnCustomMapDownloadCompleted(bool bSucceed, const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MapBrowserModel.OnCustomMapDownloadCompleted");

	UMapBrowserModel_OnCustomMapDownloadCompleted_Params params;
	params.bSucceed = bSucceed;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MapBrowserModel.OnArtificialQueryCompleted
// (Final, Native, Protected)

void UMapBrowserModel::OnArtificialQueryCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MapBrowserModel.OnArtificialQueryCompleted");

	UMapBrowserModel_OnArtificialQueryCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MapValidator.GenerateNewColors
// (Final, Native, Public, BlueprintCallable)

void AMapValidator::GenerateNewColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MapValidator.GenerateNewColors");

	AMapValidator_GenerateNewColors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MapValidator.FlushDebugPoints
// (Final, Native, Public, BlueprintCallable)

void AMapValidator::FlushDebugPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MapValidator.FlushDebugPoints");

	AMapValidator_FlushDebugPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MapValidator.DrawReflectionCaptureView
// (Final, Native, Public, BlueprintCallable)

void AMapValidator::DrawReflectionCaptureView()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MapValidator.DrawReflectionCaptureView");

	AMapValidator_DrawReflectionCaptureView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Matchmaking.UpdatePartyList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMatchmaking::UpdatePartyList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Matchmaking.UpdatePartyList");

	UMatchmaking_UpdatePartyList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Matchmaking.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMatchSettings          NewSettings                    (ConstParm, Parm, OutParm, ReferenceParm)

void UMatchmaking::SetSettings(const struct FMatchSettings& NewSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Matchmaking.SetSettings");

	UMatchmaking_SetSettings_Params params;
	params.NewSettings = NewSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Matchmaking.SetDefaultSettings
// (Final, Native, Public, BlueprintCallable)

void UMatchmaking::SetDefaultSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Matchmaking.SetDefaultSettings");

	UMatchmaking_SetDefaultSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Matchmaking.Queue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMatchmaking::Queue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Matchmaking.Queue");

	UMatchmaking_Queue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Matchmaking.LeaveParty
// (Final, Native, Public, BlueprintCallable)

void UMatchmaking::LeaveParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Matchmaking.LeaveParty");

	UMatchmaking_LeaveParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Matchmaking.JoinParty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 NetworkStr                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMatchmaking::JoinParty(const struct FString& NetworkStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Matchmaking.JoinParty");

	UMatchmaking_JoinParty_Params params;
	params.NetworkStr = NetworkStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Matchmaking.IsInQueue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMatchmaking::IsInQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Matchmaking.IsInQueue");

	UMatchmaking_IsInQueue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Matchmaking.IsConnectingToServer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMatchmaking::IsConnectingToServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Matchmaking.IsConnectingToServer");

	UMatchmaking_IsConnectingToServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Matchmaking.IsActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMatchmaking::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Matchmaking.IsActive");

	UMatchmaking_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Matchmaking.GetPlayerTitleId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMatchmaking::GetPlayerTitleId()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Matchmaking.GetPlayerTitleId");

	UMatchmaking_GetPlayerTitleId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Matchmaking.GetPlayerPlayFabId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMatchmaking::GetPlayerPlayFabId()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Matchmaking.GetPlayerPlayFabId");

	UMatchmaking_GetPlayerPlayFabId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Matchmaking.GetPartyInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMatchmakingParty*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMatchmakingParty* UMatchmaking::GetPartyInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Matchmaking.GetPartyInstance");

	UMatchmaking_GetPartyInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Matchmaking.GetEntityType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMatchmaking::GetEntityType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Matchmaking.GetEntityType");

	UMatchmaking_GetEntityType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Matchmaking.GetEntityToken
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMatchmaking::GetEntityToken()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Matchmaking.GetEntityToken");

	UMatchmaking_GetEntityToken_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Matchmaking.GetEntityId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMatchmaking::GetEntityId()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Matchmaking.GetEntityId");

	UMatchmaking_GetEntityId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Matchmaking.CreateParty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMatchmaking::CreateParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Matchmaking.CreateParty");

	UMatchmaking_CreateParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Matchmaking.Cancel
// (Final, Native, Public, BlueprintCallable)

void UMatchmaking::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Matchmaking.Cancel");

	UMatchmaking_Cancel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MatchmakingParty.IsLocalMemberLeader
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMatchmakingParty::IsLocalMemberLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MatchmakingParty.IsLocalMemberLeader");

	UMatchmakingParty_IsLocalMemberLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.MatchmakingParty.Hide
// (Final, Native, Public, BlueprintCallable)

void UMatchmakingParty::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MatchmakingParty.Hide");

	UMatchmakingParty_Hide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MatchmakingParty.GetMemberArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FPartyMember>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FPartyMember> UMatchmakingParty::GetMemberArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MatchmakingParty.GetMemberArray");

	UMatchmakingParty_GetMemberArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.MatchmakingParty.GetLeaderEntityId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMatchmakingParty::GetLeaderEntityId()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MatchmakingParty.GetLeaderEntityId");

	UMatchmakingParty_GetLeaderEntityId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.MatchmakingParty.Broadcast
// (Final, Native, Public, BlueprintCallable)

void UMatchmakingParty::Broadcast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MatchmakingParty.Broadcast");

	UMatchmakingParty_Broadcast_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MenuUniverse.UpdateDocks
// (Final, Native, Public, BlueprintCallable)

void AMenuUniverse::UpdateDocks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverse.UpdateDocks");

	AMenuUniverse_UpdateDocks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MenuUniverse.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AMenuUniverse::SetEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverse.SetEnabled");

	AMenuUniverse_SetEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MenuUniverse.OnViewTargetChangingFrom
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  ViewTarget                     (Parm, ZeroConstructor, IsPlainOldData)

void AMenuUniverse::OnViewTargetChangingFrom(class AActor* ViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverse.OnViewTargetChangingFrom");

	AMenuUniverse_OnViewTargetChangingFrom_Params params;
	params.ViewTarget = ViewTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MenuUniverse.OnSideInterfaceChanged
// (Final, Native, Protected)
// Parameters:
// EUserInterfaceType             PrimaryInterface               (Parm, ZeroConstructor, IsPlainOldData)
// EUserInterfaceType             OldInterface                   (Parm, ZeroConstructor, IsPlainOldData)

void AMenuUniverse::OnSideInterfaceChanged(EUserInterfaceType PrimaryInterface, EUserInterfaceType OldInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverse.OnSideInterfaceChanged");

	AMenuUniverse_OnSideInterfaceChanged_Params params;
	params.PrimaryInterface = PrimaryInterface;
	params.OldInterface = OldInterface;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MenuUniverse.OnInterfaceChanged
// (Final, Native, Protected)
// Parameters:
// EUserInterfaceType             OldInterface                   (Parm, ZeroConstructor, IsPlainOldData)

void AMenuUniverse::OnInterfaceChanged(EUserInterfaceType OldInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverse.OnInterfaceChanged");

	AMenuUniverse_OnInterfaceChanged_Params params;
	params.OldInterface = OldInterface;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MenuUniverse.OnHeadsetScaleChanged
// (Native, Protected)
// Parameters:
// float                          NewScale                       (Parm, ZeroConstructor, IsPlainOldData)

void AMenuUniverse::OnHeadsetScaleChanged(float NewScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverse.OnHeadsetScaleChanged");

	AMenuUniverse_OnHeadsetScaleChanged_Params params;
	params.NewScale = NewScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MenuUniverse.OnEnableChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AMenuUniverse::OnEnableChanged(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverse.OnEnableChanged");

	AMenuUniverse_OnEnableChanged_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MenuUniverse.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMenuUniverse::IsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverse.IsEnabled");

	AMenuUniverse_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.MenuUniverse.GetViewById
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class AMenuUniverseView*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AMenuUniverseView* AMenuUniverse::GetViewById(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverse.GetViewById");

	AMenuUniverse_GetViewById_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.MenuUniverse.DockView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EMenuUniverseDockingType       Dock                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ViewId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Order                          (Parm, ZeroConstructor, IsPlainOldData)

void AMenuUniverse::DockView(EMenuUniverseDockingType Dock, int ViewId, int Order)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverse.DockView");

	AMenuUniverse_DockView_Params params;
	params.Dock = Dock;
	params.ViewId = ViewId;
	params.Order = Order;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MenuUniverse.CreateView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ViewClass                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ViewUrlOverride                (Parm, ZeroConstructor)
// class UObject*                 ControllerObject               (Parm, ZeroConstructor, IsPlainOldData)
// class AMenuUniverseView*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AMenuUniverseView* AMenuUniverse::CreateView(class UClass* ViewClass, const struct FString& ViewUrlOverride, class UObject* ControllerObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverse.CreateView");

	AMenuUniverse_CreateView_Params params;
	params.ViewClass = ViewClass;
	params.ViewUrlOverride = ViewUrlOverride;
	params.ControllerObject = ControllerObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.MenuUniverse.AdjustFacingPivot
// (Final, Native, Public, BlueprintCallable)

void AMenuUniverse::AdjustFacingPivot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverse.AdjustFacingPivot");

	AMenuUniverse_AdjustFacingPivot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MenuUniverseController.OnTriggerReleased
// (Final, Native, Private)

void UMenuUniverseController::OnTriggerReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverseController.OnTriggerReleased");

	UMenuUniverseController_OnTriggerReleased_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MenuUniverseController.OnTriggerPressed
// (Final, Native, Private)

void UMenuUniverseController::OnTriggerPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverseController.OnTriggerPressed");

	UMenuUniverseController_OnTriggerPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MenuUniverseController.OnTouchpadY
// (Final, Native, Private)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UMenuUniverseController::OnTouchpadY(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverseController.OnTouchpadY");

	UMenuUniverseController_OnTouchpadY_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MenuUniverseController.OnTouchpadX
// (Final, Native, Private)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UMenuUniverseController::OnTouchpadX(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverseController.OnTouchpadX");

	UMenuUniverseController_OnTouchpadX_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MenuUniverseController.OnScrollY
// (Final, Native, Private)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UMenuUniverseController::OnScrollY(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverseController.OnScrollY");

	UMenuUniverseController_OnScrollY_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MenuUniverseController.OnScrollX
// (Final, Native, Private)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UMenuUniverseController::OnScrollX(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverseController.OnScrollX");

	UMenuUniverseController_OnScrollX_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MenuUniverseController.OnMenuReleased
// (Final, Native, Private)

void UMenuUniverseController::OnMenuReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverseController.OnMenuReleased");

	UMenuUniverseController_OnMenuReleased_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.MenuUniverseController.OnMenuPressed
// (Final, Native, Private)

void UMenuUniverseController::OnMenuPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.MenuUniverseController.OnMenuPressed");

	UMenuUniverseController_OnMenuPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Modal.Commit
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FModalCommitParams      Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UModal::Commit(const struct FModalCommitParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Modal.Commit");

	UModal_Commit_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ModalMessageBox.SetProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewProgress                    (Parm, ZeroConstructor, IsPlainOldData)

void UModalMessageBox::SetProgress(float NewProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ModalMessageBox.SetProgress");

	UModalMessageBox_SetProgress_Params params;
	params.NewProgress = NewProgress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.NameTagWidget.OnAvatarTextureUpdated
// (Final, Native, Protected)
// Parameters:
// struct FString                 ProductId                      (Parm, ZeroConstructor)
// struct FString                 PlatformId                     (Parm, ZeroConstructor)
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UNameTagWidget::OnAvatarTextureUpdated(const struct FString& ProductId, const struct FString& PlatformId, class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.NameTagWidget.OnAvatarTextureUpdated");

	UNameTagWidget_OnAvatarTextureUpdated_Params params;
	params.ProductId = ProductId;
	params.PlatformId = PlatformId;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.NameTagWidgetTTT.UpdateVis
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class APavlovPlayerState*      LocalPavPlayerState            (Parm, ZeroConstructor, IsPlainOldData)
// class APavlovPlayerState*      OwnerPavPlayerState            (Parm, ZeroConstructor, IsPlainOldData)

void UNameTagWidgetTTT::UpdateVis(class APavlovPlayerState* LocalPavPlayerState, class APavlovPlayerState* OwnerPavPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.NameTagWidgetTTT.UpdateVis");

	UNameTagWidgetTTT_UpdateVis_Params params;
	params.LocalPavPlayerState = LocalPavPlayerState;
	params.OwnerPavPlayerState = OwnerPavPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OculusInputBinding.ApplyEmulated
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)

void UOculusInputBinding::STATIC_ApplyEmulated(class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OculusInputBinding.ApplyEmulated");

	UOculusInputBinding_ApplyEmulated_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OnlineAuthentication.ResetReLoginCooldown
// (Final, Native, Protected)

void UOnlineAuthentication::ResetReLoginCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineAuthentication.ResetReLoginCooldown");

	UOnlineAuthentication_ResetReLoginCooldown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OnlineAuthentication.IsLoggedIn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOnlineAuthentication::IsLoggedIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineAuthentication.IsLoggedIn");

	UOnlineAuthentication_IsLoggedIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.OnlineAuthentication.GetLocalPlatformId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UOnlineAuthentication::GetLocalPlatformId()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineAuthentication.GetLocalPlatformId");

	UOnlineAuthentication_GetLocalPlatformId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.OnlineAuthentication.GetDisplayName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UOnlineAuthentication::GetDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineAuthentication.GetDisplayName");

	UOnlineAuthentication_GetDisplayName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.OnlineLeaderboards.QueryLeaderboardRanks
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 LeaderboardId                  (Parm, ZeroConstructor)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData)

void UOnlineLeaderboards::QueryLeaderboardRanks(const struct FString& LeaderboardId, int MaxResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineLeaderboards.QueryLeaderboardRanks");

	UOnlineLeaderboards_QueryLeaderboardRanks_Params params;
	params.LeaderboardId = LeaderboardId;
	params.MaxResults = MaxResults;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OnlineLobby.SetVoiceChat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UOnlineLobby::SetVoiceChat(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineLobby.SetVoiceChat");

	UOnlineLobby_SetVoiceChat_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OnlineLobby.SetMemberData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UOnlineLobby::SetMemberData(const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineLobby.SetMemberData");

	UOnlineLobby_SetMemberData_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OnlineLobby.SetLobbyMemberLimit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            MemberLimit                    (Parm, ZeroConstructor, IsPlainOldData)

void UOnlineLobby::SetLobbyMemberLimit(int MemberLimit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineLobby.SetLobbyMemberLimit");

	UOnlineLobby_SetLobbyMemberLimit_Params params;
	params.MemberLimit = MemberLimit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OnlineLobby.SetLobbyData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UOnlineLobby::SetLobbyData(const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineLobby.SetLobbyData");

	UOnlineLobby_SetLobbyData_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OnlineLobby.SetFriendsOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UOnlineLobby::SetFriendsOnly(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineLobby.SetFriendsOnly");

	UOnlineLobby_SetFriendsOnly_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OnlineLobby.OnEncodedVoiceData
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<unsigned char>          EncodedVoiceData               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UOnlineLobby::OnEncodedVoiceData(TArray<unsigned char> EncodedVoiceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineLobby.OnEncodedVoiceData");

	UOnlineLobby_OnEncodedVoiceData_Params params;
	params.EncodedVoiceData = EncodedVoiceData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OnlineLobby.OnAvatarUpdated
// (Final, Native, Private)
// Parameters:
// struct FString                 ProductId                      (Parm, ZeroConstructor)
// struct FString                 PlatformId                     (Parm, ZeroConstructor)
// class UTexture2D*              AvatarTexture                  (Parm, ZeroConstructor, IsPlainOldData)

void UOnlineLobby::OnAvatarUpdated(const struct FString& ProductId, const struct FString& PlatformId, class UTexture2D* AvatarTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineLobby.OnAvatarUpdated");

	UOnlineLobby_OnAvatarUpdated_Params params;
	params.ProductId = ProductId;
	params.PlatformId = PlatformId;
	params.AvatarTexture = AvatarTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OnlineLobby.KickAndBan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            MemberIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UOnlineLobby::KickAndBan(int MemberIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineLobby.KickAndBan");

	UOnlineLobby_KickAndBan_Params params;
	params.MemberIndex = MemberIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OnlineLobby.Kick
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            MemberIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UOnlineLobby::Kick(int MemberIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineLobby.Kick");

	UOnlineLobby_Kick_Params params;
	params.MemberIndex = MemberIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OnlineLobby.IsVoiceChatEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOnlineLobby::IsVoiceChatEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineLobby.IsVoiceChatEnabled");

	UOnlineLobby_IsVoiceChatEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.OnlineLobby.IsMemberTalking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOnlineLobby::IsMemberTalking(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineLobby.IsMemberTalking");

	UOnlineLobby_IsMemberTalking_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.OnlineLobby.IsLocalUserOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOnlineLobby::IsLocalUserOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineLobby.IsLocalUserOwner");

	UOnlineLobby_IsLocalUserOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.OnlineLobby.IsFriendsOnly
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOnlineLobby::IsFriendsOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineLobby.IsFriendsOnly");

	UOnlineLobby_IsFriendsOnly_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.OnlineLobby.InviteFriends
// (Final, Native, Public, BlueprintCallable)

void UOnlineLobby::InviteFriends()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineLobby.InviteFriends");

	UOnlineLobby_InviteFriends_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OnlineLobby.GetNumLobbyMembers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UOnlineLobby::GetNumLobbyMembers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineLobby.GetNumLobbyMembers");

	UOnlineLobby_GetNumLobbyMembers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.OnlineLobby.GetMemberData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UOnlineLobby::GetMemberData(int Index, const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineLobby.GetMemberData");

	UOnlineLobby_GetMemberData_Params params;
	params.Index = Index;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.OnlineLobby.GetLobbyMemberLimit
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UOnlineLobby::GetLobbyMemberLimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineLobby.GetLobbyMemberLimit");

	UOnlineLobby_GetLobbyMemberLimit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.OnlineLobby.GetLobbyId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UOnlineLobby::GetLobbyId()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineLobby.GetLobbyId");

	UOnlineLobby_GetLobbyId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.OnlineLobby.GetLobbyData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UOnlineLobby::GetLobbyData(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineLobby.GetLobbyData");

	UOnlineLobby_GetLobbyData_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.OnlineManager.OnServerConnectFailure
// (Final, Native, Protected)
// Parameters:
// EConnectorFailureReason        FailureReason                  (Parm, ZeroConstructor, IsPlainOldData)

void UOnlineManager::OnServerConnectFailure(EConnectorFailureReason FailureReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineManager.OnServerConnectFailure");

	UOnlineManager_OnServerConnectFailure_Params params;
	params.FailureReason = FailureReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OnlineManager.OnLoginStatusChanged
// (Final, Native, Protected)
// Parameters:
// bool                           bLoggedIn                      (Parm, ZeroConstructor, IsPlainOldData)

void UOnlineManager::OnLoginStatusChanged(bool bLoggedIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineManager.OnLoginStatusChanged");

	UOnlineManager_OnLoginStatusChanged_Params params;
	params.bLoggedIn = bLoggedIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OnlineManager.OnErrorEvent
// (Final, Native, Protected, HasOutParms)
// Parameters:
// EOnlineError                   Error                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ErrorMessage                   (ConstParm, Parm, OutParm, ReferenceParm)

void UOnlineManager::OnErrorEvent(EOnlineError Error, const struct FText& ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineManager.OnErrorEvent");

	UOnlineManager_OnErrorEvent_Params params;
	params.Error = Error;
	params.ErrorMessage = ErrorMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OnlineManager.LobbySearch
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLobbySearchOptions     SearchOptions                  (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOnlineManager::LobbySearch(const struct FLobbySearchOptions& SearchOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineManager.LobbySearch");

	UOnlineManager_LobbySearch_Params params;
	params.SearchOptions = SearchOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.OnlineManager.LeaveLobby
// (Final, Native, Public, BlueprintCallable)

void UOnlineManager::LeaveLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineManager.LeaveLobby");

	UOnlineManager_LeaveLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OnlineManager.JoinLobby
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 LobbyId                        (Parm, ZeroConstructor)

void UOnlineManager::JoinLobby(const struct FString& LobbyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineManager.JoinLobby");

	UOnlineManager_JoinLobby_Params params;
	params.LobbyId = LobbyId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OnlineManager.IsSearchingForLobbies
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOnlineManager::IsSearchingForLobbies()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineManager.IsSearchingForLobbies");

	UOnlineManager_IsSearchingForLobbies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.OnlineManager.GetLobbyInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UOnlineLobby*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOnlineLobby* UOnlineManager::GetLobbyInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineManager.GetLobbyInstance");

	UOnlineManager_GetLobbyInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.OnlineManager.FindLobbyById
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 LobbyId                        (Parm, ZeroConstructor)

void UOnlineManager::FindLobbyById(const struct FString& LobbyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineManager.FindLobbyById");

	UOnlineManager_FindLobbyById_Params params;
	params.LobbyId = LobbyId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OnlineManager.CreateLobby
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            LobbyMemberLimit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPublic                        (Parm, ZeroConstructor, IsPlainOldData)

void UOnlineManager::CreateLobby(int LobbyMemberLimit, bool bPublic)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineManager.CreateLobby");

	UOnlineManager_CreateLobby_Params params;
	params.LobbyMemberLimit = LobbyMemberLimit;
	params.bPublic = bPublic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OnlinePlatform.GetAvatarByPlayerState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UOnlinePlatform::GetAvatarByPlayerState(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlinePlatform.GetAvatarByPlayerState");

	UOnlinePlatform_GetAvatarByPlayerState_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.OnlinePlatform.GetAvatar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ProductId                      (Parm, ZeroConstructor)
// bool                           bFailOver                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UOnlinePlatform::GetAvatar(const struct FString& ProductId, bool bFailOver)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlinePlatform.GetAvatar");

	UOnlinePlatform_GetAvatar_Params params;
	params.ProductId = ProductId;
	params.bFailOver = bFailOver;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.OnlinePlatformOculus.OnFriendsUpdated
// (Final, Native, Protected)

void UOnlinePlatformOculus::OnFriendsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlinePlatformOculus.OnFriendsUpdated");

	UOnlinePlatformOculus_OnFriendsUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OnlinePlatformOculus.OnDeepLinkMessage
// (Final, Native, Protected)
// Parameters:
// struct FString                 ApiName                        (Parm, ZeroConstructor)
// struct FString                 Message                        (Parm, ZeroConstructor)

void UOnlinePlatformOculus::OnDeepLinkMessage(const struct FString& ApiName, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlinePlatformOculus.OnDeepLinkMessage");

	UOnlinePlatformOculus_OnDeepLinkMessage_Params params;
	params.ApiName = ApiName;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OnlinePlatformSteam.OnSteamRichPresenceUpdated
// (Final, Native, Protected)

void UOnlinePlatformSteam::OnSteamRichPresenceUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlinePlatformSteam.OnSteamRichPresenceUpdated");

	UOnlinePlatformSteam_OnSteamRichPresenceUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OnlineStatics.GetOnlineStats
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UOnlineStats*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOnlineStats* UOnlineStatics::STATIC_GetOnlineStats(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineStatics.GetOnlineStats");

	UOnlineStatics_GetOnlineStats_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.OnlineStatics.GetOnlinePlatform
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UOnlinePlatform*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOnlinePlatform* UOnlineStatics::STATIC_GetOnlinePlatform(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineStatics.GetOnlinePlatform");

	UOnlineStatics_GetOnlinePlatform_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.OnlineStatics.GetOnlineManager
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UOnlineManager*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOnlineManager* UOnlineStatics::STATIC_GetOnlineManager(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineStatics.GetOnlineManager");

	UOnlineStatics_GetOnlineManager_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.OnlineStatics.GetOnlineLeaderboards
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UOnlineLeaderboards*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOnlineLeaderboards* UOnlineStatics::STATIC_GetOnlineLeaderboards(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineStatics.GetOnlineLeaderboards");

	UOnlineStatics_GetOnlineLeaderboards_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.OnlineStatics.GetLocalUserIdAsString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UOnlineStatics::STATIC_GetLocalUserIdAsString(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineStatics.GetLocalUserIdAsString");

	UOnlineStatics_GetLocalUserIdAsString_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.OnlineStatics.GetLocalDisplayName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UOnlineStatics::STATIC_GetLocalDisplayName(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineStatics.GetLocalDisplayName");

	UOnlineStatics_GetLocalDisplayName_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.OnlineStats.QueryStatsServer
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ProductUserId                  (Parm, ZeroConstructor)
// struct FString                 StatName                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOnlineStats::QueryStatsServer(const struct FString& ProductUserId, const struct FString& StatName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineStats.QueryStatsServer");

	UOnlineStats_QueryStatsServer_Params params;
	params.ProductUserId = ProductUserId;
	params.StatName = StatName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.OnlineStats.QueryStatsLocal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 StatName                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOnlineStats::QueryStatsLocal(const struct FString& StatName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineStats.QueryStatsLocal");

	UOnlineStats_QueryStatsLocal_Params params;
	params.StatName = StatName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.OnlineStats.IngestStatsServer
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ProductUserIdString            (Parm, ZeroConstructor)
// struct FString                 StatName                       (Parm, ZeroConstructor)
// int                            StatAmount                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOnlineStats::IngestStatsServer(const struct FString& ProductUserIdString, const struct FString& StatName, int StatAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineStats.IngestStatsServer");

	UOnlineStats_IngestStatsServer_Params params;
	params.ProductUserIdString = ProductUserIdString;
	params.StatName = StatName;
	params.StatAmount = StatAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.OnlineStats.IngestStatsLocal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 StatName                       (Parm, ZeroConstructor)
// int                            StatAmount                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOnlineStats::IngestStatsLocal(const struct FString& StatName, int StatAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OnlineStats.IngestStatsLocal");

	UOnlineStats_IngestStatsLocal_Params params;
	params.StatName = StatName;
	params.StatAmount = StatAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.OutOfBoundsComponent.SetGuideToLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 GuideLocation                  (Parm, ZeroConstructor, IsPlainOldData)

void UOutOfBoundsComponent::SetGuideToLocation(const struct FVector& GuideLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OutOfBoundsComponent.SetGuideToLocation");

	UOutOfBoundsComponent_SetGuideToLocation_Params params;
	params.GuideLocation = GuideLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OutOfBoundsComponent.RecalculateGuide
// (Final, Native, Public, BlueprintCallable)

void UOutOfBoundsComponent::RecalculateGuide()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OutOfBoundsComponent.RecalculateGuide");

	UOutOfBoundsComponent_RecalculateGuide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OutOfBoundsComponent.PlayDamageSound
// (Native, Event, Public, BlueprintEvent)

void UOutOfBoundsComponent::PlayDamageSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OutOfBoundsComponent.PlayDamageSound");

	UOutOfBoundsComponent_PlayDamageSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OutOfBoundsComponent.OwnerKilled
// (Final, Native, Public)
// Parameters:
// class AActor*                  Killed                         (Parm, ZeroConstructor, IsPlainOldData)

void UOutOfBoundsComponent::OwnerKilled(class AActor* Killed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OutOfBoundsComponent.OwnerKilled");

	UOutOfBoundsComponent_OwnerKilled_Params params;
	params.Killed = Killed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OutOfBoundsComponent.OutOfBounds_Server
// (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 EscapeLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// class APavlov_OutOfBoundsVolume* OOBVolume                      (Parm, ZeroConstructor, IsPlainOldData)

void UOutOfBoundsComponent::OutOfBounds_Server(const struct FVector& EscapeLocation, class APavlov_OutOfBoundsVolume* OOBVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OutOfBoundsComponent.OutOfBounds_Server");

	UOutOfBoundsComponent_OutOfBounds_Server_Params params;
	params.EscapeLocation = EscapeLocation;
	params.OOBVolume = OOBVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OutOfBoundsComponent.OnPawnDamaged_Client
// (Net, NetReliable, Native, Event, Public, NetClient)

void UOutOfBoundsComponent::OnPawnDamaged_Client()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OutOfBoundsComponent.OnPawnDamaged_Client");

	UOutOfBoundsComponent_OnPawnDamaged_Client_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OutOfBoundsComponent.OnOutOfBounds
// (Native, Event, Public, BlueprintEvent)

void UOutOfBoundsComponent::OnOutOfBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OutOfBoundsComponent.OnOutOfBounds");

	UOutOfBoundsComponent_OnOutOfBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OutOfBoundsComponent.InBounds
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void UOutOfBoundsComponent::InBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OutOfBoundsComponent.InBounds");

	UOutOfBoundsComponent_InBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OutOfBoundsComponent.DamageTick
// (Final, Native, Public)

void UOutOfBoundsComponent::DamageTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OutOfBoundsComponent.DamageTick");

	UOutOfBoundsComponent_DamageTick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.OutOfBoundsComponent.AddGuideMesh
// (Final, Native, Public, BlueprintCallable)

void UOutOfBoundsComponent::AddGuideMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.OutOfBoundsComponent.AddGuideMesh");

	UOutOfBoundsComponent_AddGuideMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Painkillers.SetPainkillerDetails
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            PillAmount                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          HealAmountPerPill              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APainkillers::SetPainkillerDetails(int PillAmount, float HealAmountPerPill)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Painkillers.SetPainkillerDetails");

	APainkillers_SetPainkillerDetails_Params params;
	params.PillAmount = PillAmount;
	params.HealAmountPerPill = HealAmountPerPill;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Painkillers.GetNumOfPills
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APainkillers::GetNumOfPills()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Painkillers.GetNumOfPills");

	APainkillers_GetNumOfPills_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovAIController.SetTargetPawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovPawn*             TargetPawn                     (Parm, ZeroConstructor, IsPlainOldData)

void APavlovAIController::SetTargetPawn(class APavlovPawn* TargetPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovAIController.SetTargetPawn");

	APavlovAIController_SetTargetPawn_Params params;
	params.TargetPawn = TargetPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovAIController.OnPawnCollisionBeginOverlap
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APavlovAIController::OnPawnCollisionBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovAIController.OnPawnCollisionBeginOverlap");

	APavlovAIController_OnPawnCollisionBeginOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovAIController.IsSuppressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovAIController::IsSuppressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovAIController.IsSuppressed");

	APavlovAIController_IsSuppressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovAIController.GetTargetPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APavlovPawn*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APavlovPawn* APavlovAIController::GetTargetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovAIController.GetTargetPawn");

	APavlovAIController_GetTargetPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovAvatarAnimInstance.GetFingerBlend
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bRight                         (Parm, ZeroConstructor, IsPlainOldData)
// EFinger                        Finger                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPavlovAvatarAnimInstance::GetFingerBlend(bool bRight, EFinger Finger)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovAvatarAnimInstance.GetFingerBlend");

	UPavlovAvatarAnimInstance_GetFingerBlend_Params params;
	params.bRight = bRight;
	params.Finger = Finger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovCustomGameMode.OnCustomRconCommand
// (Final, Native, Protected)
// Parameters:
// struct FString                 Command                        (Parm, ZeroConstructor)

void APavlovCustomGameMode::OnCustomRconCommand(const struct FString& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovCustomGameMode.OnCustomRconCommand");

	APavlovCustomGameMode_OnCustomRconCommand_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.UpdateServerList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Map                            (Parm, ZeroConstructor)
// struct FString                 GameMode                       (Parm, ZeroConstructor)
// bool                           bFriendsOnly                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrivateOnly                   (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameInstance::UpdateServerList(const struct FString& Map, const struct FString& GameMode, bool bFriendsOnly, bool bPrivateOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.UpdateServerList");

	UPavlovGameInstance_UpdateServerList_Params params;
	params.Map = Map;
	params.GameMode = GameMode;
	params.bFriendsOnly = bFriendsOnly;
	params.bPrivateOnly = bPrivateOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.UpdateNextSplashScreen
// (Final, Native, Protected)
// Parameters:
// bool                           bInitialSplash                 (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameInstance::UpdateNextSplashScreen(bool bInitialSplash)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.UpdateNextSplashScreen");

	UPavlovGameInstance_UpdateNextSplashScreen_Params params;
	params.bInitialSplash = bInitialSplash;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.ToggleMenu
// (Final, Exec, Native, Public)

void UPavlovGameInstance::ToggleMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.ToggleMenu");

	UPavlovGameInstance_ToggleMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.TestServerConnect
// (Final, Exec, Native, Protected)
// Parameters:
// struct FString                 ConnectURL                     (Parm, ZeroConstructor)
// struct FString                 MapId                          (Parm, ZeroConstructor)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameInstance::TestServerConnect(const struct FString& ConnectURL, const struct FString& MapId, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.TestServerConnect");

	UPavlovGameInstance_TestServerConnect_Params params;
	params.ConnectURL = ConnectURL;
	params.MapId = MapId;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.ShowPavlovSplash
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFade                          (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameInstance::ShowPavlovSplash(bool bVisible, bool bFade)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.ShowPavlovSplash");

	UPavlovGameInstance_ShowPavlovSplash_Params params;
	params.bVisible = bVisible;
	params.bFade = bFade;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.SetMutedByProductId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameInstance::SetMutedByProductId(const struct FString& ID, bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.SetMutedByProductId");

	UPavlovGameInstance_SetMutedByProductId_Params params;
	params.ID = ID;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.SetMuted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovPlayerState*      PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameInstance::SetMuted(class APavlovPlayerState* PlayerState, bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.SetMuted");

	UPavlovGameInstance_SetMuted_Params params;
	params.PlayerState = PlayerState;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.SetMixingChannelVolume
// (Final, Exec, Native, Public)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameInstance::SetMixingChannelVolume(const struct FName& Name, float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.SetMixingChannelVolume");

	UPavlovGameInstance_SetMixingChannelVolume_Params params;
	params.Name = Name;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.SetMatchmakingState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EMatchmakingState              NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameInstance::SetMatchmakingState(EMatchmakingState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.SetMatchmakingState");

	UPavlovGameInstance_SetMatchmakingState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.SetItemRotation
// (Final, Exec, Native, Public)
// Parameters:
// float                          Roll                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameInstance::SetItemRotation(float Roll, float Pitch, float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.SetItemRotation");

	UPavlovGameInstance_SetItemRotation_Params params;
	params.Roll = Roll;
	params.Pitch = Pitch;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.ServerStartStatusHelper
// (Final, Native, Public)

void UPavlovGameInstance::ServerStartStatusHelper()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.ServerStartStatusHelper");

	UPavlovGameInstance_ServerStartStatusHelper_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.ServerConnectFailed
// (Final, Native, Public)
// Parameters:
// EConnectorFailureReason        FailureReason                  (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameInstance::ServerConnectFailed(EConnectorFailureReason FailureReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.ServerConnectFailed");

	UPavlovGameInstance_ServerConnectFailed_Params params;
	params.FailureReason = FailureReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.ServerConnectComplete
// (Final, Native, Public)

void UPavlovGameInstance::ServerConnectComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.ServerConnectComplete");

	UPavlovGameInstance_ServerConnectComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.ServerConnectByURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)

void UPavlovGameInstance::ServerConnectByURL(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.ServerConnectByURL");

	UPavlovGameInstance_ServerConnectByURL_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.ServerConnectByIp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 IpString                       (Parm, ZeroConstructor)
// int                            Port                           (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameInstance::ServerConnectByIp(const struct FString& IpString, int Port)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.ServerConnectByIp");

	UPavlovGameInstance_ServerConnectByIp_Params params;
	params.IpString = IpString;
	params.Port = Port;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.ServerConnect
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FServerConnectParams    Params                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameInstance::ServerConnect(const struct FServerConnectParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.ServerConnect");

	UPavlovGameInstance_ServerConnect_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.RetrieveMasterServerSessionId
// (Final, Native, Public)

void UPavlovGameInstance::RetrieveMasterServerSessionId()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.RetrieveMasterServerSessionId");

	UPavlovGameInstance_RetrieveMasterServerSessionId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.ResumeShaderPreCompilation
// (Final, Native, Public, BlueprintCallable)

void UPavlovGameInstance::ResumeShaderPreCompilation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.ResumeShaderPreCompilation");

	UPavlovGameInstance_ResumeShaderPreCompilation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.ResetTutorial
// (Final, Exec, Native, Public)

void UPavlovGameInstance::ResetTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.ResetTutorial");

	UPavlovGameInstance_ResetTutorial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.ResetPhononScene
// (Final, Exec, Native, Public)

void UPavlovGameInstance::ResetPhononScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.ResetPhononScene");

	UPavlovGameInstance_ResetPhononScene_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.ReportServerState
// (Final, Native, Protected)

void UPavlovGameInstance::ReportServerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.ReportServerState");

	UPavlovGameInstance_ReportServerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.RemoveMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 UniqueID                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameInstance::RemoveMap(const struct FString& UniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.RemoveMap");

	UPavlovGameInstance_RemoveMap_Params params;
	params.UniqueID = UniqueID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.RemoveFromRefBucket
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameInstance::RemoveFromRefBucket(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.RemoveFromRefBucket");

	UPavlovGameInstance_RemoveFromRefBucket_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.QuickMatch
// (Final, Native, Public, BlueprintCallable)

void UPavlovGameInstance::QuickMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.QuickMatch");

	UPavlovGameInstance_QuickMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.QueryForGameSession
// (Final, Native, Public)

void UPavlovGameInstance::QueryForGameSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.QueryForGameSession");

	UPavlovGameInstance_QueryForGameSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.OpenMap_Implementation
// (Final, Native, Public)

void UPavlovGameInstance::OpenMap_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.OpenMap_Implementation");

	UPavlovGameInstance_OpenMap_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.OpenMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Map                            (Parm, ZeroConstructor)
// struct FString                 Options                        (Parm, ZeroConstructor)

void UPavlovGameInstance::OpenMap(const struct FString& Map, const struct FString& Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.OpenMap");

	UPavlovGameInstance_OpenMap_Params params;
	params.Map = Map;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.OnWorkshopSpecificQuery
// (Final, Native, Protected)

void UPavlovGameInstance::OnWorkshopSpecificQuery()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.OnWorkshopSpecificQuery");

	UPavlovGameInstance_OnWorkshopSpecificQuery_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.OnSteamServersConnected
// (Final, Native, Public)

void UPavlovGameInstance::OnSteamServersConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.OnSteamServersConnected");

	UPavlovGameInstance_OnSteamServersConnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.OnSteamLobbyListUpdated
// (Final, Native, Public)

void UPavlovGameInstance::OnSteamLobbyListUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.OnSteamLobbyListUpdated");

	UPavlovGameInstance_OnSteamLobbyListUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.OnSplashScreenLoaded
// (Final, Native, Protected, HasDefaults)
// Parameters:
// struct FDateTime               StartTimestamp                 (Parm, ZeroConstructor)

void UPavlovGameInstance::OnSplashScreenLoaded(const struct FDateTime& StartTimestamp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.OnSplashScreenLoaded");

	UPavlovGameInstance_OnSplashScreenLoaded_Params params;
	params.StartTimestamp = StartTimestamp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.OnServerMapDownloaded
// (Final, Native, Protected)
// Parameters:
// bool                           bSucceed                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ID                             (Parm, ZeroConstructor)

void UPavlovGameInstance::OnServerMapDownloaded(bool bSucceed, const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.OnServerMapDownloaded");

	UPavlovGameInstance_OnServerMapDownloaded_Params params;
	params.bSucceed = bSucceed;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.OnNetworkFailure
// (Final, Native, Public)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// class UNetDriver*              NetDriver                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetworkFailure>   FailureType                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ErrorString                    (Parm, ZeroConstructor)

void UPavlovGameInstance::OnNetworkFailure(class UWorld* World, class UNetDriver* NetDriver, TEnumAsByte<ENetworkFailure> FailureType, const struct FString& ErrorString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.OnNetworkFailure");

	UPavlovGameInstance_OnNetworkFailure_Params params;
	params.World = World;
	params.NetDriver = NetDriver;
	params.FailureType = FailureType;
	params.ErrorString = ErrorString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.OnLoginStatusChanged
// (Final, Native, Public)
// Parameters:
// bool                           bLoggedIn                      (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameInstance::OnLoginStatusChanged(bool bLoggedIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.OnLoginStatusChanged");

	UPavlovGameInstance_OnLoginStatusChanged_Params params;
	params.bLoggedIn = bLoggedIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.OnLobbyLeave
// (Final, Native, Public)

void UPavlovGameInstance::OnLobbyLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.OnLobbyLeave");

	UPavlovGameInstance_OnLobbyLeave_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.OnLobbyEnter
// (Final, Native, Public)
// Parameters:
// bool                           bFailed                        (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameInstance::OnLobbyEnter(bool bFailed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.OnLobbyEnter");

	UPavlovGameInstance_OnLobbyEnter_Params params;
	params.bFailed = bFailed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.OnClientMapDownloaded
// (Final, Native, Public)
// Parameters:
// bool                           bSucceed                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ID                             (Parm, ZeroConstructor)

void UPavlovGameInstance::OnClientMapDownloaded(bool bSucceed, const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.OnClientMapDownloaded");

	UPavlovGameInstance_OnClientMapDownloaded_Params params;
	params.bSucceed = bSucceed;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.OnAuthSessionTicketResponse
// (Final, Native, Public)
// Parameters:
// bool                           bSucceed                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 HexAuthTicket                  (Parm, ZeroConstructor)

void UPavlovGameInstance::OnAuthSessionTicketResponse(bool bSucceed, const struct FString& HexAuthTicket)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.OnAuthSessionTicketResponse");

	UPavlovGameInstance_OnAuthSessionTicketResponse_Params params;
	params.bSucceed = bSucceed;
	params.HexAuthTicket = HexAuthTicket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.OnAndroidPermisionsGranted
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<struct FString>         Permissions                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<bool>                   GrantResults                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPavlovGameInstance::OnAndroidPermisionsGranted(TArray<struct FString> Permissions, TArray<bool> GrantResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.OnAndroidPermisionsGranted");

	UPavlovGameInstance_OnAndroidPermisionsGranted_Params params;
	params.Permissions = Permissions;
	params.GrantResults = GrantResults;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.LogoutTest
// (Final, Exec, Native, Public)

void UPavlovGameInstance::LogoutTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.LogoutTest");

	UPavlovGameInstance_LogoutTest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.JoinServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 LobbyId                        (Parm, ZeroConstructor)

void UPavlovGameInstance::JoinServer(const struct FString& LobbyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.JoinServer");

	UPavlovGameInstance_JoinServer_Params params;
	params.LobbyId = LobbyId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.IsMutedByProductId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameInstance::IsMutedByProductId(const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.IsMutedByProductId");

	UPavlovGameInstance_IsMutedByProductId_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.IsMuted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APavlovPlayerState*      PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameInstance::IsMuted(class APavlovPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.IsMuted");

	UPavlovGameInstance_IsMuted_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.InitClientProxies
// (Final, Native, Public)

void UPavlovGameInstance::InitClientProxies()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.InitClientProxies");

	UPavlovGameInstance_InitClientProxies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.HideSplashScreen
// (Final, Native, Protected)

void UPavlovGameInstance::HideSplashScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.HideSplashScreen");

	UPavlovGameInstance_HideSplashScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.HasGameSession
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameInstance::HasGameSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.HasGameSession");

	UPavlovGameInstance_HasGameSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.GetVoiceSource
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UVoiceSource*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UVoiceSource* UPavlovGameInstance::GetVoiceSource()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.GetVoiceSource");

	UPavlovGameInstance_GetVoiceSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.GetUIManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUIManager*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUIManager* UPavlovGameInstance::GetUIManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.GetUIManager");

	UPavlovGameInstance_GetUIManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.GetTutorial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTutorial*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTutorial* UPavlovGameInstance::GetTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.GetTutorial");

	UPavlovGameInstance_GetTutorial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.GetSoundMixingSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USoundMixingSettings*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundMixingSettings* UPavlovGameInstance::GetSoundMixingSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.GetSoundMixingSettings");

	UPavlovGameInstance_GetSoundMixingSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.GetServerBrowserV2
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UServerBrowserV2*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UServerBrowserV2* UPavlovGameInstance::GetServerBrowserV2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.GetServerBrowserV2");

	UPavlovGameInstance_GetServerBrowserV2_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.GetServerBrowser
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UServerBrowser*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UServerBrowser* UPavlovGameInstance::GetServerBrowser()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.GetServerBrowser");

	UPavlovGameInstance_GetServerBrowser_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.GetOnlineRegion
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EOnlineRegion                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EOnlineRegion UPavlovGameInstance::GetOnlineRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.GetOnlineRegion");

	UPavlovGameInstance_GetOnlineRegion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.GetOnlineManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UOnlineManager*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOnlineManager* UPavlovGameInstance::GetOnlineManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.GetOnlineManager");

	UPavlovGameInstance_GetOnlineManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.GetOculusScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPavlovGameInstance::GetOculusScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.GetOculusScale");

	UPavlovGameInstance_GetOculusScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.GetMatchmaking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMatchmaking*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMatchmaking* UPavlovGameInstance::GetMatchmaking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.GetMatchmaking");

	UPavlovGameInstance_GetMatchmaking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.GetMapVersion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 UniqueID                       (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPavlovGameInstance::GetMapVersion(const struct FString& UniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.GetMapVersion");

	UPavlovGameInstance_GetMapVersion_Params params;
	params.UniqueID = UniqueID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.GetMapListAdvanced
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Compatibility                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFavoriteOnly                  (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameInstance::GetMapListAdvanced(int Compatibility, bool bFavoriteOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.GetMapListAdvanced");

	UPavlovGameInstance_GetMapListAdvanced_Params params;
	params.Compatibility = Compatibility;
	params.bFavoriteOnly = bFavoriteOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.GetMapList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Compatibility                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPavlov_Map*>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UPavlov_Map*> UPavlovGameInstance::GetMapList(int Compatibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.GetMapList");

	UPavlovGameInstance_GetMapList_Params params;
	params.Compatibility = Compatibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.GetMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 UniqueID                       (Parm, ZeroConstructor)
// class UPavlov_Map*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPavlov_Map* UPavlovGameInstance::GetMap(const struct FString& UniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.GetMap");

	UPavlovGameInstance_GetMap_Params params;
	params.UniqueID = UniqueID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.GetCurrentSplashScreen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture* UPavlovGameInstance::GetCurrentSplashScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.GetCurrentSplashScreen");

	UPavlovGameInstance_GetCurrentSplashScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.GetBuildLabel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPavlovGameInstance::GetBuildLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.GetBuildLabel");

	UPavlovGameInstance_GetBuildLabel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.DumpLobbyData
// (Final, Exec, Native, Public)

void UPavlovGameInstance::DumpLobbyData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.DumpLobbyData");

	UPavlovGameInstance_DumpLobbyData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.DisplayNetworkFailureMessage
// (Final, Native, Public)

void UPavlovGameInstance::DisplayNetworkFailureMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.DisplayNetworkFailureMessage");

	UPavlovGameInstance_DisplayNetworkFailureMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.DisplayMessageImpl
// (Final, Native, Public)

void UPavlovGameInstance::DisplayMessageImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.DisplayMessageImpl");

	UPavlovGameInstance_DisplayMessageImpl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.DisplayMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)
// bool                           bDeferredDelay                 (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameInstance::DisplayMessage(const struct FString& Message, bool bDeferredDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.DisplayMessage");

	UPavlovGameInstance_DisplayMessage_Params params;
	params.Message = Message;
	params.bDeferredDelay = bDeferredDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.CreateLobby
// (Final, Native, Public, BlueprintCallable)

void UPavlovGameInstance::CreateLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.CreateLobby");

	UPavlovGameInstance_CreateLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.CreateGameSession
// (Final, Native, Public, BlueprintCallable)

void UPavlovGameInstance::CreateGameSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.CreateGameSession");

	UPavlovGameInstance_CreateGameSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.CreateCoopLobby
// (Final, Native, Public, BlueprintCallable)

void UPavlovGameInstance::CreateCoopLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.CreateCoopLobby");

	UPavlovGameInstance_CreateCoopLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.ClientStartStatusHelper
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ListenPort                     (Parm, ZeroConstructor, IsPlainOldData)
// class UServerStatusHelper*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UServerStatusHelper* UPavlovGameInstance::ClientStartStatusHelper(int ListenPort)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.ClientStartStatusHelper");

	UPavlovGameInstance_ClientStartStatusHelper_Params params;
	params.ListenPort = ListenPort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.CheckPlacementStatus
// (Final, Native, Public)

void UPavlovGameInstance::CheckPlacementStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.CheckPlacementStatus");

	UPavlovGameInstance_CheckPlacementStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.CheckBuildVersionStatus
// (Final, Native, Public, BlueprintCallable)

void UPavlovGameInstance::CheckBuildVersionStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.CheckBuildVersionStatus");

	UPavlovGameInstance_CheckBuildVersionStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.CancelServerFind
// (Final, Native, Public, BlueprintCallable)

void UPavlovGameInstance::CancelServerFind()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.CancelServerFind");

	UPavlovGameInstance_CancelServerFind_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.CancelServerConnect
// (Final, Native, Public, BlueprintCallable)

void UPavlovGameInstance::CancelServerConnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.CancelServerConnect");

	UPavlovGameInstance_CancelServerConnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.CancelQuickmatch
// (Final, Native, Public, BlueprintCallable)

void UPavlovGameInstance::CancelQuickmatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.CancelQuickmatch");

	UPavlovGameInstance_CancelQuickmatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.AsyncLoadSplashScreens
// (Final, Native, Protected)

void UPavlovGameInstance::AsyncLoadSplashScreens()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.AsyncLoadSplashScreens");

	UPavlovGameInstance_AsyncLoadSplashScreens_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.ApplyOculusBindings
// (Final, Exec, Native, Public)

void UPavlovGameInstance::ApplyOculusBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.ApplyOculusBindings");

	UPavlovGameInstance_ApplyOculusBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.AddToRefBucket
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameInstance::AddToRefBucket(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.AddToRefBucket");

	UPavlovGameInstance_AddToRefBucket_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameState.UnpauseMatchTime
// (Final, Native, Public, BlueprintCallable)

void APavlovGameState::UnpauseMatchTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.UnpauseMatchTime");

	APavlovGameState_UnpauseMatchTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameState.SetGlobalInfo
// (Final, Native, Public)
// Parameters:
// class UPavlov_GlobalInfo*      GI                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APavlovGameState::SetGlobalInfo(class UPavlov_GlobalInfo* GI)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.SetGlobalInfo");

	APavlovGameState_SetGlobalInfo_Params params;
	params.GI = GI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameState.SetAttackingTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Team0                          (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameState::SetAttackingTeam(bool Team0)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.SetAttackingTeam");

	APavlovGameState_SetAttackingTeam_Params params;
	params.Team0 = Team0;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameState.ResetMatchTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bPause                         (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameState::ResetMatchTime(bool bPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.ResetMatchTime");

	APavlovGameState_ResetMatchTime_Params params;
	params.bPause = bPause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameState.ResetBuyRestrictions
// (Final, Native, Public, BlueprintCallable)

void APavlovGameState::ResetBuyRestrictions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.ResetBuyRestrictions");

	APavlovGameState_ResetBuyRestrictions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameState.PreloadSkin
// (Final, Native, Public)
// Parameters:
// struct FName                   ItemName                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkinFamilyId                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovGameState::PreloadSkin(const struct FName& ItemName, int SkinFamilyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.PreloadSkin");

	APavlovGameState_PreloadSkin_Params params;
	params.ItemName = ItemName;
	params.SkinFamilyId = SkinFamilyId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.PauseMatchTime
// (Final, Native, Public, BlueprintCallable)

void APavlovGameState::PauseMatchTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.PauseMatchTime");

	APavlovGameState_PauseMatchTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameState.OnSkinPreloaded
// (Final, Native, Public)
// Parameters:
// struct FName                   ItemName                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkinFamilyId                   (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameState::OnSkinPreloaded(const struct FName& ItemName, int SkinFamilyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.OnSkinPreloaded");

	APavlovGameState_OnSkinPreloaded_Params params;
	params.ItemName = ItemName;
	params.SkinFamilyId = SkinFamilyId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameState.OnSkinLoaded
// (Final, Native, Public)
// Parameters:
// class AActor*                  Item                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameState::OnSkinLoaded(class AActor* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.OnSkinLoaded");

	APavlovGameState_OnSkinLoaded_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameState.OnRep_GlobalInfo
// (Final, Native, Public)

void APavlovGameState::OnRep_GlobalInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.OnRep_GlobalInfo");

	APavlovGameState_OnRep_GlobalInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameState.OnRep_BalancingCSV
// (Final, Native, Private)

void APavlovGameState::OnRep_BalancingCSV()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.OnRep_BalancingCSV");

	APavlovGameState_OnRep_BalancingCSV_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameState.OnModkitLoadLootMeshAsync
// (Final, Native, Public)
// Parameters:
// struct FAsyncLoadLootMesh      LoadLootMesh                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovGameState::OnModkitLoadLootMeshAsync(const struct FAsyncLoadLootMesh& LoadLootMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.OnModkitLoadLootMeshAsync");

	APavlovGameState_OnModkitLoadLootMeshAsync_Params params;
	params.LoadLootMesh = LoadLootMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction Pavlov.PavlovGameState.OnGetVehicleClassToSpawnWRef__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UClass*                  VehicleClass                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FAsyncVehicleSpawnData  AsyncVehicleSpawnData          (Parm)

void APavlovGameState::OnGetVehicleClassToSpawnWRef__DelegateSignature(class UClass* VehicleClass, const struct FAsyncVehicleSpawnData& AsyncVehicleSpawnData)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Pavlov.PavlovGameState.OnGetVehicleClassToSpawnWRef__DelegateSignature");

	APavlovGameState_OnGetVehicleClassToSpawnWRef__DelegateSignature_Params params;
	params.VehicleClass = VehicleClass;
	params.AsyncVehicleSpawnData = AsyncVehicleSpawnData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Pavlov.PavlovGameState.OnGetVehicleClassToSpawn__DelegateSignature
// (Public, Delegate, HasDefaults)
// Parameters:
// class UClass*                  VehicleClass                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SpawnTransform                 (ConstParm, Parm, IsPlainOldData)
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameState::OnGetVehicleClassToSpawn__DelegateSignature(class UClass* VehicleClass, const struct FTransform& SpawnTransform, int TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Pavlov.PavlovGameState.OnGetVehicleClassToSpawn__DelegateSignature");

	APavlovGameState_OnGetVehicleClassToSpawn__DelegateSignature_Params params;
	params.VehicleClass = VehicleClass;
	params.SpawnTransform = SpawnTransform;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Pavlov.PavlovGameState.OnGetVehicleClass__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UClass*                  VehicleClass                   (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameState::OnGetVehicleClass__DelegateSignature(class UClass* VehicleClass)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Pavlov.PavlovGameState.OnGetVehicleClass__DelegateSignature");

	APavlovGameState_OnGetVehicleClass__DelegateSignature_Params params;
	params.VehicleClass = VehicleClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameState.MulticastOnKillfeedEntry
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// struct FKillfeedEntry          NewEntry                       (ConstParm, Parm, ReferenceParm)

void APavlovGameState::MulticastOnKillfeedEntry(const struct FKillfeedEntry& NewEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.MulticastOnKillfeedEntry");

	APavlovGameState_MulticastOnKillfeedEntry_Params params;
	params.NewEntry = NewEntry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameState.ModkitLootLoaded
// (Final, Native, Public)
// Parameters:
// struct FAsyncLoadLootMesh      LoadLootMesh                   (Parm)

void APavlovGameState::ModkitLootLoaded(const struct FAsyncLoadLootMesh& LoadLootMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.ModkitLootLoaded");

	APavlovGameState_ModkitLootLoaded_Params params;
	params.LoadLootMesh = LoadLootMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameState.LootLoaded
// (Final, Native, Public)
// Parameters:
// struct FScriptDelegate         LoadedDelegate                 (Parm, ZeroConstructor)

void APavlovGameState::LootLoaded(const struct FScriptDelegate& LoadedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.LootLoaded");

	APavlovGameState_LootLoaded_Params params;
	params.LoadedDelegate = LoadedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameState.LoadSkinForItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovPlayerState*      PavPlayerState                 (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ItemClass                      (Parm, ZeroConstructor, IsPlainOldData)
// class AVRItem*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovGameState::LoadSkinForItem(class APavlovPlayerState* PavPlayerState, class UClass* ItemClass, class AVRItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.LoadSkinForItem");

	APavlovGameState_LoadSkinForItem_Params params;
	params.PavPlayerState = PavPlayerState;
	params.ItemClass = ItemClass;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.LoadSkin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovPlayerState*      PavPlayerState                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ItemName                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Item                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovGameState::LoadSkin(class APavlovPlayerState* PavPlayerState, const struct FName& ItemName, class AActor* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.LoadSkin");

	APavlovGameState_LoadSkin_Params params;
	params.PavPlayerState = PavPlayerState;
	params.ItemName = ItemName;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.LoadedVehicleClassToSpawnWRef
// (Final, Native, Public)
// Parameters:
// struct FScriptDelegate         OnVehicleClassToSpawnWRefLoaded (Parm, ZeroConstructor)
// struct FAsyncVehicleSpawnData  AsyncVehicleSpawnData          (Parm)

void APavlovGameState::LoadedVehicleClassToSpawnWRef(const struct FScriptDelegate& OnVehicleClassToSpawnWRefLoaded, const struct FAsyncVehicleSpawnData& AsyncVehicleSpawnData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.LoadedVehicleClassToSpawnWRef");

	APavlovGameState_LoadedVehicleClassToSpawnWRef_Params params;
	params.OnVehicleClassToSpawnWRefLoaded = OnVehicleClassToSpawnWRefLoaded;
	params.AsyncVehicleSpawnData = AsyncVehicleSpawnData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameState.LoadedVehicleClassToSpawn
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FScriptDelegate         OnVehicleClassToSpawnLoaded    (Parm, ZeroConstructor)
// struct FTransform              SpawnTransform                 (ConstParm, Parm, IsPlainOldData)
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameState::LoadedVehicleClassToSpawn(const struct FScriptDelegate& OnVehicleClassToSpawnLoaded, const struct FTransform& SpawnTransform, int TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.LoadedVehicleClassToSpawn");

	APavlovGameState_LoadedVehicleClassToSpawn_Params params;
	params.OnVehicleClassToSpawnLoaded = OnVehicleClassToSpawnLoaded;
	params.SpawnTransform = SpawnTransform;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameState.LoadedVehicleClass
// (Final, Native, Public)
// Parameters:
// struct FScriptDelegate         OnVehicleClassLoaded           (Parm, ZeroConstructor)

void APavlovGameState::LoadedVehicleClass(const struct FScriptDelegate& OnVehicleClassLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.LoadedVehicleClass");

	APavlovGameState_LoadedVehicleClass_Params params;
	params.OnVehicleClassLoaded = OnVehicleClassLoaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameState.LoadBalanceTableAsync
// (Final, Native, Public)

void APavlovGameState::LoadBalanceTableAsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.LoadBalanceTableAsync");

	APavlovGameState_LoadBalanceTableAsync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameState.IsVehicleNameValid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   VehicleName                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovGameState::IsVehicleNameValid(const struct FName& VehicleName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.IsVehicleNameValid");

	APavlovGameState_IsVehicleNameValid_Params params;
	params.VehicleName = VehicleName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.IsTeamAbleToBuy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   EquipmentName                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovGameState::IsTeamAbleToBuy(const struct FName& EquipmentName, int TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.IsTeamAbleToBuy");

	APavlovGameState_IsTeamAbleToBuy_Params params;
	params.EquipmentName = EquipmentName;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.IsSkinPreloaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ItemName                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            SkinFamilyId                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovGameState::IsSkinPreloaded(const struct FName& ItemName, int SkinFamilyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.IsSkinPreloaded");

	APavlovGameState_IsSkinPreloaded_Params params;
	params.ItemName = ItemName;
	params.SkinFamilyId = SkinFamilyId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.InitializeCosmeticTickActors
// (Final, Native, Public)

void APavlovGameState::InitializeCosmeticTickActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.InitializeCosmeticTickActors");

	APavlovGameState_InitializeCosmeticTickActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameState.GetVehicleClassWRef
// (Final, Native, Public)
// Parameters:
// struct FScriptDelegate         OnVehicleClassToSpawnWRefLoaded (Parm, ZeroConstructor)
// struct FAsyncVehicleSpawnData  AsyncVehicleSpawnData          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovGameState::GetVehicleClassWRef(const struct FScriptDelegate& OnVehicleClassToSpawnWRefLoaded, const struct FAsyncVehicleSpawnData& AsyncVehicleSpawnData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetVehicleClassWRef");

	APavlovGameState_GetVehicleClassWRef_Params params;
	params.OnVehicleClassToSpawnWRefLoaded = OnVehicleClassToSpawnWRefLoaded;
	params.AsyncVehicleSpawnData = AsyncVehicleSpawnData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetVehicleClassToSpawnAsync
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   VehicleName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         OnVehicleClassToSpawnLoaded    (Parm, ZeroConstructor)
// struct FTransform              SpawnTransform                 (ConstParm, Parm, IsPlainOldData)
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovGameState::GetVehicleClassToSpawnAsync(const struct FName& VehicleName, const struct FScriptDelegate& OnVehicleClassToSpawnLoaded, const struct FTransform& SpawnTransform, int TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetVehicleClassToSpawnAsync");

	APavlovGameState_GetVehicleClassToSpawnAsync_Params params;
	params.VehicleName = VehicleName;
	params.OnVehicleClassToSpawnLoaded = OnVehicleClassToSpawnLoaded;
	params.SpawnTransform = SpawnTransform;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetVehicleClassByNameAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   VehicleName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         OnVehicleClassLoaded           (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovGameState::GetVehicleClassByNameAsync(const struct FName& VehicleName, const struct FScriptDelegate& OnVehicleClassLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetVehicleClassByNameAsync");

	APavlovGameState_GetVehicleClassByNameAsync_Params params;
	params.VehicleName = VehicleName;
	params.OnVehicleClassLoaded = OnVehicleClassLoaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetVehicleClassByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   VehicleName                    (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* APavlovGameState::GetVehicleClassByName(const struct FName& VehicleName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetVehicleClassByName");

	APavlovGameState_GetVehicleClassByName_Params params;
	params.VehicleName = VehicleName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetTeamScore
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlovGameState::GetTeamScore(int TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetTeamScore");

	APavlovGameState_GetTeamScore_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetTeamArray
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class APavlovPlayerState*> TeamArray                      (Parm, OutParm, ZeroConstructor)
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameState::GetTeamArray(int TeamId, TArray<class APavlovPlayerState*>* TeamArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetTeamArray");

	APavlovGameState_GetTeamArray_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamArray != nullptr)
		*TeamArray = params.TeamArray;
}


// Function Pavlov.PavlovGameState.GetSpawnableEquipmentNames
// (Final, Native, Public)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> APavlovGameState::GetSpawnableEquipmentNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetSpawnableEquipmentNames");

	APavlovGameState_GetSpawnableEquipmentNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetSortedPlayerArray
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class APavlovPlayerState*> SortedPlayerArray              (Parm, OutParm, ZeroConstructor)
// int                            FilterByTeamId                 (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameState::GetSortedPlayerArray(int FilterByTeamId, TArray<class APavlovPlayerState*>* SortedPlayerArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetSortedPlayerArray");

	APavlovGameState_GetSortedPlayerArray_Params params;
	params.FilterByTeamId = FilterByTeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SortedPlayerArray != nullptr)
		*SortedPlayerArray = params.SortedPlayerArray;
}


// Function Pavlov.PavlovGameState.GetPlayerStringId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovPlayerState*      PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString APavlovGameState::GetPlayerStringId(class APavlovPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetPlayerStringId");

	APavlovGameState_GetPlayerStringId_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetPlayerStateByStringId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 StringId                       (Parm, ZeroConstructor)
// class APavlovPlayerState*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APavlovPlayerState* APavlovGameState::GetPlayerStateByStringId(const struct FString& StringId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetPlayerStateByStringId");

	APavlovGameState_GetPlayerStateByStringId_Params params;
	params.StringId = StringId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetPlayerByScore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)
// class APavlovPlayerState*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APavlovPlayerState* APavlovGameState::GetPlayerByScore(int Index, int TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetPlayerByScore");

	APavlovGameState_GetPlayerByScore_Params params;
	params.Index = Index;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetMaxPurchasesPerPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   EquipmentName                  (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char APavlovGameState::GetMaxPurchasesPerPlayer(const struct FName& EquipmentName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetMaxPurchasesPerPlayer");

	APavlovGameState_GetMaxPurchasesPerPlayer_Params params;
	params.EquipmentName = EquipmentName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetMatchResult
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EMatchResult                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMatchResult APavlovGameState::GetMatchResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetMatchResult");

	APavlovGameState_GetMatchResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetLootMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   LootName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         OnLoaded                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovGameState::GetLootMesh(const struct FName& LootName, const struct FScriptDelegate& OnLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetLootMesh");

	APavlovGameState_GetLootMesh_Params params;
	params.LootName = LootName;
	params.OnLoaded = OnLoaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetEquipmentNames
// (Final, Native, Public)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> APavlovGameState::GetEquipmentNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetEquipmentNames");

	APavlovGameState_GetEquipmentNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetEquipmentNameByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName APavlovGameState::GetEquipmentNameByIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetEquipmentNameByIndex");

	APavlovGameState_GetEquipmentNameByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetEquipmentNameByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ItemClass                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName APavlovGameState::GetEquipmentNameByClass(class UClass* ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetEquipmentNameByClass");

	APavlovGameState_GetEquipmentNameByClass_Params params;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetEquipmentMagCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   EquipmentName                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlovGameState::GetEquipmentMagCount(const struct FName& EquipmentName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetEquipmentMagCount");

	APavlovGameState_GetEquipmentMagCount_Params params;
	params.EquipmentName = EquipmentName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetEquipmentKillBonus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   EquipmentName                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlovGameState::GetEquipmentKillBonus(const struct FName& EquipmentName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetEquipmentKillBonus");

	APavlovGameState_GetEquipmentKillBonus_Params params;
	params.EquipmentName = EquipmentName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetEquipmentIndexByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   EquipmentName                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlovGameState::GetEquipmentIndexByName(const struct FName& EquipmentName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetEquipmentIndexByName");

	APavlovGameState_GetEquipmentIndexByName_Params params;
	params.EquipmentName = EquipmentName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetEquipmentDataByClass
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ItemClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FEquipmentData          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEquipmentData APavlovGameState::GetEquipmentDataByClass(class UClass* ItemClass, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetEquipmentDataByClass");

	APavlovGameState_GetEquipmentDataByClass_Params params;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetEquipmentData
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   EquipmentName                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FEquipmentData          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEquipmentData APavlovGameState::GetEquipmentData(const struct FName& EquipmentName, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetEquipmentData");

	APavlovGameState_GetEquipmentData_Params params;
	params.EquipmentName = EquipmentName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetEquipmentCost
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   EquipmentName                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlovGameState::GetEquipmentCost(const struct FName& EquipmentName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetEquipmentCost");

	APavlovGameState_GetEquipmentCost_Params params;
	params.EquipmentName = EquipmentName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetEquipmentClassByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   EquipmentName                  (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* APavlovGameState::GetEquipmentClassByName(const struct FName& EquipmentName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetEquipmentClassByName");

	APavlovGameState_GetEquipmentClassByName_Params params;
	params.EquipmentName = EquipmentName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetAsyncLoader
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UVRAsyncLoader*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVRAsyncLoader* APavlovGameState::GetAsyncLoader()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetAsyncLoader");

	APavlovGameState_GetAsyncLoader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.DisplayMatchStateOverlay
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// class UClass*                  OverlayClass                   (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameState::DisplayMatchStateOverlay(class UClass* OverlayClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.DisplayMatchStateOverlay");

	APavlovGameState_DisplayMatchStateOverlay_Params params;
	params.OverlayClass = OverlayClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameState.CanRemoveAttachments
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovGameState::CanRemoveAttachments()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.CanRemoveAttachments");

	APavlovGameState_CanRemoveAttachments_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.ArePlayersEnemies
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerState*            A                              (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerState*            B                              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovGameState::ArePlayersEnemies(class APlayerState* A, class APlayerState* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.ArePlayersEnemies");

	APavlovGameState_ArePlayersEnemies_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.UseOOBLocomotion
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::UseOOBLocomotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.UseOOBLocomotion");

	UPavlovGameUserSettings_UseOOBLocomotion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.UseGrabForce
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::UseGrabForce()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.UseGrabForce");

	UPavlovGameUserSettings_UseGrabForce_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.ShouldSwapControllers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::ShouldSwapControllers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.ShouldSwapControllers");

	UPavlovGameUserSettings_ShouldSwapControllers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.SetVoiceDevice
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 DeviceURL                      (Parm, ZeroConstructor)

void UPavlovGameUserSettings::SetVoiceDevice(const struct FString& DeviceURL)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetVoiceDevice");

	UPavlovGameUserSettings_SetVoiceDevice_Params params;
	params.DeviceURL = DeviceURL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetVirtualStock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetVirtualStock(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetVirtualStock");

	UPavlovGameUserSettings_SetVirtualStock_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetUseGrabForce
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetUseGrabForce(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetUseGrabForce");

	UPavlovGameUserSettings_SetUseGrabForce_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetUseAudioThread
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetUseAudioThread(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetUseAudioThread");

	UPavlovGameUserSettings_SetUseAudioThread_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetTwoHandToggle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetTwoHandToggle(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetTwoHandToggle");

	UPavlovGameUserSettings_SetTwoHandToggle_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetTouchpadInverted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInverted                      (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetTouchpadInverted(bool bInverted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetTouchpadInverted");

	UPavlovGameUserSettings_SetTouchpadInverted_Params params;
	params.bInverted = bInverted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetSwapControllers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetSwapControllers(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetSwapControllers");

	UPavlovGameUserSettings_SetSwapControllers_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetStartUpMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 NewStartUpMap                  (Parm, ZeroConstructor)

void UPavlovGameUserSettings::SetStartUpMap(const struct FString& NewStartUpMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetStartUpMap");

	UPavlovGameUserSettings_SetStartUpMap_Params params;
	params.NewStartUpMap = NewStartUpMap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetSnapTurn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetSnapTurn(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetSnapTurn");

	UPavlovGameUserSettings_SetSnapTurn_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetSmoothTurnRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetSmoothTurnRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetSmoothTurnRate");

	UPavlovGameUserSettings_SetSmoothTurnRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetSmoothTurn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetSmoothTurn(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetSmoothTurn");

	UPavlovGameUserSettings_SetSmoothTurn_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetSmoothLocomotionMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EVRSmoothLocomotionMode        NewMode                        (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetSmoothLocomotionMode(EVRSmoothLocomotionMode NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetSmoothLocomotionMode");

	UPavlovGameUserSettings_SetSmoothLocomotionMode_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetServerSortType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EServerSortType                SortType                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetServerSortType(EServerSortType SortType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetServerSortType");

	UPavlovGameUserSettings_SetServerSortType_Params params;
	params.SortType = SortType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetServerSearchType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EServerSearchType              SearchType                     (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetServerSearchType(EServerSearchType SearchType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetServerSearchType");

	UPavlovGameUserSettings_SetServerSearchType_Params params;
	params.SearchType = SearchType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetResolutionQuality
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Quality                        (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetResolutionQuality(float Quality)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetResolutionQuality");

	UPavlovGameUserSettings_SetResolutionQuality_Params params;
	params.Quality = Quality;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetRegionFilters
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         Filters                        (Parm, ZeroConstructor)

void UPavlovGameUserSettings::SetRegionFilters(TArray<struct FString> Filters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetRegionFilters");

	UPavlovGameUserSettings_SetRegionFilters_Params params;
	params.Filters = Filters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetRealTimeReverb
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetRealTimeReverb(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetRealTimeReverb");

	UPavlovGameUserSettings_SetRealTimeReverb_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetPrimaryRegion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EOnlineRegion                  Region                         (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetPrimaryRegion(EOnlineRegion Region)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetPrimaryRegion");

	UPavlovGameUserSettings_SetPrimaryRegion_Params params;
	params.Region = Region;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetPlayerRightHanded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bRightHanded                   (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetPlayerRightHanded(bool bRightHanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetPlayerRightHanded");

	UPavlovGameUserSettings_SetPlayerRightHanded_Params params;
	params.bRightHanded = bRightHanded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetPlayerHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Height                         (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetPlayerHeight(float Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetPlayerHeight");

	UPavlovGameUserSettings_SetPlayerHeight_Params params;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetOOBLocomotion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bUse                           (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetOOBLocomotion(bool bUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetOOBLocomotion");

	UPavlovGameUserSettings_SetOOBLocomotion_Params params;
	params.bUse = bUse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetOnScreenEffectsEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetOnScreenEffectsEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetOnScreenEffectsEnabled");

	UPavlovGameUserSettings_SetOnScreenEffectsEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetOffHandAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECustomAction                  Action                         (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetOffHandAction(ECustomAction Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetOffHandAction");

	UPavlovGameUserSettings_SetOffHandAction_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetNoAmbisonics
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetNoAmbisonics(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetNoAmbisonics");

	UPavlovGameUserSettings_SetNoAmbisonics_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetMountFriendly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bFriendly                      (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetMountFriendly(bool bFriendly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetMountFriendly");

	UPavlovGameUserSettings_SetMountFriendly_Params params;
	params.bFriendly = bFriendly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetMicMuted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bMuted                         (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetMicMuted(bool bMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetMicMuted");

	UPavlovGameUserSettings_SetMicMuted_Params params;
	params.bMuted = bMuted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetMenuScoreboardSwaped
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetMenuScoreboardSwaped(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetMenuScoreboardSwaped");

	UPavlovGameUserSettings_SetMenuScoreboardSwaped_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetMapAsFavoriteById
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetMapAsFavoriteById(const struct FString& ID, bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetMapAsFavoriteById");

	UPavlovGameUserSettings_SetMapAsFavoriteById_Params params;
	params.ID = ID;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetMapAsFavorite
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPavlov_Map*             Map                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetMapAsFavorite(class UPavlov_Map* Map, bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetMapAsFavorite");

	UPavlovGameUserSettings_SetMapAsFavorite_Params params;
	params.Map = Map;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetMainHandAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECustomAction                  Action                         (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetMainHandAction(ECustomAction Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetMainHandAction");

	UPavlovGameUserSettings_SetMainHandAction_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetLockInventory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetLockInventory(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetLockInventory");

	UPavlovGameUserSettings_SetLockInventory_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetLiteFootStepHaptics
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetLiteFootStepHaptics(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetLiteFootStepHaptics");

	UPavlovGameUserSettings_SetLiteFootStepHaptics_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetLegacyGrip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetLegacyGrip(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetLegacyGrip");

	UPavlovGameUserSettings_SetLegacyGrip_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetLeftEyeRendering
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetLeftEyeRendering(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetLeftEyeRendering");

	UPavlovGameUserSettings_SetLeftEyeRendering_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetHidePinLockedServers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bHideLocked                    (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetHidePinLockedServers(bool bHideLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetHidePinLockedServers");

	UPavlovGameUserSettings_SetHidePinLockedServers_Params params;
	params.bHideLocked = bHideLocked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetHideFullServers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           HideFull                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetHideFullServers(bool HideFull)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetHideFullServers");

	UPavlovGameUserSettings_SetHideFullServers_Params params;
	params.HideFull = HideFull;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetHideEmptyServers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bHideEmpty                     (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetHideEmptyServers(bool bHideEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetHideEmptyServers");

	UPavlovGameUserSettings_SetHideEmptyServers_Params params;
	params.bHideEmpty = bHideEmpty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetHideAmmoCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bHidden                        (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetHideAmmoCount(bool bHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetHideAmmoCount");

	UPavlovGameUserSettings_SetHideAmmoCount_Params params;
	params.bHidden = bHidden;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetHeadLocomotion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetHeadLocomotion(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetHeadLocomotion");

	UPavlovGameUserSettings_SetHeadLocomotion_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetGripMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EGripMode                      NewGripMode                    (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetGripMode(EGripMode NewGripMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetGripMode");

	UPavlovGameUserSettings_SetGripMode_Params params;
	params.NewGripMode = NewGripMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetGrabForceThreashold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetGrabForceThreashold(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetGrabForceThreashold");

	UPavlovGameUserSettings_SetGrabForceThreashold_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetGoreLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EGoreLevel                     Level                          (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetGoreLevel(EGoreLevel Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetGoreLevel");

	UPavlovGameUserSettings_SetGoreLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetGMFilters
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         Filters                        (Parm, ZeroConstructor)

void UPavlovGameUserSettings::SetGMFilters(TArray<struct FString> Filters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetGMFilters");

	UPavlovGameUserSettings_SetGMFilters_Params params;
	params.Filters = Filters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetFreeSpectatingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetFreeSpectatingEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetFreeSpectatingEnabled");

	UPavlovGameUserSettings_SetFreeSpectatingEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetForceTubeEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetForceTubeEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetForceTubeEnabled");

	UPavlovGameUserSettings_SetForceTubeEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetFavoriteServers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FFavoriteServer> Servers                        (Parm, ZeroConstructor)

void UPavlovGameUserSettings::SetFavoriteServers(TArray<struct FFavoriteServer> Servers)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetFavoriteServers");

	UPavlovGameUserSettings_SetFavoriteServers_Params params;
	params.Servers = Servers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetbHapticsSuitEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetbHapticsSuitEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetbHapticsSuitEnabled");

	UPavlovGameUserSettings_SetbHapticsSuitEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetAutoUngrip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetAutoUngrip(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetAutoUngrip");

	UPavlovGameUserSettings_SetAutoUngrip_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetAutoSwapHandsEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetAutoSwapHandsEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetAutoSwapHandsEnabled");

	UPavlovGameUserSettings_SetAutoSwapHandsEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetAutoSprint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetAutoSprint(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetAutoSprint");

	UPavlovGameUserSettings_SetAutoSprint_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetArmKillfeedEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetArmKillfeedEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetArmKillfeedEnabled");

	UPavlovGameUserSettings_SetArmKillfeedEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetAdvancedVehicleInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bUseAdvanced                   (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetAdvancedVehicleInput(bool bUseAdvanced)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetAdvancedVehicleInput");

	UPavlovGameUserSettings_SetAdvancedVehicleInput_Params params;
	params.bUseAdvanced = bUseAdvanced;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SendAnalyticEvents
// (Final, Native, Public, BlueprintCallable)

void UPavlovGameUserSettings::SendAnalyticEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SendAnalyticEvents");

	UPavlovGameUserSettings_SendAnalyticEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SaveSpectatorView
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UPavlovGameUserSettings::SaveSpectatorView(class UObject* WorldContextObject, int Index, const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SaveSpectatorView");

	UPavlovGameUserSettings_SaveSpectatorView_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Index = Index;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.MarkAsCalibrated
// (Final, Native, Public, BlueprintCallable)

void UPavlovGameUserSettings::MarkAsCalibrated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.MarkAsCalibrated");

	UPavlovGameUserSettings_MarkAsCalibrated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.IsTwoHandToggleEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsTwoHandToggleEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsTwoHandToggleEnabled");

	UPavlovGameUserSettings_IsTwoHandToggleEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsTouchpadInverted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsTouchpadInverted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsTouchpadInverted");

	UPavlovGameUserSettings_IsTouchpadInverted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsSnapTurnEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsSnapTurnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsSnapTurnEnabled");

	UPavlovGameUserSettings_IsSnapTurnEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsSmoothTurnEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsSmoothTurnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsSmoothTurnEnabled");

	UPavlovGameUserSettings_IsSmoothTurnEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsPostProcessDisabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsPostProcessDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsPostProcessDisabled");

	UPavlovGameUserSettings_IsPostProcessDisabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsPlayerRightHanded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsPlayerRightHanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsPlayerRightHanded");

	UPavlovGameUserSettings_IsPlayerRightHanded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsOnScreenEffectsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsOnScreenEffectsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsOnScreenEffectsEnabled");

	UPavlovGameUserSettings_IsOnScreenEffectsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsMountFriendly
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsMountFriendly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsMountFriendly");

	UPavlovGameUserSettings_IsMountFriendly_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsMicMuted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsMicMuted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsMicMuted");

	UPavlovGameUserSettings_IsMicMuted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsMenuScoreboardSwapped
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsMenuScoreboardSwapped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsMenuScoreboardSwapped");

	UPavlovGameUserSettings_IsMenuScoreboardSwapped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsLiteFootStepHapticsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsLiteFootStepHapticsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsLiteFootStepHapticsEnabled");

	UPavlovGameUserSettings_IsLiteFootStepHapticsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsLeftEyeRendering
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsLeftEyeRendering()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsLeftEyeRendering");

	UPavlovGameUserSettings_IsLeftEyeRendering_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsHeadLocomotionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsHeadLocomotionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsHeadLocomotionEnabled");

	UPavlovGameUserSettings_IsHeadLocomotionEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsFreeSpectatingEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsFreeSpectatingEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsFreeSpectatingEnabled");

	UPavlovGameUserSettings_IsFreeSpectatingEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsForceTubeEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsForceTubeEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsForceTubeEnabled");

	UPavlovGameUserSettings_IsForceTubeEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsFavoriteMapById
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsFavoriteMapById(const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsFavoriteMapById");

	UPavlovGameUserSettings_IsFavoriteMapById_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsFavoriteMap
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPavlov_Map*             Map                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsFavoriteMap(class UPavlov_Map* Map)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsFavoriteMap");

	UPavlovGameUserSettings_IsFavoriteMap_Params params;
	params.Map = Map;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsCalibrated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsCalibrated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsCalibrated");

	UPavlovGameUserSettings_IsCalibrated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsBHapticsSuitEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsBHapticsSuitEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsBHapticsSuitEnabled");

	UPavlovGameUserSettings_IsBHapticsSuitEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsAutoUngripEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsAutoUngripEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsAutoUngripEnabled");

	UPavlovGameUserSettings_IsAutoUngripEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsAutoSwapHandsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsAutoSwapHandsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsAutoSwapHandsEnabled");

	UPavlovGameUserSettings_IsAutoSwapHandsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsAutoSprintEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsAutoSprintEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsAutoSprintEnabled");

	UPavlovGameUserSettings_IsAutoSprintEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsArmKillfeedEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsArmKillfeedEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsArmKillfeedEnabled");

	UPavlovGameUserSettings_IsArmKillfeedEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsAmmoCounterHidden
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsAmmoCounterHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsAmmoCounterHidden");

	UPavlovGameUserSettings_IsAmmoCounterHidden_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsAdvancedVehicleInputEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsAdvancedVehicleInputEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsAdvancedVehicleInputEnabled");

	UPavlovGameUserSettings_IsAdvancedVehicleInputEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.HasLegacyGrip
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::HasLegacyGrip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.HasLegacyGrip");

	UPavlovGameUserSettings_HasLegacyGrip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetVoiceDevice
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPavlovGameUserSettings::GetVoiceDevice()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetVoiceDevice");

	UPavlovGameUserSettings_GetVoiceDevice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetVirtualStock
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::GetVirtualStock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetVirtualStock");

	UPavlovGameUserSettings_GetVirtualStock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetUseAudioThread
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::GetUseAudioThread()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetUseAudioThread");

	UPavlovGameUserSettings_GetUseAudioThread_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetStartUpMap
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPavlovGameUserSettings::GetStartUpMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetStartUpMap");

	UPavlovGameUserSettings_GetStartUpMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetSpectatorView
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UPavlovGameUserSettings::GetSpectatorView(class UObject* WorldContextObject, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetSpectatorView");

	UPavlovGameUserSettings_GetSpectatorView_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetSmoothTurnRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPavlovGameUserSettings::GetSmoothTurnRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetSmoothTurnRate");

	UPavlovGameUserSettings_GetSmoothTurnRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetSmoothLocomotionMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EVRSmoothLocomotionMode        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EVRSmoothLocomotionMode UPavlovGameUserSettings::GetSmoothLocomotionMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetSmoothLocomotionMode");

	UPavlovGameUserSettings_GetSmoothLocomotionMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetServerSortType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EServerSortType                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EServerSortType UPavlovGameUserSettings::GetServerSortType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetServerSortType");

	UPavlovGameUserSettings_GetServerSortType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetServerSearchType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EServerSearchType              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EServerSearchType UPavlovGameUserSettings::GetServerSearchType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetServerSearchType");

	UPavlovGameUserSettings_GetServerSearchType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetRegionFilters
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UPavlovGameUserSettings::GetRegionFilters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetRegionFilters");

	UPavlovGameUserSettings_GetRegionFilters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetRealTimeVoiceReverb
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::GetRealTimeVoiceReverb()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetRealTimeVoiceReverb");

	UPavlovGameUserSettings_GetRealTimeVoiceReverb_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetPrimaryRegion
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EOnlineRegion                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EOnlineRegion UPavlovGameUserSettings::GetPrimaryRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetPrimaryRegion");

	UPavlovGameUserSettings_GetPrimaryRegion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetPlayerHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPavlovGameUserSettings::GetPlayerHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetPlayerHeight");

	UPavlovGameUserSettings_GetPlayerHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetOffHandAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECustomAction                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECustomAction UPavlovGameUserSettings::GetOffHandAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetOffHandAction");

	UPavlovGameUserSettings_GetOffHandAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetNoAmbisonics
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::GetNoAmbisonics()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetNoAmbisonics");

	UPavlovGameUserSettings_GetNoAmbisonics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetMainHandAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECustomAction                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECustomAction UPavlovGameUserSettings::GetMainHandAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetMainHandAction");

	UPavlovGameUserSettings_GetMainHandAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetLockInventory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::GetLockInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetLockInventory");

	UPavlovGameUserSettings_GetLockInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetHidePinLockedServers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::GetHidePinLockedServers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetHidePinLockedServers");

	UPavlovGameUserSettings_GetHidePinLockedServers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetHideFullServers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::GetHideFullServers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetHideFullServers");

	UPavlovGameUserSettings_GetHideFullServers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetHideEmptyServers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::GetHideEmptyServers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetHideEmptyServers");

	UPavlovGameUserSettings_GetHideEmptyServers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetGripMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EGripMode                      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripMode UPavlovGameUserSettings::GetGripMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetGripMode");

	UPavlovGameUserSettings_GetGripMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetGrabForceThreashold
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPavlovGameUserSettings::GetGrabForceThreashold()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetGrabForceThreashold");

	UPavlovGameUserSettings_GetGrabForceThreashold_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetGoreLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EGoreLevel                     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGoreLevel UPavlovGameUserSettings::GetGoreLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetGoreLevel");

	UPavlovGameUserSettings_GetGoreLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetGMFilters
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UPavlovGameUserSettings::GetGMFilters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetGMFilters");

	UPavlovGameUserSettings_GetGMFilters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetFavoriteServers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FFavoriteServer> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FFavoriteServer> UPavlovGameUserSettings::GetFavoriteServers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetFavoriteServers");

	UPavlovGameUserSettings_GetFavoriteServers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.ForceNoPostProcessing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::ForceNoPostProcessing(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.ForceNoPostProcessing");

	UPavlovGameUserSettings_ForceNoPostProcessing_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovHandAnimInstance.SetDefaultGripSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAnimSequence*           UpdateSequence                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bImmersiveSequence             (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovHandAnimInstance::SetDefaultGripSequence(class UAnimSequence* UpdateSequence, bool bImmersiveSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovHandAnimInstance.SetDefaultGripSequence");

	UPavlovHandAnimInstance_SetDefaultGripSequence_Params params;
	params.UpdateSequence = UpdateSequence;
	params.bImmersiveSequence = bImmersiveSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovHandAnimInstance.GetFingerBlend
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EFinger                        Finger                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPavlovHandAnimInstance::GetFingerBlend(EFinger Finger)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovHandAnimInstance.GetFingerBlend");

	UPavlovHandAnimInstance_GetFingerBlend_Params params;
	params.Finger = Finger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovLobby.Start
// (Final, Native, Public, BlueprintCallable)

void UPavlovLobby::Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.Start");

	UPavlovLobby_Start_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.SetWantToStart
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovLobby::SetWantToStart(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.SetWantToStart");

	UPavlovLobby_SetWantToStart_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.SetServerSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FServerSettings         NewServerSettings              (ConstParm, Parm, OutParm, ReferenceParm)

void UPavlovLobby::SetServerSettings(const struct FServerSettings& NewServerSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.SetServerSettings");

	UPavlovLobby_SetServerSettings_Params params;
	params.NewServerSettings = NewServerSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.SetRegion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 NewRegion                      (Parm, ZeroConstructor)

void UPavlovLobby::SetRegion(const struct FString& NewRegion)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.SetRegion");

	UPavlovLobby_SetRegion_Params params;
	params.NewRegion = NewRegion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.SetPin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Pin                            (Parm, ZeroConstructor)

void UPavlovLobby::SetPin(const struct FString& Pin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.SetPin");

	UPavlovLobby_SetPin_Params params;
	params.Pin = Pin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.SetMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 MapName                        (Parm, ZeroConstructor)

void UPavlovLobby::SetMap(const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.SetMap");

	UPavlovLobby_SetMap_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.SetHostingType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EServerHostingType             NewHostingType                 (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovLobby::SetHostingType(EServerHostingType NewHostingType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.SetHostingType");

	UPavlovLobby_SetHostingType_Params params;
	params.NewHostingType = NewHostingType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.SetGameMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 NewGameMode                    (Parm, ZeroConstructor)

void UPavlovLobby::SetGameMode(const struct FString& NewGameMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.SetGameMode");

	UPavlovLobby_SetGameMode_Params params;
	params.NewGameMode = NewGameMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.SetFillWithBots
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovLobby::SetFillWithBots(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.SetFillWithBots");

	UPavlovLobby_SetFillWithBots_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.SetCompetitiveMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            CompMode                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovLobby::SetCompetitiveMode(int CompMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.SetCompetitiveMode");

	UPavlovLobby_SetCompetitiveMode_Params params;
	params.CompMode = CompMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.RequestTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovLobby::RequestTeam(int TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.RequestTeam");

	UPavlovLobby_RequestTeam_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.OnMapDownloadProgress
// (Final, Native, Private)
// Parameters:
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovLobby::OnMapDownloadProgress(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.OnMapDownloadProgress");

	UPavlovLobby_OnMapDownloadProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.OnMapDownloaded
// (Final, Native, Private)
// Parameters:
// bool                           bSucceed                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ID                             (Parm, ZeroConstructor)

void UPavlovLobby::OnMapDownloaded(bool bSucceed, const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.OnMapDownloaded");

	UPavlovLobby_OnMapDownloaded_Params params;
	params.bSucceed = bSucceed;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.MuteMember
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovLobby::MuteMember(int Index, bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.MuteMember");

	UPavlovLobby_MuteMember_Params params;
	params.Index = Index;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.IsPinProtected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovLobby::IsPinProtected()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.IsPinProtected");

	UPavlovLobby_IsPinProtected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovLobby.IsMemberMuted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovLobby::IsMemberMuted(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.IsMemberMuted");

	UPavlovLobby_IsMemberMuted_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovLobby.GetRegion
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPavlovLobby::GetRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.GetRegion");

	UPavlovLobby_GetRegion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovLobby.GetPin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPavlovLobby::GetPin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.GetPin");

	UPavlovLobby_GetPin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovLobby.GetMemberTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPavlovLobby::GetMemberTeam(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.GetMemberTeam");

	UPavlovLobby_GetMemberTeam_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovLobby.GetLocalUserIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPavlovLobby::GetLocalUserIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.GetLocalUserIndex");

	UPavlovLobby_GetLocalUserIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovLobby.FindServer
// (Final, Native, Public, BlueprintCallable)

void UPavlovLobby::FindServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.FindServer");

	UPavlovLobby_FindServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.DoesMemberWantsToStart
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovLobby::DoesMemberWantsToStart(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.DoesMemberWantsToStart");

	UPavlovLobby_DoesMemberWantsToStart_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovLobby.CheckSessionStatus
// (Final, Native, Private)

void UPavlovLobby::CheckSessionStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.CheckSessionStatus");

	UPavlovLobby_CheckSessionStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.CancelServerFind
// (Final, Native, Public, BlueprintCallable)

void UPavlovLobby::CancelServerFind()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.CancelServerFind");

	UPavlovLobby_CancelServerFind_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovMovementComponent.ServerDeployParachute
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void UPavlovMovementComponent::ServerDeployParachute()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovMovementComponent.ServerDeployParachute");

	UPavlovMovementComponent_ServerDeployParachute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovMovementComponent.OnRep_PrachuteState
// (Final, Native, Private)

void UPavlovMovementComponent::OnRep_PrachuteState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovMovementComponent.OnRep_PrachuteState");

	UPavlovMovementComponent_OnRep_PrachuteState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovMovementComponent.MulticastOnParachuteDeployed
// (Net, Native, Event, NetMulticast, Public)

void UPavlovMovementComponent::MulticastOnParachuteDeployed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovMovementComponent.MulticastOnParachuteDeployed");

	UPavlovMovementComponent_MulticastOnParachuteDeployed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovMovementComponent.EnableParachuteMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnableParachuteMode           (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovMovementComponent::EnableParachuteMode(bool bEnableParachuteMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovMovementComponent.EnableParachuteMode");

	UPavlovMovementComponent_EnableParachuteMode_Params params;
	params.bEnableParachuteMode = bEnableParachuteMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.WearKevlar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bWithHelmet                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::WearKevlar(bool bWithHelmet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.WearKevlar");

	APavlovPawn_WearKevlar_Params params;
	params.bWithHelmet = bWithHelmet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.WearHelmet
// (Final, Native, Public, BlueprintCallable)

void APavlovPawn::WearHelmet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.WearHelmet");

	APavlovPawn_WearHelmet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.UpdateLocomotion
// (Final, Native, Public, BlueprintCallable)

void APavlovPawn::UpdateLocomotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.UpdateLocomotion");

	APavlovPawn_UpdateLocomotion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.TryStackAmmoBoxes
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AAmmoBox*                AmmoBox                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovPawn::TryStackAmmoBoxes(class AAmmoBox* AmmoBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.TryStackAmmoBoxes");

	APavlovPawn_TryStackAmmoBoxes_Params params;
	params.AmmoBox = AmmoBox;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.ToggleRadio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::ToggleRadio(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.ToggleRadio");

	APavlovPawn_ToggleRadio_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.TakePointDamage
// (Final, Native, Private, HasDefaults)
// Parameters:
// class AActor*                  DamagedActor                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ShotFromDirection              (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::TakePointDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.TakePointDamage");

	APavlovPawn_TakePointDamage_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.HitLocation = HitLocation;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.DamageType = DamageType;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.SpawnHitFeedbackSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EHitFeedbackType               Type                           (Parm, ZeroConstructor, IsPlainOldData)
// class UAudioComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAudioComponent* APavlovPawn::SpawnHitFeedbackSound(EHitFeedbackType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.SpawnHitFeedbackSound");

	APavlovPawn_SpawnHitFeedbackSound_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.SpawnHeadshotEffect
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class APlayerState*            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitDirection                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldHitLocation               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldHitDirection              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::SpawnHeadshotEffect(class APlayerState* Killer, const struct FVector& HitLocation, const struct FVector& HitDirection, struct FVector* WorldHitLocation, struct FVector* WorldHitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.SpawnHeadshotEffect");

	APavlovPawn_SpawnHeadshotEffect_Params params;
	params.Killer = Killer;
	params.HitLocation = HitLocation;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldHitLocation != nullptr)
		*WorldHitLocation = params.WorldHitLocation;
	if (WorldHitDirection != nullptr)
		*WorldHitDirection = params.WorldHitDirection;
}


// Function Pavlov.PavlovPawn.ShowLimitedAmmoCounter
// (Final, Native, Public)
// Parameters:
// bool                           bCounterVisible                (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::ShowLimitedAmmoCounter(bool bCounterVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.ShowLimitedAmmoCounter");

	APavlovPawn_ShowLimitedAmmoCounter_Params params;
	params.bCounterVisible = bCounterVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.SetupWatch
// (Event, Public, BlueprintEvent)
// Parameters:
// class UWatch*                  WatchComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APavlovPawn::SetupWatch(class UWatch* WatchComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.SetupWatch");

	APavlovPawn_SetupWatch_Params params;
	params.WatchComp = WatchComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.SetupLimitedAmmoComp
// (Final, Native, Public)
// Parameters:
// ELimitedAmmoType               LimitedAmmoMode                (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::SetupLimitedAmmoComp(ELimitedAmmoType LimitedAmmoMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.SetupLimitedAmmoComp");

	APavlovPawn_SetupLimitedAmmoComp_Params params;
	params.LimitedAmmoMode = LimitedAmmoMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.SetTeamId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewTeamId                      (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::SetTeamId(int NewTeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.SetTeamId");

	APavlovPawn_SetTeamId_Params params;
	params.NewTeamId = NewTeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.SetPlayerSkin
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   PlayerSkin                     (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::SetPlayerSkin(const struct FName& PlayerSkin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.SetPlayerSkin");

	APavlovPawn_SetPlayerSkin_Params params;
	params.PlayerSkin = PlayerSkin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.SetPainkillerDetails
// (Final, Native, Public)
// Parameters:
// class AActor*                  Painkillers                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumOfPills                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          HealAmount                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovPawn::SetPainkillerDetails(class AActor* Painkillers, int NumOfPills, float HealAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.SetPainkillerDetails");

	APavlovPawn_SetPainkillerDetails_Params params;
	params.Painkillers = Painkillers;
	params.NumOfPills = NumOfPills;
	params.HealAmount = HealAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.SetNumOfSyringeRevives
// (Final, Native, Public)
// Parameters:
// class AActor*                  Syringe                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumOfRevives                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovPawn::SetNumOfSyringeRevives(class AActor* Syringe, int NumOfRevives)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.SetNumOfSyringeRevives");

	APavlovPawn_SetNumOfSyringeRevives_Params params;
	params.Syringe = Syringe;
	params.NumOfRevives = NumOfRevives;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.SetModdingVoiceAttn
// (Final, Native, Public)

void APavlovPawn::SetModdingVoiceAttn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.SetModdingVoiceAttn");

	APavlovPawn_SetModdingVoiceAttn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.SetAvatarSkin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  NewSkinClass                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CustomMesh                     (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::SetAvatarSkin(class UClass* NewSkinClass, const struct FName& CustomMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.SetAvatarSkin");

	APavlovPawn_SetAvatarSkin_Params params;
	params.NewSkinClass = NewSkinClass;
	params.CustomMesh = CustomMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.ServerUpdateFingerTracking
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FFingerTracking         Data                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void APavlovPawn::ServerUpdateFingerTracking(const struct FFingerTracking& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.ServerUpdateFingerTracking");

	APavlovPawn_ServerUpdateFingerTracking_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.ServerSetRadioChannel
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// unsigned char                  Channel                        (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::ServerSetRadioChannel(unsigned char Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.ServerSetRadioChannel");

	APavlovPawn_ServerSetRadioChannel_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.ServerReportFallDamage
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::ServerReportFallDamage(float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.ServerReportFallDamage");

	APavlovPawn_ServerReportFallDamage_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.ServerGiveMagazine
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           bOffHand                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::ServerGiveMagazine(bool bOffHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.ServerGiveMagazine");

	APavlovPawn_ServerGiveMagazine_Params params;
	params.bOffHand = bOffHand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.ServerGive
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FName                   EquipmentName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Skin                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::ServerGive(const struct FName& EquipmentName, const struct FName& Skin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.ServerGive");

	APavlovPawn_ServerGive_Params params;
	params.EquipmentName = EquipmentName;
	params.Skin = Skin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.ServerDeployParachute
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void APavlovPawn::ServerDeployParachute()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.ServerDeployParachute");

	APavlovPawn_ServerDeployParachute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.SanityCheck
// (Final, Native, Public, BlueprintCallable)

void APavlovPawn::SanityCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.SanityCheck");

	APavlovPawn_SanityCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.RevivePawn
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovPawn::RevivePawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.RevivePawn");

	APavlovPawn_RevivePawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.Revived_Client
// (Net, NetReliable, Native, Event, Public, NetClient)

void APavlovPawn::Revived_Client()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.Revived_Client");

	APavlovPawn_Revived_Client_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.ReplenishPlayerAmmo
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSpawnKnife                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::ReplenishPlayerAmmo(bool bSpawnKnife)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.ReplenishPlayerAmmo");

	APavlovPawn_ReplenishPlayerAmmo_Params params;
	params.bSpawnKnife = bSpawnKnife;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.RemoveAmmo
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   AmmoId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            RemoveAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlovPawn::RemoveAmmo(const struct FName& AmmoId, int RemoveAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.RemoveAmmo");

	APavlovPawn_RemoveAmmo_Params params;
	params.AmmoId = AmmoId;
	params.RemoveAmount = RemoveAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.ProxyTrigger
// (Final, Native, Public)
// Parameters:
// bool                           bDominantController            (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::ProxyTrigger(bool bDominantController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.ProxyTrigger");

	APavlovPawn_ProxyTrigger_Params params;
	params.bDominantController = bDominantController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.ProxyGrab
// (Final, Native, Public)
// Parameters:
// bool                           bDominantController            (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::ProxyGrab(bool bDominantController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.ProxyGrab");

	APavlovPawn_ProxyGrab_Params params;
	params.bDominantController = bDominantController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.OverrideVoiceAttn
// (Final, Native, Public)
// Parameters:
// class USoundAttenuation*       NewAttn                        (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::OverrideVoiceAttn(class USoundAttenuation* NewAttn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.OverrideVoiceAttn");

	APavlovPawn_OverrideVoiceAttn_Params params;
	params.NewAttn = NewAttn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.OnWW2AvatarLoaded_Owner
// (Native, Event, Public, BlueprintEvent)

void APavlovPawn::OnWW2AvatarLoaded_Owner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.OnWW2AvatarLoaded_Owner");

	APavlovPawn_OnWW2AvatarLoaded_Owner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.OnTeamIdChanged
// (Native, Event, Protected, BlueprintEvent)

void APavlovPawn::OnTeamIdChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.OnTeamIdChanged");

	APavlovPawn_OnTeamIdChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.OnRevive
// (Final, Native, Private)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::OnRevive(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.OnRevive");

	APavlovPawn_OnRevive_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.OnRep_TeamId
// (Native, Protected)

void APavlovPawn::OnRep_TeamId()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.OnRep_TeamId");

	APavlovPawn_OnRep_TeamId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.OnRep_RadioChannel
// (Final, Native, Private)

void APavlovPawn::OnRep_RadioChannel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.OnRep_RadioChannel");

	APavlovPawn_OnRep_RadioChannel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.OnRep_PlayerProxy
// (Native, Public)

void APavlovPawn::OnRep_PlayerProxy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.OnRep_PlayerProxy");

	APavlovPawn_OnRep_PlayerProxy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.OnRep_LastTeleport
// (Final, Native, Public)

void APavlovPawn::OnRep_LastTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.OnRep_LastTeleport");

	APavlovPawn_OnRep_LastTeleport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.OnRep_HelmetArmour
// (Final, Native, Private)

void APavlovPawn::OnRep_HelmetArmour()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.OnRep_HelmetArmour");

	APavlovPawn_OnRep_HelmetArmour_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.OnRep_AvatarSkinInfo
// (Final, Native, Private)

void APavlovPawn::OnRep_AvatarSkinInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.OnRep_AvatarSkinInfo");

	APavlovPawn_OnRep_AvatarSkinInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.OnRep_Armour
// (Final, Native, Private)

void APavlovPawn::OnRep_Armour()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.OnRep_Armour");

	APavlovPawn_OnRep_Armour_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.OnPawnRevived
// (Native, Event, Public, BlueprintEvent)

void APavlovPawn::OnPawnRevived()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.OnPawnRevived");

	APavlovPawn_OnPawnRevived_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.OnKill
// (Final, Native, Private)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::OnKill(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.OnKill");

	APavlovPawn_OnKill_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.OnImpactDamage
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FImpactDamage           ImpactDamage                   (ConstParm, Parm, OutParm, ReferenceParm)

void APavlovPawn::OnImpactDamage(const struct FImpactDamage& ImpactDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.OnImpactDamage");

	APavlovPawn_OnImpactDamage_Params params;
	params.ImpactDamage = ImpactDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.OnHitByTazer
// (Event, Public, BlueprintEvent)

void APavlovPawn::OnHitByTazer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.OnHitByTazer");

	APavlovPawn_OnHitByTazer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.OnHitByGun
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// class UClass*                  GunClass                       (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             HitInstigator                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::OnHitByGun(class UClass* GunClass, class AController* HitInstigator, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.OnHitByGun");

	APavlovPawn_OnHitByGun_Params params;
	params.GunClass = GunClass;
	params.HitInstigator = HitInstigator;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.OnDismember
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FWoundInfo              WoundInfo                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FPreBakedWound          PreBakedWound                  (ConstParm, Parm, OutParm, ReferenceParm)

void APavlovPawn::OnDismember(const struct FWoundInfo& WoundInfo, const struct FPreBakedWound& PreBakedWound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.OnDismember");

	APavlovPawn_OnDismember_Params params;
	params.WoundInfo = WoundInfo;
	params.PreBakedWound = PreBakedWound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.OnCameraClipChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bClipping                      (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::OnCameraClipChanged(bool bClipping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.OnCameraClipChanged");

	APavlovPawn_OnCameraClipChanged_Params params;
	params.bClipping = bClipping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.NotifyProxySkinChanged
// (Final, Native, Public)

void APavlovPawn::NotifyProxySkinChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.NotifyProxySkinChanged");

	APavlovPawn_NotifyProxySkinChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.MulticastTeleportTo
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector                 DestLocation                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                DestRotation                   (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::MulticastTeleportTo(const struct FVector& DestLocation, const struct FRotator& DestRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.MulticastTeleportTo");

	APavlovPawn_MulticastTeleportTo_Params params;
	params.DestLocation = DestLocation;
	params.DestRotation = DestRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.MulticastResetPawn
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void APavlovPawn::MulticastResetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.MulticastResetPawn");

	APavlovPawn_MulticastResetPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.MulticastOnZombieHit
// (Net, Native, Event, NetMulticast, Public)

void APavlovPawn::MulticastOnZombieHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.MulticastOnZombieHit");

	APavlovPawn_MulticastOnZombieHit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.MulticastOnWearArmour
// (Net, Native, Event, NetMulticast, Public)

void APavlovPawn::MulticastOnWearArmour()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.MulticastOnWearArmour");

	APavlovPawn_MulticastOnWearArmour_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.MulticastOnRadialDeath
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FVector_NetQuantize     Origin                         (Parm)

void APavlovPawn::MulticastOnRadialDeath(const struct FVector_NetQuantize& Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.MulticastOnRadialDeath");

	APavlovPawn_MulticastOnRadialDeath_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.MulticastOnMagazineGrabbed
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           bDominant                      (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::MulticastOnMagazineGrabbed(bool bDominant)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.MulticastOnMagazineGrabbed");

	APavlovPawn_MulticastOnMagazineGrabbed_Params params;
	params.bDominant = bDominant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.MulticastOnImpactDamage
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FImpactDamage           ImpactDamage                   (Parm)

void APavlovPawn::MulticastOnImpactDamage(const struct FImpactDamage& ImpactDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.MulticastOnImpactDamage");

	APavlovPawn_MulticastOnImpactDamage_Params params;
	params.ImpactDamage = ImpactDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.MulticastOnHitSlow
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void APavlovPawn::MulticastOnHitSlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.MulticastOnHitSlow");

	APavlovPawn_MulticastOnHitSlow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.MulticastOnHit
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FVector_NetQuantize     Location                       (Parm)
// struct FVector_NetQuantizeNormal Normal                         (Parm)
// class APlayerState*            Shooter                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOnArmor                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::MulticastOnHit(const struct FVector_NetQuantize& Location, const struct FVector_NetQuantizeNormal& Normal, class APlayerState* Shooter, bool bOnArmor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.MulticastOnHit");

	APavlovPawn_MulticastOnHit_Params params;
	params.Location = Location;
	params.Normal = Normal;
	params.Shooter = Shooter;
	params.bOnArmor = bOnArmor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.MulticastOnHelmetHit
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FVector_NetQuantize     Location                       (Parm)
// struct FVector_NetQuantizeNormal Direction                      (Parm)

void APavlovPawn::MulticastOnHelmetHit(const struct FVector_NetQuantize& Location, const struct FVector_NetQuantizeNormal& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.MulticastOnHelmetHit");

	APavlovPawn_MulticastOnHelmetHit_Params params;
	params.Location = Location;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.MulticastOnHelmetBlownoff
// (Net, Native, Event, NetMulticast, Public)

void APavlovPawn::MulticastOnHelmetBlownoff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.MulticastOnHelmetBlownoff");

	APavlovPawn_MulticastOnHelmetBlownoff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.MulticastOnHeadshot
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// class APlayerState*            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitDirection                   (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  WoundRate                      (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::MulticastOnHeadshot(class APlayerState* Killer, const struct FVector& HitLocation, const struct FVector& HitDirection, unsigned char WoundRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.MulticastOnHeadshot");

	APavlovPawn_MulticastOnHeadshot_Params params;
	params.Killer = Killer;
	params.HitLocation = HitLocation;
	params.HitDirection = HitDirection;
	params.WoundRate = WoundRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.MulticastOnFallDamage
// (Net, Native, Event, NetMulticast, Public)

void APavlovPawn::MulticastOnFallDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.MulticastOnFallDamage");

	APavlovPawn_MulticastOnFallDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.MulticastAdjustAvatarScale
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// float                          PlayerHeight                   (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::MulticastAdjustAvatarScale(float PlayerHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.MulticastAdjustAvatarScale");

	APavlovPawn_MulticastAdjustAvatarScale_Params params;
	params.PlayerHeight = PlayerHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.ModKitLeaveVehicle
// (Final, Native, Public)

void APavlovPawn::ModKitLeaveVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.ModKitLeaveVehicle");

	APavlovPawn_ModKitLeaveVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.ModkitIsInVehicle
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovPawn::ModkitIsInVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.ModkitIsInVehicle");

	APavlovPawn_ModkitIsInVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.LoadEquipment
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEquipmentDefinition    definition                     (ConstParm, Parm, OutParm, ReferenceParm)

void APavlovPawn::LoadEquipment(const struct FEquipmentDefinition& definition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.LoadEquipment");

	APavlovPawn_LoadEquipment_Params params;
	params.definition = definition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.KillByDamageType
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             KilledByInstigator             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  KilledBy                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::KillByDamageType(class UClass* DamageType, class AController* KilledByInstigator, class AActor* KilledBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.KillByDamageType");

	APavlovPawn_KillByDamageType_Params params;
	params.DamageType = DamageType;
	params.KilledByInstigator = KilledByInstigator;
	params.KilledBy = KilledBy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.IsSprinting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovPawn::IsSprinting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.IsSprinting");

	APavlovPawn_IsSprinting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.IsPickupDisabled
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovPawn::IsPickupDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.IsPickupDisabled");

	APavlovPawn_IsPickupDisabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.IsLobbyLeaderModkit
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovPawn::IsLobbyLeaderModkit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.IsLobbyLeaderModkit");

	APavlovPawn_IsLobbyLeaderModkit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.IsDead
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovPawn::IsDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.IsDead");

	APavlovPawn_IsDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.IsCarryingBomb
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovPawn::IsCarryingBomb()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.IsCarryingBomb");

	APavlovPawn_IsCarryingBomb_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.IsCameraClipping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovPawn::IsCameraClipping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.IsCameraClipping");

	APavlovPawn_IsCameraClipping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.IsArmExploiting
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bRight                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovPawn::IsArmExploiting(bool bRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.IsArmExploiting");

	APavlovPawn_IsArmExploiting_Params params;
	params.bRight = bRight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.HealEffect
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:
// float                          HealTime                       (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      HealMaterial                   (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::HealEffect(float HealTime, class UMaterialInterface* HealMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.HealEffect");

	APavlovPawn_HealEffect_Params params;
	params.HealTime = HealTime;
	params.HealMaterial = HealMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.HasItem
// (Final, Native, Public)
// Parameters:
// struct FName                   Item                           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* APavlovPawn::HasItem(const struct FName& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.HasItem");

	APavlovPawn_HasItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GorePawn
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FImpactDamage           Impact                         (Parm)

void APavlovPawn::GorePawn(const struct FImpactDamage& Impact)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GorePawn");

	APavlovPawn_GorePawn_Params params;
	params.Impact = Impact;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.GiveItemInventory
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGiveItemInventoryParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)
// class AVRItem*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AVRItem* APavlovPawn::GiveItemInventory(const struct FGiveItemInventoryParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GiveItemInventory");

	APavlovPawn_GiveItemInventory_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GiveItem
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGiveItemParams         Params                         (ConstParm, Parm, OutParm, ReferenceParm)
// class AVRItem*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AVRItem* APavlovPawn::GiveItem(const struct FGiveItemParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GiveItem");

	APavlovPawn_GiveItem_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GiveBomb
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ABomb*                   Bomb                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::GiveBomb(class ABomb* Bomb)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GiveBomb");

	APavlovPawn_GiveBomb_Params params;
	params.Bomb = Bomb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.Give
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   EquipmentName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Skin                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWithAmmo                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bByBuyMenu                     (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::Give(const struct FName& EquipmentName, const struct FName& Skin, bool bWithAmmo, bool bByBuyMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.Give");

	APavlovPawn_Give_Params params;
	params.EquipmentName = EquipmentName;
	params.Skin = Skin;
	params.bWithAmmo = bWithAmmo;
	params.bByBuyMenu = bByBuyMenu;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.GetWeaponAttachments
// (Final, Native, Public)
// Parameters:
// class AActor*                  Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> APavlovPawn::GetWeaponAttachments(class AActor* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetWeaponAttachments");

	APavlovPawn_GetWeaponAttachments_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetWeaponAmmoType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName APavlovPawn::GetWeaponAmmoType(class AActor* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetWeaponAmmoType");

	APavlovPawn_GetWeaponAmmoType_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetWatch
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWatch*                  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWatch* APavlovPawn::GetWatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetWatch");

	APavlovPawn_GetWatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetVehicleOccupant
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UVehicleOccupant*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVehicleOccupant* APavlovPawn::GetVehicleOccupant()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetVehicleOccupant");

	APavlovPawn_GetVehicleOccupant_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetSkinSkeleton
// (Final, Native, Public)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* APavlovPawn::GetSkinSkeleton()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetSkinSkeleton");

	APavlovPawn_GetSkinSkeleton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetSideWeaponHolster
// (Event, Public, BlueprintEvent)
// Parameters:
// class UHolsterComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UHolsterComponent* APavlovPawn::GetSideWeaponHolster()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetSideWeaponHolster");

	APavlovPawn_GetSideWeaponHolster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetNumOfSyringeRevives
// (Final, Native, Public)
// Parameters:
// class AActor*                  Syringe                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlovPawn::GetNumOfSyringeRevives(class AActor* Syringe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetNumOfSyringeRevives");

	APavlovPawn_GetNumOfSyringeRevives_Params params;
	params.Syringe = Syringe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetNumOfPainkillerPills
// (Final, Native, Public)
// Parameters:
// class AActor*                  Painkillers                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlovPawn::GetNumOfPainkillerPills(class AActor* Painkillers)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetNumOfPainkillerPills");

	APavlovPawn_GetNumOfPainkillerPills_Params params;
	params.Painkillers = Painkillers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetMainWeaponHolster
// (Event, Public, BlueprintEvent)
// Parameters:
// class UHolsterComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UHolsterComponent* APavlovPawn::GetMainWeaponHolster()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetMainWeaponHolster");

	APavlovPawn_GetMainWeaponHolster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetLimitedAmmoComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULimitedAmmoComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class ULimitedAmmoComponent* APavlovPawn::GetLimitedAmmoComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetLimitedAmmoComponent");

	APavlovPawn_GetLimitedAmmoComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetKnifeHolster
// (Event, Public, BlueprintEvent)
// Parameters:
// class UHolsterComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UHolsterComponent* APavlovPawn::GetKnifeHolster()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetKnifeHolster");

	APavlovPawn_GetKnifeHolster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetItemOfClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  ItemClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSkipHands                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSubClass                      (Parm, ZeroConstructor, IsPlainOldData)
// class AVRItem*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AVRItem* APavlovPawn::GetItemOfClass(class UClass* ItemClass, bool bSkipHands, bool bSubClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetItemOfClass");

	APavlovPawn_GetItemOfClass_Params params;
	params.ItemClass = ItemClass;
	params.bSkipHands = bSkipHands;
	params.bSubClass = bSubClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetInventorySlotsVis
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovPawn::GetInventorySlotsVis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetInventorySlotsVis");

	APavlovPawn_GetInventorySlotsVis_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetHoldingItemByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ItemName                       (Parm, ZeroConstructor, IsPlainOldData)
// class AVRItem*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AVRItem* APavlovPawn::GetHoldingItemByName(const struct FName& ItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetHoldingItemByName");

	APavlovPawn_GetHoldingItemByName_Params params;
	params.ItemName = ItemName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APavlovPawn::GetHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetHealth");

	APavlovPawn_GetHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetHeadSpaceHitVectors
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 HitLocation                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 HitDirection                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 HeadSpaceHitLocation           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HeadSpaceHitDirection          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::GetHeadSpaceHitVectors(const struct FVector& HitLocation, const struct FVector& HitDirection, struct FVector* HeadSpaceHitLocation, struct FVector* HeadSpaceHitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetHeadSpaceHitVectors");

	APavlovPawn_GetHeadSpaceHitVectors_Params params;
	params.HitLocation = HitLocation;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HeadSpaceHitLocation != nullptr)
		*HeadSpaceHitLocation = params.HeadSpaceHitLocation;
	if (HeadSpaceHitDirection != nullptr)
		*HeadSpaceHitDirection = params.HeadSpaceHitDirection;
}


// Function Pavlov.PavlovPawn.GetGrenadeHolsters
// (Event, Public, BlueprintEvent)
// Parameters:
// TArray<class UHolsterComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UHolsterComponent*> APavlovPawn::GetGrenadeHolsters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetGrenadeHolsters");

	APavlovPawn_GetGrenadeHolsters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetEquipmentByName
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FName                   EquipmentName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEquipmentDefinition    definition                     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovPawn::GetEquipmentByName(const struct FName& EquipmentName, struct FEquipmentDefinition* definition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetEquipmentByName");

	APavlovPawn_GetEquipmentByName_Params params;
	params.EquipmentName = EquipmentName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (definition != nullptr)
		*definition = params.definition;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetCompatibleSlot
// (Final, Native, Public)
// Parameters:
// struct FName                   Item                           (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char APavlovPawn::GetCompatibleSlot(const struct FName& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetCompatibleSlot");

	APavlovPawn_GetCompatibleSlot_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetBombHolster
// (Event, Public, BlueprintEvent)
// Parameters:
// class UHolsterComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UHolsterComponent* APavlovPawn::GetBombHolster()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetBombHolster");

	APavlovPawn_GetBombHolster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetAvatarSkin
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAvatarSkin*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAvatarSkin* APavlovPawn::GetAvatarSkin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetAvatarSkin");

	APavlovPawn_GetAvatarSkin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetAmmoTypeName
// (Final, Native, Public)
// Parameters:
// EAmmoType                      AmmoType                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName APavlovPawn::GetAmmoTypeName(EAmmoType AmmoType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetAmmoTypeName");

	APavlovPawn_GetAmmoTypeName_Params params;
	params.AmmoType = AmmoType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetAmmoPocket
// (Event, Public, BlueprintEvent)
// Parameters:
// class UVRPocketComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVRPocketComponent* APavlovPawn::GetAmmoPocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetAmmoPocket");

	APavlovPawn_GetAmmoPocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetAmmoAmount
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   AmmoId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlovPawn::GetAmmoAmount(const struct FName& AmmoId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetAmmoAmount");

	APavlovPawn_GetAmmoAmount_Params params;
	params.AmmoId = AmmoId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.FinishExitVehicleServer
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void APavlovPawn::FinishExitVehicleServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.FinishExitVehicleServer");

	APavlovPawn_FinishExitVehicleServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.FinishExitVehicleClient
// (Final, Native, Public)

void APavlovPawn::FinishExitVehicleClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.FinishExitVehicleClient");

	APavlovPawn_FinishExitVehicleClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.ExitVehicle
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector                 ExitLocation                   (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::ExitVehicle(const struct FVector& ExitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.ExitVehicle");

	APavlovPawn_ExitVehicle_Params params;
	params.ExitLocation = ExitLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.EnableVehicleCollisionRecenter
// (Final, Native, Public)

void APavlovPawn::EnableVehicleCollisionRecenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.EnableVehicleCollisionRecenter");

	APavlovPawn_EnableVehicleCollisionRecenter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.EnableVehicleCollision
// (Final, Native, Public)

void APavlovPawn::EnableVehicleCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.EnableVehicleCollision");

	APavlovPawn_EnableVehicleCollision_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.EnableItemUse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnableUse                     (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::EnableItemUse(bool bEnableUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.EnableItemUse");

	APavlovPawn_EnableItemUse_Params params;
	params.bEnableUse = bEnableUse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.DropItem
// (Final, Native, Public)
// Parameters:
// struct FName                   Item                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDestroy                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromHandsOnly                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovPawn::DropItem(const struct FName& Item, bool bDestroy, bool bFromHandsOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.DropItem");

	APavlovPawn_DropItem_Params params;
	params.Item = Item;
	params.bDestroy = bDestroy;
	params.bFromHandsOnly = bFromHandsOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.DropHeldItems
// (Final, Native, Public)
// Parameters:
// bool                           bDominant                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBoth                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDestroyItem                   (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::DropHeldItems(bool bDominant, bool bBoth, bool bDestroyItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.DropHeldItems");

	APavlovPawn_DropHeldItems_Params params;
	params.bDominant = bDominant;
	params.bBoth = bBoth;
	params.bDestroyItem = bDestroyItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.DropEquipment
// (Final, Native, Public, BlueprintCallable)

void APavlovPawn::DropEquipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.DropEquipment");

	APavlovPawn_DropEquipment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.DropAllItems
// (Final, Native, Public)
// Parameters:
// bool                           bDestroyItems                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInventoryOnly                 (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::DropAllItems(bool bDestroyItems, bool bInventoryOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.DropAllItems");

	APavlovPawn_DropAllItems_Params params;
	params.bDestroyItems = bDestroyItems;
	params.bInventoryOnly = bInventoryOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.DisablePickup
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDisabled                      (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::DisablePickup(bool bDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.DisablePickup");

	APavlovPawn_DisablePickup_Params params;
	params.bDisabled = bDisabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.ClientSanityCheck
// (Net, NetReliable, Native, Event, Public, NetClient)

void APavlovPawn::ClientSanityCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.ClientSanityCheck");

	APavlovPawn_ClientSanityCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.ClientOnExplosionDamage
// (Net, Native, Event, Public, NetClient)

void APavlovPawn::ClientOnExplosionDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.ClientOnExplosionDamage");

	APavlovPawn_ClientOnExplosionDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.CanRevive
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovPawn::CanRevive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.CanRevive");

	APavlovPawn_CanRevive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.CanListenToRadio
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovPawn::CanListenToRadio()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.CanListenToRadio");

	APavlovPawn_CanListenToRadio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.BlowHelmetOff
// (Native, Event, Public, BlueprintEvent)

void APavlovPawn::BlowHelmetOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.BlowHelmetOff");

	APavlovPawn_BlowHelmetOff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.ApplyDelayedWound
// (Final, Native, Private)

void APavlovPawn::ApplyDelayedWound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.ApplyDelayedWound");

	APavlovPawn_ApplyDelayedWound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.AddWatch
// (Net, NetReliable, Native, Event, Public, NetClient)

void APavlovPawn::AddWatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.AddWatch");

	APavlovPawn_AddWatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.AddHitSlow
// (Final, Native, Public, BlueprintCallable)

void APavlovPawn::AddHitSlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.AddHitSlow");

	APavlovPawn_AddHitSlow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.AddAmmo
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   AmmoId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::AddAmmo(const struct FName& AmmoId, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.AddAmmo");

	APavlovPawn_AddAmmo_Params params;
	params.AmmoId = AmmoId;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.ActivateCameraClip
// (Final, Native, Private)

void APavlovPawn::ActivateCameraClip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.ActivateCameraClip");

	APavlovPawn_ActivateCameraClip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.UnBoardVehicle
// (Final, Native, Public, BlueprintCallable)

void APavlovPlayerController::UnBoardVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.UnBoardVehicle");

	APavlovPlayerController_UnBoardVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.TryRestoreEquipmentBySnapshot
// (Final, Native, Public, BlueprintCallable)

void APavlovPlayerController::TryRestoreEquipmentBySnapshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.TryRestoreEquipmentBySnapshot");

	APavlovPlayerController_TryRestoreEquipmentBySnapshot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.TestTeamKill
// (Final, Exec, Native, Public)

void APavlovPlayerController::TestTeamKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.TestTeamKill");

	APavlovPlayerController_TestTeamKill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.TestKillfeed
// (Final, Exec, Native, Public)

void APavlovPlayerController::TestKillfeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.TestKillfeed");

	APavlovPlayerController_TestKillfeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.TakeEquipmentSnapshot
// (Final, Native, Public, BlueprintCallable)

void APavlovPlayerController::TakeEquipmentSnapshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.TakeEquipmentSnapshot");

	APavlovPlayerController_TakeEquipmentSnapshot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.SwitchToSpectator
// (Final, Native, Public, BlueprintCallable)

void APavlovPlayerController::SwitchToSpectator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.SwitchToSpectator");

	APavlovPlayerController_SwitchToSpectator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.SwitchTeam
// (Final, Exec, Native, Public, BlueprintCallable)

void APavlovPlayerController::SwitchTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.SwitchTeam");

	APavlovPlayerController_SwitchTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.SwapControllers
// (Final, Exec, Native, Public, BlueprintCallable)

void APavlovPlayerController::SwapControllers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.SwapControllers");

	APavlovPlayerController_SwapControllers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.Suicide
// (Final, Exec, Native, Public, BlueprintCallable)

void APavlovPlayerController::Suicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.Suicide");

	APavlovPlayerController_Suicide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.SNDPreGameSpawnTimer
// (Final, Native, Public, BlueprintCallable)

void APavlovPlayerController::SNDPreGameSpawnTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.SNDPreGameSpawnTimer");

	APavlovPlayerController_SNDPreGameSpawnTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.SetServerTickRate
// (Final, Exec, Native, Public)
// Parameters:
// int                            Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::SetServerTickRate(int Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.SetServerTickRate");

	APavlovPlayerController_SetServerTickRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.SetHeadMountedDisplayScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::SetHeadMountedDisplayScale(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.SetHeadMountedDisplayScale");

	APavlovPlayerController_SetHeadMountedDisplayScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.SetBuyingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ForDuration                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          BuyZoneMaxDistance             (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::SetBuyingEnabled(float ForDuration, float BuyZoneMaxDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.SetBuyingEnabled");

	APavlovPlayerController_SetBuyingEnabled_Params params;
	params.ForDuration = ForDuration;
	params.BuyZoneMaxDistance = BuyZoneMaxDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.SetBuyingDisabled
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void APavlovPlayerController::SetBuyingDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.SetBuyingDisabled");

	APavlovPlayerController_SetBuyingDisabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.SetBlackScreen
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::SetBlackScreen(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.SetBlackScreen");

	APavlovPlayerController_SetBlackScreen_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerVote
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class AVote*                   Vote                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bYes                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::ServerVote(class AVote* Vote, bool bYes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerVote");

	APavlovPlayerController_ServerVote_Params params;
	params.Vote = Vote;
	params.bYes = bYes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerUnBoardVehicle
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void APavlovPlayerController::ServerUnBoardVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerUnBoardVehicle");

	APavlovPlayerController_ServerUnBoardVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerTestTeamKill
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void APavlovPlayerController::ServerTestTeamKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerTestTeamKill");

	APavlovPlayerController_ServerTestTeamKill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerSwitchTeam
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void APavlovPlayerController::ServerSwitchTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerSwitchTeam");

	APavlovPlayerController_ServerSwitchTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerSuicide
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void APavlovPlayerController::ServerSuicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerSuicide");

	APavlovPlayerController_ServerSuicide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerSetServerTickRate
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::ServerSetServerTickRate(int Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerSetServerTickRate");

	APavlovPlayerController_ServerSetServerTickRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerReportZombieBulletHit
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FClientZombieBulletHit  Hit                            (Parm)

void APavlovPlayerController::ServerReportZombieBulletHit(const struct FClientZombieBulletHit& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerReportZombieBulletHit");

	APavlovPlayerController_ServerReportZombieBulletHit_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerReportVirtualStockChange
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::ServerReportVirtualStockChange(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerReportVirtualStockChange");

	APavlovPlayerController_ServerReportVirtualStockChange_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerReportTrigger
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AGun*                    Gun                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTrigger                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          GunState                       (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void APavlovPlayerController::ServerReportTrigger(class AGun* Gun, bool bTrigger, TArray<unsigned char> GunState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerReportTrigger");

	APavlovPlayerController_ServerReportTrigger_Params params;
	params.Gun = Gun;
	params.bTrigger = bTrigger;
	params.GunState = GunState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerReportShatter
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class ADestructible*           Destructible                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantizeNormal Normal                         (Parm)
// struct FVector_NetQuantize     Location                       (Parm)

void APavlovPlayerController::ServerReportShatter(class ADestructible* Destructible, const struct FVector_NetQuantizeNormal& Normal, const struct FVector_NetQuantize& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerReportShatter");

	APavlovPlayerController_ServerReportShatter_Params params;
	params.Destructible = Destructible;
	params.Normal = Normal;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerReportKnifeDamage
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FClientKnifeDamage      Info                           (Parm)

void APavlovPlayerController::ServerReportKnifeDamage(const struct FClientKnifeDamage& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerReportKnifeDamage");

	APavlovPlayerController_ServerReportKnifeDamage_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerReportHandenessChange
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           bRightHanded                   (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::ServerReportHandenessChange(bool bRightHanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerReportHandenessChange");

	APavlovPlayerController_ServerReportHandenessChange_Params params;
	params.bRightHanded = bRightHanded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerReportCorpseHitByClass
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class APavlovPawn*             PawnCorpse                     (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  GunClass                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::ServerReportCorpseHitByClass(class APavlovPawn* PawnCorpse, class UClass* GunClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerReportCorpseHitByClass");

	APavlovPlayerController_ServerReportCorpseHitByClass_Params params;
	params.PawnCorpse = PawnCorpse;
	params.GunClass = GunClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerReportCorpseHit
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class APavlovPawn*             PawnCorpse                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FImpactDamage           ImpactDamage                   (ConstParm, Parm, ReferenceParm)

void APavlovPlayerController::ServerReportCorpseHit(class APavlovPawn* PawnCorpse, const struct FImpactDamage& ImpactDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerReportCorpseHit");

	APavlovPlayerController_ServerReportCorpseHit_Params params;
	params.PawnCorpse = PawnCorpse;
	params.ImpactDamage = ImpactDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerReportBulletHit
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FClientBulletHit        Hit                            (Parm)

void APavlovPlayerController::ServerReportBulletHit(const struct FClientBulletHit& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerReportBulletHit");

	APavlovPlayerController_ServerReportBulletHit_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerProcessZombieDamage
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void APavlovPlayerController::ServerProcessZombieDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerProcessZombieDamage");

	APavlovPlayerController_ServerProcessZombieDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerKnockZombie
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AZAICharacter*           Zombie                         (Parm, ZeroConstructor, IsPlainOldData)
// EZKnockBackDirection           Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Flags                          (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::ServerKnockZombie(class AZAICharacter* Zombie, EZKnockBackDirection Direction, unsigned char Flags)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerKnockZombie");

	APavlovPlayerController_ServerKnockZombie_Params params;
	params.Zombie = Zombie;
	params.Direction = Direction;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerInstigateVote
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class UClass*                  VoteClass                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Param1                         (Parm, ZeroConstructor)
// int                            Param2                         (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::ServerInstigateVote(class UClass* VoteClass, const struct FString& Param1, int Param2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerInstigateVote");

	APavlovPlayerController_ServerInstigateVote_Params params;
	params.VoteClass = VoteClass;
	params.Param1 = Param1;
	params.Param2 = Param2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerEnterVehicle
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class APavlovVehicle*          Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Seat                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::ServerEnterVehicle(class APavlovVehicle* Vehicle, int Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerEnterVehicle");

	APavlovPlayerController_ServerEnterVehicle_Params params;
	params.Vehicle = Vehicle;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerEnterDigit
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class ABomb*                   Bomb                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::ServerEnterDigit(class ABomb* Bomb, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerEnterDigit");

	APavlovPlayerController_ServerEnterDigit_Params params;
	params.Bomb = Bomb;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerBuy
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FName                   EquipmentName                  (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::ServerBuy(const struct FName& EquipmentName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerBuy");

	APavlovPlayerController_ServerBuy_Params params;
	params.EquipmentName = EquipmentName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerBoardVehicle
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class APavlovWheeledVehicle*   Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Seat                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::ServerBoardVehicle(class APavlovWheeledVehicle* Vehicle, int Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerBoardVehicle");

	APavlovPlayerController_ServerBoardVehicle_Params params;
	params.Vehicle = Vehicle;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerAuthenticate
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FString                 HexTicket                      (Parm, ZeroConstructor)

void APavlovPlayerController::ServerAuthenticate(const struct FString& HexTicket)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerAuthenticate");

	APavlovPlayerController_ServerAuthenticate_Params params;
	params.HexTicket = HexTicket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerAbstainToVote
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)

void APavlovPlayerController::ServerAbstainToVote()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerAbstainToVote");

	APavlovPlayerController_ServerAbstainToVote_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ResetPlayerHeight
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void APavlovPlayerController::ResetPlayerHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ResetPlayerHeight");

	APavlovPlayerController_ResetPlayerHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ResetPlayerEffects
// (Final, Native, Public)

void APavlovPlayerController::ResetPlayerEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ResetPlayerEffects");

	APavlovPlayerController_ResetPlayerEffects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.PunishTeamKiller
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)

void APavlovPlayerController::PunishTeamKiller()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.PunishTeamKiller");

	APavlovPlayerController_PunishTeamKiller_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.OnZombieClientKnock
// (Final, Native, Public)
// Parameters:
// class AZAICharacter*           Zombie                         (Parm, ZeroConstructor, IsPlainOldData)
// EZKnockBackDirection           Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Flags                          (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::OnZombieClientKnock(class AZAICharacter* Zombie, EZKnockBackDirection Direction, unsigned char Flags)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.OnZombieClientKnock");

	APavlovPlayerController_OnZombieClientKnock_Params params;
	params.Zombie = Zombie;
	params.Direction = Direction;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.OnMenuUniverseChanged
// (Final, Native, Private)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::OnMenuUniverseChanged(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.OnMenuUniverseChanged");

	APavlovPlayerController_OnMenuUniverseChanged_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.OnAuthTimedout
// (Final, Native, Protected)

void APavlovPlayerController::OnAuthTimedout()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.OnAuthTimedout");

	APavlovPlayerController_OnAuthTimedout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.OnAuthTicketReceived
// (Final, Native, Protected)
// Parameters:
// bool                           bSucceed                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 HexAuthTicket                  (Parm, ZeroConstructor)

void APavlovPlayerController::OnAuthTicketReceived(bool bSucceed, const struct FString& HexAuthTicket)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.OnAuthTicketReceived");

	APavlovPlayerController_OnAuthTicketReceived_Params params;
	params.bSucceed = bSucceed;
	params.HexAuthTicket = HexAuthTicket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.MulticastDebugPoint
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Text                           (Parm, ZeroConstructor)

void APavlovPlayerController::MulticastDebugPoint(const struct FVector& Location, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.MulticastDebugPoint");

	APavlovPlayerController_MulticastDebugPoint_Params params;
	params.Location = Location;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.LeaveVehicle
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)

void APavlovPlayerController::LeaveVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.LeaveVehicle");

	APavlovPlayerController_LeaveVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.KilledInVehicle
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class APavlovVehicle*          Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::KilledInVehicle(class APavlovVehicle* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.KilledInVehicle");

	APavlovPlayerController_KilledInVehicle_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.IsInVehicle
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovPlayerController::IsInVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.IsInVehicle");

	APavlovPlayerController_IsInVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPlayerController.GetHeadMountedDisplayScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APavlovPlayerController::GetHeadMountedDisplayScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.GetHeadMountedDisplayScale");

	APavlovPlayerController_GetHeadMountedDisplayScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPlayerController.ForgiveTeamKiller
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)

void APavlovPlayerController::ForgiveTeamKiller()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ForgiveTeamKiller");

	APavlovPlayerController_ForgiveTeamKiller_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ExecuteRconCommand
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// struct FRconCommand            RconCommand                    (Parm)

void APavlovPlayerController::ExecuteRconCommand(const struct FRconCommand& RconCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ExecuteRconCommand");

	APavlovPlayerController_ExecuteRconCommand_Params params;
	params.RconCommand = RconCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.EnterVehicle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovVehicle*          Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Seat                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::EnterVehicle(class APavlovVehicle* Vehicle, int Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.EnterVehicle");

	APavlovPlayerController_EnterVehicle_Params params;
	params.Vehicle = Vehicle;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ClientSetBuying
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::ClientSetBuying(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ClientSetBuying");

	APavlovPlayerController_ClientSetBuying_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ClientServerConnect
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FServerConnectParams    Params                         (ConstParm, Parm, ReferenceParm)

void APavlovPlayerController::ClientServerConnect(const struct FServerConnectParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ClientServerConnect");

	APavlovPlayerController_ClientServerConnect_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ClientReportMatchEnd
// (Net, NetReliable, Native, Event, Public, NetClient)

void APavlovPlayerController::ClientReportMatchEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ClientReportMatchEnd");

	APavlovPlayerController_ClientReportMatchEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ClientPlayKillPing
// (Net, Native, Event, Public, NetClient, BlueprintCallable)

void APavlovPlayerController::ClientPlayKillPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ClientPlayKillPing");

	APavlovPlayerController_ClientPlayKillPing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ClientOnTeamKilled
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class APavlovPlayerState*      CulpritTeamKiller              (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::ClientOnTeamKilled(class APavlovPlayerState* CulpritTeamKiller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ClientOnTeamKilled");

	APavlovPlayerController_ClientOnTeamKilled_Params params;
	params.CulpritTeamKiller = CulpritTeamKiller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ClientInstigateFlashVision
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:
// float                          Seconds                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ViewAlpha                      (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::ClientInstigateFlashVision(float Seconds, float ViewAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ClientInstigateFlashVision");

	APavlovPlayerController_ClientInstigateFlashVision_Params params;
	params.Seconds = Seconds;
	params.ViewAlpha = ViewAlpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ClientInstigateFlash
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:
// float                          Seconds                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ViewAlpha                      (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::ClientInstigateFlash(float Seconds, float ViewAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ClientInstigateFlash");

	APavlovPlayerController_ClientInstigateFlash_Params params;
	params.Seconds = Seconds;
	params.ViewAlpha = ViewAlpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ClientDisplayMessage
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void APavlovPlayerController::ClientDisplayMessage(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ClientDisplayMessage");

	APavlovPlayerController_ClientDisplayMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ClientConnectTo
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FString                 ConnectURL                     (Parm, ZeroConstructor)

void APavlovPlayerController::ClientConnectTo(const struct FString& ConnectURL)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ClientConnectTo");

	APavlovPlayerController_ClientConnectTo_Params params;
	params.ConnectURL = ConnectURL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ClientAuthenticate
// (Net, NetReliable, Native, Event, Protected, NetClient)

void APavlovPlayerController::ClientAuthenticate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ClientAuthenticate");

	APavlovPlayerController_ClientAuthenticate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.Buy
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   EquipmentName                  (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::Buy(const struct FName& EquipmentName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.Buy");

	APavlovPlayerController_Buy_Params params;
	params.EquipmentName = EquipmentName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.BoardVehicle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovWheeledVehicle*   Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Seat                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::BoardVehicle(class APavlovWheeledVehicle* Vehicle, int Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.BoardVehicle");

	APavlovPlayerController_BoardVehicle_Params params;
	params.Vehicle = Vehicle;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ApplySkippedHeadMountedDisplayScale
// (Final, Native, Public, BlueprintCallable)

void APavlovPlayerController::ApplySkippedHeadMountedDisplayScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ApplySkippedHeadMountedDisplayScale");

	APavlovPlayerController_ApplySkippedHeadMountedDisplayScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerState.SendJoinDataToClient
// (Final, Native, Public)
// Parameters:
// class UJsonUtilsObj*           JsonObj                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovPlayerState::SendJoinDataToClient(class UJsonUtilsObj* JsonObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerState.SendJoinDataToClient");

	APavlovPlayerState_SendJoinDataToClient_Params params;
	params.JsonObj = JsonObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPlayerState.Reset
// (Final, Native, Public, BlueprintCallable)

void APavlovPlayerState::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerState.Reset");

	APavlovPlayerState_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerState.ReceiveJoinJsonData
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<unsigned char>          JoinData                       (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void APavlovPlayerState::ReceiveJoinJsonData(TArray<unsigned char> JoinData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerState.ReceiveJoinJsonData");

	APavlovPlayerState_ReceiveJoinJsonData_Params params;
	params.JoinData = JoinData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerState.OnRep_HasPlayerProxy
// (Native, Public)

void APavlovPlayerState::OnRep_HasPlayerProxy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerState.OnRep_HasPlayerProxy");

	APavlovPlayerState_OnRep_HasPlayerProxy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerState.OnRep_Flair
// (Native, Public)

void APavlovPlayerState::OnRep_Flair()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerState.OnRep_Flair");

	APavlovPlayerState_OnRep_Flair_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerState.OnRep_Cash
// (Native, Public)

void APavlovPlayerState::OnRep_Cash()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerState.OnRep_Cash");

	APavlovPlayerState_OnRep_Cash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerState.LoadEquippedSkins
// (Final, Native, Public)

void APavlovPlayerState::LoadEquippedSkins()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerState.LoadEquippedSkins");

	APavlovPlayerState_LoadEquippedSkins_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerState.IsAbleToBuy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   EquipmentName                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovPlayerState::IsAbleToBuy(const struct FName& EquipmentName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerState.IsAbleToBuy");

	APavlovPlayerState_IsAbleToBuy_Params params;
	params.EquipmentName = EquipmentName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPlayerState.HasSkinOverride
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovPlayerState::HasSkinOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerState.HasSkinOverride");

	APavlovPlayerState_HasSkinOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPlayerState.HasSkinEquipped
// (Final, Native, Public, Const)
// Parameters:
// struct FName                   ItemName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovPlayerState::HasSkinEquipped(const struct FName& ItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerState.HasSkinEquipped");

	APavlovPlayerState_HasSkinEquipped_Params params;
	params.ItemName = ItemName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPlayerState.GetVRDevice
// (Final, Native, Public)
// Parameters:
// EVRDevice                      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EVRDevice APavlovPlayerState::GetVRDevice()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerState.GetVRDevice");

	APavlovPlayerState_GetVRDevice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPlayerState.GetTeamId
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlovPlayerState::GetTeamId()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerState.GetTeamId");

	APavlovPlayerState_GetTeamId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPlayerState.GetStringId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString APavlovPlayerState::GetStringId()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerState.GetStringId");

	APavlovPlayerState_GetStringId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPlayerState.GetSkinId
// (Final, Native, Public, Const)
// Parameters:
// struct FName                   ItemName                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlovPlayerState::GetSkinId(const struct FName& ItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerState.GetSkinId");

	APavlovPlayerState_GetSkinId_Params params;
	params.ItemName = ItemName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPlayerState.DisableFallSound
// (Final, Native, Public, BlueprintCallable)

void APavlovPlayerState::DisableFallSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerState.DisableFallSound");

	APavlovPlayerState_DisableFallSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerState.AddEquippedSkinByFamily
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ItemName                       (Parm, ZeroConstructor, IsPlainOldData)
// ESkinFamily                    SkinFamily                     (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerState::AddEquippedSkinByFamily(const struct FName& ItemName, ESkinFamily SkinFamily)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerState.AddEquippedSkinByFamily");

	APavlovPlayerState_AddEquippedSkinByFamily_Params params;
	params.ItemName = ItemName;
	params.SkinFamily = SkinFamily;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerState.AddEquippedSkin
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ItemName                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkinId                         (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerState::AddEquippedSkin(const struct FName& ItemName, int SkinId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerState.AddEquippedSkin");

	APavlovPlayerState_AddEquippedSkin_Params params;
	params.ItemName = ItemName;
	params.SkinId = SkinId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovSimpleVehicleMovement.UpdateWheels
// (Native, Protected, HasOutParms)
// Parameters:
// bool                           bRight                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FReplicatedWheelState   WheelUpdate                    (ConstParm, Parm, OutParm, ReferenceParm)

void UPavlovSimpleVehicleMovement::UpdateWheels(bool bRight, const struct FReplicatedWheelState& WheelUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovSimpleVehicleMovement.UpdateWheels");

	UPavlovSimpleVehicleMovement_UpdateWheels_Params params;
	params.bRight = bRight;
	params.WheelUpdate = WheelUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovSimpleVehicleMovement.SetWheelInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bRight                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FReplicatedWheelState   WheelsState                    (Parm)

void UPavlovSimpleVehicleMovement::SetWheelInfo(bool bRight, const struct FReplicatedWheelState& WheelsState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovSimpleVehicleMovement.SetWheelInfo");

	UPavlovSimpleVehicleMovement_SetWheelInfo_Params params;
	params.bRight = bRight;
	params.WheelsState = WheelsState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovSimpleVehicleMovement.SetWheelDriveTorque
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bRight                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DriveTorque                    (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovSimpleVehicleMovement::SetWheelDriveTorque(bool bRight, float DriveTorque)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovSimpleVehicleMovement.SetWheelDriveTorque");

	UPavlovSimpleVehicleMovement_SetWheelDriveTorque_Params params;
	params.bRight = bRight;
	params.DriveTorque = DriveTorque;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovSimpleVehicleMovement.SetWheelDriveAndBrakeTorque
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bRight                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DriveTorque                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          BrakeTorque                    (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovSimpleVehicleMovement::SetWheelDriveAndBrakeTorque(bool bRight, float DriveTorque, float BrakeTorque)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovSimpleVehicleMovement.SetWheelDriveAndBrakeTorque");

	UPavlovSimpleVehicleMovement_SetWheelDriveAndBrakeTorque_Params params;
	params.bRight = bRight;
	params.DriveTorque = DriveTorque;
	params.BrakeTorque = BrakeTorque;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovSimpleVehicleMovement.SetWheelBrakingTorque
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bRight                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          BrakeTorque                    (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovSimpleVehicleMovement::SetWheelBrakingTorque(bool bRight, float BrakeTorque)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovSimpleVehicleMovement.SetWheelBrakingTorque");

	UPavlovSimpleVehicleMovement_SetWheelBrakingTorque_Params params;
	params.bRight = bRight;
	params.BrakeTorque = BrakeTorque;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovSimpleVehicleMovement.SetTurnTorque
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          TurningTorque                  (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovSimpleVehicleMovement::SetTurnTorque(float TurningTorque)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovSimpleVehicleMovement.SetTurnTorque");

	UPavlovSimpleVehicleMovement_SetTurnTorque_Params params;
	params.TurningTorque = TurningTorque;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovSimpleVehicleMovement.ServerUpdateWheels
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FReplicatedWheelState   LeftWheelInput                 (ConstParm, Parm, ReferenceParm)
// struct FReplicatedWheelState   RightWheelInput                (ConstParm, Parm, ReferenceParm)
// float                          TurnTorque                     (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovSimpleVehicleMovement::ServerUpdateWheels(const struct FReplicatedWheelState& LeftWheelInput, const struct FReplicatedWheelState& RightWheelInput, float TurnTorque)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovSimpleVehicleMovement.ServerUpdateWheels");

	UPavlovSimpleVehicleMovement_ServerUpdateWheels_Params params;
	params.LeftWheelInput = LeftWheelInput;
	params.RightWheelInput = RightWheelInput;
	params.TurnTorque = TurnTorque;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovSimpleVehicleMovement.ServerEBrake
// (Final, BlueprintAuthorityOnly, Native, Public)

void UPavlovSimpleVehicleMovement::ServerEBrake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovSimpleVehicleMovement.ServerEBrake");

	UPavlovSimpleVehicleMovement_ServerEBrake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovSpectatorPawn.ScrubToLive
// (Final, Native, Public, BlueprintCallable)

void APavlovSpectatorPawn::ScrubToLive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovSpectatorPawn.ScrubToLive");

	APavlovSpectatorPawn_ScrubToLive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovSpectatorPawn.ScrubRelative
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Seconds                        (Parm, ZeroConstructor, IsPlainOldData)

void APavlovSpectatorPawn::ScrubRelative(float Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovSpectatorPawn.ScrubRelative");

	APavlovSpectatorPawn_ScrubRelative_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovSpectatorPawn.ScrubNormalized
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NormalizedTime                 (Parm, ZeroConstructor, IsPlainOldData)

void APavlovSpectatorPawn::ScrubNormalized(float NormalizedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovSpectatorPawn.ScrubNormalized");

	APavlovSpectatorPawn_ScrubNormalized_Params params;
	params.NormalizedTime = NormalizedTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovSpectatorPawn.Scrub
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovSpectatorPawn::Scrub(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovSpectatorPawn.Scrub");

	APavlovSpectatorPawn_Scrub_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovSpectatorPawn.OnScrubChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bScrubing                      (Parm, ZeroConstructor, IsPlainOldData)

void APavlovSpectatorPawn::OnScrubChanged(bool bScrubing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovSpectatorPawn.OnScrubChanged");

	APavlovSpectatorPawn_OnScrubChanged_Params params;
	params.bScrubing = bScrubing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovSpectatorPawn.OnGotoTime
// (Final, Native, Private)
// Parameters:
// bool                           bWasSuccessful                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void APavlovSpectatorPawn::OnGotoTime(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovSpectatorPawn.OnGotoTime");

	APavlovSpectatorPawn_OnGotoTime_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovSpectatorPawn.OnDemoPlaybackError
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDemoPlayFailure>  FailureType                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ErrorString                    (Parm, ZeroConstructor)

void APavlovSpectatorPawn::OnDemoPlaybackError(TEnumAsByte<EDemoPlayFailure> FailureType, const struct FString& ErrorString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovSpectatorPawn.OnDemoPlaybackError");

	APavlovSpectatorPawn_OnDemoPlaybackError_Params params;
	params.FailureType = FailureType;
	params.ErrorString = ErrorString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovSpectatorPawn.GetNormalizedScrubTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APavlovSpectatorPawn::GetNormalizedScrubTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovSpectatorPawn.GetNormalizedScrubTime");

	APavlovSpectatorPawn_GetNormalizedScrubTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.SwapHands
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovStatics::STATIC_SwapHands(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.SwapHands");

	UPavlovStatics_SwapHands_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovStatics.SupportsGripForce
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovStatics::STATIC_SupportsGripForce()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.SupportsGripForce");

	UPavlovStatics_SupportsGripForce_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.SpawnLocalSound2DByPawn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovStatics::STATIC_SpawnLocalSound2DByPawn(class APawn* Pawn, class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.SpawnLocalSound2DByPawn");

	UPavlovStatics_SpawnLocalSound2DByPawn_Params params;
	params.Pawn = Pawn;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovStatics.SpawnLocalSound2D
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovStatics::STATIC_SpawnLocalSound2D(class APlayerController* Controller, class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.SpawnLocalSound2D");

	UPavlovStatics_SpawnLocalSound2D_Params params;
	params.Controller = Controller;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovStatics.SpawnHitFeedbackSound
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// EHitFeedbackType               Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovStatics::STATIC_SpawnHitFeedbackSound(class UObject* WorldContextObject, EHitFeedbackType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.SpawnHitFeedbackSound");

	UPavlovStatics_SpawnHitFeedbackSound_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovStatics.SetPlayerEffectsDisabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDisabled                      (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovStatics::STATIC_SetPlayerEffectsDisabled(class UObject* WorldContextObject, bool bDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.SetPlayerEffectsDisabled");

	UPavlovStatics_SetPlayerEffectsDisabled_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bDisabled = bDisabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovStatics.SetPavlovSplash
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                SplashTexture                  (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovStatics::STATIC_SetPavlovSplash(bool bVisible, class UTexture* SplashTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.SetPavlovSplash");

	UPavlovStatics_SetPavlovSplash_Params params;
	params.bVisible = bVisible;
	params.SplashTexture = SplashTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovStatics.SetActorNetDormancy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetDormancy>      Dormancy                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovStatics::STATIC_SetActorNetDormancy(class AActor* Actor, TEnumAsByte<ENetDormancy> Dormancy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.SetActorNetDormancy");

	UPavlovStatics_SetActorNetDormancy_Params params;
	params.Actor = Actor;
	params.Dormancy = Dormancy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovStatics.ResetVoiceCaptureDevice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovStatics::STATIC_ResetVoiceCaptureDevice(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.ResetVoiceCaptureDevice");

	UPavlovStatics_ResetVoiceCaptureDevice_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovStatics.PropRadialDamage
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          BaseDamage                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinimumDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          DamageInnerRadius              (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageOuterRadius              (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageFalloff                  (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageTypeClass                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          IgnoreActors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedByController         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionChannel> DamagePreventionChannel        (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovStatics::STATIC_PropRadialDamage(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.PropRadialDamage");

	UPavlovStatics_PropRadialDamage_Params params;
	params.WorldContextObject = WorldContextObject;
	params.BaseDamage = BaseDamage;
	params.MinimumDamage = MinimumDamage;
	params.Origin = Origin;
	params.DamageInnerRadius = DamageInnerRadius;
	params.DamageOuterRadius = DamageOuterRadius;
	params.DamageFalloff = DamageFalloff;
	params.DamageTypeClass = DamageTypeClass;
	params.IgnoreActors = IgnoreActors;
	params.DamageCauser = DamageCauser;
	params.InstigatedByController = InstigatedByController;
	params.DamagePreventionChannel = DamagePreventionChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovStatics.OpenPavlovMapById
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FString                 Options                        (Parm, ZeroConstructor)
// bool                           bNoDelay                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovStatics::STATIC_OpenPavlovMapById(class UObject* WorldContextObject, const struct FString& ID, const struct FString& Options, bool bNoDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.OpenPavlovMapById");

	UPavlovStatics_OpenPavlovMapById_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ID = ID;
	params.Options = Options;
	params.bNoDelay = bNoDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovStatics.IsXmas
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovStatics::STATIC_IsXmas(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.IsXmas");

	UPavlovStatics_IsXmas_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.IsReplay
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovStatics::STATIC_IsReplay(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.IsReplay");

	UPavlovStatics_IsReplay_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.IsQuestServer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovStatics::STATIC_IsQuestServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.IsQuestServer");

	UPavlovStatics_IsQuestServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.IsQuest
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovStatics::STATIC_IsQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.IsQuest");

	UPavlovStatics_IsQuest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.IsPlayingOnlineGame
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovStatics::STATIC_IsPlayingOnlineGame(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.IsPlayingOnlineGame");

	UPavlovStatics_IsPlayingOnlineGame_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.IsOculusTouch
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovStatics::STATIC_IsOculusTouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.IsOculusTouch");

	UPavlovStatics_IsOculusTouch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.IsInEntry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovStatics::STATIC_IsInEntry(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.IsInEntry");

	UPavlovStatics_IsInEntry_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.IsHalloween
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovStatics::STATIC_IsHalloween(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.IsHalloween");

	UPavlovStatics_IsHalloween_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.IsEditor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovStatics::STATIC_IsEditor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.IsEditor");

	UPavlovStatics_IsEditor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.IsCompetitiveMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovStatics::STATIC_IsCompetitiveMode(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.IsCompetitiveMode");

	UPavlovStatics_IsCompetitiveMode_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.IsBombDropped
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovStatics::STATIC_IsBombDropped(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.IsBombDropped");

	UPavlovStatics_IsBombDropped_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.IsAprilFools
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovStatics::STATIC_IsAprilFools(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.IsAprilFools");

	UPavlovStatics_IsAprilFools_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.HasGunOptimizations
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovStatics::STATIC_HasGunOptimizations()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.HasGunOptimizations");

	UPavlovStatics_HasGunOptimizations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GoToStartUpMap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovStatics::STATIC_GoToStartUpMap(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GoToStartUpMap");

	UPavlovStatics_GoToStartUpMap_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovStatics.GoToEntry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovStatics::STATIC_GoToEntry(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GoToEntry");

	UPavlovStatics_GoToEntry_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovStatics.GetWorkshop
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UWorkshop*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWorkshop* UPavlovStatics::STATIC_GetWorkshop(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetWorkshop");

	UPavlovStatics_GetWorkshop_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetVoiceLevelPeak
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPavlovStatics::STATIC_GetVoiceLevelPeak(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetVoiceLevelPeak");

	UPavlovStatics_GetVoiceLevelPeak_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetUserId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPavlovStatics::STATIC_GetUserId(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetUserId");

	UPavlovStatics_GetUserId_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetUIManager
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UUIManager*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUIManager* UPavlovStatics::STATIC_GetUIManager(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetUIManager");

	UPavlovStatics_GetUIManager_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetTutorial
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UTutorial*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTutorial* UPavlovStatics::STATIC_GetTutorial(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetTutorial");

	UPavlovStatics_GetTutorial_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetSpectatorTVCamera
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class ASpectatorTVCamera*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASpectatorTVCamera* UPavlovStatics::STATIC_GetSpectatorTVCamera(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetSpectatorTVCamera");

	UPavlovStatics_GetSpectatorTVCamera_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetShackQualityLevel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPavlovStatics::STATIC_GetShackQualityLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetShackQualityLevel");

	UPavlovStatics_GetShackQualityLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetShackDeviceType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EShackDeviceType               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EShackDeviceType UPavlovStatics::STATIC_GetShackDeviceType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetShackDeviceType");

	UPavlovStatics_GetShackDeviceType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetRefPoseBoneTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMesh                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UPavlovStatics::STATIC_GetRefPoseBoneTransform(class USkeletalMeshComponent* SkelMesh, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetRefPoseBoneTransform");

	UPavlovStatics_GetRefPoseBoneTransform_Params params;
	params.SkelMesh = SkelMesh;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetPlayerUniqueIdAsString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPavlovStatics::STATIC_GetPlayerUniqueIdAsString(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetPlayerUniqueIdAsString");

	UPavlovStatics_GetPlayerUniqueIdAsString_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetPlayerEquipment
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Primary                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           Secondary                      (Parm, OutParm, ZeroConstructor)

void UPavlovStatics::STATIC_GetPlayerEquipment(class APlayerState* PlayerState, struct FName* Primary, TArray<struct FName>* Secondary)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetPlayerEquipment");

	UPavlovStatics_GetPlayerEquipment_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Primary != nullptr)
		*Primary = params.Primary;
	if (Secondary != nullptr)
		*Secondary = params.Secondary;
}


// Function Pavlov.PavlovStatics.GetPlayerEffects
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AGlobalPlayerEffects*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AGlobalPlayerEffects* UPavlovStatics::STATIC_GetPlayerEffects(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetPlayerEffects");

	UPavlovStatics_GetPlayerEffects_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetPawnByPlayerState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// class APavlovPawn*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APavlovPawn* UPavlovStatics::STATIC_GetPawnByPlayerState(class UObject* WorldContextObject, class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetPawnByPlayerState");

	UPavlovStatics_GetPawnByPlayerState_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetPavlovVersionString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPavlovStatics::STATIC_GetPavlovVersionString(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetPavlovVersionString");

	UPavlovStatics_GetPavlovVersionString_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetPavlovLobby
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UPavlovLobby*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPavlovLobby* UPavlovStatics::STATIC_GetPavlovLobby(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetPavlovLobby");

	UPavlovStatics_GetPavlovLobby_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetPavlovGameUserSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPavlovGameUserSettings* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPavlovGameUserSettings* UPavlovStatics::STATIC_GetPavlovGameUserSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetPavlovGameUserSettings");

	UPavlovStatics_GetPavlovGameUserSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetPavlovGameInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UPavlovGameInstance*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPavlovGameInstance* UPavlovStatics::STATIC_GetPavlovGameInstance(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetPavlovGameInstance");

	UPavlovStatics_GetPavlovGameInstance_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetMeshMaterials
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UStaticMesh*             StaticMesh                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMaterialInterface*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMaterialInterface*> UPavlovStatics::STATIC_GetMeshMaterials(class UStaticMesh* StaticMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetMeshMaterials");

	UPavlovStatics_GetMeshMaterials_Params params;
	params.StaticMesh = StaticMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetMenuUniverseInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AMenuUniverse*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AMenuUniverse* UPavlovStatics::STATIC_GetMenuUniverseInstance(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetMenuUniverseInstance");

	UPavlovStatics_GetMenuUniverseInstance_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetMatchmaking
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UMatchmaking*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMatchmaking* UPavlovStatics::STATIC_GetMatchmaking(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetMatchmaking");

	UPavlovStatics_GetMatchmaking_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetLocalPlayerState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APavlovPlayerState*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APavlovPlayerState* UPavlovStatics::STATIC_GetLocalPlayerState(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetLocalPlayerState");

	UPavlovStatics_GetLocalPlayerState_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetLocalPlayerCameraTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UPavlovStatics::STATIC_GetLocalPlayerCameraTransform(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetLocalPlayerCameraTransform");

	UPavlovStatics_GetLocalPlayerCameraTransform_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetHoliday
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// EHolidays                      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EHolidays UPavlovStatics::STATIC_GetHoliday(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetHoliday");

	UPavlovStatics_GetHoliday_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetFriendsUserId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UPavlovStatics::STATIC_GetFriendsUserId(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetFriendsUserId");

	UPavlovStatics_GetFriendsUserId_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetDefaultObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  ObjectClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UPavlovStatics::STATIC_GetDefaultObject(class UClass* ObjectClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetDefaultObject");

	UPavlovStatics_GetDefaultObject_Params params;
	params.ObjectClass = ObjectClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetControllerByPlayerState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AController* UPavlovStatics::STATIC_GetControllerByPlayerState(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetControllerByPlayerState");

	UPavlovStatics_GetControllerByPlayerState_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetBoneTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMesh                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UPavlovStatics::STATIC_GetBoneTransform(class USkeletalMeshComponent* SkelMesh, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetBoneTransform");

	UPavlovStatics_GetBoneTransform_Params params;
	params.SkelMesh = SkelMesh;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetBombInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class ABomb*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABomb* UPavlovStatics::STATIC_GetBombInstance(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetBombInstance");

	UPavlovStatics_GetBombInstance_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.ForceNoSoundOcclusion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAudioComponent*         AudioComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPavlovStatics::STATIC_ForceNoSoundOcclusion(class UAudioComponent* AudioComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.ForceNoSoundOcclusion");

	UPavlovStatics_ForceNoSoundOcclusion_Params params;
	params.AudioComp = AudioComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovStatics.FlushActorNetDormancy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovStatics::STATIC_FlushActorNetDormancy(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.FlushActorNetDormancy");

	UPavlovStatics_FlushActorNetDormancy_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovStatics.FindClosestBombPlantSpot
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RefLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// class ABombPlantSpot*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABombPlantSpot* UPavlovStatics::STATIC_FindClosestBombPlantSpot(class UObject* WorldContextObject, const struct FVector& RefLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.FindClosestBombPlantSpot");

	UPavlovStatics_FindClosestBombPlantSpot_Params params;
	params.WorldContextObject = WorldContextObject;
	params.RefLocation = RefLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.ArePawnsHostile
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   A                              (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   B                              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovStatics::STATIC_ArePawnsHostile(class UObject* WorldContextObject, class APawn* A, class APawn* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.ArePawnsHostile");

	UPavlovStatics_ArePawnsHostile_Params params;
	params.WorldContextObject = WorldContextObject;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle.ZombieHit_Multi
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// struct FVector_NetQuantize     HitLocation                    (Parm)

void APavlovVehicle::ZombieHit_Multi(const struct FVector_NetQuantize& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.ZombieHit_Multi");

	APavlovVehicle_ZombieHit_Multi_Params params;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle.VehicleSoundSetup
// (Native, Public)
// Parameters:
// bool                           bEntered                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovVehicle::VehicleSoundSetup(bool bEntered)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.VehicleSoundSetup");

	APavlovVehicle_VehicleSoundSetup_Params params;
	params.bEntered = bEntered;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle.VehicleKilled_Multi
// (Net, Native, Event, NetMulticast, Protected)

void APavlovVehicle::VehicleKilled_Multi()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.VehicleKilled_Multi");

	APavlovVehicle_VehicleKilled_Multi_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle.TryFlipVehicle
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void APavlovVehicle::TryFlipVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.TryFlipVehicle");

	APavlovVehicle_TryFlipVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle.TakeRadialDamage
// (Final, Native, Protected, HasDefaults)
// Parameters:
// class AActor*                  DamagedActor                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void APavlovVehicle::TakeRadialDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.TakeRadialDamage");

	APavlovVehicle_TakeRadialDamage_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.Origin = Origin;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle.TakePointDamage
// (Final, Native, Protected, HasDefaults)
// Parameters:
// class AActor*                  DamagedActor                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ShotFromDirection              (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void APavlovVehicle::TakePointDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.TakePointDamage");

	APavlovVehicle_TakePointDamage_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.HitLocation = HitLocation;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.DamageType = DamageType;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle.StartVehicleDespawnTimer
// (Final, Native, Public)

void APavlovVehicle::StartVehicleDespawnTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.StartVehicleDespawnTimer");

	APavlovVehicle_StartVehicleDespawnTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle.SetVehicleOccupied
// (Final, Native, Protected)
// Parameters:
// bool                           bOccupied                      (Parm, ZeroConstructor, IsPlainOldData)

void APavlovVehicle::SetVehicleOccupied(bool bOccupied)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.SetVehicleOccupied");

	APavlovVehicle_SetVehicleOccupied_Params params;
	params.bOccupied = bOccupied;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle.SetEngineState
// (Final, Native, Protected)
// Parameters:
// bool                           bStart                         (Parm, ZeroConstructor, IsPlainOldData)

void APavlovVehicle::SetEngineState(bool bStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.SetEngineState");

	APavlovVehicle_SetEngineState_Params params;
	params.bStart = bStart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle.SeatVehicleTeamID
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewTeamId                      (Parm, ZeroConstructor, IsPlainOldData)

void APavlovVehicle::SeatVehicleTeamID(int NewTeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.SeatVehicleTeamID");

	APavlovVehicle_SeatVehicleTeamID_Params params;
	params.NewTeamId = NewTeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle.RepairVehicle
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovVehicle::RepairVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.RepairVehicle");

	APavlovVehicle_RepairVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle.PlayRepairSound_Multi
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// bool                           bFullyRepaired                 (Parm, ZeroConstructor, IsPlainOldData)

void APavlovVehicle::PlayRepairSound_Multi(bool bFullyRepaired)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.PlayRepairSound_Multi");

	APavlovVehicle_PlayRepairSound_Multi_Params params;
	params.bFullyRepaired = bFullyRepaired;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle.PlayerEnterExit_Multi
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           bEntered                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Seat                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovVehicle::PlayerEnterExit_Multi(bool bEntered, int Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.PlayerEnterExit_Multi");

	APavlovVehicle_PlayerEnterExit_Multi_Params params;
	params.bEntered = bEntered;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle.OutOfBounds
// (Final, Native, Public)
// Parameters:
// bool                           bOut                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovVehicle::OutOfBounds(bool bOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.OutOfBounds");

	APavlovVehicle_OutOfBounds_Params params;
	params.bOut = bOut;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle.OnVehicleCritical
// (Native, Protected)
// Parameters:
// bool                           bCritical                      (Parm, ZeroConstructor, IsPlainOldData)

void APavlovVehicle::OnVehicleCritical(bool bCritical)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.OnVehicleCritical");

	APavlovVehicle_OnVehicleCritical_Params params;
	params.bCritical = bCritical;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle.OnRep_VehicleDamageState
// (Final, Native, Protected)
// Parameters:
// EVehicleDamageState            OldVehicleDamageState          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void APavlovVehicle::OnRep_VehicleDamageState(EVehicleDamageState OldVehicleDamageState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.OnRep_VehicleDamageState");

	APavlovVehicle_OnRep_VehicleDamageState_Params params;
	params.OldVehicleDamageState = OldVehicleDamageState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle.OnRep_Occupied
// (Final, Native, Protected)

void APavlovVehicle::OnRep_Occupied()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.OnRep_Occupied");

	APavlovVehicle_OnRep_Occupied_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle.OnRep_EngineOn
// (Final, Native, Protected)

void APavlovVehicle::OnRep_EngineOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.OnRep_EngineOn");

	APavlovVehicle_OnRep_EngineOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle.OnEngineChanged
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// bool                           bOn                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDisabled                      (Parm, ZeroConstructor, IsPlainOldData)

void APavlovVehicle::OnEngineChanged(bool bOn, bool bDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.OnEngineChanged");

	APavlovVehicle_OnEngineChanged_Params params;
	params.bOn = bOn;
	params.bDisabled = bDisabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle.IsVehicleEmpty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovVehicle::IsVehicleEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.IsVehicleEmpty");

	APavlovVehicle_IsVehicleEmpty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle.IsVehicleDisabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovVehicle::IsVehicleDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.IsVehicleDisabled");

	APavlovVehicle_IsVehicleDisabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle.IsSeatEmpty
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Seat                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovVehicle::IsSeatEmpty(int Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.IsSeatEmpty");

	APavlovVehicle_IsSeatEmpty_Params params;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle.IsLocalPlayerInVehicle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovVehicle::IsLocalPlayerInVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.IsLocalPlayerInVehicle");

	APavlovVehicle_IsLocalPlayerInVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle.IsLocalPlayerInSeat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Seat                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovVehicle::IsLocalPlayerInSeat(int Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.IsLocalPlayerInSeat");

	APavlovVehicle_IsLocalPlayerInSeat_Params params;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle.IsDriver
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UVehicleOccupant*        Occupant                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovVehicle::IsDriver(class UVehicleOccupant* Occupant)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.IsDriver");

	APavlovVehicle_IsDriver_Params params;
	params.Occupant = Occupant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle.HasDriver
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovVehicle::HasDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.HasDriver");

	APavlovVehicle_HasDriver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle.GetVehicleInterior
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Seat                           (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* APavlovVehicle::GetVehicleInterior(int Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.GetVehicleInterior");

	APavlovVehicle_GetVehicleInterior_Params params;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle.GetVehicleEngineAudioComponents
// (Event, Public, BlueprintEvent)
// Parameters:
// TArray<class UAudioComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UAudioComponent*> APavlovVehicle::GetVehicleEngineAudioComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.GetVehicleEngineAudioComponents");

	APavlovVehicle_GetVehicleEngineAudioComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle.GetVehicleAudioComponents
// (Event, Public, BlueprintEvent)
// Parameters:
// TArray<class UAudioComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UAudioComponent*> APavlovVehicle::GetVehicleAudioComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.GetVehicleAudioComponents");

	APavlovVehicle_GetVehicleAudioComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle.GetTeamId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlovVehicle::GetTeamId()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.GetTeamId");

	APavlovVehicle_GetTeamId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle.GetSeatExitLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           bRight                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ExitLocation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovVehicle::GetSeatExitLocation(bool bRight, struct FVector* ExitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.GetSeatExitLocation");

	APavlovVehicle_GetSeatExitLocation_Params params;
	params.bRight = bRight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExitLocation != nullptr)
		*ExitLocation = params.ExitLocation;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle.GetSeat
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Seat                           (Parm, ZeroConstructor, IsPlainOldData)
// class UVehicleSeat*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVehicleSeat* APavlovVehicle::GetSeat(int Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.GetSeat");

	APavlovVehicle_GetSeat_Params params;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle.GetOccupantSeat
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UVehicleOccupant*        Occupant                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlovVehicle::GetOccupantSeat(class UVehicleOccupant* Occupant)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.GetOccupantSeat");

	APavlovVehicle_GetOccupantSeat_Params params;
	params.Occupant = Occupant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle.GetOccupants
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UVehicleOccupant*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UVehicleOccupant*> APavlovVehicle::GetOccupants()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.GetOccupants");

	APavlovVehicle_GetOccupants_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle.GetOccupant
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Seat                           (Parm, ZeroConstructor, IsPlainOldData)
// class UVehicleOccupant*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVehicleOccupant* APavlovVehicle::GetOccupant(int Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.GetOccupant");

	APavlovVehicle_GetOccupant_Params params;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle.GetMovmentVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector APavlovVehicle::GetMovmentVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.GetMovmentVelocity");

	APavlovVehicle_GetMovmentVelocity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle.GetExitLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           bRight                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector APavlovVehicle::GetExitLocation(bool bRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.GetExitLocation");

	APavlovVehicle_GetExitLocation_Params params;
	params.bRight = bRight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle.GetDriverSeat
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlovVehicle::GetDriverSeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.GetDriverSeat");

	APavlovVehicle_GetDriverSeat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle.GetDriver
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UVehicleOccupant*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVehicleOccupant* APavlovVehicle::GetDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.GetDriver");

	APavlovVehicle_GetDriver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle.FindEmptySeat
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlovVehicle::FindEmptySeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.FindEmptySeat");

	APavlovVehicle_FindEmptySeat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle.EnteredKillVolume
// (Final, Native, Public)

void APavlovVehicle::EnteredKillVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.EnteredKillVolume");

	APavlovVehicle_EnteredKillVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle.DoesSeatExitRight
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Seat                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovVehicle::DoesSeatExitRight(int Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.DoesSeatExitRight");

	APavlovVehicle_DoesSeatExitRight_Params params;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle.DelayEngineOffSound
// (Final, Native, Protected)

void APavlovVehicle::DelayEngineOffSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.DelayEngineOffSound");

	APavlovVehicle_DelayEngineOffSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle.ClearBumpers_Multi
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// float                          Direction                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void APavlovVehicle::ClearBumpers_Multi(float Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.ClearBumpers_Multi");

	APavlovVehicle_ClearBumpers_Multi_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle.ClearBumpers
// (BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          Direction                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void APavlovVehicle::ClearBumpers(float Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.ClearBumpers");

	APavlovVehicle_ClearBumpers_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle.CanEnterVehicle
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APavlovPawn*             PavlovPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Seat                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovVehicle::CanEnterVehicle(class APavlovPawn* PavlovPawn, int Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle.CanEnterVehicle");

	APavlovVehicle_CanEnterVehicle_Params params;
	params.PavlovPawn = PavlovPawn;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle_Tank.UpdateSeatWidget
// (Event, Public, BlueprintEvent)

void APavlovVehicle_Tank::UpdateSeatWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle_Tank.UpdateSeatWidget");

	APavlovVehicle_Tank_UpdateSeatWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle_Tank.TurretMoving_Multi
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           bIsTurretMoving                (Parm, ZeroConstructor, IsPlainOldData)

void APavlovVehicle_Tank::TurretMoving_Multi(bool bIsTurretMoving)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle_Tank.TurretMoving_Multi");

	APavlovVehicle_Tank_TurretMoving_Multi_Params params;
	params.bIsTurretMoving = bIsTurretMoving;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle_Tank.TurretFired_Multi
// (Net, Native, Event, NetMulticast, Public)

void APavlovVehicle_Tank::TurretFired_Multi()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle_Tank.TurretFired_Multi");

	APavlovVehicle_Tank_TurretFired_Multi_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle_Tank.StopGunnerFire
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void APavlovVehicle_Tank::StopGunnerFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle_Tank.StopGunnerFire");

	APavlovVehicle_Tank_StopGunnerFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle_Tank.StartGunnerFire
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovVehicle_Tank::StartGunnerFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle_Tank.StartGunnerFire");

	APavlovVehicle_Tank_StartGunnerFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle_Tank.SetTurretTurnRate
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                          FOVAlpha                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovVehicle_Tank::SetTurretTurnRate(float FOVAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle_Tank.SetTurretTurnRate");

	APavlovVehicle_Tank_SetTurretTurnRate_Params params;
	params.FOVAlpha = FOVAlpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle_Tank.SetTurretInput
// (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               AddRotation                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlovVehicle_Tank::SetTurretInput(const struct FVector2D& AddRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle_Tank.SetTurretInput");

	APavlovVehicle_Tank_SetTurretInput_Params params;
	params.AddRotation = AddRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle_Tank.SetMachineGunRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                MGRot                          (Parm, ZeroConstructor, IsPlainOldData)

void APavlovVehicle_Tank::SetMachineGunRotation(const struct FRotator& MGRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle_Tank.SetMachineGunRotation");

	APavlovVehicle_Tank_SetMachineGunRotation_Params params;
	params.MGRot = MGRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle_Tank.OnRep_Overheating
// (Final, Native, Protected)

void APavlovVehicle_Tank::OnRep_Overheating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle_Tank.OnRep_Overheating");

	APavlovVehicle_Tank_OnRep_Overheating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle_Tank.IsTurretPitchLimitReached
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          TurretPitchInput               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovVehicle_Tank::IsTurretPitchLimitReached(float TurretPitchInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle_Tank.IsTurretPitchLimitReached");

	APavlovVehicle_Tank_IsTurretPitchLimitReached_Params params;
	params.TurretPitchInput = TurretPitchInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle_Tank.IsTurretMoving
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovVehicle_Tank::IsTurretMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle_Tank.IsTurretMoving");

	APavlovVehicle_Tank_IsTurretMoving_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle_Tank.IsGunnerOverheated
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovVehicle_Tank::IsGunnerOverheated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle_Tank.IsGunnerOverheated");

	APavlovVehicle_Tank_IsGunnerOverheated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle_Tank.GunnerFired_Multi
// (Net, Native, Event, NetMulticast, Public)

void APavlovVehicle_Tank::GunnerFired_Multi()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle_Tank.GunnerFired_Multi");

	APavlovVehicle_Tank_GunnerFired_Multi_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle_Tank.GunnerFireBullet
// (Final, Native, Public)

void APavlovVehicle_Tank::GunnerFireBullet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle_Tank.GunnerFireBullet");

	APavlovVehicle_Tank_GunnerFireBullet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle_Tank.GunnerCooldownTick
// (Final, Native, Public)

void APavlovVehicle_Tank::GunnerCooldownTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle_Tank.GunnerCooldownTick");

	APavlovVehicle_Tank_GunnerCooldownTick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle_Tank.GetTurretRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D APavlovVehicle_Tank::GetTurretRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle_Tank.GetTurretRotation");

	APavlovVehicle_Tank_GetTurretRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle_Tank.FireTankTurret
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovVehicle_Tank::FireTankTurret()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle_Tank.FireTankTurret");

	APavlovVehicle_Tank_FireTankTurret_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle_Tank.DeactivateGunnerFireFX
// (Final, Native, Public)

void APavlovVehicle_Tank::DeactivateGunnerFireFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle_Tank.DeactivateGunnerFireFX");

	APavlovVehicle_Tank_DeactivateGunnerFireFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovVehicle_Tank.CanFireTurret
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovVehicle_Tank::CanFireTurret()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle_Tank.CanFireTurret");

	APavlovVehicle_Tank_CanFireTurret_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovVehicle_Tank.AddHeatBuildup
// (Final, Native, Public)

void APavlovVehicle_Tank::AddHeatBuildup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovVehicle_Tank.AddHeatBuildup");

	APavlovVehicle_Tank_AddHeatBuildup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovWheeledVehicle.SetSteeringInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Input                          (Parm, ZeroConstructor, IsPlainOldData)

void APavlovWheeledVehicle::SetSteeringInput(float Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovWheeledVehicle.SetSteeringInput");

	APavlovWheeledVehicle_SetSteeringInput_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PlayerCycler.GetNext
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APavlovPlayerState*      PlayerState                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class APavlovPawn*             Pawn                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerCycler::GetNext(class APavlovPlayerState** PlayerState, class APavlovPawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PlayerCycler.GetNext");

	UPlayerCycler_GetNext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerState != nullptr)
		*PlayerState = params.PlayerState;
	if (Pawn != nullptr)
		*Pawn = params.Pawn;
}


// Function Pavlov.PlayOfflineView.OnMapBrowserCommit
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FModalCommitParams      Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void APlayOfflineView::OnMapBrowserCommit(const struct FModalCommitParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PlayOfflineView.OnMapBrowserCommit");

	APlayOfflineView_OnMapBrowserCommit_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Pliers.ServerReportCut
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class ABomb*                   Bomb                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            WireIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void APliers::ServerReportCut(class ABomb* Bomb, int WireIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Pliers.ServerReportCut");

	APliers_ServerReportCut_Params params;
	params.Bomb = Bomb;
	params.WireIndex = WireIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Pliers.MulticastOnCut
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void APliers::MulticastOnCut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Pliers.MulticastOnCut");

	APliers_MulticastOnCut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushBomb.SetBombState
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// EBombState                     State                          (Parm, ZeroConstructor, IsPlainOldData)

void APushBomb::SetBombState(EBombState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBomb.SetBombState");

	APushBomb_SetBombState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushBomb.OnRep_BombState
// (Final, Native, Public)

void APushBomb::OnRep_BombState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBomb.OnRep_BombState");

	APushBomb_OnRep_BombState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushBomb.OnBombStateChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// EBombState                     State                          (Parm, ZeroConstructor, IsPlainOldData)

void APushBomb::OnBombStateChanged(EBombState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBomb.OnBombStateChanged");

	APushBomb_OnBombStateChanged_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushBomb.CheckSiteOverlap
// (Final, Native, Public)

void APushBomb::CheckSiteOverlap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBomb.CheckSiteOverlap");

	APushBomb_CheckSiteOverlap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushBombObjective.TickBombTimer
// (Final, Native, Public)

void APushBombObjective::TickBombTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBombObjective.TickBombTimer");

	APushBombObjective_TickBombTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushBombObjective.SetPushObjectiveProxy
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class APavlov_PushBombObjective* PushBombProxy                  (Parm, ZeroConstructor, IsPlainOldData)

void APushBombObjective::SetPushObjectiveProxy(class APavlov_PushBombObjective* PushBombProxy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBombObjective.SetPushObjectiveProxy");

	APushBombObjective_SetPushObjectiveProxy_Params params;
	params.PushBombProxy = PushBombProxy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushBombObjective.SetObjectiveState
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// EPushObjectiveState            PushObjectiveState             (Parm, ZeroConstructor, IsPlainOldData)

void APushBombObjective::SetObjectiveState(EPushObjectiveState PushObjectiveState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBombObjective.SetObjectiveState");

	APushBombObjective_SetObjectiveState_Params params;
	params.PushObjectiveState = PushObjectiveState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushBombObjective.SetObjectiveMarker
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// EObjectiveMarker               Marker                         (Parm, ZeroConstructor, IsPlainOldData)

void APushBombObjective::SetObjectiveMarker(EObjectiveMarker Marker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBombObjective.SetObjectiveMarker");

	APushBombObjective_SetObjectiveMarker_Params params;
	params.Marker = Marker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushBombObjective.ResetObjective
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void APushBombObjective::ResetObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBombObjective.ResetObjective");

	APushBombObjective_ResetObjective_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushBombObjective.RemoveBomb
// (Final, Native, Protected)

void APushBombObjective::RemoveBomb()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBombObjective.RemoveBomb");

	APushBombObjective_RemoveBomb_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushBombObjective.PushObjectiveStateChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// EPushObjectiveState            CurrentState                   (Parm, ZeroConstructor, IsPlainOldData)

void APushBombObjective::PushObjectiveStateChanged(EPushObjectiveState CurrentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBombObjective.PushObjectiveStateChanged");

	APushBombObjective_PushObjectiveStateChanged_Params params;
	params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushBombObjective.PlantPushBomb
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class APushBomb*               PushBomb                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APushBombObjective::PlantPushBomb(class APushBomb* PushBomb)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBombObjective.PlantPushBomb");

	APushBombObjective_PlantPushBomb_Params params;
	params.PushBomb = PushBomb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PushBombObjective.OnTeamsSwitched
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void APushBombObjective::OnTeamsSwitched()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBombObjective.OnTeamsSwitched");

	APushBombObjective_OnTeamsSwitched_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushBombObjective.OnRep_PushObjectiveProxy
// (Final, Native, Public)

void APushBombObjective::OnRep_PushObjectiveProxy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBombObjective.OnRep_PushObjectiveProxy");

	APushBombObjective_OnRep_PushObjectiveProxy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushBombObjective.OnRep_ObjectiveState
// (Final, Native, Public)

void APushBombObjective::OnRep_ObjectiveState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBombObjective.OnRep_ObjectiveState");

	APushBombObjective_OnRep_ObjectiveState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushBombObjective.OnRep_ObjectiveMarker
// (Final, Native, Public)

void APushBombObjective::OnRep_ObjectiveMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBombObjective.OnRep_ObjectiveMarker");

	APushBombObjective_OnRep_ObjectiveMarker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushBombObjective.OnRep_BombTimerAlpha
// (Final, Native, Public)

void APushBombObjective::OnRep_BombTimerAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBombObjective.OnRep_BombTimerAlpha");

	APushBombObjective_OnRep_BombTimerAlpha_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Pavlov.PushBombObjective.OnPushBombObjectiveStateChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class APushBombObjective*      PushBombObjective              (Parm, ZeroConstructor, IsPlainOldData)
// EPushObjectiveState            ObjectiveState                 (Parm, ZeroConstructor, IsPlainOldData)

void APushBombObjective::OnPushBombObjectiveStateChanged__DelegateSignature(class APushBombObjective* PushBombObjective, EPushObjectiveState ObjectiveState)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Pavlov.PushBombObjective.OnPushBombObjectiveStateChanged__DelegateSignature");

	APushBombObjective_OnPushBombObjectiveStateChanged__DelegateSignature_Params params;
	params.PushBombObjective = PushBombObjective;
	params.ObjectiveState = ObjectiveState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushBombObjective.OnObjectiveMarkerChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// EObjectiveMarker               Marker                         (Parm, ZeroConstructor, IsPlainOldData)

void APushBombObjective::OnObjectiveMarkerChanged(EObjectiveMarker Marker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBombObjective.OnObjectiveMarkerChanged");

	APushBombObjective_OnObjectiveMarkerChanged_Params params;
	params.Marker = Marker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushBombObjective.OnBombTimerAlphaChanged
// (Native, Event, Public, BlueprintEvent)

void APushBombObjective::OnBombTimerAlphaChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBombObjective.OnBombTimerAlphaChanged");

	APushBombObjective_OnBombTimerAlphaChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushBombObjective.OnBombOverlap
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APushBombObjective::OnBombOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBombObjective.OnBombOverlap");

	APushBombObjective_OnBombOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushBombObjective.OnBombExplosion_Server
// (Native, Event, Public, BlueprintEvent)

void APushBombObjective::OnBombExplosion_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBombObjective.OnBombExplosion_Server");

	APushBombObjective_OnBombExplosion_Server_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushBombObjective.IsLowQuality
// (Final, Native, Protected, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APushBombObjective::IsLowQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBombObjective.IsLowQuality");

	APushBombObjective_IsLowQuality_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PushBombObjective.GetObjectiveState
// (Final, Native, Public)
// Parameters:
// EPushObjectiveState            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPushObjectiveState APushBombObjective::GetObjectiveState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBombObjective.GetObjectiveState");

	APushBombObjective_GetObjectiveState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PushBombObjective.GetBombMarker
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPrimitiveComponent* APushBombObjective::GetBombMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBombObjective.GetBombMarker");

	APushBombObjective_GetBombMarker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PushBombObjective.GetActiveObjectiveID
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APushBombObjective::GetActiveObjectiveID()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBombObjective.GetActiveObjectiveID");

	APushBombObjective_GetActiveObjectiveID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PushBombObjective.CleanupDestroyFX
// (Final, Native, Protected)

void APushBombObjective::CleanupDestroyFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBombObjective.CleanupDestroyFX");

	APushBombObjective_CleanupDestroyFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushBombObjective.BombExplosion_Multi
// (Net, Native, Event, NetMulticast, Public)

void APushBombObjective::BombExplosion_Multi()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBombObjective.BombExplosion_Multi");

	APushBombObjective_BombExplosion_Multi_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushBombObjective.BombExplosion
// (Final, Native, Public)

void APushBombObjective::BombExplosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBombObjective.BombExplosion");

	APushBombObjective_BombExplosion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushBombObjective.BombDefused
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void APushBombObjective::BombDefused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBombObjective.BombDefused");

	APushBombObjective_BombDefused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushBombObjective.AttachPushBomb_Multi
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class APushBomb*               PushBomb                       (Parm, ZeroConstructor, IsPlainOldData)

void APushBombObjective::AttachPushBomb_Multi(class APushBomb* PushBomb)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushBombObjective.AttachPushBomb_Multi");

	APushBombObjective_AttachPushBomb_Multi_Params params;
	params.PushBomb = PushBomb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushLoadout.UpdateLoadouts
// (Final, Native, Public)

void APushLoadout::UpdateLoadouts()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushLoadout.UpdateLoadouts");

	APushLoadout_UpdateLoadouts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushLoadout.SpawnLoadoutEquipment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   LoadoutSlot                    (Parm, ZeroConstructor, IsPlainOldData)
// class APavlovPawn*             PavPawn                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveId                    (Parm, ZeroConstructor, IsPlainOldData)

void APushLoadout::SpawnLoadoutEquipment(const struct FName& LoadoutSlot, class APavlovPawn* PavPawn, int ObjectiveId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushLoadout.SpawnLoadoutEquipment");

	APushLoadout_SpawnLoadoutEquipment_Params params;
	params.LoadoutSlot = LoadoutSlot;
	params.PavPawn = PavPawn;
	params.ObjectiveId = ObjectiveId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushLoadout.SetTeamId
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            LoadoutTeamId                  (Parm, ZeroConstructor, IsPlainOldData)

void APushLoadout::SetTeamId(int LoadoutTeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushLoadout.SetTeamId");

	APushLoadout_SetTeamId_Params params;
	params.LoadoutTeamId = LoadoutTeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushLoadout.SetLockerAvailability
// (Final, Native, Public)
// Parameters:
// int                            LoadoutIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumOfLoadoutsAvailable         (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxLoadouts                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APushLoadout::SetLockerAvailability(int LoadoutIndex, int NumOfLoadoutsAvailable, int MaxLoadouts)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushLoadout.SetLockerAvailability");

	APushLoadout_SetLockerAvailability_Params params;
	params.LoadoutIndex = LoadoutIndex;
	params.NumOfLoadoutsAvailable = NumOfLoadoutsAvailable;
	params.MaxLoadouts = MaxLoadouts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PushLoadout.PlayerLoadoutTaken
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class APavlovPawn*             PavPawn                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTPToPlay                      (Parm, ZeroConstructor, IsPlainOldData)

void APushLoadout::PlayerLoadoutTaken(class APavlovPawn* PavPawn, bool bTPToPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushLoadout.PlayerLoadoutTaken");

	APushLoadout_PlayerLoadoutTaken_Params params;
	params.PavPawn = PavPawn;
	params.bTPToPlay = bTPToPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushLoadout.OnRep_Loadouts
// (Final, Native, Public)

void APushLoadout::OnRep_Loadouts()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushLoadout.OnRep_Loadouts");

	APushLoadout_OnRep_Loadouts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushLoadout.IsAttackersRoom
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APushLoadout::IsAttackersRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushLoadout.IsAttackersRoom");

	APushLoadout_IsAttackersRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PushLoadout.InitializePushLoadout
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class APavlov_PushLoadoutProxy* LoadoutProxy                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWW2Items                      (Parm, ZeroConstructor, IsPlainOldData)

void APushLoadout::InitializePushLoadout(class APavlov_PushLoadoutProxy* LoadoutProxy, bool bWW2Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushLoadout.InitializePushLoadout");

	APushLoadout_InitializePushLoadout_Params params;
	params.LoadoutProxy = LoadoutProxy;
	params.bWW2Items = bWW2Items;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushLoadout.GetLootLocker
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            LootLockerIndex                (Parm, ZeroConstructor, IsPlainOldData)
// class APushLootLocker*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APushLootLocker* APushLoadout::GetLootLocker(int LootLockerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushLoadout.GetLootLocker");

	APushLoadout_GetLootLocker_Params params;
	params.LootLockerIndex = LootLockerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PushLoadout.GetLockerSpawnTransform
// (Native, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// int                            LockerNum                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform APushLoadout::GetLockerSpawnTransform(int LockerNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushLoadout.GetLockerSpawnTransform");

	APushLoadout_GetLockerSpawnTransform_Params params;
	params.LockerNum = LockerNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PushLoadout.GetLoadoutSpawnTransform
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform APushLoadout::GetLoadoutSpawnTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushLoadout.GetLoadoutSpawnTransform");

	APushLoadout_GetLoadoutSpawnTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PushLoadout.GetLoadoutByName
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   LoadoutId                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FPushLoadoutEquipment   LoadoutEquipment               (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APushLoadout::GetLoadoutByName(const struct FName& LoadoutId, struct FPushLoadoutEquipment* LoadoutEquipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushLoadout.GetLoadoutByName");

	APushLoadout_GetLoadoutByName_Params params;
	params.LoadoutId = LoadoutId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LoadoutEquipment != nullptr)
		*LoadoutEquipment = params.LoadoutEquipment;

	return params.ReturnValue;
}


// Function Pavlov.PushLoadout.DoesPlayerHaveLoadout
// (Final, Native, Public)
// Parameters:
// class APavlovPawn*             PavPawn                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APushLoadout::DoesPlayerHaveLoadout(class APavlovPawn* PavPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushLoadout.DoesPlayerHaveLoadout");

	APushLoadout_DoesPlayerHaveLoadout_Params params;
	params.PavPawn = PavPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PushLoadout.DeleteUnusedLockers
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            CurrentLockers                 (Parm, ZeroConstructor, IsPlainOldData)

void APushLoadout::DeleteUnusedLockers(int CurrentLockers)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushLoadout.DeleteUnusedLockers");

	APushLoadout_DeleteUnusedLockers_Params params;
	params.CurrentLockers = CurrentLockers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushLootLocker.SetupMesh
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   ItemName                       (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  SKComp                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APushLootLocker::SetupMesh(const struct FName& ItemName, class USkeletalMeshComponent* SKComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushLootLocker.SetupMesh");

	APushLootLocker_SetupMesh_Params params;
	params.ItemName = ItemName;
	params.SKComp = SKComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PushLootLocker.SetNumOfLoadoutsAvailable
// (Final, Native, Public)
// Parameters:
// int                            NumAvailable                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxLoadouts                    (Parm, ZeroConstructor, IsPlainOldData)

void APushLootLocker::SetNumOfLoadoutsAvailable(int NumAvailable, int MaxLoadouts)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushLootLocker.SetNumOfLoadoutsAvailable");

	APushLootLocker_SetNumOfLoadoutsAvailable_Params params;
	params.NumAvailable = NumAvailable;
	params.MaxLoadouts = MaxLoadouts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushLootLocker.OnRep_LoadoutCount
// (Final, Native, Public)

void APushLootLocker::OnRep_LoadoutCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushLootLocker.OnRep_LoadoutCount");

	APushLootLocker_OnRep_LoadoutCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushLootLocker.OnLockerStateChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bOpen                          (Parm, ZeroConstructor, IsPlainOldData)

void APushLootLocker::OnLockerStateChanged(bool bOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushLootLocker.OnLockerStateChanged");

	APushLootLocker_OnLockerStateChanged_Params params;
	params.bOpen = bOpen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushLootLocker.GrabLocker
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovPawn*             PavPawn                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APushLootLocker::GrabLocker(class APavlovPawn* PavPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushLootLocker.GrabLocker");

	APushLootLocker_GrabLocker_Params params;
	params.PavPawn = PavPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PushLootLocker.GetLoadoutRoom
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APushLoadout*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APushLoadout* APushLootLocker::GetLoadoutRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushLootLocker.GetLoadoutRoom");

	APushLootLocker_GetLoadoutRoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PushLootLocker.CanGrabLocker
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APushLootLocker::CanGrabLocker()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushLootLocker.CanGrabLocker");

	APushLootLocker_CanGrabLocker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PushManagerComponent.UpdateOOBGracePeriod
// (Final, Native, Protected)

void UPushManagerComponent::UpdateOOBGracePeriod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushManagerComponent.UpdateOOBGracePeriod");

	UPushManagerComponent_UpdateOOBGracePeriod_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushManagerComponent.SwappedSides
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void UPushManagerComponent::SwappedSides()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushManagerComponent.SwappedSides");

	UPushManagerComponent_SwappedSides_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushManagerComponent.SetWinCondition
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// EPushWinCondition              PushWinCondition               (Parm, ZeroConstructor, IsPlainOldData)

void UPushManagerComponent::SetWinCondition(EPushWinCondition PushWinCondition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushManagerComponent.SetWinCondition");

	UPushManagerComponent_SetWinCondition_Params params;
	params.PushWinCondition = PushWinCondition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushManagerComponent.SetTickets
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAttackers                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Tickets                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPushManagerComponent::SetTickets(bool bAttackers, int Tickets)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushManagerComponent.SetTickets");

	UPushManagerComponent_SetTickets_Params params;
	params.bAttackers = bAttackers;
	params.Tickets = Tickets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PushManagerComponent.SetGracePeriod
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                          GraceTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UPushManagerComponent::SetGracePeriod(float GraceTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushManagerComponent.SetGracePeriod");

	UPushManagerComponent_SetGracePeriod_Params params;
	params.GraceTime = GraceTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushManagerComponent.SetActiveObjectiveId
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            ObjectiveId                    (Parm, ZeroConstructor, IsPlainOldData)

void UPushManagerComponent::SetActiveObjectiveId(int ObjectiveId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushManagerComponent.SetActiveObjectiveId");

	UPushManagerComponent_SetActiveObjectiveId_Params params;
	params.ObjectiveId = ObjectiveId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushManagerComponent.RemoveTicket
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAttackers                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPushManagerComponent::RemoveTicket(bool bAttackers)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushManagerComponent.RemoveTicket");

	UPushManagerComponent_RemoveTicket_Params params;
	params.bAttackers = bAttackers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PushManagerComponent.IsSpawnGracePeriod
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPushManagerComponent::IsSpawnGracePeriod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushManagerComponent.IsSpawnGracePeriod");

	UPushManagerComponent_IsSpawnGracePeriod_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PushManagerComponent.InitializePush
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            ObjectiveId                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            AttackTickets                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            DefendTickets                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxAttackTickets               (Parm, ZeroConstructor, IsPlainOldData)
// int                            WaveTickets                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          LockerRefreshTime              (Parm, ZeroConstructor, IsPlainOldData)
// class APushLoadout*            Team0LoadoutRoom               (Parm, ZeroConstructor, IsPlainOldData)
// class APushLoadout*            Team1LoadoutRoom               (Parm, ZeroConstructor, IsPlainOldData)

void UPushManagerComponent::InitializePush(int ObjectiveId, int AttackTickets, int DefendTickets, int MaxAttackTickets, int WaveTickets, float LockerRefreshTime, class APushLoadout* Team0LoadoutRoom, class APushLoadout* Team1LoadoutRoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushManagerComponent.InitializePush");

	UPushManagerComponent_InitializePush_Params params;
	params.ObjectiveId = ObjectiveId;
	params.AttackTickets = AttackTickets;
	params.DefendTickets = DefendTickets;
	params.MaxAttackTickets = MaxAttackTickets;
	params.WaveTickets = WaveTickets;
	params.LockerRefreshTime = LockerRefreshTime;
	params.Team0LoadoutRoom = Team0LoadoutRoom;
	params.Team1LoadoutRoom = Team1LoadoutRoom;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushManagerComponent.CheckLoadoutAvailability
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void UPushManagerComponent::CheckLoadoutAvailability()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushManagerComponent.CheckLoadoutAvailability");

	UPushManagerComponent_CheckLoadoutAvailability_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushManagerComponent.AwardAttackersTicketsPerWave
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPushManagerComponent::AwardAttackersTicketsPerWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushManagerComponent.AwardAttackersTicketsPerWave");

	UPushManagerComponent_AwardAttackersTicketsPerWave_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PushPlayerDataComponent.TakePushSnapshot
// (Final, Native, Public)

void UPushPlayerDataComponent::TakePushSnapshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDataComponent.TakePushSnapshot");

	UPushPlayerDataComponent_TakePushSnapshot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushPlayerDataComponent.SetHipSlotType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPushHipSlot                   HipSlot                        (Parm, ZeroConstructor, IsPlainOldData)

void UPushPlayerDataComponent::SetHipSlotType(EPushHipSlot HipSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDataComponent.SetHipSlotType");

	UPushPlayerDataComponent_SetHipSlotType_Params params;
	params.HipSlot = HipSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushPlayerDataComponent.SetDialogAsset
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
// class UPushPlayerDialog*       Dialog                         (Parm, ZeroConstructor, IsPlainOldData)

void UPushPlayerDataComponent::SetDialogAsset(class UPushPlayerDialog* Dialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDataComponent.SetDialogAsset");

	UPushPlayerDataComponent_SetDialogAsset_Params params;
	params.Dialog = Dialog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushPlayerDataComponent.RestorePushSnapshot
// (Final, Native, Public)
// Parameters:
// struct FName                   FallbackWeapon                 (Parm, ZeroConstructor, IsPlainOldData)
// class UPushPlayerStateComponent* PushPlayerStateComp            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPushPlayerDataComponent::RestorePushSnapshot(const struct FName& FallbackWeapon, class UPushPlayerStateComponent* PushPlayerStateComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDataComponent.RestorePushSnapshot");

	UPushPlayerDataComponent_RestorePushSnapshot_Params params;
	params.FallbackWeapon = FallbackWeapon;
	params.PushPlayerStateComp = PushPlayerStateComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushPlayerDataComponent.RespawnHipSlot
// (Final, Native, Protected)

void UPushPlayerDataComponent::RespawnHipSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDataComponent.RespawnHipSlot");

	UPushPlayerDataComponent_RespawnHipSlot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushPlayerDataComponent.PlayDialogReplicated
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// EPushDialog                    PushDialog                     (Parm, ZeroConstructor, IsPlainOldData)

void UPushPlayerDataComponent::PlayDialogReplicated(EPushDialog PushDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDataComponent.PlayDialogReplicated");

	UPushPlayerDataComponent_PlayDialogReplicated_Params params;
	params.PushDialog = PushDialog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushPlayerDataComponent.PlayDialogFromHead
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundCue*               DialogCue                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAudioComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAudioComponent* UPushPlayerDataComponent::PlayDialogFromHead(class USoundCue* DialogCue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDataComponent.PlayDialogFromHead");

	UPushPlayerDataComponent_PlayDialogFromHead_Params params;
	params.DialogCue = DialogCue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PushPlayerDataComponent.PlayDialog_Multi
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// EPushDialog                    PushDialog                     (Parm, ZeroConstructor, IsPlainOldData)

void UPushPlayerDataComponent::PlayDialog_Multi(EPushDialog PushDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDataComponent.PlayDialog_Multi");

	UPushPlayerDataComponent_PlayDialog_Multi_Params params;
	params.PushDialog = PushDialog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushPlayerDataComponent.PlayDialog
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPushDialog                    PushDialog                     (Parm, ZeroConstructor, IsPlainOldData)

void UPushPlayerDataComponent::PlayDialog(EPushDialog PushDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDataComponent.PlayDialog");

	UPushPlayerDataComponent_PlayDialog_Params params;
	params.PushDialog = PushDialog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushPlayerDataComponent.PlayChantResponse_Multi
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// int                            ChantIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void UPushPlayerDataComponent::PlayChantResponse_Multi(int ChantIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDataComponent.PlayChantResponse_Multi");

	UPushPlayerDataComponent_PlayChantResponse_Multi_Params params;
	params.ChantIndex = ChantIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushPlayerDataComponent.PlayChantResponse
// (Final, Native, Protected)

void UPushPlayerDataComponent::PlayChantResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDataComponent.PlayChantResponse");

	UPushPlayerDataComponent_PlayChantResponse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushPlayerDataComponent.PlayChant
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ChantIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void UPushPlayerDataComponent::PlayChant(int ChantIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDataComponent.PlayChant");

	UPushPlayerDataComponent_PlayChant_Params params;
	params.ChantIndex = ChantIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushPlayerDataComponent.OwnerKilled
// (Final, Native, Public)

void UPushPlayerDataComponent::OwnerKilled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDataComponent.OwnerKilled");

	UPushPlayerDataComponent_OwnerKilled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushPlayerDataComponent.OnRep_HipSlotType
// (Final, Native, Protected)

void UPushPlayerDataComponent::OnRep_HipSlotType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDataComponent.OnRep_HipSlotType");

	UPushPlayerDataComponent_OnRep_HipSlotType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushPlayerDataComponent.OnOwnerDamaged
// (Final, Native, Protected)

void UPushPlayerDataComponent::OnOwnerDamaged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDataComponent.OnOwnerDamaged");

	UPushPlayerDataComponent_OnOwnerDamaged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushPlayerDataComponent.OnLowHealth
// (Final, Native, Protected)

void UPushPlayerDataComponent::OnLowHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDataComponent.OnLowHealth");

	UPushPlayerDataComponent_OnLowHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushPlayerDataComponent.OnLowAmmo
// (Final, Native, Protected)

void UPushPlayerDataComponent::OnLowAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDataComponent.OnLowAmmo");

	UPushPlayerDataComponent_OnLowAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushPlayerDataComponent.OnGrenadeCooked
// (Final, Native, Protected)
// Parameters:
// class AGrenade*                Grenade                        (Parm, ZeroConstructor, IsPlainOldData)

void UPushPlayerDataComponent::OnGrenadeCooked(class AGrenade* Grenade)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDataComponent.OnGrenadeCooked");

	UPushPlayerDataComponent_OnGrenadeCooked_Params params;
	params.Grenade = Grenade;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushPlayerDataComponent.OnBufferTimeComplete
// (Final, Native, Protected)

void UPushPlayerDataComponent::OnBufferTimeComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDataComponent.OnBufferTimeComplete");

	UPushPlayerDataComponent_OnBufferTimeComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushPlayerDataComponent.LoadDialogAsset
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// struct FName                   PlayerSkin                     (Parm, ZeroConstructor, IsPlainOldData)

void UPushPlayerDataComponent::LoadDialogAsset(const struct FName& PlayerSkin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDataComponent.LoadDialogAsset");

	UPushPlayerDataComponent_LoadDialogAsset_Params params;
	params.PlayerSkin = PlayerSkin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushPlayerDataComponent.Init_Client
// (Net, NetReliable, Native, Event, Protected, NetClient)

void UPushPlayerDataComponent::Init_Client()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDataComponent.Init_Client");

	UPushPlayerDataComponent_Init_Client_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushPlayerDataComponent.HipSlotUsed
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void UPushPlayerDataComponent::HipSlotUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDataComponent.HipSlotUsed");

	UPushPlayerDataComponent_HipSlotUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushPlayerDataComponent.GetPushPlayerData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class UPushPlayerDataComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPushPlayerDataComponent* UPushPlayerDataComponent::STATIC_GetPushPlayerData(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDataComponent.GetPushPlayerData");

	UPushPlayerDataComponent_GetPushPlayerData_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PushPlayerDataComponent.ClearQueue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bFadeCurrent                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bChantInQueue                  (Parm, ZeroConstructor, IsPlainOldData)

void UPushPlayerDataComponent::ClearQueue(bool bFadeCurrent, bool bChantInQueue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDataComponent.ClearQueue");

	UPushPlayerDataComponent_ClearQueue_Params params;
	params.bFadeCurrent = bFadeCurrent;
	params.bChantInQueue = bChantInQueue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushPlayerDataComponent.AskForMeds
// (Final, Native, Protected)

void UPushPlayerDataComponent::AskForMeds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDataComponent.AskForMeds");

	UPushPlayerDataComponent_AskForMeds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PushPlayerDialog.GetRandomChantIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPushPlayerDialog::GetRandomChantIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDialog.GetRandomChantIndex");

	UPushPlayerDialog_GetRandomChantIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PushPlayerDialog.GetDialogPriority
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPushDialog                    DialogType                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPushPlayerDialog::GetDialogPriority(EPushDialog DialogType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDialog.GetDialogPriority");

	UPushPlayerDialog_GetDialogPriority_Params params;
	params.DialogType = DialogType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PushPlayerDialog.GetDialogByType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EPushDialog                    DialogType                     (Parm, ZeroConstructor, IsPlainOldData)
// class USoundCue*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundCue* UPushPlayerDialog::GetDialogByType(EPushDialog DialogType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDialog.GetDialogByType");

	UPushPlayerDialog_GetDialogByType_Params params;
	params.DialogType = DialogType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PushPlayerDialog.GetDialogBuffer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPushDialog                    DialogType                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPushPlayerDialog::GetDialogBuffer(EPushDialog DialogType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDialog.GetDialogBuffer");

	UPushPlayerDialog_GetDialogBuffer_Params params;
	params.DialogType = DialogType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PushPlayerDialog.GetChantByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ChantIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FPushChant              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPushChant UPushPlayerDialog::GetChantByIndex(int ChantIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerDialog.GetChantByIndex");

	UPushPlayerDialog_GetChantByIndex_Params params;
	params.ChantIndex = ChantIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PushPlayerStateComponent.PlayerRevived
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovPawn*             PavPawn                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  PushPlayerDataClass            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FallbackWeapon                 (Parm, ZeroConstructor, IsPlainOldData)

void UPushPlayerStateComponent::PlayerRevived(class APavlovPawn* PavPawn, class UClass* PushPlayerDataClass, const struct FName& FallbackWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PushPlayerStateComponent.PlayerRevived");

	UPushPlayerStateComponent_PlayerRevived_Params params;
	params.PavPawn = PavPawn;
	params.PushPlayerDataClass = PushPlayerDataClass;
	params.FallbackWeapon = FallbackWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Rat.OnRevive
// (Final, Native, Private)
// Parameters:
// class AActor*                  ActorOwner                     (Parm, ZeroConstructor, IsPlainOldData)

void ARat::OnRevive(class AActor* ActorOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Rat.OnRevive");

	ARat_OnRevive_Params params;
	params.ActorOwner = ActorOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Rat.OnKill
// (Final, Native, Private)
// Parameters:
// class AActor*                  ActorOwner                     (Parm, ZeroConstructor, IsPlainOldData)

void ARat::OnKill(class AActor* ActorOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Rat.OnKill");

	ARat_OnKill_Params params;
	params.ActorOwner = ActorOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Rat.ApplyImpact
// (Final, Native, Public, BlueprintCallable)

void ARat::ApplyImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Rat.ApplyImpact");

	ARat_ApplyImpact_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.RconPawn.ExitSpectator_Server
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void ARconPawn::ExitSpectator_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.RconPawn.ExitSpectator_Server");

	ARconPawn_ExitSpectator_Server_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.RepairTool.RepairVehicle
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARepairTool::RepairVehicle(class AActor* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.RepairTool.RepairVehicle");

	ARepairTool_RepairVehicle_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.RepairTool.CanRepairVehicle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  RepairActor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNoTeams                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARepairTool::CanRepairVehicle(class AActor* RepairActor, bool bNoTeams, int TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.RepairTool.CanRepairVehicle");

	ARepairTool_CanRepairVehicle_Params params;
	params.RepairActor = RepairActor;
	params.bNoTeams = bNoTeams;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.ReplayManager.PlayReplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReplayId                       (Parm, ZeroConstructor)

void UReplayManager::PlayReplay(const struct FString& ReplayId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ReplayManager.PlayReplay");

	UReplayManager_PlayReplay_Params params;
	params.ReplayId = ReplayId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ReplayManager.OnCustomMapDownloaded
// (Final, Native, Protected)
// Parameters:
// bool                           bSucceed                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ID                             (Parm, ZeroConstructor)

void UReplayManager::OnCustomMapDownloaded(bool bSucceed, const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ReplayManager.OnCustomMapDownloaded");

	UReplayManager_OnCustomMapDownloaded_Params params;
	params.bSucceed = bSucceed;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ReplayManager.Find
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 GameMode                       (Parm, ZeroConstructor)
// bool                           bCompetitive                   (Parm, ZeroConstructor, IsPlainOldData)

void UReplayManager::Find(const struct FString& GameMode, bool bCompetitive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ReplayManager.Find");

	UReplayManager_Find_Params params;
	params.GameMode = GameMode;
	params.bCompetitive = bCompetitive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ReviveTool.SetNumOfRevives
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            AmountOfRevives                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AReviveTool::SetNumOfRevives(int AmountOfRevives)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ReviveTool.SetNumOfRevives");

	AReviveTool_SetNumOfRevives_Params params;
	params.AmountOfRevives = AmountOfRevives;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.ReviveTool.GetNumOfRevives
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AReviveTool::GetNumOfRevives()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ReviveTool.GetNumOfRevives");

	AReviveTool_GetNumOfRevives_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.RevolverGunState.SetCylinder
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bOpen                          (Parm, ZeroConstructor, IsPlainOldData)

void URevolverGunState::SetCylinder(bool bOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.RevolverGunState.SetCylinder");

	URevolverGunState_SetCylinder_Params params;
	params.bOpen = bOpen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.RockerLauncherGunState.SetLauncherState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ELauncherState                 State                          (Parm, ZeroConstructor, IsPlainOldData)

void URockerLauncherGunState::SetLauncherState(ELauncherState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.RockerLauncherGunState.SetLauncherState");

	URockerLauncherGunState_SetLauncherState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.RockerLauncherGunState.ChamberChanged
// (Final, Native, Public)
// Parameters:
// int                            ChamberIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// EVRGunChamberState             OldState                       (Parm, ZeroConstructor, IsPlainOldData)
// EVRGunChamberState             NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void URockerLauncherGunState::ChamberChanged(int ChamberIndex, EVRGunChamberState OldState, EVRGunChamberState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.RockerLauncherGunState.ChamberChanged");

	URockerLauncherGunState_ChamberChanged_Params params;
	params.ChamberIndex = ChamberIndex;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Rocket.OnDetonation
// (Native, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTransform              DecalTransform                 (Parm, IsPlainOldData)

void ARocket::OnDetonation(const struct FTransform& DecalTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Rocket.OnDetonation");

	ARocket_OnDetonation_Params params;
	params.DecalTransform = DecalTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Scoreboard.OnScriptingReady
// (Final, Native, Private)

void AScoreboard::OnScriptingReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Scoreboard.OnScriptingReady");

	AScoreboard_OnScriptingReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Scoreboard.OnReadyForBindings
// (Final, Native, Private)

void AScoreboard::OnReadyForBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Scoreboard.OnReadyForBindings");

	AScoreboard_OnReadyForBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Scoreboard.OnAvatarUpdated
// (Final, Native, Private)
// Parameters:
// struct FString                 ProductId                      (Parm, ZeroConstructor)
// struct FString                 PlatformId                     (Parm, ZeroConstructor)
// class UTexture2D*              AvatarTexture                  (Parm, ZeroConstructor, IsPlainOldData)

void AScoreboard::OnAvatarUpdated(const struct FString& ProductId, const struct FString& PlatformId, class UTexture2D* AvatarTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Scoreboard.OnAvatarUpdated");

	AScoreboard_OnAvatarUpdated_Params params;
	params.ProductId = ProductId;
	params.PlatformId = PlatformId;
	params.AvatarTexture = AvatarTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ServerBrowser.Update
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bUpdatePings                   (Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowser::Update(bool bUpdatePings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerBrowser.Update");

	UServerBrowser_Update_Params params;
	params.bUpdatePings = bUpdatePings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ServerBrowser.OrderServerListByPlayerCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDescending                    (Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowser::OrderServerListByPlayerCount(bool bDescending)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerBrowser.OrderServerListByPlayerCount");

	UServerBrowser_OrderServerListByPlayerCount_Params params;
	params.bDescending = bDescending;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ServerBrowser.GenerateSortedCombinedList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPavlovServerInfo> LobbyDetails                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bAddServerList                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDescending                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FCombinedServerList> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FCombinedServerList> UServerBrowser::GenerateSortedCombinedList(TArray<struct FPavlovServerInfo> LobbyDetails, bool bAddServerList, bool bDescending)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerBrowser.GenerateSortedCombinedList");

	UServerBrowser_GenerateSortedCombinedList_Params params;
	params.LobbyDetails = LobbyDetails;
	params.bAddServerList = bAddServerList;
	params.bDescending = bDescending;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.ServerBrowserV2.UpdateRegionFilters
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EOnlineRegion                  Region                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAdd                           (Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserV2::UpdateRegionFilters(EOnlineRegion Region, bool bAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerBrowserV2.UpdateRegionFilters");

	UServerBrowserV2_UpdateRegionFilters_Params params;
	params.Region = Region;
	params.bAdd = bAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ServerBrowserV2.UpdateGMFilters
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Filter                         (Parm, ZeroConstructor)
// bool                           bAdd                           (Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserV2::UpdateGMFilters(const struct FString& Filter, bool bAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerBrowserV2.UpdateGMFilters");

	UServerBrowserV2_UpdateGMFilters_Params params;
	params.Filter = Filter;
	params.bAdd = bAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ServerBrowserV2.UpdateFavoritesOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserV2::UpdateFavoritesOnly(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerBrowserV2.UpdateFavoritesOnly");

	UServerBrowserV2_UpdateFavoritesOnly_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ServerBrowserV2.UpdateFavoriteServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UServerContainer*        ServerContainer                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAdd                           (Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserV2::UpdateFavoriteServer(class UServerContainer* ServerContainer, bool bAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerBrowserV2.UpdateFavoriteServer");

	UServerBrowserV2_UpdateFavoriteServer_Params params;
	params.ServerContainer = ServerContainer;
	params.bAdd = bAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ServerBrowserV2.SortServerList
// (Final, Native, Public, BlueprintCallable)

void UServerBrowserV2::SortServerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerBrowserV2.SortServerList");

	UServerBrowserV2_SortServerList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ServerBrowserV2.SetServerSortType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EServerSortType                SortType                       (Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserV2::SetServerSortType(EServerSortType SortType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerBrowserV2.SetServerSortType");

	UServerBrowserV2_SetServerSortType_Params params;
	params.SortType = SortType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ServerBrowserV2.SetServerSearchType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EServerSearchType              SearchType                     (Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserV2::SetServerSearchType(EServerSearchType SearchType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerBrowserV2.SetServerSearchType");

	UServerBrowserV2_SetServerSearchType_Params params;
	params.SearchType = SearchType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ServerBrowserV2.SetHidePinLockedServers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bHide                          (Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserV2::SetHidePinLockedServers(bool bHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerBrowserV2.SetHidePinLockedServers");

	UServerBrowserV2_SetHidePinLockedServers_Params params;
	params.bHide = bHide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ServerBrowserV2.SetHideFullServers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bHide                          (Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserV2::SetHideFullServers(bool bHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerBrowserV2.SetHideFullServers");

	UServerBrowserV2_SetHideFullServers_Params params;
	params.bHide = bHide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ServerBrowserV2.SetHideEmptyServers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bHide                          (Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserV2::SetHideEmptyServers(bool bHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerBrowserV2.SetHideEmptyServers");

	UServerBrowserV2_SetHideEmptyServers_Params params;
	params.bHide = bHide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ServerBrowserV2.RefreshList
// (Final, Native, Public, BlueprintCallable)

void UServerBrowserV2::RefreshList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerBrowserV2.RefreshList");

	UServerBrowserV2_RefreshList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ServerBrowserV2.OnLobbyUpdateComplete
// (Final, Native, Private)

void UServerBrowserV2::OnLobbyUpdateComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerBrowserV2.OnLobbyUpdateComplete");

	UServerBrowserV2_OnLobbyUpdateComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ServerBrowserV2.OnLobbyListUpdate
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FLobbySearchResult      SearchResult                   (ConstParm, Parm, OutParm, ReferenceParm)

void UServerBrowserV2::OnLobbyListUpdate(const struct FLobbySearchResult& SearchResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerBrowserV2.OnLobbyListUpdate");

	UServerBrowserV2_OnLobbyListUpdate_Params params;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ServerBrowserV2.OnCommunityServerPingListComplete
// (Final, Native, Private)

void UServerBrowserV2::OnCommunityServerPingListComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerBrowserV2.OnCommunityServerPingListComplete");

	UServerBrowserV2_OnCommunityServerPingListComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ServerBrowserV2.OnCommunityServerPingComplete
// (Final, Native, Private)
// Parameters:
// struct FServerStatusInfo       StatusInfo                     (Parm)
// struct FString                 IPAddress                      (Parm, ZeroConstructor)

void UServerBrowserV2::OnCommunityServerPingComplete(const struct FServerStatusInfo& StatusInfo, const struct FString& IPAddress)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerBrowserV2.OnCommunityServerPingComplete");

	UServerBrowserV2_OnCommunityServerPingComplete_Params params;
	params.StatusInfo = StatusInfo;
	params.IPAddress = IPAddress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ServerBrowserV2.JoinServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UServerContainer*        ServerContainer                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Pin                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServerBrowserV2::JoinServer(class UServerContainer* ServerContainer, const struct FString& Pin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerBrowserV2.JoinServer");

	UServerBrowserV2_JoinServer_Params params;
	params.ServerContainer = ServerContainer;
	params.Pin = Pin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.ServerBrowserV2.HasRegionFilter
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EOnlineRegion                  Region                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServerBrowserV2::HasRegionFilter(EOnlineRegion Region)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerBrowserV2.HasRegionFilter");

	UServerBrowserV2_HasRegionFilter_Params params;
	params.Region = Region;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.ServerBrowserV2.GetServerContainerById
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// class UServerContainer*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UServerContainer* UServerBrowserV2::GetServerContainerById(const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerBrowserV2.GetServerContainerById");

	UServerBrowserV2_GetServerContainerById_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.ServerConnector.TickServerConnect
// (Final, Native, Protected)

void UServerConnector::TickServerConnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerConnector.TickServerConnect");

	UServerConnector_TickServerConnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ServerConnector.StartConnection
// (Final, Native, Protected)

void UServerConnector::StartConnection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerConnector.StartConnection");

	UServerConnector_StartConnection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ServerConnector.OnStatusTimeout
// (Final, Native, Protected)

void UServerConnector::OnStatusTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerConnector.OnStatusTimeout");

	UServerConnector_OnStatusTimeout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ServerConnector.OnStatusReceived
// (Final, Native, Protected)
// Parameters:
// struct FServerStatusInfo       StatusInfo                     (Parm)
// struct FString                 IPAddress                      (Parm, ZeroConstructor)

void UServerConnector::OnStatusReceived(const struct FServerStatusInfo& StatusInfo, const struct FString& IPAddress)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerConnector.OnStatusReceived");

	UServerConnector_OnStatusReceived_Params params;
	params.StatusInfo = StatusInfo;
	params.IPAddress = IPAddress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ServerConnector.OnServerConnectMapDownloaded
// (Final, Native, Protected)
// Parameters:
// bool                           bSucceed                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ID                             (Parm, ZeroConstructor)

void UServerConnector::OnServerConnectMapDownloaded(bool bSucceed, const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerConnector.OnServerConnectMapDownloaded");

	UServerConnector_OnServerConnectMapDownloaded_Params params;
	params.bSucceed = bSucceed;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ServerConnector.FailedToConnect
// (Final, Native, Protected)

void UServerConnector::FailedToConnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerConnector.FailedToConnect");

	UServerConnector_FailedToConnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ServerContainer.UpdatePing
// (Final, Native, Public)
// Parameters:
// int                            NewPing                        (Parm, ZeroConstructor, IsPlainOldData)

void UServerContainer::UpdatePing(int NewPing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerContainer.UpdatePing");

	UServerContainer_UpdatePing_Params params;
	params.NewPing = NewPing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ServerStatusHelper.Stop
// (Final, Native, Public, BlueprintCallable)

void UServerStatusHelper::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerStatusHelper.Stop");

	UServerStatusHelper_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ServerStatusHelper.SendStringToAddress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 SendString                     (Parm, ZeroConstructor)
// struct FString                 Address                        (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServerStatusHelper::SendStringToAddress(const struct FString& SendString, const struct FString& Address)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerStatusHelper.SendStringToAddress");

	UServerStatusHelper_SendStringToAddress_Params params;
	params.SendString = SendString;
	params.Address = Address;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.ServerStatusHelper.SendServerStatusUpdate
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Pin                            (Parm, ZeroConstructor)
// struct FString                 Address                        (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServerStatusHelper::SendServerStatusUpdate(const struct FString& Pin, const struct FString& Address)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerStatusHelper.SendServerStatusUpdate");

	UServerStatusHelper_SendServerStatusUpdate_Params params;
	params.Pin = Pin;
	params.Address = Address;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.ServerStatusHelper.SendDataToAddress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FServerStatusMsg        SendMsg                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServerStatusHelper::SendDataToAddress(const struct FServerStatusMsg& SendMsg)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerStatusHelper.SendDataToAddress");

	UServerStatusHelper_SendDataToAddress_Params params;
	params.SendMsg = SendMsg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.ServerStatusHelper.IsConnected
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServerStatusHelper::IsConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerStatusHelper.IsConnected");

	UServerStatusHelper_IsConnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.ServerStatusHelper.GetServerStatusInfo
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 Pin                            (Parm, ZeroConstructor)
// struct FServerStatusInfo       StatusInfo                     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServerStatusHelper::GetServerStatusInfo(const struct FString& Pin, struct FServerStatusInfo* StatusInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerStatusHelper.GetServerStatusInfo");

	UServerStatusHelper_GetServerStatusInfo_Params params;
	params.Pin = Pin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatusInfo != nullptr)
		*StatusInfo = params.StatusInfo;

	return params.ReturnValue;
}


// Function Pavlov.ServerStatusHelper.GetServerInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Address                        (Parm, ZeroConstructor)
// int                            Port                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Pin                            (Parm, ZeroConstructor)
// float                          AutoCloseTime                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServerStatusHelper::GetServerInfo(const struct FString& Address, int Port, const struct FString& Pin, float AutoCloseTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerStatusHelper.GetServerInfo");

	UServerStatusHelper_GetServerInfo_Params params;
	params.Address = Address;
	params.Port = Port;
	params.Pin = Pin;
	params.AutoCloseTime = AutoCloseTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.ServerStatusHelper.DataToString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          Data                           (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UServerStatusHelper::DataToString(TArray<unsigned char> Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ServerStatusHelper.DataToString");

	UServerStatusHelper_DataToString_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Shell.SpawnHitEffect
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FHitResult              HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AShell::SpawnHitEffect(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Shell.SpawnHitEffect");

	AShell_SpawnHitEffect_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ShootingRangeTargetComponent.TargetHit
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UShootingRangeTargetComponent::TargetHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ShootingRangeTargetComponent.TargetHit");

	UShootingRangeTargetComponent_TargetHit_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.SkinFamily.SkinIntToSkinFamily
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            SkinFamilyInt                  (Parm, ZeroConstructor, IsPlainOldData)
// ESkinFamily                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESkinFamily USkinFamily::STATIC_SkinIntToSkinFamily(int SkinFamilyInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SkinFamily.SkinIntToSkinFamily");

	USkinFamily_SkinIntToSkinFamily_Params params;
	params.SkinFamilyInt = SkinFamilyInt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.SkinFamily.SkinFamilyToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// ESkinFamily                    SkinFamily                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USkinFamily::STATIC_SkinFamilyToString(ESkinFamily SkinFamily)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SkinFamily.SkinFamilyToString");

	USkinFamily_SkinFamilyToString_Params params;
	params.SkinFamily = SkinFamily;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.SkinFamily.SkinFamilyToInt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// ESkinFamily                    SkinFamily                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USkinFamily::STATIC_SkinFamilyToInt(ESkinFamily SkinFamily)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SkinFamily.SkinFamilyToInt");

	USkinFamily_SkinFamilyToInt_Params params;
	params.SkinFamily = SkinFamily;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.SkinFamily.SkinFamilyIdToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            SkinFamilyId                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USkinFamily::STATIC_SkinFamilyIdToString(int SkinFamilyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SkinFamily.SkinFamilyIdToString");

	USkinFamily_SkinFamilyIdToString_Params params;
	params.SkinFamilyId = SkinFamilyId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.SoundMixingSettings.SetVolumeByChannelName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void USoundMixingSettings::SetVolumeByChannelName(const struct FName& Name, float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SoundMixingSettings.SetVolumeByChannelName");

	USoundMixingSettings_SetVolumeByChannelName_Params params;
	params.Name = Name;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.SoundMixingSettings.SetVolumeByChannelIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void USoundMixingSettings::SetVolumeByChannelIndex(int Index, float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SoundMixingSettings.SetVolumeByChannelIndex");

	USoundMixingSettings_SetVolumeByChannelIndex_Params params;
	params.Index = Index;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.SoundMixingSettings.Save
// (Final, Native, Public, BlueprintCallable)

void USoundMixingSettings::Save()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SoundMixingSettings.Save");

	USoundMixingSettings_Save_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.SoundMixingSettings.RestoreDefaults
// (Final, Native, Public, BlueprintCallable)

void USoundMixingSettings::RestoreDefaults()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SoundMixingSettings.RestoreDefaults");

	USoundMixingSettings_RestoreDefaults_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.SoundMixingSettings.Load
// (Final, Native, Public, BlueprintCallable)

void USoundMixingSettings::Load()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SoundMixingSettings.Load");

	USoundMixingSettings_Load_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.SoundMixingSettings.GetVolumeByChannelName
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USoundMixingSettings::GetVolumeByChannelName(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SoundMixingSettings.GetVolumeByChannelName");

	USoundMixingSettings_GetVolumeByChannelName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.SoundMixingSettings.GetVolumeByChannelIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USoundMixingSettings::GetVolumeByChannelIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SoundMixingSettings.GetVolumeByChannelIndex");

	USoundMixingSettings_GetVolumeByChannelIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.SoundMixingSettings.ApplyAndSave
// (Final, Native, Public, BlueprintCallable)

void USoundMixingSettings::ApplyAndSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SoundMixingSettings.ApplyAndSave");

	USoundMixingSettings_ApplyAndSave_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.SoundMixingSettings.Apply
// (Final, Native, Public, BlueprintCallable)

void USoundMixingSettings::Apply()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SoundMixingSettings.Apply");

	USoundMixingSettings_Apply_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.SpectatorTag.OnFadeOut
// (Event, Public, BlueprintEvent)

void ASpectatorTag::OnFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SpectatorTag.OnFadeOut");

	ASpectatorTag_OnFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.SpectatorTag.GetPlayerState
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APavlovPlayerState*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APavlovPlayerState* ASpectatorTag::GetPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SpectatorTag.GetPlayerState");

	ASpectatorTag_GetPlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.SpectatorTVCamera.OnAttachedToFocusedPawn
// (Event, Public, BlueprintEvent)

void ASpectatorTVCamera::OnAttachedToFocusedPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SpectatorTVCamera.OnAttachedToFocusedPawn");

	ASpectatorTVCamera_OnAttachedToFocusedPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.SpectatorTVCamera.GetSceneCapture
// (Event, Public, BlueprintEvent)
// Parameters:
// class USceneCaptureComponent2D* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneCaptureComponent2D* ASpectatorTVCamera::GetSceneCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SpectatorTVCamera.GetSceneCapture");

	ASpectatorTVCamera_GetSceneCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.SpectatorTVCamera.Cycle
// (Final, Native, Public, BlueprintCallable)

void ASpectatorTVCamera::Cycle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SpectatorTVCamera.Cycle");

	ASpectatorTVCamera_Cycle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.SpectatorTVCamera.AddYawInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ASpectatorTVCamera::AddYawInput(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SpectatorTVCamera.AddYawInput");

	ASpectatorTVCamera_AddYawInput_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.StatsManager.SetStat
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 UniqueID                       (Parm, ZeroConstructor)
// EPlayerStats                   OptionStat                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UStatsManager::SetStat(const struct FString& UniqueID, EPlayerStats OptionStat, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.StatsManager.SetStat");

	UStatsManager_SetStat_Params params;
	params.UniqueID = UniqueID;
	params.OptionStat = OptionStat;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.StatsManager.PostStats
// (Final, Native, Public)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStatsManager::PostStats(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.StatsManager.PostStats");

	UStatsManager_PostStats_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.StatsManager.HasAuthority
// (Final, Native, Private)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStatsManager::HasAuthority()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.StatsManager.HasAuthority");

	UStatsManager_HasAuthority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.StatsManager.GetXPForStat
// (Final, Native, Private, HasOutParms)
// Parameters:
// EPlayerStats                   StatType                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Amount                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UStatsManager::GetXPForStat(EPlayerStats StatType, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.StatsManager.GetXPForStat");

	UStatsManager_GetXPForStat_Params params;
	params.StatType = StatType;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.StatsManager.GetTransformedEloRatings
// (Final, Native, Public)
// Parameters:
// float                          Elo                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UStatsManager::GetTransformedEloRatings(float Elo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.StatsManager.GetTransformedEloRatings");

	UStatsManager_GetTransformedEloRatings_Params params;
	params.Elo = Elo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.StatsManager.GetStatsAsJson
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UJsonUtilsObj*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UJsonUtilsObj* UStatsManager::GetStatsAsJson()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.StatsManager.GetStatsAsJson");

	UStatsManager_GetStatsAsJson_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.StatsManager.GetProbabilityOfWinning
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          CurrentElo                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OpponentElo                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UStatsManager::GetProbabilityOfWinning(float CurrentElo, float OpponentElo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.StatsManager.GetProbabilityOfWinning");

	UStatsManager_GetProbabilityOfWinning_Params params;
	params.CurrentElo = CurrentElo;
	params.OpponentElo = OpponentElo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.StatsManager.GetPlayerStats
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 UniqueID                       (Parm, ZeroConstructor)
// struct FPlayerStats            PlayerStatistics               (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStatsManager::GetPlayerStats(const struct FString& UniqueID, struct FPlayerStats* PlayerStatistics)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.StatsManager.GetPlayerStats");

	UStatsManager_GetPlayerStats_Params params;
	params.UniqueID = UniqueID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerStatistics != nullptr)
		*PlayerStatistics = params.PlayerStatistics;

	return params.ReturnValue;
}


// Function Pavlov.StatsManager.GetPlayersStats
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TMap<struct FString, struct FPlayerStats> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<struct FString, struct FPlayerStats> UStatsManager::GetPlayersStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.StatsManager.GetPlayersStats");

	UStatsManager_GetPlayersStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.StatsManager.GetAllPlayersStats
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FPlayerStats>    PlayersStatistics              (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStatsManager::GetAllPlayersStats(TArray<struct FPlayerStats>* PlayersStatistics)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.StatsManager.GetAllPlayersStats");

	UStatsManager_GetAllPlayersStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayersStatistics != nullptr)
		*PlayersStatistics = params.PlayersStatistics;

	return params.ReturnValue;
}


// Function Pavlov.StatsManager.FindOrCreatePlayerStats
// (Final, Native, Public)
// Parameters:
// struct FString                 UniqueID                       (Parm, ZeroConstructor)
// struct FPlayerStats            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPlayerStats UStatsManager::FindOrCreatePlayerStats(const struct FString& UniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.StatsManager.FindOrCreatePlayerStats");

	UStatsManager_FindOrCreatePlayerStats_Params params;
	params.UniqueID = UniqueID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.StatsManager.DumpStatsToLog
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void UStatsManager::DumpStatsToLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.StatsManager.DumpStatsToLog");

	UStatsManager_DumpStatsToLog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.StatsManager.CalulateTeamElos
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TMap<struct FString, float>    InTeam0Elos                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TMap<struct FString, float>    InTeam1Elos                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TMap<struct FString, float>    OutTeam0Elos                   (Parm, OutParm, ZeroConstructor)
// TMap<struct FString, float>    OutTeam1Elos                   (Parm, OutParm, ZeroConstructor)
// bool                           bTeam0Won                      (Parm, ZeroConstructor, IsPlainOldData)

void UStatsManager::CalulateTeamElos(TMap<struct FString, float> InTeam0Elos, TMap<struct FString, float> InTeam1Elos, bool bTeam0Won, TMap<struct FString, float>* OutTeam0Elos, TMap<struct FString, float>* OutTeam1Elos)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.StatsManager.CalulateTeamElos");

	UStatsManager_CalulateTeamElos_Params params;
	params.InTeam0Elos = InTeam0Elos;
	params.InTeam1Elos = InTeam1Elos;
	params.bTeam0Won = bTeam0Won;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTeam0Elos != nullptr)
		*OutTeam0Elos = params.OutTeam0Elos;
	if (OutTeam1Elos != nullptr)
		*OutTeam1Elos = params.OutTeam1Elos;
}


// Function Pavlov.StatsManager.CalculateNewElo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          CurrentElo                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OpponentElo                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bWin                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UStatsManager::CalculateNewElo(float CurrentElo, float OpponentElo, bool bWin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.StatsManager.CalculateNewElo");

	UStatsManager_CalculateNewElo_Params params;
	params.CurrentElo = CurrentElo;
	params.OpponentElo = OpponentElo;
	params.bWin = bWin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.StatsManager.AwardPlayersXP
// (Final, Native, Private)

void UStatsManager::AwardPlayersXP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.StatsManager.AwardPlayersXP");

	UStatsManager_AwardPlayersXP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.StatsManager.AverageElos
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<float>                  Elos                           (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UStatsManager::AverageElos(TArray<float> Elos)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.StatsManager.AverageElos");

	UStatsManager_AverageElos_Params params;
	params.Elos = Elos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.StatsManager.AddStatByUniqueId
// (Final, Native, Public)
// Parameters:
// class APavlovPlayerState*      PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// EPlayerStats                   OptionStat                     (Parm, ZeroConstructor, IsPlainOldData)

void UStatsManager::AddStatByUniqueId(class APavlovPlayerState* PlayerState, EPlayerStats OptionStat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.StatsManager.AddStatByUniqueId");

	UStatsManager_AddStatByUniqueId_Params params;
	params.PlayerState = PlayerState;
	params.OptionStat = OptionStat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.StatsManager.AddStat
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovPlayerState*      PavPlayerState                 (Parm, ZeroConstructor, IsPlainOldData)
// EPlayerStats                   OptionStat                     (Parm, ZeroConstructor, IsPlainOldData)

void UStatsManager::AddStat(class APavlovPlayerState* PavPlayerState, EPlayerStats OptionStat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.StatsManager.AddStat");

	UStatsManager_AddStat_Params params;
	params.PavPlayerState = PavPlayerState;
	params.OptionStat = OptionStat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.StatsManager.AddPlayer
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 UniqueID                       (Parm, ZeroConstructor)

void UStatsManager::AddPlayer(const struct FString& UniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.StatsManager.AddPlayer");

	UStatsManager_AddPlayer_Params params;
	params.UniqueID = UniqueID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.StencilSuppressionComponent.OwnerKilled
// (Final, Native, Public)
// Parameters:
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void UStencilSuppressionComponent::OwnerKilled(class AActor* Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.StencilSuppressionComponent.OwnerKilled");

	UStencilSuppressionComponent_OwnerKilled_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.StencilSuppressionComponent.OnMenuOpened
// (Final, Native, Public)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UStencilSuppressionComponent::OnMenuOpened(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.StencilSuppressionComponent.OnMenuOpened");

	UStencilSuppressionComponent_OnMenuOpened_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.SurfaceFXAsset.GetVehicleSound
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USoundCue*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundCue* USurfaceFXAsset::GetVehicleSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SurfaceFXAsset.GetVehicleSound");

	USurfaceFXAsset_GetVehicleSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.SurfaceFXAsset.GetVehicleParticleSystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UParticleSystem*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UParticleSystem* USurfaceFXAsset::GetVehicleParticleSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SurfaceFXAsset.GetVehicleParticleSystem");

	USurfaceFXAsset_GetVehicleParticleSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.SurfaceFXAsset.GetSoundBySurfaceType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EPhysicalSurface>  SurfaceType                    (Parm, ZeroConstructor, IsPlainOldData)
// class USoundCue*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundCue* USurfaceFXAsset::GetSoundBySurfaceType(TEnumAsByte<EPhysicalSurface> SurfaceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SurfaceFXAsset.GetSoundBySurfaceType");

	USurfaceFXAsset_GetSoundBySurfaceType_Params params;
	params.SurfaceType = SurfaceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.SurfaceFXAsset.GetParticleBySurfaceType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EPhysicalSurface>  SurfaceType                    (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UParticleSystem* USurfaceFXAsset::GetParticleBySurfaceType(TEnumAsByte<EPhysicalSurface> SurfaceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SurfaceFXAsset.GetParticleBySurfaceType");

	USurfaceFXAsset_GetParticleBySurfaceType_Params params;
	params.SurfaceType = SurfaceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.TankInteriorAnimInstance.GetMPH
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTankInteriorAnimInstance::GetMPH()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.TankInteriorAnimInstance.GetMPH");

	UTankInteriorAnimInstance_GetMPH_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.TankVehicleMovement.ServerUpdateTankSteeringWheel
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// float                          LeftThrustInput                (Parm, ZeroConstructor, IsPlainOldData)
// float                          RightThrustInput               (Parm, ZeroConstructor, IsPlainOldData)
// float                          UpdateThrottle                 (Parm, ZeroConstructor, IsPlainOldData)

void UTankVehicleMovement::ServerUpdateTankSteeringWheel(float LeftThrustInput, float RightThrustInput, float UpdateThrottle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.TankVehicleMovement.ServerUpdateTankSteeringWheel");

	UTankVehicleMovement_ServerUpdateTankSteeringWheel_Params params;
	params.LeftThrustInput = LeftThrustInput;
	params.RightThrustInput = RightThrustInput;
	params.UpdateThrottle = UpdateThrottle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.TankVehicleMovement.ServerUpdateTankInput
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// float                          LeftTrustInput                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          RightTrustInput                (Parm, ZeroConstructor, IsPlainOldData)

void UTankVehicleMovement::ServerUpdateTankInput(float LeftTrustInput, float RightTrustInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.TankVehicleMovement.ServerUpdateTankInput");

	UTankVehicleMovement_ServerUpdateTankInput_Params params;
	params.LeftTrustInput = LeftTrustInput;
	params.RightTrustInput = RightTrustInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.TankVehicleMovement.DriverLeft
// (Final, Native, Public)

void UTankVehicleMovement::DriverLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.TankVehicleMovement.DriverLeft");

	UTankVehicleMovement_DriverLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ToolTip.GetFadeScalar
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AToolTip::GetFadeScalar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ToolTip.GetFadeScalar");

	AToolTip_GetFadeScalar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.TTTGameInfo.TTTFlushKarma
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTTTGameInfo::TTTFlushKarma()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.TTTGameInfo.TTTFlushKarma");

	UTTTGameInfo_TTTFlushKarma_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.TTTGameInfo.TTTAlwaysEnableSkinMenu
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTTTGameInfo::TTTAlwaysEnableSkinMenu(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.TTTGameInfo.TTTAlwaysEnableSkinMenu");

	UTTTGameInfo_TTTAlwaysEnableSkinMenu_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.TTTGameInfo.SetTTTPlayerRole
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class APavlovPlayerState*      PavPlayerState                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TTTRole                        (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTTTGameInfo::SetTTTPlayerRole(class APavlovPlayerState* PavPlayerState, const struct FString& TTTRole)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.TTTGameInfo.SetTTTPlayerRole");

	UTTTGameInfo_SetTTTPlayerRole_Params params;
	params.PavPlayerState = PavPlayerState;
	params.TTTRole = TTTRole;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.TTTGameInfo.SetTTTKarma
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class APavlovPlayerState*      PavPlayerState                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            Karma                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTTTGameInfo::SetTTTKarma(class APavlovPlayerState* PavPlayerState, int Karma)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.TTTGameInfo.SetTTTKarma");

	UTTTGameInfo_SetTTTKarma_Params params;
	params.PavPlayerState = PavPlayerState;
	params.Karma = Karma;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.TTTGameInfo.RetryInit
// (Final, Native, Protected)

void UTTTGameInfo::RetryInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.TTTGameInfo.RetryInit");

	UTTTGameInfo_RetryInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.TTTGameInfo.PauseTTTTimer
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bPaused                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTTTGameInfo::PauseTTTTimer(bool bPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.TTTGameInfo.PauseTTTTimer");

	UTTTGameInfo_PauseTTTTimer_Params params;
	params.bPaused = bPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.TTTGameInfo.GetTTTPlayerInfo
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FTTTPlayerInfo          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTTTPlayerInfo UTTTGameInfo::GetTTTPlayerInfo(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.TTTGameInfo.GetTTTPlayerInfo");

	UTTTGameInfo_GetTTTPlayerInfo_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.TTTGameInfo.GetTTTKarma
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class APavlovPlayerState*      PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Karma                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTTTGameInfo::GetTTTKarma(class APavlovPlayerState* PlayerState, int* Karma)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.TTTGameInfo.GetTTTKarma");

	UTTTGameInfo_GetTTTKarma_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Karma != nullptr)
		*Karma = params.Karma;

	return params.ReturnValue;
}


// Function Pavlov.TTTGameInfo.GetAllTTTPlayersInfo
// (Event, Public, BlueprintEvent)
// Parameters:
// TArray<struct FTTTPlayerInfo>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FTTTPlayerInfo> UTTTGameInfo::GetAllTTTPlayersInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.TTTGameInfo.GetAllTTTPlayersInfo");

	UTTTGameInfo_GetAllTTTPlayersInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.TTTGameInfo.EndTTTRound
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTTTGameInfo::EndTTTRound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.TTTGameInfo.EndTTTRound");

	UTTTGameInfo_EndTTTRound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Tutorial.TerminateToolTip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)

void UTutorial::TerminateToolTip(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Tutorial.TerminateToolTip");

	UTutorial_TerminateToolTip_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Tutorial.ShowToolTip
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ContextLocation                (Parm, ZeroConstructor, IsPlainOldData)

void UTutorial::ShowToolTip(const struct FName& ID, class UObject* Context, const struct FVector& ContextLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Tutorial.ShowToolTip");

	UTutorial_ShowToolTip_Params params;
	params.ID = ID;
	params.Context = Context;
	params.ContextLocation = ContextLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Tutorial.Reset
// (Final, Native, Public, BlueprintCallable)

void UTutorial::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Tutorial.Reset");

	UTutorial_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Tutorial.MarkToolTipAsComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)

void UTutorial::MarkToolTipAsComplete(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Tutorial.MarkToolTipAsComplete");

	UTutorial_MarkToolTipAsComplete_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Tutorial.IsToolTipCompleted
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ID                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTutorial::IsToolTipCompleted(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Tutorial.IsToolTipCompleted");

	UTutorial_IsToolTipCompleted_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Tutorial.GetToolTipInstanceCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTutorial::GetToolTipInstanceCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Tutorial.GetToolTipInstanceCount");

	UTutorial_GetToolTipInstanceCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.UIManager.ShowMenuUniverse
// (Final, Native, Public, BlueprintCallable)

void UUIManager::ShowMenuUniverse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UIManager.ShowMenuUniverse");

	UUIManager_ShowMenuUniverse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.UIManager.ShowMatchmaking
// (Final, Native, Public, BlueprintCallable)

void UUIManager::ShowMatchmaking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UIManager.ShowMatchmaking");

	UUIManager_ShowMatchmaking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.UIManager.SetSideInterface
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EUserInterfaceType             PrimaryInterface               (Parm, ZeroConstructor, IsPlainOldData)
// EUserInterfaceType             NewInterface                   (Parm, ZeroConstructor, IsPlainOldData)

void UUIManager::SetSideInterface(EUserInterfaceType PrimaryInterface, EUserInterfaceType NewInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UIManager.SetSideInterface");

	UUIManager_SetSideInterface_Params params;
	params.PrimaryInterface = PrimaryInterface;
	params.NewInterface = NewInterface;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.UIManager.SetMenuUniverse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UUIManager::SetMenuUniverse(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UIManager.SetMenuUniverse");

	UUIManager_SetMenuUniverse_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.UIManager.SetMatchmakingMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UUIManager::SetMatchmakingMode(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UIManager.SetMatchmakingMode");

	UUIManager_SetMatchmakingMode_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.UIManager.SetInterface
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EUserInterfaceType             NewInterface                   (Parm, ZeroConstructor, IsPlainOldData)

void UUIManager::SetInterface(EUserInterfaceType NewInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UIManager.SetInterface");

	UUIManager_SetInterface_Params params;
	params.NewInterface = NewInterface;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.UIManager.OnVotePromptCommit
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FModalCommitParams      Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UUIManager::OnVotePromptCommit(const struct FModalCommitParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UIManager.OnVotePromptCommit");

	UUIManager_OnVotePromptCommit_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.UIManager.OnPinPromptDestroyed
// (Final, Native, Protected)

void UUIManager::OnPinPromptDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UIManager.OnPinPromptDestroyed");

	UUIManager_OnPinPromptDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.UIManager.OnPinPromptCommit
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FModalCommitParams      Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UUIManager::OnPinPromptCommit(const struct FModalCommitParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UIManager.OnPinPromptCommit");

	UUIManager_OnPinPromptCommit_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.UIManager.OnPartyCreated
// (Final, Native, Protected)

void UUIManager::OnPartyCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UIManager.OnPartyCreated");

	UUIManager_OnPartyCreated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.UIManager.OnOnlineError
// (Final, Native, Protected, HasOutParms)
// Parameters:
// EOnlineError                   Error                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ErrorMessage                   (ConstParm, Parm, OutParm, ReferenceParm)

void UUIManager::OnOnlineError(EOnlineError Error, const struct FText& ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UIManager.OnOnlineError");

	UUIManager_OnOnlineError_Params params;
	params.Error = Error;
	params.ErrorMessage = ErrorMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.UIManager.OnMatchmakingStatusChanged
// (Final, Native, Protected)
// Parameters:
// EMatchmakingStatus             Status                         (Parm, ZeroConstructor, IsPlainOldData)

void UUIManager::OnMatchmakingStatusChanged(EMatchmakingStatus Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UIManager.OnMatchmakingStatusChanged");

	UUIManager_OnMatchmakingStatusChanged_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.UIManager.OnJoinServerStateChanged
// (Final, Native, Protected)
// Parameters:
// EOnlineJoinServerState         JoinServerState                (Parm, ZeroConstructor, IsPlainOldData)

void UUIManager::OnJoinServerStateChanged(EOnlineJoinServerState JoinServerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UIManager.OnJoinServerStateChanged");

	UUIManager_OnJoinServerStateChanged_Params params;
	params.JoinServerState = JoinServerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.UIManager.K2_CreateModalWithParams
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUICreateModalParams    Params                         (ConstParm, Parm, OutParm, ReferenceParm)
// class UModal*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UModal* UUIManager::K2_CreateModalWithParams(const struct FUICreateModalParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UIManager.K2_CreateModalWithParams");

	UUIManager_K2_CreateModalWithParams_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.UIManager.IsMenuUniverseEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUIManager::IsMenuUniverseEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UIManager.IsMenuUniverseEnabled");

	UUIManager_IsMenuUniverseEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.UIManager.HideMenuUniverse
// (Final, Native, Public, BlueprintCallable)

void UUIManager::HideMenuUniverse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UIManager.HideMenuUniverse");

	UUIManager_HideMenuUniverse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.UIManager.HideMatchmaking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void UUIManager::HideMatchmaking(bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UIManager.HideMatchmaking");

	UUIManager_HideMatchmaking_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.UIManager.GetSideInterface
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EUserInterfaceType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EUserInterfaceType UUIManager::GetSideInterface()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UIManager.GetSideInterface");

	UUIManager_GetSideInterface_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.UIManager.GetModalInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UModal*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UModal* UUIManager::GetModalInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UIManager.GetModalInstance");

	UUIManager_GetModalInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.UIManager.GetMenuUniverse
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AMenuUniverse*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AMenuUniverse* UUIManager::GetMenuUniverse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UIManager.GetMenuUniverse");

	UUIManager_GetMenuUniverse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.UIManager.DismissMOTD
// (Final, Native, Public, BlueprintCallable)

void UUIManager::DismissMOTD()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UIManager.DismissMOTD");

	UUIManager_DismissMOTD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.UIManager.CreateModalMessageBox
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   Message                        (ConstParm, Parm, OutParm, ReferenceParm)
// EModalMessageBoxType           Type                           (Parm, ZeroConstructor, IsPlainOldData)
// class UModal*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UModal* UUIManager::CreateModalMessageBox(const struct FText& Message, EModalMessageBoxType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UIManager.CreateModalMessageBox");

	UUIManager_CreateModalMessageBox_Params params;
	params.Message = Message;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.UIManager.CreateModal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ModalClass                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ModalContent                   (Parm, ZeroConstructor)
// bool                           bCreateView                    (Parm, ZeroConstructor, IsPlainOldData)
// class UModal*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UModal* UUIManager::CreateModal(class UClass* ModalClass, const struct FString& ModalContent, bool bCreateView)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UIManager.CreateModal");

	UUIManager_CreateModal_Params params;
	params.ModalClass = ModalClass;
	params.ModalContent = ModalContent;
	params.bCreateView = bCreateView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.UIManager.CreateConnectSpinnerModal
// (Final, Native, Public, BlueprintCallable)

void UUIManager::CreateConnectSpinnerModal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UIManager.CreateConnectSpinnerModal");

	UUIManager_CreateConnectSpinnerModal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.UIManager.ClearModalInstance
// (Final, Native, Public, BlueprintCallable)

void UUIManager::ClearModalInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UIManager.ClearModalInstance");

	UUIManager_ClearModalInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleBumper.OnBumperOverlap
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UVehicleBumper::OnBumperOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleBumper.OnBumperOverlap");

	UVehicleBumper_OnBumperOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleBumper.GetVehicle
// (Final, Native, Public)
// Parameters:
// class APavlovVehicle*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APavlovVehicle* UVehicleBumper::GetVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleBumper.GetVehicle");

	UVehicleBumper_GetVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.VehicleBumper.ClearBumper
// (Final, Native, Public)

void UVehicleBumper::ClearBumper()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleBumper.ClearBumper");

	UVehicleBumper_ClearBumper_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleInterior.ZoomScopeFOV
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ZoomDirection                  (Parm, ZeroConstructor, IsPlainOldData)

void AVehicleInterior::ZoomScopeFOV(float ZoomDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleInterior.ZoomScopeFOV");

	AVehicleInterior_ZoomScopeFOV_Params params;
	params.ZoomDirection = ZoomDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleInterior.SetupVehicleInterior
// (Final, Native, Public)
// Parameters:
// class APavlovVehicle*          Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Seat                           (Parm, ZeroConstructor, IsPlainOldData)
// class UVehicleOccupant*        VehicleOccupant                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AVehicleInterior::SetupVehicleInterior(class APavlovVehicle* Vehicle, int Seat, class UVehicleOccupant* VehicleOccupant)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleInterior.SetupVehicleInterior");

	AVehicleInterior_SetupVehicleInterior_Params params;
	params.Vehicle = Vehicle;
	params.Seat = Seat;
	params.VehicleOccupant = VehicleOccupant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleInterior.SetScopeFOV
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ScopeFOV                       (Parm, ZeroConstructor, IsPlainOldData)

void AVehicleInterior::SetScopeFOV(float ScopeFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleInterior.SetScopeFOV");

	AVehicleInterior_SetScopeFOV_Params params;
	params.ScopeFOV = ScopeFOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleInterior.SetScopeActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void AVehicleInterior::SetScopeActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleInterior.SetScopeActive");

	AVehicleInterior_SetScopeActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleInterior.PlayFireHaptics
// (Native, Event, Public, BlueprintEvent)

void AVehicleInterior::PlayFireHaptics()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleInterior.PlayFireHaptics");

	AVehicleInterior_PlayFireHaptics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleInterior.OnScopeExploit
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bExploit                       (Parm, ZeroConstructor, IsPlainOldData)

void AVehicleInterior::OnScopeExploit(bool bExploit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleInterior.OnScopeExploit");

	AVehicleInterior_OnScopeExploit_Params params;
	params.bExploit = bExploit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleInterior.OnPassengerChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bEnteredVehicle                (Parm, ZeroConstructor, IsPlainOldData)
// int                            Seat                           (Parm, ZeroConstructor, IsPlainOldData)
// class APavlovPawn*             PavPawn                        (Parm, ZeroConstructor, IsPlainOldData)

void AVehicleInterior::OnPassengerChanged(bool bEnteredVehicle, int Seat, class APavlovPawn* PavPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleInterior.OnPassengerChanged");

	AVehicleInterior_OnPassengerChanged_Params params;
	params.bEnteredVehicle = bEnteredVehicle;
	params.Seat = Seat;
	params.PavPawn = PavPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleInterior.OnInteriorIntialized
// (Event, Public, BlueprintEvent)
// Parameters:
// class APavlovVehicle*          Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Seat                           (Parm, ZeroConstructor, IsPlainOldData)
// class UVehicleOccupant*        VehicleOccupant                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AVehicleInterior::OnInteriorIntialized(class APavlovVehicle* Vehicle, int Seat, class UVehicleOccupant* VehicleOccupant)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleInterior.OnInteriorIntialized");

	AVehicleInterior_OnInteriorIntialized_Params params;
	params.Vehicle = Vehicle;
	params.Seat = Seat;
	params.VehicleOccupant = VehicleOccupant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleInterior.HideActorInScope
// (Final, Native, Public)
// Parameters:
// class AActor*                  HideInScope                    (Parm, ZeroConstructor, IsPlainOldData)

void AVehicleInterior::HideActorInScope(class AActor* HideInScope)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleInterior.HideActorInScope");

	AVehicleInterior_HideActorInScope_Params params;
	params.HideInScope = HideInScope;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleInterior.GunnerSocketOverride
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FName                   OverrideSocket                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVehicleInterior::GunnerSocketOverride(struct FName* OverrideSocket)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleInterior.GunnerSocketOverride");

	AVehicleInterior_GunnerSocketOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverrideSocket != nullptr)
		*OverrideSocket = params.OverrideSocket;

	return params.ReturnValue;
}


// Function Pavlov.VehicleInterior.GetScopeHiddenActors
// (Event, Public, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> AVehicleInterior::GetScopeHiddenActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleInterior.GetScopeHiddenActors");

	AVehicleInterior_GetScopeHiddenActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.VehicleInterior.GetScopeFOVAlpha
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AVehicleInterior::GetScopeFOVAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleInterior.GetScopeFOVAlpha");

	AVehicleInterior_GetScopeFOVAlpha_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.VehicleInterior.GetScopeFOV
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AVehicleInterior::GetScopeFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleInterior.GetScopeFOV");

	AVehicleInterior_GetScopeFOV_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.VehicleInterior.GetSceneCaptureParent
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* AVehicleInterior::GetSceneCaptureParent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleInterior.GetSceneCaptureParent");

	AVehicleInterior_GetSceneCaptureParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.VehicleOccupant.SetupInput
// (Native, Public)
// Parameters:
// class UInputComponent*         InputComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UVehicleOccupant::SetupInput(class UInputComponent* InputComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant.SetupInput");

	UVehicleOccupant_SetupInput_Params params;
	params.InputComponent = InputComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant.RetryHideInventory
// (Final, Native, Protected)

void UVehicleOccupant::RetryHideInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant.RetryHideInventory");

	UVehicleOccupant_RetryHideInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant.RemoveVehicleInputServer
// (Native, Public)

void UVehicleOccupant::RemoveVehicleInputServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant.RemoveVehicleInputServer");

	UVehicleOccupant_RemoveVehicleInputServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant.PassengerChanged
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool                           bEnteredVehicle                (Parm, ZeroConstructor, IsPlainOldData)
// int                            Seat                           (Parm, ZeroConstructor, IsPlainOldData)
// class APavlovPawn*             PavPawn                        (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOccupant::PassengerChanged(bool bEnteredVehicle, int Seat, class APavlovPawn* PavPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant.PassengerChanged");

	UVehicleOccupant_PassengerChanged_Params params;
	params.bEnteredVehicle = bEnteredVehicle;
	params.Seat = Seat;
	params.PavPawn = PavPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant.OnLeaveVehicle
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehicleOccupant::OnLeaveVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant.OnLeaveVehicle");

	UVehicleOccupant_OnLeaveVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.VehicleOccupant.OnEnteredVehicleClient
// (Event, Public, BlueprintEvent)
// Parameters:
// class APavlovVehicle*          Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Seat                           (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOccupant::OnEnteredVehicleClient(class APavlovVehicle* Vehicle, int Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant.OnEnteredVehicleClient");

	UVehicleOccupant_OnEnteredVehicleClient_Params params;
	params.Vehicle = Vehicle;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant.LeaveVehicleServer
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void UVehicleOccupant::LeaveVehicleServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant.LeaveVehicleServer");

	UVehicleOccupant_LeaveVehicleServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant.IsDriver
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehicleOccupant::IsDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant.IsDriver");

	UVehicleOccupant_IsDriver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.VehicleOccupant.HideInScope
// (Final, Native, Public)
// Parameters:
// class AActor*                  HideActor                      (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOccupant::HideInScope(class AActor* HideActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant.HideInScope");

	UVehicleOccupant_HideInScope_Params params;
	params.HideActor = HideActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant.GetVehicle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APavlovVehicle*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APavlovVehicle* UVehicleOccupant::GetVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant.GetVehicle");

	UVehicleOccupant_GetVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.VehicleOccupant.GetSeatTransform
// (Native, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UVehicleOccupant::GetSeatTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant.GetSeatTransform");

	UVehicleOccupant_GetSeatTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.VehicleOccupant.GetSeat
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVehicleOccupant::GetSeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant.GetSeat");

	UVehicleOccupant_GetSeat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.VehicleOccupant.GetPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APavlovPawn*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APavlovPawn* UVehicleOccupant::GetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant.GetPawn");

	UVehicleOccupant_GetPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.VehicleOccupant.ClientEnteredVehicle
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class APavlovVehicle*          InVehicle                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Seat                           (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOccupant::ClientEnteredVehicle(class APavlovVehicle* InVehicle, int Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant.ClientEnteredVehicle");

	UVehicleOccupant_ClientEnteredVehicle_Params params;
	params.InVehicle = InVehicle;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant.CanSendInput
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehicleOccupant::CanSendInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant.CanSendInput");

	UVehicleOccupant_CanSendInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.VehicleOccupant_Prototyping.TriggerAxisRight
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOccupant_Prototyping::TriggerAxisRight(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant_Prototyping.TriggerAxisRight");

	UVehicleOccupant_Prototyping_TriggerAxisRight_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant_Prototyping.TriggerAxisLeft
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOccupant_Prototyping::TriggerAxisLeft(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant_Prototyping.TriggerAxisLeft");

	UVehicleOccupant_Prototyping_TriggerAxisLeft_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant_Prototyping.ThrottleServer
// (Net, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOccupant_Prototyping::ThrottleServer(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant_Prototyping.ThrottleServer");

	UVehicleOccupant_Prototyping_ThrottleServer_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant_Prototyping.SteerServer
// (Net, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOccupant_Prototyping::SteerServer(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant_Prototyping.SteerServer");

	UVehicleOccupant_Prototyping_SteerServer_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant_Prototyping.MoveX
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOccupant_Prototyping::MoveX(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant_Prototyping.MoveX");

	UVehicleOccupant_Prototyping_MoveX_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant_Tank_Driver.UpdateMovementInput
// (Final, Native, Public, BlueprintCallable)

void UVehicleOccupant_Tank_Driver::UpdateMovementInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant_Tank_Driver.UpdateMovementInput");

	UVehicleOccupant_Tank_Driver_UpdateMovementInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant_Tank_Driver.TriggerAxisRight
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOccupant_Tank_Driver::TriggerAxisRight(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant_Tank_Driver.TriggerAxisRight");

	UVehicleOccupant_Tank_Driver_TriggerAxisRight_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant_Tank_Driver.TriggerAxisLeft
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOccupant_Tank_Driver::TriggerAxisLeft(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant_Tank_Driver.TriggerAxisLeft");

	UVehicleOccupant_Tank_Driver_TriggerAxisLeft_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant_Tank_Driver.GetTankMovementComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTankVehicleMovement*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTankVehicleMovement* UVehicleOccupant_Tank_Driver::GetTankMovementComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant_Tank_Driver.GetTankMovementComponent");

	UVehicleOccupant_Tank_Driver_GetTankMovementComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.VehicleOccupant_Tank_Gunner.SetMachineGunRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                MGRot                          (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOccupant_Tank_Gunner::SetMachineGunRotation(const struct FRotator& MGRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant_Tank_Gunner.SetMachineGunRotation");

	UVehicleOccupant_Tank_Gunner_SetMachineGunRotation_Params params;
	params.MGRot = MGRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant_Tank_Gunner.ServerSetMGRotation
// (Net, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FRotator                MGRot                          (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOccupant_Tank_Gunner::ServerSetMGRotation(const struct FRotator& MGRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant_Tank_Gunner.ServerSetMGRotation");

	UVehicleOccupant_Tank_Gunner_ServerSetMGRotation_Params params;
	params.MGRot = MGRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant_Tank_Gunner.RightTriggerReleased
// (Final, Native, Public)

void UVehicleOccupant_Tank_Gunner::RightTriggerReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant_Tank_Gunner.RightTriggerReleased");

	UVehicleOccupant_Tank_Gunner_RightTriggerReleased_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant_Tank_Gunner.RightTriggerPressed
// (Final, Native, Public)

void UVehicleOccupant_Tank_Gunner::RightTriggerPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant_Tank_Gunner.RightTriggerPressed");

	UVehicleOccupant_Tank_Gunner_RightTriggerPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant_Tank_Gunner.RightTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOccupant_Tank_Gunner::RightTrigger(bool bPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant_Tank_Gunner.RightTrigger");

	UVehicleOccupant_Tank_Gunner_RightTrigger_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant_Tank_Gunner.LeftTriggerReleased
// (Final, Native, Public)

void UVehicleOccupant_Tank_Gunner::LeftTriggerReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant_Tank_Gunner.LeftTriggerReleased");

	UVehicleOccupant_Tank_Gunner_LeftTriggerReleased_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant_Tank_Gunner.LeftTriggerPressed
// (Final, Native, Public)

void UVehicleOccupant_Tank_Gunner::LeftTriggerPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant_Tank_Gunner.LeftTriggerPressed");

	UVehicleOccupant_Tank_Gunner_LeftTriggerPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant_Tank_Gunner.LeftTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOccupant_Tank_Gunner::LeftTrigger(bool bPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant_Tank_Gunner.LeftTrigger");

	UVehicleOccupant_Tank_Gunner_LeftTrigger_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant_Tank_Turret.TurretZoomInput
// (Final, Native, Protected)
// Parameters:
// float                          Input                          (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOccupant_Tank_Turret::TurretZoomInput(float Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant_Tank_Turret.TurretZoomInput");

	UVehicleOccupant_Tank_Turret_TurretZoomInput_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant_Tank_Turret.TurretYawInput
// (Final, Native, Protected)
// Parameters:
// float                          Input                          (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOccupant_Tank_Turret::TurretYawInput(float Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant_Tank_Turret.TurretYawInput");

	UVehicleOccupant_Tank_Turret_TurretYawInput_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant_Tank_Turret.TurretPitchInput
// (Final, Native, Protected)
// Parameters:
// float                          Input                          (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOccupant_Tank_Turret::TurretPitchInput(float Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant_Tank_Turret.TurretPitchInput");

	UVehicleOccupant_Tank_Turret_TurretPitchInput_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant_Tank_Turret.ServerSetTurretRotation
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FVector2D               TurretRot                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ScopeFOV                       (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOccupant_Tank_Turret::ServerSetTurretRotation(const struct FVector2D& TurretRot, float ScopeFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant_Tank_Turret.ServerSetTurretRotation");

	UVehicleOccupant_Tank_Turret_ServerSetTurretRotation_Params params;
	params.TurretRot = TurretRot;
	params.ScopeFOV = ScopeFOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant_Tank_Turret.RightTriggerPressed
// (Final, Native, Protected)

void UVehicleOccupant_Tank_Turret::RightTriggerPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant_Tank_Turret.RightTriggerPressed");

	UVehicleOccupant_Tank_Turret_RightTriggerPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant_Tank_Turret.OnAdvancedVehicleSettingsChanged
// (Final, Native, Protected)
// Parameters:
// bool                           bUseAdvanced                   (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOccupant_Tank_Turret::OnAdvancedVehicleSettingsChanged(bool bUseAdvanced)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant_Tank_Turret.OnAdvancedVehicleSettingsChanged");

	UVehicleOccupant_Tank_Turret_OnAdvancedVehicleSettingsChanged_Params params;
	params.bUseAdvanced = bUseAdvanced;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant_Tank_Turret.LeftTriggerPressed
// (Final, Native, Protected)

void UVehicleOccupant_Tank_Turret::LeftTriggerPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant_Tank_Turret.LeftTriggerPressed");

	UVehicleOccupant_Tank_Turret_LeftTriggerPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant_Tank_Turret.AddTurretYaw
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOccupant_Tank_Turret::AddTurretYaw(float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant_Tank_Turret.AddTurretYaw");

	UVehicleOccupant_Tank_Turret_AddTurretYaw_Params params;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleOccupant_Tank_Turret.AddTurretPitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOccupant_Tank_Turret::AddTurretPitch(float Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleOccupant_Tank_Turret.AddTurretPitch");

	UVehicleOccupant_Tank_Turret_AddTurretPitch_Params params;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleSpawner.VehicleDestroyed
// (Final, Native, Protected)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void AVehicleSpawner::VehicleDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleSpawner.VehicleDestroyed");

	AVehicleSpawner_VehicleDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleSpawner.StopVehicleSpawner
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void AVehicleSpawner::StopVehicleSpawner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleSpawner.StopVehicleSpawner");

	AVehicleSpawner_StopVehicleSpawner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleSpawner.StartVehicleSpawner
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void AVehicleSpawner::StartVehicleSpawner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleSpawner.StartVehicleSpawner");

	AVehicleSpawner_StartVehicleSpawner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VehicleSpawner.OnGetVehicleClass
// (Final, Native, Public)
// Parameters:
// class UClass*                  VehicleClass                   (Parm, ZeroConstructor, IsPlainOldData)

void AVehicleSpawner::OnGetVehicleClass(class UClass* VehicleClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VehicleSpawner.OnGetVehicleClass");

	AVehicleSpawner_OnGetVehicleClass_Params params;
	params.VehicleClass = VehicleClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VoiceComponent.OnEnvelopeValue
// (Final, Native, Private)
// Parameters:
// class USoundWave*              PlayingSoundWave               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UVoiceComponent::OnEnvelopeValue(class USoundWave* PlayingSoundWave, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VoiceComponent.OnEnvelopeValue");

	UVoiceComponent_OnEnvelopeValue_Params params;
	params.PlayingSoundWave = PlayingSoundWave;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VoiceRouter.ServerOnVoice
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FPavlovVoicePacket      VoicePacket                    (ConstParm, Parm, ReferenceParm)

void AVoiceRouter::ServerOnVoice(const struct FPavlovVoicePacket& VoicePacket)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VoiceRouter.ServerOnVoice");

	AVoiceRouter_ServerOnVoice_Params params;
	params.VoicePacket = VoicePacket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VoiceRouter.OnEncodedVoiceData
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<unsigned char>          EncodedVoiceData               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AVoiceRouter::OnEncodedVoiceData(TArray<unsigned char> EncodedVoiceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VoiceRouter.OnEncodedVoiceData");

	AVoiceRouter_OnEncodedVoiceData_Params params;
	params.EncodedVoiceData = EncodedVoiceData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VoiceRouter.ClientOnVoiceBunch
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FVoicePacketBunch       VoiceBunch                     (ConstParm, Parm, ReferenceParm)

void AVoiceRouter::ClientOnVoiceBunch(const struct FVoicePacketBunch& VoiceBunch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VoiceRouter.ClientOnVoiceBunch");

	AVoiceRouter_ClientOnVoiceBunch_Params params;
	params.VoiceBunch = VoiceBunch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VoiceSource.SetCapture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UVoiceSource::SetCapture(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VoiceSource.SetCapture");

	UVoiceSource_SetCapture_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VoiceSource.ResetCaptureDevice
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 DeviceName                     (Parm, ZeroConstructor)

void UVoiceSource::ResetCaptureDevice(const struct FString& DeviceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VoiceSource.ResetCaptureDevice");

	UVoiceSource_ResetCaptureDevice_Params params;
	params.DeviceName = DeviceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.VoiceSource.IsCapturing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVoiceSource::IsCapturing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VoiceSource.IsCapturing");

	UVoiceSource_IsCapturing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.VoiceSource.IsBroadcasting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVoiceSource::IsBroadcasting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.VoiceSource.IsBroadcasting");

	UVoiceSource_IsBroadcasting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Vote.OnVoteEnded
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bSucceeded                     (Parm, ZeroConstructor, IsPlainOldData)

void AVote::OnVoteEnded(bool bSucceeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Vote.OnVoteEnded");

	AVote_OnVoteEnded_Params params;
	params.bSucceeded = bSucceeded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Vote.MulticastOnVoteEnded
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           bSucceeded                     (Parm, ZeroConstructor, IsPlainOldData)

void AVote::MulticastOnVoteEnded(bool bSucceeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Vote.MulticastOnVoteEnded");

	AVote_MulticastOnVoteEnded_Params params;
	params.bSucceeded = bSucceeded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Vote.GetVotePromptMessage
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AVote::GetVotePromptMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Vote.GetVotePromptMessage");

	AVote_GetVotePromptMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Watch.OnKillfeedEntry
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FKillfeedEntry          NewEntry                       (ConstParm, Parm, OutParm, ReferenceParm)

void UWatch::OnKillfeedEntry(const struct FKillfeedEntry& NewEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Watch.OnKillfeedEntry");

	UWatch_OnKillfeedEntry_Params params;
	params.NewEntry = NewEntry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Watch.OnKillConfirmationPush
// (Event, Public, BlueprintEvent)
// Parameters:
// class APavlovPlayerState*      Victim                         (Parm, ZeroConstructor, IsPlainOldData)

void UWatch::OnKillConfirmationPush(class APavlovPlayerState* Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Watch.OnKillConfirmationPush");

	UWatch_OnKillConfirmationPush_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Watch.GetWatchAttachComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* UWatch::GetWatchAttachComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Watch.GetWatchAttachComponent");

	UWatch_GetWatchAttachComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Waypoint.GetNextWaypointTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AWaypoint*               TargetWaypoint                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)
// class AWaypoint*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AWaypoint* AWaypoint::GetNextWaypointTo(class AWaypoint* TargetWaypoint, int Seed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Waypoint.GetNextWaypointTo");

	AWaypoint_GetNextWaypointTo_Params params;
	params.TargetWaypoint = TargetWaypoint;
	params.Seed = Seed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Waypoint.GetClosestWaypoint
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOnlyLeaf                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseNavMesh                    (Parm, ZeroConstructor, IsPlainOldData)
// class AWaypoint*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AWaypoint* AWaypoint::STATIC_GetClosestWaypoint(class UObject* WorldContextObject, const struct FVector& Location, bool bOnlyLeaf, bool bUseNavMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Waypoint.GetClosestWaypoint");

	AWaypoint_GetClosestWaypoint_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.bOnlyLeaf = bOnlyLeaf;
	params.bUseNavMesh = bUseNavMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.WeaponFilterData.GetRandomRifle
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UWeaponFilterData::GetRandomRifle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.WeaponFilterData.GetRandomRifle");

	UWeaponFilterData_GetRandomRifle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.WeaponFilterData.GetRandomPistol
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UWeaponFilterData::GetRandomPistol()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.WeaponFilterData.GetRandomPistol");

	UWeaponFilterData_GetRandomPistol_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Workshop.Vote
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUp                            (Parm, ZeroConstructor, IsPlainOldData)

void UWorkshop::Vote(const struct FName& ID, bool bUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.Vote");

	UWorkshop_Vote_Params params;
	params.ID = ID;
	params.bUp = bUp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Workshop.Unsubscribe
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ID                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWorkshop::Unsubscribe(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.Unsubscribe");

	UWorkshop_Unsubscribe_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Workshop.SubscribeTo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ID                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWorkshop::SubscribeTo(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.SubscribeTo");

	UWorkshop_SubscribeTo_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Workshop.RequestUserVote
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)

void UWorkshop::RequestUserVote(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.RequestUserVote");

	UWorkshop_RequestUserVote_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Workshop.QueryForSpecificCustomMaps
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FName>           UniqueIds                      (Parm, ZeroConstructor)

void UWorkshop::QueryForSpecificCustomMaps(TArray<struct FName> UniqueIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.QueryForSpecificCustomMaps");

	UWorkshop_QueryForSpecificCustomMaps_Params params;
	params.UniqueIds = UniqueIds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Workshop.QueryForCustomMaps
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// EWorkshopQueryType             QueryType                      (Parm, ZeroConstructor, IsPlainOldData)

void UWorkshop::QueryForCustomMaps(EWorkshopQueryType QueryType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.QueryForCustomMaps");

	UWorkshop_QueryForCustomMaps_Params params;
	params.QueryType = QueryType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Workshop.QueryDownloadProgress
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWorkshop::QueryDownloadProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.QueryDownloadProgress");

	UWorkshop_QueryDownloadProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Workshop.OnCustomMapDownloaded
// (Final, Native, Private)
// Parameters:
// bool                           bSucceed                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ID                             (Parm, ZeroConstructor)

void UWorkshop::OnCustomMapDownloaded(bool bSucceed, const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.OnCustomMapDownloaded");

	UWorkshop_OnCustomMapDownloaded_Params params;
	params.bSucceed = bSucceed;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Workshop.OnAfterMount
// (Final, Native, Private)

void UWorkshop::OnAfterMount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.OnAfterMount");

	UWorkshop_OnAfterMount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Workshop.IsSubscribedTo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ID                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWorkshop::IsSubscribedTo(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.IsSubscribedTo");

	UWorkshop_IsSubscribedTo_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Workshop.IsDownloadingMap
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWorkshop::IsDownloadingMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.IsDownloadingMap");

	UWorkshop_IsDownloadingMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Workshop.IsCustomMapId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 CustomMapId                    (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWorkshop::IsCustomMapId(const struct FString& CustomMapId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.IsCustomMapId");

	UWorkshop_IsCustomMapId_Params params;
	params.CustomMapId = CustomMapId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Workshop.GetPreviewTexture
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ID                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UWorkshop::GetPreviewTexture(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.GetPreviewTexture");

	UWorkshop_GetPreviewTexture_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Workshop.GetCurrentDownloadId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UWorkshop::GetCurrentDownloadId()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.GetCurrentDownloadId");

	UWorkshop_GetCurrentDownloadId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Workshop.DownloadTest
// (Final, Native, Private)

void UWorkshop::DownloadTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.DownloadTest");

	UWorkshop_DownloadTest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Workshop.DownloadCustomMap
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)

void UWorkshop::DownloadCustomMap(const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.DownloadCustomMap");

	UWorkshop_DownloadCustomMap_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Workshop.CheckForDownload
// (Final, Native, Private)

void UWorkshop::CheckForDownload()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.CheckForDownload");

	UWorkshop_CheckForDownload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.WoundAux.GetAvatarSkin
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAvatarSkin*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAvatarSkin* AWoundAux::GetAvatarSkin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.WoundAux.GetAvatarSkin");

	AWoundAux_GetAvatarSkin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.WoundAux.GetAttachSocket
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName AWoundAux::GetAttachSocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.WoundAux.GetAttachSocket");

	AWoundAux_GetAttachSocket_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.WoundComponent.UpdateBaseMesh
// (Final, Native, Public)
// Parameters:
// class USkeletalMeshComponent*  MeshComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USkeletalMesh*           UpdateMesh                     (Parm, ZeroConstructor, IsPlainOldData)

void UWoundComponent::UpdateBaseMesh(class USkeletalMeshComponent* MeshComponent, class USkeletalMesh* UpdateMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.WoundComponent.UpdateBaseMesh");

	UWoundComponent_UpdateBaseMesh_Params params;
	params.MeshComponent = MeshComponent;
	params.UpdateMesh = UpdateMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.WoundComponent.SetMasterPoseComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  MeshComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWoundComponent::SetMasterPoseComponent(class USkeletalMeshComponent* MeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.WoundComponent.SetMasterPoseComponent");

	UWoundComponent_SetMasterPoseComponent_Params params;
	params.MeshComponent = MeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.WoundComponent.ResetWounds
// (Final, Native, Public, BlueprintCallable)

void UWoundComponent::ResetWounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.WoundComponent.ResetWounds");

	UWoundComponent_ResetWounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.WoundComponent.ReportHit
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWoundInfo              WoundInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UWoundComponent::ReportHit(const struct FWoundInfo& WoundInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.WoundComponent.ReportHit");

	UWoundComponent_ReportHit_Params params;
	params.WoundInfo = WoundInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.WoundComponent.GetBoneState
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   BoneName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FWoundBoneState         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWoundBoneState UWoundComponent::GetBoneState(const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.WoundComponent.GetBoneState");

	UWoundComponent_GetBoneState_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.WoundComponent.ApplyInheritedCustomDepthValues
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMeshComponent*          MeshComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWoundComponent::ApplyInheritedCustomDepthValues(class UMeshComponent* MeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.WoundComponent.ApplyInheritedCustomDepthValues");

	UWoundComponent_ApplyInheritedCustomDepthValues_Params params;
	params.MeshComponent = MeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.WoundComponent.AddMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  MeshComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWoundComponent::AddMesh(class USkeletalMeshComponent* MeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.WoundComponent.AddMesh");

	UWoundComponent_AddMesh_Params params;
	params.MeshComponent = MeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Zombie.OnWoundMaterialCreated
// (Final, Native, Private)
// Parameters:
// class UMaterialInstanceDynamic* MaterialInstance               (Parm, ZeroConstructor, IsPlainOldData)

void AZombie::OnWoundMaterialCreated(class UMaterialInstanceDynamic* MaterialInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Zombie.OnWoundMaterialCreated");

	AZombie_OnWoundMaterialCreated_Params params;
	params.MaterialInstance = MaterialInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Zombie.MulticastOnRadialDeath
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FVector_NetQuantize     Origin                         (Parm)

void AZombie::MulticastOnRadialDeath(const struct FVector_NetQuantize& Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Zombie.MulticastOnRadialDeath");

	AZombie_MulticastOnRadialDeath_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Zombie.MulticastOnHit
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FZombieHitInfo          HitInfo                        (ConstParm, Parm, ReferenceParm)

void AZombie::MulticastOnHit(const struct FZombieHitInfo& HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Zombie.MulticastOnHit");

	AZombie_MulticastOnHit_Params params;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Zombie.GetWoundComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWoundComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWoundComponent* AZombie::GetWoundComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Zombie.GetWoundComponent");

	AZombie_GetWoundComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Zombie.ApplyLastHitEffect
// (Final, Native, Private)

void AZombie::ApplyLastHitEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Zombie.ApplyLastHitEffect");

	AZombie_ApplyLastHitEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
