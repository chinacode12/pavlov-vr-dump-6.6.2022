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

// Function HapticsManager.AndroidHapticLibrary.GetCurrentDevices
struct UAndroidHapticLibrary_GetCurrentDevices_Params
{
	TArray<struct FDevice>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_UnpairAll
struct UAndroidHapticLibrary_AndroidThunkCpp_UnpairAll_Params
{
};

// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_Unpair
struct UAndroidHapticLibrary_AndroidThunkCpp_Unpair_Params
{
	struct FString                                     DeviceAddress;                                            // (Parm, ZeroConstructor)
};

// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_TogglePosition
struct UAndroidHapticLibrary_AndroidThunkCpp_TogglePosition_Params
{
	struct FString                                     DeviceAddress;                                            // (Parm, ZeroConstructor)
};

// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_StopScanning
struct UAndroidHapticLibrary_AndroidThunkCpp_StopScanning_Params
{
};

// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_StartScanning
struct UAndroidHapticLibrary_AndroidThunkCpp_StartScanning_Params
{
};

// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_PingAll
struct UAndroidHapticLibrary_AndroidThunkCpp_PingAll_Params
{
};

// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_Ping
struct UAndroidHapticLibrary_AndroidThunkCpp_Ping_Params
{
	struct FString                                     DeviceAddress;                                            // (Parm, ZeroConstructor)
};

// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_PairFromPosition
struct UAndroidHapticLibrary_AndroidThunkCpp_PairFromPosition_Params
{
	struct FString                                     DeviceAddress;                                            // (Parm, ZeroConstructor)
	struct FString                                     DevicePosition;                                           // (Parm, ZeroConstructor)
};

// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_Pair
struct UAndroidHapticLibrary_AndroidThunkCpp_Pair_Params
{
	struct FString                                     DeviceAddress;                                            // (Parm, ZeroConstructor)
};

// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_IsScanning
struct UAndroidHapticLibrary_AndroidThunkCpp_IsScanning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_ChangePosition
struct UAndroidHapticLibrary_AndroidThunkCpp_ChangePosition_Params
{
	struct FString                                     DeviceAddress;                                            // (Parm, ZeroConstructor)
	struct FString                                     Position;                                                 // (Parm, ZeroConstructor)
};

// Function HapticsManager.BhapticsRequestLibrary.TurnOffRegisteredFeedbackFile
struct UBhapticsRequestLibrary_TurnOffRegisteredFeedbackFile_Params
{
	class UFeedbackFile*                               Feedback;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HapticsManager.BhapticsRequestLibrary.TurnOffRegisteredFeedback
struct UBhapticsRequestLibrary_TurnOffRegisteredFeedback_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
};

// Function HapticsManager.BhapticsRequestLibrary.TurnOffAllFeedback
struct UBhapticsRequestLibrary_TurnOffAllFeedback_Params
{
};

// Function HapticsManager.BhapticsRequestLibrary.ToggleHapticFeedback
struct UBhapticsRequestLibrary_ToggleHapticFeedback_Params
{
};

// Function HapticsManager.BhapticsRequestLibrary.SubmitPath
struct UBhapticsRequestLibrary_SubmitPath_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	EPosition                                          PositionEnum;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPathPoint>                          PathPoints;                                               // (ConstParm, Parm, ZeroConstructor)
	int                                                DurationInMilliSecs;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HapticsManager.BhapticsRequestLibrary.SubmitFeedbackWithTransform
struct UBhapticsRequestLibrary_SubmitFeedbackWithTransform_Params
{
	class UFeedbackFile*                               Feedback;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AltKey;                                                   // (Parm, ZeroConstructor)
	struct FRotationOption                             Option;                                                   // (Parm)
	bool                                               UseAltKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HapticsManager.BhapticsRequestLibrary.SubmitFeedbackWithIntensityDuration
struct UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Params
{
	class UFeedbackFile*                               Feedback;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AltKey;                                                   // (Parm, ZeroConstructor)
	struct FRotationOption                             RotationOption;                                           // (Parm)
	struct FScaleOption                                ScaleOption;                                              // (Parm)
	bool                                               UseAltKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HapticsManager.BhapticsRequestLibrary.SubmitFeedback
struct UBhapticsRequestLibrary_SubmitFeedback_Params
{
	class UFeedbackFile*                               Feedback;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HapticsManager.BhapticsRequestLibrary.SubmitDots
struct UBhapticsRequestLibrary_SubmitDots_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	EPosition                                          PositionEnum;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FDotPoint>                           DotPoints;                                                // (ConstParm, Parm, ZeroConstructor)
	int                                                DurationInMilliSecs;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HapticsManager.BhapticsRequestLibrary.SubmitBytes
struct UBhapticsRequestLibrary_SubmitBytes_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	EPosition                                          PositionEnum;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              InputBytes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                DurationInMilliSecs;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HapticsManager.BhapticsRequestLibrary.RegisterFeedbackFile
struct UBhapticsRequestLibrary_RegisterFeedbackFile_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	class UFeedbackFile*                               Feedback;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HapticsManager.BhapticsRequestLibrary.ProjectToVestPav
struct UBhapticsRequestLibrary_ProjectToVestPav_Params
{
	struct FVector                                     ContactLocation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FRotationOption                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HapticsManager.BhapticsRequestLibrary.ProjectToVestLocation
struct UBhapticsRequestLibrary_ProjectToVestLocation_Params
{
	struct FVector                                     ContactLocation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PlayerLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    PlayerRotation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotationOption                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HapticsManager.BhapticsRequestLibrary.ProjectToVest
struct UBhapticsRequestLibrary_ProjectToVest_Params
{
	struct FVector                                     ContactLocation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         PlayerComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotationOption                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HapticsManager.BhapticsRequestLibrary.IsRegisteredPlaying
struct UBhapticsRequestLibrary_IsRegisteredPlaying_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HapticsManager.BhapticsRequestLibrary.IsRegisteredFilePlaying
struct UBhapticsRequestLibrary_IsRegisteredFilePlaying_Params
{
	class UFeedbackFile*                               Feedback;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HapticsManager.BhapticsRequestLibrary.IsDeviceConnected
struct UBhapticsRequestLibrary_IsDeviceConnected_Params
{
	EPosition                                          Device;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HapticsManager.BhapticsRequestLibrary.IsAnythingPlaying
struct UBhapticsRequestLibrary_IsAnythingPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HapticsManager.BhapticsRequestLibrary.EnableHapticFeedback
struct UBhapticsRequestLibrary_EnableHapticFeedback_Params
{
};

// Function HapticsManager.BhapticsRequestLibrary.DisableHapticFeedback
struct UBhapticsRequestLibrary_DisableHapticFeedback_Params
{
};

// Function HapticsManager.BhapticsRequestLibrary.CustomProjectToVest
struct UBhapticsRequestLibrary_CustomProjectToVest_Params
{
	struct FVector                                     ContactLocation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         PlayerComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     UpVector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ForwardVector;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotationOption                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HapticsManager.BhapticsRequestLibrary.CreateZombieHaptics
struct UBhapticsRequestLibrary_CreateZombieHaptics_Params
{
	class UClass*                                      HapticsData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HapticsManager.BhapticsRequestLibrary.CreateHeadshotHaptics
struct UBhapticsRequestLibrary_CreateHeadshotHaptics_Params
{
	class UClass*                                      HapticsData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HapticsManager.BhapticsRequestLibrary.CreateHapticsFromHit
struct UBhapticsRequestLibrary_CreateHapticsFromHit_Params
{
	class UClass*                                      HapticsData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       HitBone;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HapticsManager.BhapticsRequestLibrary.CreateExplosionHaptics
struct UBhapticsRequestLibrary_CreateExplosionHaptics_Params
{
	class UClass*                                      HapticsData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HapticsManager.HapticDevice.Unpair
struct UHapticDevice_Unpair_Params
{
};

// Function HapticsManager.HapticDevice.TogglePosition
struct UHapticDevice_TogglePosition_Params
{
};

// Function HapticsManager.HapticDevice.SetDeviceData
struct UHapticDevice_SetDeviceData_Params
{
	struct FDevice                                     LinkedDevice;                                             // (Parm)
};

// Function HapticsManager.HapticDevice.Ping
struct UHapticDevice_Ping_Params
{
};

// Function HapticsManager.HapticDevice.Pair
struct UHapticDevice_Pair_Params
{
};

// Function HapticsManager.HapticDevice.ChangePosition
struct UHapticDevice_ChangePosition_Params
{
	struct FString                                     Position;                                                 // (Parm, ZeroConstructor)
};

// Function HapticsManager.HapticsManagerActor.SetTactSuit
struct AHapticsManagerActor_SetTactSuit_Params
{
	class USceneComponent*                             SleeveLeft;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SleeveRight;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Head;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             VestFront;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             VestBack;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             GloveLeft;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             GloveRight;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ShoeLeft;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ShoeRight;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
