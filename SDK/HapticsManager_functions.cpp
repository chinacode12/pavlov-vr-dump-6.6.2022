
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

// Function HapticsManager.AndroidHapticLibrary.GetCurrentDevices
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FDevice>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FDevice> UAndroidHapticLibrary::STATIC_GetCurrentDevices()
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.GetCurrentDevices");

	UAndroidHapticLibrary_GetCurrentDevices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_UnpairAll
// (Final, Native, Static, Public, BlueprintCallable)

void UAndroidHapticLibrary::STATIC_AndroidThunkCpp_UnpairAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_UnpairAll");

	UAndroidHapticLibrary_AndroidThunkCpp_UnpairAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_Unpair
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 DeviceAddress                  (Parm, ZeroConstructor)

void UAndroidHapticLibrary::STATIC_AndroidThunkCpp_Unpair(const struct FString& DeviceAddress)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_Unpair");

	UAndroidHapticLibrary_AndroidThunkCpp_Unpair_Params params;
	params.DeviceAddress = DeviceAddress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_TogglePosition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 DeviceAddress                  (Parm, ZeroConstructor)

void UAndroidHapticLibrary::STATIC_AndroidThunkCpp_TogglePosition(const struct FString& DeviceAddress)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_TogglePosition");

	UAndroidHapticLibrary_AndroidThunkCpp_TogglePosition_Params params;
	params.DeviceAddress = DeviceAddress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_StopScanning
// (Final, Native, Static, Public, BlueprintCallable)

void UAndroidHapticLibrary::STATIC_AndroidThunkCpp_StopScanning()
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_StopScanning");

	UAndroidHapticLibrary_AndroidThunkCpp_StopScanning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_StartScanning
// (Final, Native, Static, Public, BlueprintCallable)

void UAndroidHapticLibrary::STATIC_AndroidThunkCpp_StartScanning()
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_StartScanning");

	UAndroidHapticLibrary_AndroidThunkCpp_StartScanning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_PingAll
// (Final, Native, Static, Public, BlueprintCallable)

void UAndroidHapticLibrary::STATIC_AndroidThunkCpp_PingAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_PingAll");

	UAndroidHapticLibrary_AndroidThunkCpp_PingAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_Ping
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 DeviceAddress                  (Parm, ZeroConstructor)

void UAndroidHapticLibrary::STATIC_AndroidThunkCpp_Ping(const struct FString& DeviceAddress)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_Ping");

	UAndroidHapticLibrary_AndroidThunkCpp_Ping_Params params;
	params.DeviceAddress = DeviceAddress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_PairFromPosition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 DeviceAddress                  (Parm, ZeroConstructor)
// struct FString                 DevicePosition                 (Parm, ZeroConstructor)

void UAndroidHapticLibrary::STATIC_AndroidThunkCpp_PairFromPosition(const struct FString& DeviceAddress, const struct FString& DevicePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_PairFromPosition");

	UAndroidHapticLibrary_AndroidThunkCpp_PairFromPosition_Params params;
	params.DeviceAddress = DeviceAddress;
	params.DevicePosition = DevicePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_Pair
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 DeviceAddress                  (Parm, ZeroConstructor)

void UAndroidHapticLibrary::STATIC_AndroidThunkCpp_Pair(const struct FString& DeviceAddress)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_Pair");

	UAndroidHapticLibrary_AndroidThunkCpp_Pair_Params params;
	params.DeviceAddress = DeviceAddress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_IsScanning
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAndroidHapticLibrary::STATIC_AndroidThunkCpp_IsScanning()
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_IsScanning");

	UAndroidHapticLibrary_AndroidThunkCpp_IsScanning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_ChangePosition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 DeviceAddress                  (Parm, ZeroConstructor)
// struct FString                 Position                       (Parm, ZeroConstructor)

void UAndroidHapticLibrary::STATIC_AndroidThunkCpp_ChangePosition(const struct FString& DeviceAddress, const struct FString& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_ChangePosition");

	UAndroidHapticLibrary_AndroidThunkCpp_ChangePosition_Params params;
	params.DeviceAddress = DeviceAddress;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.BhapticsRequestLibrary.TurnOffRegisteredFeedbackFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFeedbackFile*           Feedback                       (Parm, ZeroConstructor, IsPlainOldData)

void UBhapticsRequestLibrary::STATIC_TurnOffRegisteredFeedbackFile(class UFeedbackFile* Feedback)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.TurnOffRegisteredFeedbackFile");

	UBhapticsRequestLibrary_TurnOffRegisteredFeedbackFile_Params params;
	params.Feedback = Feedback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.BhapticsRequestLibrary.TurnOffRegisteredFeedback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)

void UBhapticsRequestLibrary::STATIC_TurnOffRegisteredFeedback(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.TurnOffRegisteredFeedback");

	UBhapticsRequestLibrary_TurnOffRegisteredFeedback_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.BhapticsRequestLibrary.TurnOffAllFeedback
// (Final, Native, Static, Public, BlueprintCallable)

void UBhapticsRequestLibrary::STATIC_TurnOffAllFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.TurnOffAllFeedback");

	UBhapticsRequestLibrary_TurnOffAllFeedback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.BhapticsRequestLibrary.ToggleHapticFeedback
// (Final, Native, Static, Public, BlueprintCallable)

void UBhapticsRequestLibrary::STATIC_ToggleHapticFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.ToggleHapticFeedback");

	UBhapticsRequestLibrary_ToggleHapticFeedback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.BhapticsRequestLibrary.SubmitPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// EPosition                      PositionEnum                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPathPoint>      PathPoints                     (ConstParm, Parm, ZeroConstructor)
// int                            DurationInMilliSecs            (Parm, ZeroConstructor, IsPlainOldData)

void UBhapticsRequestLibrary::STATIC_SubmitPath(const struct FString& Key, EPosition PositionEnum, TArray<struct FPathPoint> PathPoints, int DurationInMilliSecs)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.SubmitPath");

	UBhapticsRequestLibrary_SubmitPath_Params params;
	params.Key = Key;
	params.PositionEnum = PositionEnum;
	params.PathPoints = PathPoints;
	params.DurationInMilliSecs = DurationInMilliSecs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.BhapticsRequestLibrary.SubmitFeedbackWithTransform
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFeedbackFile*           Feedback                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AltKey                         (Parm, ZeroConstructor)
// struct FRotationOption         Option                         (Parm)
// bool                           UseAltKey                      (Parm, ZeroConstructor, IsPlainOldData)

void UBhapticsRequestLibrary::STATIC_SubmitFeedbackWithTransform(class UFeedbackFile* Feedback, const struct FString& AltKey, const struct FRotationOption& Option, bool UseAltKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.SubmitFeedbackWithTransform");

	UBhapticsRequestLibrary_SubmitFeedbackWithTransform_Params params;
	params.Feedback = Feedback;
	params.AltKey = AltKey;
	params.Option = Option;
	params.UseAltKey = UseAltKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.BhapticsRequestLibrary.SubmitFeedbackWithIntensityDuration
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFeedbackFile*           Feedback                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AltKey                         (Parm, ZeroConstructor)
// struct FRotationOption         RotationOption                 (Parm)
// struct FScaleOption            ScaleOption                    (Parm)
// bool                           UseAltKey                      (Parm, ZeroConstructor, IsPlainOldData)

void UBhapticsRequestLibrary::STATIC_SubmitFeedbackWithIntensityDuration(class UFeedbackFile* Feedback, const struct FString& AltKey, const struct FRotationOption& RotationOption, const struct FScaleOption& ScaleOption, bool UseAltKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.SubmitFeedbackWithIntensityDuration");

	UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Params params;
	params.Feedback = Feedback;
	params.AltKey = AltKey;
	params.RotationOption = RotationOption;
	params.ScaleOption = ScaleOption;
	params.UseAltKey = UseAltKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.BhapticsRequestLibrary.SubmitFeedback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFeedbackFile*           Feedback                       (Parm, ZeroConstructor, IsPlainOldData)

void UBhapticsRequestLibrary::STATIC_SubmitFeedback(class UFeedbackFile* Feedback)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.SubmitFeedback");

	UBhapticsRequestLibrary_SubmitFeedback_Params params;
	params.Feedback = Feedback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.BhapticsRequestLibrary.SubmitDots
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// EPosition                      PositionEnum                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FDotPoint>       DotPoints                      (ConstParm, Parm, ZeroConstructor)
// int                            DurationInMilliSecs            (Parm, ZeroConstructor, IsPlainOldData)

void UBhapticsRequestLibrary::STATIC_SubmitDots(const struct FString& Key, EPosition PositionEnum, TArray<struct FDotPoint> DotPoints, int DurationInMilliSecs)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.SubmitDots");

	UBhapticsRequestLibrary_SubmitDots_Params params;
	params.Key = Key;
	params.PositionEnum = PositionEnum;
	params.DotPoints = DotPoints;
	params.DurationInMilliSecs = DurationInMilliSecs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.BhapticsRequestLibrary.SubmitBytes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// EPosition                      PositionEnum                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          InputBytes                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            DurationInMilliSecs            (Parm, ZeroConstructor, IsPlainOldData)

void UBhapticsRequestLibrary::STATIC_SubmitBytes(const struct FString& Key, EPosition PositionEnum, TArray<unsigned char> InputBytes, int DurationInMilliSecs)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.SubmitBytes");

	UBhapticsRequestLibrary_SubmitBytes_Params params;
	params.Key = Key;
	params.PositionEnum = PositionEnum;
	params.InputBytes = InputBytes;
	params.DurationInMilliSecs = DurationInMilliSecs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.BhapticsRequestLibrary.RegisterFeedbackFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// class UFeedbackFile*           Feedback                       (Parm, ZeroConstructor, IsPlainOldData)

void UBhapticsRequestLibrary::STATIC_RegisterFeedbackFile(const struct FString& Key, class UFeedbackFile* Feedback)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.RegisterFeedbackFile");

	UBhapticsRequestLibrary_RegisterFeedbackFile_Params params;
	params.Key = Key;
	params.Feedback = Feedback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.BhapticsRequestLibrary.ProjectToVestPav
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 ContactLocation                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  Mesh                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FRotationOption         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotationOption UBhapticsRequestLibrary::STATIC_ProjectToVestPav(const struct FVector& ContactLocation, class USkeletalMeshComponent* Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.ProjectToVestPav");

	UBhapticsRequestLibrary_ProjectToVestPav_Params params;
	params.ContactLocation = ContactLocation;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HapticsManager.BhapticsRequestLibrary.ProjectToVestLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 ContactLocation                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PlayerLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                PlayerRotation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotationOption         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotationOption UBhapticsRequestLibrary::STATIC_ProjectToVestLocation(const struct FVector& ContactLocation, const struct FVector& PlayerLocation, const struct FRotator& PlayerRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.ProjectToVestLocation");

	UBhapticsRequestLibrary_ProjectToVestLocation_Params params;
	params.ContactLocation = ContactLocation;
	params.PlayerLocation = PlayerLocation;
	params.PlayerRotation = PlayerRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HapticsManager.BhapticsRequestLibrary.ProjectToVest
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 ContactLocation                (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     PlayerComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          HalfHeight                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotationOption         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotationOption UBhapticsRequestLibrary::STATIC_ProjectToVest(const struct FVector& ContactLocation, class UPrimitiveComponent* PlayerComponent, float HalfHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.ProjectToVest");

	UBhapticsRequestLibrary_ProjectToVest_Params params;
	params.ContactLocation = ContactLocation;
	params.PlayerComponent = PlayerComponent;
	params.HalfHeight = HalfHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HapticsManager.BhapticsRequestLibrary.IsRegisteredPlaying
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBhapticsRequestLibrary::STATIC_IsRegisteredPlaying(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.IsRegisteredPlaying");

	UBhapticsRequestLibrary_IsRegisteredPlaying_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HapticsManager.BhapticsRequestLibrary.IsRegisteredFilePlaying
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UFeedbackFile*           Feedback                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBhapticsRequestLibrary::STATIC_IsRegisteredFilePlaying(class UFeedbackFile* Feedback)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.IsRegisteredFilePlaying");

	UBhapticsRequestLibrary_IsRegisteredFilePlaying_Params params;
	params.Feedback = Feedback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HapticsManager.BhapticsRequestLibrary.IsDeviceConnected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EPosition                      Device                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBhapticsRequestLibrary::STATIC_IsDeviceConnected(EPosition Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.IsDeviceConnected");

	UBhapticsRequestLibrary_IsDeviceConnected_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HapticsManager.BhapticsRequestLibrary.IsAnythingPlaying
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBhapticsRequestLibrary::STATIC_IsAnythingPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.IsAnythingPlaying");

	UBhapticsRequestLibrary_IsAnythingPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HapticsManager.BhapticsRequestLibrary.EnableHapticFeedback
// (Final, Native, Static, Public, BlueprintCallable)

void UBhapticsRequestLibrary::STATIC_EnableHapticFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.EnableHapticFeedback");

	UBhapticsRequestLibrary_EnableHapticFeedback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.BhapticsRequestLibrary.DisableHapticFeedback
// (Final, Native, Static, Public, BlueprintCallable)

void UBhapticsRequestLibrary::STATIC_DisableHapticFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.DisableHapticFeedback");

	UBhapticsRequestLibrary_DisableHapticFeedback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.BhapticsRequestLibrary.CustomProjectToVest
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 ContactLocation                (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     PlayerComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          HalfHeight                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 UpVector                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ForwardVector                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotationOption         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotationOption UBhapticsRequestLibrary::STATIC_CustomProjectToVest(const struct FVector& ContactLocation, class UPrimitiveComponent* PlayerComponent, float HalfHeight, const struct FVector& UpVector, const struct FVector& ForwardVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.CustomProjectToVest");

	UBhapticsRequestLibrary_CustomProjectToVest_Params params;
	params.ContactLocation = ContactLocation;
	params.PlayerComponent = PlayerComponent;
	params.HalfHeight = HalfHeight;
	params.UpVector = UpVector;
	params.ForwardVector = ForwardVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HapticsManager.BhapticsRequestLibrary.CreateZombieHaptics
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  HapticsData                    (Parm, ZeroConstructor, IsPlainOldData)

void UBhapticsRequestLibrary::STATIC_CreateZombieHaptics(class UClass* HapticsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.CreateZombieHaptics");

	UBhapticsRequestLibrary_CreateZombieHaptics_Params params;
	params.HapticsData = HapticsData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.BhapticsRequestLibrary.CreateHeadshotHaptics
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  HapticsData                    (Parm, ZeroConstructor, IsPlainOldData)

void UBhapticsRequestLibrary::STATIC_CreateHeadshotHaptics(class UClass* HapticsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.CreateHeadshotHaptics");

	UBhapticsRequestLibrary_CreateHeadshotHaptics_Params params;
	params.HapticsData = HapticsData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.BhapticsRequestLibrary.CreateHapticsFromHit
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  HapticsData                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   HitBone                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  Mesh                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBhapticsRequestLibrary::STATIC_CreateHapticsFromHit(class UClass* HapticsData, const struct FVector& HitLocation, const struct FName& HitBone, float Intensity, class USkeletalMeshComponent* Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.CreateHapticsFromHit");

	UBhapticsRequestLibrary_CreateHapticsFromHit_Params params;
	params.HapticsData = HapticsData;
	params.HitLocation = HitLocation;
	params.HitBone = HitBone;
	params.Intensity = Intensity;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.BhapticsRequestLibrary.CreateExplosionHaptics
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  HapticsData                    (Parm, ZeroConstructor, IsPlainOldData)

void UBhapticsRequestLibrary::STATIC_CreateExplosionHaptics(class UClass* HapticsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.CreateExplosionHaptics");

	UBhapticsRequestLibrary_CreateExplosionHaptics_Params params;
	params.HapticsData = HapticsData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.HapticDevice.Unpair
// (Final, Native, Public, BlueprintCallable)

void UHapticDevice::Unpair()
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.HapticDevice.Unpair");

	UHapticDevice_Unpair_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.HapticDevice.TogglePosition
// (Final, Native, Public, BlueprintCallable)

void UHapticDevice::TogglePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.HapticDevice.TogglePosition");

	UHapticDevice_TogglePosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.HapticDevice.SetDeviceData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDevice                 LinkedDevice                   (Parm)

void UHapticDevice::SetDeviceData(const struct FDevice& LinkedDevice)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.HapticDevice.SetDeviceData");

	UHapticDevice_SetDeviceData_Params params;
	params.LinkedDevice = LinkedDevice;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.HapticDevice.Ping
// (Final, Native, Public, BlueprintCallable)

void UHapticDevice::Ping()
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.HapticDevice.Ping");

	UHapticDevice_Ping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.HapticDevice.Pair
// (Final, Native, Public, BlueprintCallable)

void UHapticDevice::Pair()
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.HapticDevice.Pair");

	UHapticDevice_Pair_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.HapticDevice.ChangePosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Position                       (Parm, ZeroConstructor)

void UHapticDevice::ChangePosition(const struct FString& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.HapticDevice.ChangePosition");

	UHapticDevice_ChangePosition_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HapticsManager.HapticsManagerActor.SetTactSuit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         SleeveLeft                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         SleeveRight                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         Head                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         VestFront                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         VestBack                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         GloveLeft                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         GloveRight                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         ShoeLeft                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         ShoeRight                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AHapticsManagerActor::SetTactSuit(class USceneComponent* SleeveLeft, class USceneComponent* SleeveRight, class USceneComponent* Head, class USceneComponent* VestFront, class USceneComponent* VestBack, class USceneComponent* GloveLeft, class USceneComponent* GloveRight, class USceneComponent* ShoeLeft, class USceneComponent* ShoeRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function HapticsManager.HapticsManagerActor.SetTactSuit");

	AHapticsManagerActor_SetTactSuit_Params params;
	params.SleeveLeft = SleeveLeft;
	params.SleeveRight = SleeveRight;
	params.Head = Head;
	params.VestFront = VestFront;
	params.VestBack = VestBack;
	params.GloveLeft = GloveLeft;
	params.GloveRight = GloveRight;
	params.ShoeLeft = ShoeLeft;
	params.ShoeRight = ShoeRight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
