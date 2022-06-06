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

// Class HapticsManager.AndroidHapticLibrary
// 0x0000 (0x0028 - 0x0028)
class UAndroidHapticLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HapticsManager.AndroidHapticLibrary");
		return ptr;
	}


	TArray<struct FDevice> STATIC_GetCurrentDevices();
	void STATIC_AndroidThunkCpp_UnpairAll();
	void STATIC_AndroidThunkCpp_Unpair(const struct FString& DeviceAddress);
	void STATIC_AndroidThunkCpp_TogglePosition(const struct FString& DeviceAddress);
	void STATIC_AndroidThunkCpp_StopScanning();
	void STATIC_AndroidThunkCpp_StartScanning();
	void STATIC_AndroidThunkCpp_PingAll();
	void STATIC_AndroidThunkCpp_Ping(const struct FString& DeviceAddress);
	void STATIC_AndroidThunkCpp_PairFromPosition(const struct FString& DeviceAddress, const struct FString& DevicePosition);
	void STATIC_AndroidThunkCpp_Pair(const struct FString& DeviceAddress);
	bool STATIC_AndroidThunkCpp_IsScanning();
	void STATIC_AndroidThunkCpp_ChangePosition(const struct FString& DeviceAddress, const struct FString& Position);
};


// Class HapticsManager.BhapticsRequestLibrary
// 0x0000 (0x0028 - 0x0028)
class UBhapticsRequestLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HapticsManager.BhapticsRequestLibrary");
		return ptr;
	}


	void STATIC_TurnOffRegisteredFeedbackFile(class UFeedbackFile* Feedback);
	void STATIC_TurnOffRegisteredFeedback(const struct FString& Key);
	void STATIC_TurnOffAllFeedback();
	void STATIC_ToggleHapticFeedback();
	void STATIC_SubmitPath(const struct FString& Key, EPosition PositionEnum, TArray<struct FPathPoint> PathPoints, int DurationInMilliSecs);
	void STATIC_SubmitFeedbackWithTransform(class UFeedbackFile* Feedback, const struct FString& AltKey, const struct FRotationOption& Option, bool UseAltKey);
	void STATIC_SubmitFeedbackWithIntensityDuration(class UFeedbackFile* Feedback, const struct FString& AltKey, const struct FRotationOption& RotationOption, const struct FScaleOption& ScaleOption, bool UseAltKey);
	void STATIC_SubmitFeedback(class UFeedbackFile* Feedback);
	void STATIC_SubmitDots(const struct FString& Key, EPosition PositionEnum, TArray<struct FDotPoint> DotPoints, int DurationInMilliSecs);
	void STATIC_SubmitBytes(const struct FString& Key, EPosition PositionEnum, TArray<unsigned char> InputBytes, int DurationInMilliSecs);
	void STATIC_RegisterFeedbackFile(const struct FString& Key, class UFeedbackFile* Feedback);
	struct FRotationOption STATIC_ProjectToVestPav(const struct FVector& ContactLocation, class USkeletalMeshComponent* Mesh);
	struct FRotationOption STATIC_ProjectToVestLocation(const struct FVector& ContactLocation, const struct FVector& PlayerLocation, const struct FRotator& PlayerRotation);
	struct FRotationOption STATIC_ProjectToVest(const struct FVector& ContactLocation, class UPrimitiveComponent* PlayerComponent, float HalfHeight);
	bool STATIC_IsRegisteredPlaying(const struct FString& Key);
	bool STATIC_IsRegisteredFilePlaying(class UFeedbackFile* Feedback);
	bool STATIC_IsDeviceConnected(EPosition Device);
	bool STATIC_IsAnythingPlaying();
	void STATIC_EnableHapticFeedback();
	void STATIC_DisableHapticFeedback();
	struct FRotationOption STATIC_CustomProjectToVest(const struct FVector& ContactLocation, class UPrimitiveComponent* PlayerComponent, float HalfHeight, const struct FVector& UpVector, const struct FVector& ForwardVector);
	void STATIC_CreateZombieHaptics(class UClass* HapticsData);
	void STATIC_CreateHeadshotHaptics(class UClass* HapticsData);
	void STATIC_CreateHapticsFromHit(class UClass* HapticsData, const struct FVector& HitLocation, const struct FName& HitBone, float Intensity, class USkeletalMeshComponent* Mesh);
	void STATIC_CreateExplosionHaptics(class UClass* HapticsData);
};


// Class HapticsManager.FeedbackFile
// 0x0048 (0x0070 - 0x0028)
class UFeedbackFile : public UObject
{
public:
	struct FString                                     Key;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ProjectString;                                            // 0x0038(0x0010) (ZeroConstructor)
	struct FGuid                                       ID;                                                       // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Device;                                                   // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	float                                              Duration;                                                 // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HapticsManager.FeedbackFile");
		return ptr;
	}

};


// Class HapticsManager.FootFeedbackFile
// 0x0000 (0x0070 - 0x0070)
class UFootFeedbackFile : public UFeedbackFile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HapticsManager.FootFeedbackFile");
		return ptr;
	}

};


// Class HapticsManager.HandFeedbackFile
// 0x0000 (0x0070 - 0x0070)
class UHandFeedbackFile : public UFeedbackFile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HapticsManager.HandFeedbackFile");
		return ptr;
	}

};


// Class HapticsManager.HapticDevice
// 0x0058 (0x0080 - 0x0028)
class UHapticDevice : public UObject
{
public:
	struct FDevice                                     DeviceData;                                               // 0x0028(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	bool                                               DidUpdateDevice;                                          // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsDarkMode;                                               // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x007A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HapticsManager.HapticDevice");
		return ptr;
	}


	void Unpair();
	void TogglePosition();
	void SetDeviceData(const struct FDevice& LinkedDevice);
	void Ping();
	void Pair();
	void ChangePosition(const struct FString& Position);
};


// Class HapticsManager.HapticsData
// 0x0068 (0x0158 - 0x00F0)
class UHapticsData : public UActorComponent
{
public:
	class UDataTable*                                  HapticLookupTable;                                        // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBodyHaptics                                HitFeedbackFiles;                                         // 0x00F8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FBodyHaptics                                ExplosionFeedbackFiles;                                   // 0x0118(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<class UFeedbackFile*>                       ZombieHitFeedback;                                        // 0x0138(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UFeedbackFile*                               R_Leg;                                                    // 0x0148(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFeedbackFile*                               L_Leg;                                                    // 0x0150(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HapticsManager.HapticsData");
		return ptr;
	}

};


// Class HapticsManager.HapticSettings
// 0x0008 (0x0040 - 0x0038)
class UHapticSettings : public UDeveloperSettings
{
public:
	bool                                               bShouldLaunch;                                            // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HapticsManager.HapticSettings");
		return ptr;
	}

};


// Class HapticsManager.HapticsManagerActor
// 0x0098 (0x03C0 - 0x0328)
class AHapticsManagerActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0328(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HapticsManager.HapticsManagerActor");
		return ptr;
	}


	void SetTactSuit(class USceneComponent* SleeveLeft, class USceneComponent* SleeveRight, class USceneComponent* Head, class USceneComponent* VestFront, class USceneComponent* VestBack, class USceneComponent* GloveLeft, class USceneComponent* GloveRight, class USceneComponent* ShoeLeft, class USceneComponent* ShoeRight);
};


// Class HapticsManager.TactalFeedbackFile
// 0x0000 (0x0070 - 0x0070)
class UTactalFeedbackFile : public UFeedbackFile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HapticsManager.TactalFeedbackFile");
		return ptr;
	}

};


// Class HapticsManager.TactosyFeedbackFile
// 0x0000 (0x0070 - 0x0070)
class UTactosyFeedbackFile : public UFeedbackFile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HapticsManager.TactosyFeedbackFile");
		return ptr;
	}

};


// Class HapticsManager.TactotFeedbackFile
// 0x0000 (0x0070 - 0x0070)
class UTactotFeedbackFile : public UFeedbackFile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HapticsManager.TactotFeedbackFile");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
