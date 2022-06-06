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

// Class Pavlov.ActionGunState
// 0x0038 (0x01A0 - 0x0168)
class UActionGunState : public UVRGunState
{
public:
	float                                              Action;                                                   // 0x0168(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnActionChanged;                                          // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOpenAction;                                             // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCloseAction;                                            // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ActionGunState");
		return ptr;
	}


	void SetAction(float NewValue);
	void OpenAction();
	void CloseAction();
};


// Class Pavlov.AirdropPlane
// 0x0030 (0x0358 - 0x0328)
class AAirdropPlane : public AActor
{
public:
	float                                              DropRadius;                                               // 0x0328(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DropHeightOffset;                                         // 0x032C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlaneFlightTime;                                          // 0x0330(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAirdropDetails                             AirdropDetails;                                           // 0x0334(0x001C) (BlueprintVisible, BlueprintReadOnly, Net)
	float                                              CurrentTravelTime;                                        // 0x0350(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0354(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.AirdropPlane");
		return ptr;
	}


	float GeneratePath(const struct FVector& DropLocation);
};


// Class Pavlov.AirplaneRoyale
// 0x0020 (0x0348 - 0x0328)
class AAirplaneRoyale : public AActor
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0328(0x0004) MISSED OFFSET
	struct FVector                                     SpawnLocation;                                            // 0x032C(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Traveled;                                                 // 0x0338(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bTraveling;                                               // 0x033C(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x033D(0x0003) MISSED OFFSET
	float                                              TravelSpeed;                                              // 0x0340(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0344(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.AirplaneRoyale");
		return ptr;
	}


	void StartTravel();
	void SetAsBase(class APavlovPawn* Pawn);
	void OnRep_Traveled();
	void ClearBase(class APavlovPawn* Pawn);
};


// Class Pavlov.AmmoBox
// 0x0030 (0x0500 - 0x04D0)
class AAmmoBox : public AVRItem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04D0(0x0008) MISSED OFFSET
	int                                                AmmoCount;                                                // 0x04D8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                MaxAmmoCount;                                             // 0x04DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PurchaseAmmoCount;                                        // 0x04E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET
	class USurfaceFXAsset*                             SurfaceFX;                                                // 0x04E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAmmoType                                          AmmoType;                                                 // 0x04F0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x04F1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.AmmoBox");
		return ptr;
	}


	void SetAmmoCount(int NewAmmoCount);
	bool RemoveAmmo(int RemoveAmount);
	void OnRep_AmmoCount();
	void OnAmmoCountChanged();
	EAmmoType GetAmmoType();
	void AddAmmo(int AddAmount);
};


// Class Pavlov.AmmoPouchComponent
// 0x0020 (0x0610 - 0x05F0)
class UAmmoPouchComponent : public UStaticMeshComponent
{
public:
	class UHapticFeedbackEffect_Base*                  GrabHaptic;                                               // 0x05F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   GrabSound;                                                // 0x05F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  LastMagazineHaptic;                                       // 0x0600(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  EmptyGrabHaptic;                                          // 0x0608(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.AmmoPouchComponent");
		return ptr;
	}

};


// Class Pavlov.Attachment
// 0x0060 (0x0530 - 0x04D0)
class AAttachment : public AVRItem
{
public:
	bool                                               bGunTickActive;                                           // 0x04D0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedsGunTick;                                            // 0x04D1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLocalGunTickOnly;                                        // 0x04D2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x04D3(0x0001) MISSED OFFSET
	struct FVector                                     AttachOffset;                                             // 0x04D4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Compatibility;                                            // 0x04E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET
	class USoundCue*                                   AttachSound;                                              // 0x04E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DettachSound;                                             // 0x04F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   EnterSlideModeSound;                                      // 0x04F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      AttachmentSlot;                                           // 0x0500(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAttaching;                                               // 0x0501(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bCanSlide;                                                // 0x0502(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0503(0x0001) MISSED OFFSET
	float                                              RailSpacer;                                               // 0x0504(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AGun*                                        SlideGun;                                                 // 0x0508(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SlideHaptics;                                             // 0x0510(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0514(0x0004) MISSED OFFSET
	class USoundCue*                                   SlideSound;                                               // 0x0518(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlideHapticsLimit;                                        // 0x0520(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttachDistance;                                           // 0x0524(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0528(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Attachment");
		return ptr;
	}


	bool TryAttach(unsigned char SlideModeSlot, bool bSliding, bool* bPlayFailureSound);
	void SetSelectionEnable(bool bEnabled);
	void OnSlideModeChanged(bool bSlideMode);
	void OnGunTickChanged(bool bEnabled);
	void OnAttachmentModeChanged(bool bEnabled);
	unsigned char MakeSlideModeSlot(class AGun* Gun);
	void GunTick(float DeltaTime);
	bool GetSlideTransform(struct FTransform* SlideTransform);
	bool GetSlideModeSlot(unsigned char* SlideModeSlot);
	struct FVector GetGrabLoc();
	void ClearSlideGun();
	bool CanAttach(class AGun* Gun, bool bForceAttach);
	void AttachToGunServer(class AGun* Gun, unsigned char SlideModeSlot);
	bool AttachToGun(class AGun* Gun, bool bForceAttach);
};


// Class Pavlov.AttachmentAccessory
// 0x0030 (0x0560 - 0x0530)
class AAttachmentAccessory : public AAttachment
{
public:
	class USoundBase*                                  ToggleAttachmentSound;                                    // 0x0530(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  PowerUpSound;                                             // 0x0538(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  PowerDownSound;                                           // 0x0540(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastToggleTime;                                           // 0x0548(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bLocalPlayer;                                             // 0x054C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPredicting;                                              // 0x054D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x054E(0x0002) MISSED OFFSET
	struct FTimerHandle                                Drop_Handle;                                              // 0x0550(0x0008)
	class AGun*                                        LastGun;                                                  // 0x0558(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.AttachmentAccessory");
		return ptr;
	}


	void SetAccessoryActive_Server(bool bActive);
	void SetAccessoryActive(bool bActive);
	void OnRep_AccessoryOn();
	void OnAccessoryStateChanged(bool bActive);
	bool IsAccessoryOn();
	void CheckDropped();
};


// Class Pavlov.AttachmentAccessory_Bayonet
// 0x0070 (0x05D0 - 0x0560)
class AAttachmentAccessory_Bayonet : public AAttachmentAccessory
{
public:
	class USkeletalMeshComponent*                      BayonetMesh;                                              // 0x0560(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FVector                                     BayonetVelocity;                                          // 0x0568(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0574(0x0004) MISSED OFFSET
	struct FName                                       StabStartSocket;                                          // 0x0578(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       StabEndSocket;                                            // 0x0580(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SlashSoundFX;                                             // 0x0588(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  StabSoundFX;                                              // 0x0590(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SwingSoundFX;                                             // 0x0598(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwingSoundFrequency;                                      // 0x05A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SwingSoundVelocity;                                       // 0x05A4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDoubleSidedBayonet;                                      // 0x05AC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRotatedOnGun;                                            // 0x05AD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x05AE(0x0002) MISSED OFFSET
	struct FVector                                     LastLocation;                                             // 0x05B0(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              LastDmgTime;                                              // 0x05BC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bBloody;                                                  // 0x05C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x05C1(0x0003) MISSED OFFSET
	float                                              LastSwingSound;                                           // 0x05C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PreviousForcedLodModel;                                   // 0x05C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x05CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.AttachmentAccessory_Bayonet");
		return ptr;
	}


	void StabPlayerMulti(bool bSlashed);
	void StabPlayer(const struct FBayonetDamage& BayonetDamage);
	void OnSwitchToBlood();
};


// Class Pavlov.AttachmentAccessory_Flashlight
// 0x0060 (0x05C0 - 0x0560)
class AAttachmentAccessory_Flashlight : public AAttachmentAccessory
{
public:
	class UStaticMeshComponent*                        FlashlightMesh;                                           // 0x0560(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        FlashlightBeam;                                           // 0x0568(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        FlashlightSource;                                         // 0x0570(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        FlashlightCookie;                                         // 0x0578(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x0580(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    FlashlightBeamMaterial;                                   // 0x0588(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    FlashlightCookieMaterial;                                 // 0x0590(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0598(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Thickness;                                                // 0x059C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeamLengthMultiplier;                                     // 0x05A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x05A4(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Brightness;                                               // 0x05B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpotlightPowerMultiplier;                                 // 0x05B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CookiePowerWhenLit;                                       // 0x05BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.AttachmentAccessory_Flashlight");
		return ptr;
	}

};


// Class Pavlov.AttachmentAccessory_Laser
// 0x0060 (0x05C0 - 0x0560)
class AAttachmentAccessory_Laser : public AAttachmentAccessory
{
public:
	class UStaticMeshComponent*                        LaserMesh;                                                // 0x0560(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LaserSourceMesh;                                          // 0x0568(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LaserTargetMesh;                                          // 0x0570(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LaserBeamMesh;                                            // 0x0578(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0580(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Brightness;                                               // 0x0584(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0588(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DustPower;                                                // 0x0598(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoisePower;                                               // 0x059C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Thickness;                                                // 0x05A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OverExposure;                                             // 0x05A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OverExposureWhitepoint;                                   // 0x05A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05AC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    LaserBeamMaterial;                                        // 0x05B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x05B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.AttachmentAccessory_Laser");
		return ptr;
	}

};


// Class Pavlov.AttachmentCanted
// 0x0000 (0x0530 - 0x0530)
class AAttachmentCanted : public AAttachment
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.AttachmentCanted");
		return ptr;
	}


	void OnFlipCantedSight(bool bRightHanded);
};


// Class Pavlov.AttachmentGrip
// 0x0040 (0x0570 - 0x0530)
class AAttachmentGrip : public AAttachment
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0530(0x0030) MISSED OFFSET
	float                                              VerticalRecoilMul;                                        // 0x0560(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SideToSideRecoilMul;                                      // 0x0564(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               GripSequence;                                             // 0x0568(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.AttachmentGrip");
		return ptr;
	}

};


// Class Pavlov.AttachmentSight
// 0x0080 (0x05B0 - 0x0530)
class AAttachmentSight : public AAttachment
{
public:
	class UMaterialInstanceDynamic*                    ZeroMaterial;                                             // 0x0530(0x0008) (ZeroConstructor, IsPlainOldData)
	class UShowOnlyComponent*                          ShowOnlyComp;                                             // 0x0538(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AGlobalPlayerEffects*                        GlobalEffects;                                            // 0x0540(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bCaptureScene;                                            // 0x0548(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHideGunOnCapture;                                        // 0x0549(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHideSelfOnCapture;                                       // 0x054A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x054B(0x0005) MISSED OFFSET
	class UTextureRenderTarget2D*                      CaptureTexture;                                           // 0x0550(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CaptureOffset;                                            // 0x0558(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LenseOffset;                                              // 0x0564(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActivateDist;                                             // 0x0570(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActivateDistLine;                                         // 0x0574(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseFOV;                                                  // 0x0578(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MulFOV;                                                   // 0x057C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DivFOV;                                                   // 0x0580(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScopeFOV;                                                 // 0x0584(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bZeroMaterial;                                            // 0x0588(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0589(0x0007) MISSED OFFSET
	struct FName                                       ZeroParamName;                                            // 0x0590(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  ZeroingTable;                                             // 0x0598(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 FlashCurve;                                               // 0x05A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x05A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.AttachmentSight");
		return ptr;
	}


	void UpdateScopeHiddenActors();
	void SetScopeActive(bool bActive);
	void OnScopeExploit(bool bExploit);
	class UMeshComponent* GetLenseMesh(int* MaterialIndex);
	float DebugFOVAngle();
	void ApplyZeroing(float Delta);
};


// Class Pavlov.AttachmentSuppressor
// 0x0000 (0x0530 - 0x0530)
class AAttachmentSuppressor : public AAttachment
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.AttachmentSuppressor");
		return ptr;
	}

};


// Class Pavlov.AttachProxy
// 0x0068 (0x0390 - 0x0328)
class AAttachProxy : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0328(0x0008) MISSED OFFSET
	struct FAttachProxyInfo                            AttachInfo;                                               // 0x0330(0x0050) (BlueprintVisible, BlueprintReadOnly, Net)
	class UClass*                                      SpawnItemClass;                                           // 0x0380(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunOwnerAttach;                                          // 0x0388(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0389(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.AttachProxy");
		return ptr;
	}


	bool SetupOwnerAttachment(const struct FAttachProxyInfo& NewAttachInfo);
	void SetAttachInfo(const struct FAttachProxyInfo& NewAttachInfo);
	void OwnerKilled(class AActor* Killed);
	void OnRep_AttachInfo();
	void OnParentDestroyed(class AActor* DestroyedActor);
};


// Class Pavlov.AvatarSkin
// 0x0080 (0x0170 - 0x00F0)
class UAvatarSkin : public UActorComponent
{
public:
	TArray<class UActorComponent*>                     UsedComponents;                                           // 0x00F0(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UWoundComponent*                             WoundComponent;                                           // 0x0100(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET
	class USkeletalMesh*                               BaseMesh;                                                 // 0x0110(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               HandMesh;                                                 // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 InventoryVestLight;                                       // 0x0120(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 InventoryVestHeavy;                                       // 0x0128(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FlyingHelmetClass;                                        // 0x0130(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PelvisZOffset;                                            // 0x0138(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	class UAnimSequence*                               EyeLidSequence;                                           // 0x0140(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WoundClass;                                               // 0x0148(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SkullSocket;                                              // 0x0150(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PipeOffset;                                               // 0x0158(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsWW2Skin;                                               // 0x015C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x015D(0x0003) MISSED OFFSET
	TArray<class UMeshComponent*>                      MeshComponents;                                           // 0x0160(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.AvatarSkin");
		return ptr;
	}


	void Update();
	void SetStencilValue(unsigned char Value);
	void SetRenderToCustomDepth(bool bEnabled);
	void RemoveUsedComponent(class UActorComponent* Component);
	void OptimizeAvatar(class USkeletalMeshComponent* PawnAvatar);
	class APavlovPawn* GetPawn();
	class USkeletalMeshComponent* GetBaseMeshComponent();
	class USkeletalMeshComponent* CreateChildSkeletalMeshComponent(class USkeletalMesh* SkeletalMesh);
	void AddUsedComponent(class UActorComponent* Component);
};


// Class Pavlov.AvatarSkinCustom
// 0x0020 (0x0190 - 0x0170)
class UAvatarSkinCustom : public UAvatarSkin
{
public:
	class USkeletalMeshComponent*                      CustomMesh;                                               // 0x0170(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMesh*                               BarehandMesh;                                             // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               NATOHandMesh;                                             // 0x0180(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               RussianHandMesh;                                          // 0x0188(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.AvatarSkinCustom");
		return ptr;
	}


	void SetCustomMesh(const struct FName& MeshName, class USkeletalMesh* CustomHandMesh);
};


// Class Pavlov.AzureGameMode
// 0x0000 (0x0410 - 0x0410)
class AAzureGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.AzureGameMode");
		return ptr;
	}


	void Travel();
};


// Class Pavlov.AzureGameState
// 0x0000 (0x0388 - 0x0388)
class AAzureGameState : public AGameState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.AzureGameState");
		return ptr;
	}

};


// Class Pavlov.AzureServer
// 0x00D0 (0x00F8 - 0x0028)
class UAzureServer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	float                                              NoPlayersTimer;                                           // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              EndGraceTimer;                                            // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0040(0x0030) MISSED OFFSET
	bool                                               bReady;                                                   // 0x0070(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMatchOver;                                               // 0x0071(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0072(0x0006) MISSED OFFSET
	struct FString                                     SessionId;                                                // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Region;                                                   // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     IPV4Address;                                              // 0x0098(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     SessionCookie;                                            // 0x00A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     QueueName;                                                // 0x00B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     TravelURL;                                                // 0x00C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                MaxWaitTime;                                              // 0x00D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TickRate;                                                 // 0x00DC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bBackfillEnabled;                                         // 0x00E0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAccurateBackfill;                                     // 0x00E1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMatchmakingServer;                                       // 0x00E2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x00E3(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnReady;                                                  // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.AzureServer");
		return ptr;
	}


	void SoftTick();
};


// Class Pavlov.PavlovGameMode
// 0x0328 (0x0738 - 0x0410)
class APavlovGameMode : public AGameMode
{
public:
	TArray<class AAIController*>                       Bots;                                                     // 0x0410(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0420(0x0018) MISSED OFFSET
	TArray<struct FAIPersonality>                      BotPersonalities;                                         // 0x0438(0x0010) (ZeroConstructor)
	float                                              DynTeam0SpawnTimer;                                       // 0x0448(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DynTeam1SpawnTimer;                                       // 0x044C(0x0004) (ZeroConstructor, IsPlainOldData)
	class APlayerSpawnPoint*                           DynSpawnPoint0;                                           // 0x0450(0x0008) (ZeroConstructor, IsPlainOldData)
	class APlayerSpawnPoint*                           DynSpawnPoint1;                                           // 0x0458(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0460(0x0030) MISSED OFFSET
	struct FString                                     SwitchMapId;                                              // 0x0490(0x0010) (ZeroConstructor)
	struct FString                                     SwitchGameMode;                                           // 0x04A0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x50];                                      // 0x04B0(0x0050) MISSED OFFSET
	float                                              RoundTimer;                                               // 0x0500(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x0504(0x000C) MISSED OFFSET
	class AVoiceManager*                               VoiceManager;                                             // 0x0510(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                NameCounter;                                              // 0x0518(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bSwapSpawns;                                              // 0x051C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFillWithBots;                                            // 0x051D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNoTeams;                                                 // 0x051E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAlwaysScore;                                             // 0x051F(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceNoScoring;                                          // 0x0520(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceNoBots;                                             // 0x0521(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTeamLocked;                                              // 0x0522(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPavlovRoundState                                  RoundState;                                               // 0x0523(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EGameDifficulty                                    Difficulty;                                               // 0x0524(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSecure;                                                  // 0x0525(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0526(0x0002) MISSED OFFSET
	class APavlovGameState*                            PavlovGameState;                                          // 0x0528(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPavlovGameModeType                                GameModeType;                                             // 0x0530(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0531(0x0007) MISSED OFFSET
	class UClass*                                      BotControllerClass;                                       // 0x0538(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GhostClass;                                               // 0x0540(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      HandMenuClass;                                            // 0x0548(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  BotPersonalityTable;                                      // 0x0550(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  EquipmentCostTable;                                       // 0x0558(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxPlayers;                                               // 0x0560(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaximumCash;                                              // 0x0564(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CashKillReward;                                           // 0x0568(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CashTeamKillPenalty;                                      // 0x056C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIncrementTeamScore;                                      // 0x0570(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoRespawn;                                             // 0x0571(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bKeepBodies;                                              // 0x0572(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bKeepPawnIfAlive;                                         // 0x0573(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BodyPool;                                                 // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShackBodyDespawnTime;                                     // 0x0578(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RespawnMaxDelay;                                          // 0x057C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InactivityInterval;                                       // 0x0580(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InactivityThreashold;                                     // 0x0584(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InactivityDormantThreashold;                              // 0x0588(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDynamicSpawns;                                           // 0x058C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSpawnGhostOnLogin;                                       // 0x058D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x058E(0x0002) MISSED OFFSET
	int                                                RoundDuration;                                            // 0x0590(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TeamLockDuration;                                         // 0x0594(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowRoundDurationOverride;                              // 0x0598(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowWeaponFilter;                                       // 0x0599(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowCompetitive;                                        // 0x059A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bKillfeedDisabled;                                        // 0x059B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowVehicles;                                           // 0x059C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPunishSuicide;                                           // 0x059D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x059E(0x0002) MISSED OFFSET
	float                                              PunishSuicideTime;                                        // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoKickOnTK;                                            // 0x05A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x05A5(0x0003) MISSED OFFSET
	int                                                TKKickThreshold;                                          // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanUploadStats;                                          // 0x05AC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x05AD(0x0003) MISSED OFFSET
	class UClass*                                      BombClass;                                                // 0x05B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBuyRestrictions                            BuyRestrictions;                                          // 0x05B8(0x0140) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FString                                     BuyMenuScriptFilename;                                    // 0x06F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UWeaponFilterData*                           WeaponFilterData;                                         // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      OutOfBoundsComponentClass;                                // 0x0710(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CustomItemClass;                                          // 0x0718(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x10];                                      // 0x0720(0x0010) MISSED OFFSET
	class UStatsManager*                               StatsManager;                                             // 0x0730(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovGameMode");
		return ptr;
	}


	void TerminateGameSession();
	void SwitchTeam(class AController* Controller);
	void Suicide(class AController* Controller);
	void StopReplayRecording();
	void StartReplayRecording();
	bool SpawnVehicleWRef(const struct FAsyncVehicleSpawnData& AsyncVehicleSpawnData);
	bool SpawnVehicleForPawn(class APavlovPawn* Pawn, const struct FName& Vehicle);
	bool SpawnVehicle(const struct FTransform& SpawnTransform, const struct FName& VehicleID);
	void SpawnPlayer(class AController* Controller);
	class APavlovPawn* SpawnPavlovPawn(class AController* Controller, const struct FTransform& Transform);
	void SpawnAndPossesPawns();
	void ShuffleTeams();
	void SetTTTRoundEndSoundEnabled(bool bEnabled);
	void SetTeamLockTime(float LockTime);
	void SetTeamCash(int TeamId, int CashAmmount);
	void SetRoundState(EPavlovRoundState State);
	void SetPlayerScore(class APlayerState* PlayerState, int Score);
	void SetPawnsInvulnerable(bool bEnabled);
	void SetMovement(bool bEnabled);
	void SetLimitedAmmoMode(unsigned char LimitedAmmoType);
	void SetInactivityThresholds(int NewInactivityThreashold, int NewInactivityDormantThreashold);
	void SetGrenadePinPrevention(bool bPreventGrenadePins);
	void SetEveryoneCash(int CashAmmount);
	void SetAttackingTeam(int TeamId);
	void RotateMap();
	void ResetSNDMatch();
	void ResetScore();
	void ReplenishPlayersAmmo();
	void ReplaceVehicleSpawners();
	void RefreshOutOfBounds();
	void PunishTeamKiller(class APavlovPlayerState* TeamKiller);
	void PostStats();
	void PostRoundCleanUp();
	void OnSteamTicketValidation(const struct FString& SteamUserId, ESteamAuthResponse Response, const struct FString& OwnerSteamUserId);
	void OnspawnVehicleWRefAsync(class UClass* VehicleClass, const struct FAsyncVehicleSpawnData& AsyncVehicleSpawnData);
	void OnSpawnVehicleAsync(class UClass* VehicleClass, const struct FTransform& SpawnTransform, int TeamId);
	void OnRoundStateChanged(EPavlovRoundState OldState, EPavlovRoundState NewState);
	void OnPlayerSpawned(class APavlovPlayerState* PlayerState, class AController* Controller, class APavlovPawn* Pawn);
	void OnPlayerKilled(class APavlovPlayerState* PlayerState, class AController* Controller, class APavlovPawn* Pawn);
	void OnPawnKilled(class AActor* OwnerActor);
	void OnOutOfBoundsOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnOutOfBoundsEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnLimitedAmmoModeChanged(ELimitedAmmoType LimitedAmmoType);
	void OnKillVolumeOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void MakeNavmeshStatic();
	void LogSNDWinner(int LogRound, int LogTeamID);
	void LogBombExplosion();
	void LogBomb(class AController* Interactor, bool bBombPlanted);
	void KickByStringId(const struct FString& ID, const struct FText& KickReason, bool bBan);
	void KickByPlayerState(class APavlovPlayerState* PlayerState, const struct FText& KickReason, bool bBan, bool bAddToBlacklist);
	bool IsTeamDead(int TeamId);
	void InitializedVehicleSpawners(bool bHasSpawners);
	void IncrementTeamScore(int TeamId, int Score);
	void IncrementPlayerScore(class APlayerState* PlayerState, int Score);
	void GiveTeamCash(int TeamId, int CashAmmount);
	void GiveItem(class APavlovPawn* Pawn, class UClass* ItemClass, float BlockDuration, bool bLoaded);
	void GiveEveryoneCash(int CashAmmount);
	void GetTeamStatus(int TeamId, int* Num, int* Casualties);
	int GetTeamRealPlayerCount(int TeamId);
	struct FString GetSteamAudioGun();
	TArray<class APlayerSpawnPoint*> GetSpawnPointsForQuery(int NumOfSpawnPoints);
	int GetRoundNumber();
	int GetRealPlayerCount();
	class AController* GetRandomController(int TeamFilter, bool bRealPlayer);
	int GetMaxPlayerCount();
	float GetKillZHeight();
	int GetKillReward(class APavlovPlayerState* Killer, class APavlovPlayerState* Victim, const struct FDamageTrackInfo& LastHitInfo);
	class APlayerSpawnPoint* GetDynamicSpawnPointForTeam(int TeamId);
	class APlayerSpawnPoint* GetDynamicOccludedSpawnPoint(int TeamId);
	void FinalizeMapSwitch();
	void FinalizeMapRotation();
	void EndTTTRound();
	void EnableFallDamage(bool bFallEnabled);
	void DestroyPushSpawns();
	void DestroyBot(class AController* Controller);
	void CreateDedicatedServerSession();
	class AController* CreateBot(int TeamId);
	void CleanUpItems();
	bool CanRotateMap();
	bool CanChangeScore();
	void AssignPlayerSkin(class APavlovPlayerState* PlayerState, class APavlovPawn* Pawn);
	class UTTTGameInfo* AddTTTGameInfo(class UClass* TTTGameInfoClass);
	bool AddStatByController(class AController* Controller, EPlayerStats PlayerStat);
	bool AddStat(class APavlovPlayerState* PavPlayerState, EPlayerStats PlayerStat);
	void AddExtraRoundTime(float ExtraTime);
	void AddAssist(class APavlovPlayerState* PlayerState);
};


// Class Pavlov.BattlegroundsGameMode
// 0x0028 (0x0760 - 0x0738)
class ABattlegroundsGameMode : public APavlovGameMode
{
public:
	unsigned char                                      UnknownData00[0x11];                                      // 0x0738(0x0011) MISSED OFFSET
	EBattlegroundsServerType                           ServerType;                                               // 0x0749(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x074A(0x0006) MISSED OFFSET
	struct FString                                     MasterServerUrl;                                          // 0x0750(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.BattlegroundsGameMode");
		return ptr;
	}


	void PerformWaitingHeartBeat();
	void PerformGameHeartBeat();
};


// Class Pavlov.BeltFedGunState
// 0x0000 (0x0168 - 0x0168)
class UBeltFedGunState : public UVRGunState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.BeltFedGunState");
		return ptr;
	}

};


// Class Pavlov.BloodPuddle
// 0x0050 (0x0378 - 0x0328)
class ABloodPuddle : public AActor
{
public:
	class UDecalComponent*                             DecalComponent;                                           // 0x0328(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0330(0x0014) MISSED OFFSET
	float                                              Threashold;                                               // 0x0344(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PoolNum;                                                  // 0x0348(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          DecalMaterial;                                            // 0x0350(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DecalSize;                                                // 0x0358(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZBias;                                                    // 0x0364(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLifeSpan;                                              // 0x0368(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeOutDuration;                                          // 0x036C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bKeepAlive;                                               // 0x0370(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0371(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.BloodPuddle");
		return ptr;
	}


	void OnPour(const struct FTransform& Transform);
	void OnOwnerEndPlay(class AActor* OwnerActor, TEnumAsByte<EEndPlayReason> Reason);
};


// Class Pavlov.BloodSplat
// 0x0008 (0x0330 - 0x0328)
class ABloodSplat : public AActor
{
public:
	float                                              MaxProjection;                                            // 0x0328(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x032C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.BloodSplat");
		return ptr;
	}

};


// Class Pavlov.BloodSplatGeometry
// 0x0040 (0x0370 - 0x0330)
class ABloodSplatGeometry : public ABloodSplat
{
public:
	class UMaterialInstanceDynamic*                    MaterialInstance;                                         // 0x0330(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET
	class UParticleSystem*                             ImpactEffect;                                             // 0x0340(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Sound;                                                    // 0x0348(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0350(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              Scale;                                                    // 0x0360(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Duration;                                                 // 0x0364(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeOutRate;                                              // 0x0368(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x036C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.BloodSplatGeometry");
		return ptr;
	}


	void FadeOut();
};


// Class Pavlov.Bomb
// 0x0270 (0x0740 - 0x04D0)
class ABomb : public AVRItem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04D0(0x0008) MISSED OFFSET
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x04D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x04E0(0x0008) MISSED OFFSET
	class AController*                                 BombInstigator;                                           // 0x04E8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x120];                                     // 0x04F0(0x0120) MISSED OFFSET
	bool                                               bOccluded;                                                // 0x0610(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EBombState                                         State;                                                    // 0x0611(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0612(0x0002) MISSED OFFSET
	int                                                Timer;                                                    // 0x0614(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                NextDigit;                                                // 0x0618(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x061C(0x0004) MISSED OFFSET
	struct FString                                     Code;                                                     // 0x0620(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	float                                              DetonatorDelay;                                           // 0x0630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GraceDuration;                                            // 0x0634(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DefuseSound;                                              // 0x0638(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   GraceSound;                                               // 0x0640(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   PlantedSound;                                             // 0x0648(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DetonationSound;                                          // 0x0650(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   BeepSiteASound;                                           // 0x0658(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   BeepSiteBSound;                                           // 0x0660(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 BeepIntervalCurve;                                        // 0x0668(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DigitExpireDelay;                                         // 0x0670(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     KeyPadOffset;                                             // 0x0674(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KeyDistance;                                              // 0x0680(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0684(0x0004) MISSED OFFSET
	class USoundCue*                                   KeySound;                                                 // 0x0688(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ErrorSound;                                               // 0x0690(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SuccessSound;                                             // 0x0698(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USurfaceFXAsset*                             SurfaceFX;                                                // 0x06A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ExplosionFX;                                              // 0x06A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ShackExplosionFX;                                         // 0x06B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionFXScale;                                         // 0x06B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x06BC(0x0004) MISSED OFFSET
	TArray<bool>                                       WireStates;                                               // 0x06C0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	TArray<struct FName>                               Wires;                                                    // 0x06D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              CutMaxDist;                                               // 0x06E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Damage;                                                   // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDamage;                                                // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageInnerRadius;                                        // 0x06EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageOuterRadius;                                        // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageFalloff;                                            // 0x06F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x06F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowUseByAnyone;                                        // 0x06F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x06FA(0x0002) MISSED OFFSET
	struct FVector                                     LastDropLocation;                                         // 0x06FC(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                BombDrop_Handle;                                          // 0x0708(0x0008) (BlueprintVisible, BlueprintReadOnly)
	bool                                               bAutoResetBomb;                                           // 0x0710(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0711(0x0003) MISSED OFFSET
	float                                              ResetToNavTime;                                           // 0x0714(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnBombDetonation;                                         // 0x0718(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBombDefused;                                            // 0x0728(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData09[0x8];                                       // 0x0738(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Bomb");
		return ptr;
	}


	void ResetBombPosition();
	void PlantAt(class ABombPlantSpot* Spot, bool bForce);
	void OnPlayerOcclusionChange(bool bNewOccluded);
	void OnPlanted();
	void OnGrace();
	void OnDetonation();
	void OnDefuse();
	void OnCodeReset();
	void OnButtonPressed(int Index);
	void OnBeep();
	void MulticastOnPlantAt(class ABombPlantSpot* Spot);
	void MulticastOnGrace();
	void MulticastOnEnterCode(bool bSucceed);
	void MulticastOnDetonation();
	void MulticastOnDefuse();
	void MulticastOnCodeReset();
	void MulticastOnBeep();
	bool IsWireCut(int Index);
	bool IsButtonPressed(int Index);
	struct FVector GetWireLocation(int Index);
	int GetClosestValidWireIndex(const struct FVector& Location);
	void ExpireCode();
	void EnterDigit(int Digit, class AController* Presser);
	void Detonate();
	void Defuse(class AController* Defuser);
	void CutWire(int Index, class AController* Defuser);
	void AllowAutoResetBomb(bool bAutoReset);
};


// Class Pavlov.BombAnimInstance
// 0x0030 (0x0390 - 0x0360)
class UBombAnimInstance : public UAnimInstance
{
public:
	float                                              Button03;                                                 // 0x0360(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Button04;                                                 // 0x0364(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Button05;                                                 // 0x0368(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Button06;                                                 // 0x036C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Button07;                                                 // 0x0370(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Button08;                                                 // 0x0374(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Button09;                                                 // 0x0378(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Button00;                                                 // 0x037C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ButtonX1;                                                 // 0x0380(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ButtonX2;                                                 // 0x0384(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRedCableCut;                                             // 0x0388(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bYellowCableCut;                                          // 0x0389(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWhiteCableCut;                                           // 0x038A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x038B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.BombAnimInstance");
		return ptr;
	}

};


// Class Pavlov.BombPlantSpot
// 0x0030 (0x0500 - 0x04D0)
class ABombPlantSpot : public AVRItem
{
public:
	class UBoxComponent*                               Collision;                                                // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x04D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bIsB;                                                     // 0x04E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bPlantedHere;                                             // 0x04E1(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bSpotEnabled;                                             // 0x04E2(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x04E3(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBombPlanted;                                            // 0x04E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x04F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.BombPlantSpot");
		return ptr;
	}


	void UpdateEnabledState();
	void SetSpotEnabled(bool bEnabled);
	void ResetSpot();
	void OnRep_PlantedHere();
	void MulticastOnPlantStateChanged(bool bPlanted);
};


// Class Pavlov.BootGameMode
// 0x0000 (0x03C8 - 0x03C8)
class ABootGameMode : public AGameModeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.BootGameMode");
		return ptr;
	}


	void OnAsyncLoadCompleted();
};


// Class Pavlov.Bullet
// 0x0088 (0x0548 - 0x04C0)
class ABullet : public AVRBullet
{
public:
	float                                              TimeSpawned;                                              // 0x04C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Latency;                                                  // 0x04C4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ArmourDamage;                                             // 0x04C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ArmourPenetration;                                        // 0x04CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HelmetDamage;                                             // 0x04D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HelmetBleed;                                              // 0x04D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FalloffModifier;                                          // 0x04D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinFalloffDist;                                           // 0x04DC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxFalloffDist;                                           // 0x04E0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET
	class USurfaceFXAsset*                             SurfaceFX;                                                // 0x04E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ShackImpactParticle;                                      // 0x04F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 HeadshotProbability;                                      // 0x04F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WoundScale;                                               // 0x0500(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      WoundRate;                                                // 0x0504(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0505(0x0003) MISSED OFFSET
	class UCurveFloat*                                 WoundRateByDistance;                                      // 0x0508(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        SphereMesh;                                               // 0x0510(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BulletMaterial;                                           // 0x0518(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseTracer;                                               // 0x0520(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0521(0x0003) MISSED OFFSET
	float                                              TracersLength;                                            // 0x0524(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TracerGirth;                                              // 0x0528(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TracerTimeScaleSpeed;                                     // 0x052C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAuthDmg;                                                 // 0x0530(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0531(0x0003) MISSED OFFSET
	float                                              TracerTimer;                                              // 0x0534(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TracerDraws;                                              // 0x0538(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x053C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 TracerOpacityCurve;                                       // 0x0540(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Bullet");
		return ptr;
	}


	class UStaticMeshComponent* GetBulletMesh();
};


// Class Pavlov.BulletHoleManager
// 0x0030 (0x0358 - 0x0328)
class ABulletHoleManager : public AActor
{
public:
	TArray<class UInstancedStaticMeshComponent*>       MeshInstances;                                            // 0x0328(0x0010) (ExportObject, ZeroConstructor)
	TArray<int>                                        Needles;                                                  // 0x0338(0x0010) (ZeroConstructor)
	int                                                MaxHoles;                                                 // 0x0348(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DecalScale;                                               // 0x034C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DepthOffset;                                              // 0x0350(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0354(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.BulletHoleManager");
		return ptr;
	}

};


// Class Pavlov.UberWheel
// 0x0070 (0x0398 - 0x0328)
class AUberWheel : public AActor
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0328(0x0004) MISSED OFFSET
	bool                                               bWheelEnabled;                                            // 0x032C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x032D(0x0003) MISSED OFFSET
	float                                              CenterRadius;                                             // 0x0330(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0334(0x0004) MISSED OFFSET
	class USoundBase*                                  EnableSound;                                              // 0x0338(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DisableSound;                                             // 0x0340(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CommitSound;                                              // 0x0348(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SelectSound;                                              // 0x0350(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  HoverSound;                                               // 0x0358(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ErrorSound;                                               // 0x0360(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ToggleCurve;                                              // 0x0368(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ToggleDuration;                                           // 0x0370(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHolding;                                                 // 0x0374(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0375(0x0003) MISSED OFFSET
	float                                              PositionX;                                                // 0x0378(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PositionY;                                                // 0x037C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Selection;                                                // 0x0380(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0384(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnWheelUpdate;                                            // 0x0388(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.UberWheel");
		return ptr;
	}


	void SetEnabled(bool bEnabled);
	bool IsEnabled();
};


// Class Pavlov.BuyMenu
// 0x0058 (0x03F0 - 0x0398)
class ABuyMenu : public AUberWheel
{
public:
	class UStaticMeshComponent*                        PlaneMesh;                                                // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCohtmlComponent*                            CohtmlComponent;                                          // 0x03A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	TArray<struct FBuyMenuEquipment>                   EquipmentList;                                            // 0x03A8(0x0010) (ZeroConstructor)
	int                                                CashAvailable;                                            // 0x03B8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsShack;                                                 // 0x03BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	class APavlovGameState*                            GameState;                                                // 0x03C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class APavlovPlayerState*                          LocalPlayerState;                                         // 0x03C8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET
	class USoundBase*                                  BuySound;                                                 // 0x03D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Transition1Sound;                                         // 0x03E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Transition2Sound;                                         // 0x03E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.BuyMenu");
		return ptr;
	}


	void OnScriptingReady();
	void OnReadyForBindings();
	void OnCashUpdated(int Cash);
	void OnBuyingChanged(bool bEnabled);
};


// Class Pavlov.BuyMenuData
// 0x0010 (0x0040 - 0x0030)
class UBuyMenuData : public UDataAsset
{
public:
	struct FBuyMenuContainer                           BuyMenuData;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.BuyMenuData");
		return ptr;
	}


	bool RemoveBuyMenuSlot(const struct FName& ItemName);
	class UJsonUtilsObj* PropertiesToJson();
	bool JsonStringToBuyWheelData(const struct FString& JsonString);
	TArray<struct FBuyMenuSlot> GetFilteredList(class APavlovPlayerState* PlayerState);
	class UBuyMenuData* CreateBuyMenuData(const struct FString& JsonString);
	void AddBuyMenuSlot(const struct FBuyMenuSlot& Slot);
};


// Class Pavlov.BuyZone
// 0x0000 (0x0360 - 0x0360)
class ABuyZone : public ATriggerVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.BuyZone");
		return ptr;
	}

};


// Class Pavlov.ChamberComponent
// 0x00E0 (0x0520 - 0x0440)
class UChamberComponent : public UPhysicsConstraintComponent
{
public:
	class UStaticMeshComponent*                        MeshInstance;                                             // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ConstrainedMesh;                                          // 0x0448(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Volume;                                                   // 0x0450(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGun*                                        Gun;                                                      // 0x0458(0x0008) (ZeroConstructor, IsPlainOldData)
	class UVRGunState*                                 GunState;                                                 // 0x0460(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0468(0x0008) MISSED OFFSET
	bool                                               bRemoving;                                                // 0x0470(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowRemoval;                                            // 0x0471(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0472(0x0002) MISSED OFFSET
	int                                                ChamberIndex;                                             // 0x0474(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 LiveRound;                                                // 0x0478(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 EmptyShell;                                               // 0x0480(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CapsuleRadius;                                            // 0x0488(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CapsuleLength;                                            // 0x048C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CapsuleOffset;                                            // 0x0490(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ConstraintLimit;                                          // 0x049C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ConstraintOffset;                                         // 0x04A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04A4(0x0004) MISSED OFFSET
	class USoundCue*                                   RemoveSound;                                              // 0x04A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   InsertSound;                                              // 0x04B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  InsertHaptic;                                             // 0x04B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EjectForce;                                               // 0x04C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET
	struct FMagSlideInfo                               MagSlideInfo;                                             // 0x04C8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0518(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ChamberComponent");
		return ptr;
	}


	void ResetChamber();
	void OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnChamberStateChanged(int Index, EVRGunChamberState OldState, EVRGunChamberState NewState);
	void DestroyConstrainedMesh();
	void DebugDraw();
	void CheckConstraintBreakThreshold();
	void BreakCheck();
	void AllowRemoval();
};


// Class Pavlov.UIView
// 0x0050 (0x0378 - 0x0328)
class AUIView : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0328(0x0008) MISSED OFFSET
	class UStaticMeshComponent*                        PlaneMesh;                                                // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCohtmlComponent*                            CohtmlComponent;                                          // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0340(0x0008) MISSED OFFSET
	TArray<class USoundBase*>                          Sounds;                                                   // 0x0348(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0358(0x0008) MISSED OFFSET
	TArray<class UUISoundLibrary*>                     SoundLibs;                                                // 0x0360(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UUIHapticLibrary*                            HapticLibrary;                                            // 0x0370(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.UIView");
		return ptr;
	}


	void OnScriptingReady();
	void OnReadyForBindings();
};


// Class Pavlov.MenuUniverseView
// 0x00C0 (0x0438 - 0x0378)
class AMenuUniverseView : public AUIView
{
public:
	unsigned char                                      UnknownData00[0x51];                                      // 0x0378(0x0051) MISSED OFFSET
	bool                                               bDisabled;                                                // 0x03C9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03CA(0x0006) MISSED OFFSET
	int                                                ID;                                                       // 0x03D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	struct FString                                     ViewURL;                                                  // 0x03D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FVector2D                                   DrawSize;                                                 // 0x03E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TextureScale;                                             // 0x03F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Scale;                                                    // 0x03F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ZIndex;                                                   // 0x03F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SortPriority;                                             // 0x03FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EMenuUniverseDockingType                           Dock;                                                     // 0x0400(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0401(0x0003) MISSED OFFSET
	int                                                DockOrder;                                                // 0x0404(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimationSpeed;                                           // 0x0408(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   Pivot;                                                    // 0x040C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    PivotRotation;                                            // 0x0414(0x000C) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector2D                                   PivotLocation;                                            // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector2D                                   ActualDrawSize;                                           // 0x0428(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UObject*                                     ControllerObject;                                         // 0x0430(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.MenuUniverseView");
		return ptr;
	}


	void SetVisible(bool bVisible);
	void SetDockTransformOverride(const struct FTransform& T);
	bool IsVisible();
	struct FTransform GetUniverseTransform();
	struct FVector2D GetTopRightLocation();
	struct FVector2D GetTopLeftLocation();
	struct FVector2D GetOffset2D(const struct FVector2D& Pivot2D);
	struct FVector GetOffset(const struct FVector2D& Pivot2D);
	class AMenuUniverse* GetMenuUniverse();
	struct FVector2D GetCenterLocation();
	struct FVector2D GetBottomRightLocation();
	struct FVector2D GetBottomLeftLocation();
	void FadeEnded();
	void Fade(bool bVisible, float Duration);
	void ClearDockTransformOverride();
	void AnimateTo(const struct FVector2D& NewPivotLocation, const struct FRotator& Rotator);
};


// Class Pavlov.ContentView
// 0x0050 (0x0488 - 0x0438)
class AContentView : public AMenuUniverseView
{
public:
	TArray<class APavlovPlayerState*>                  SortedPlayerArray;                                        // 0x0438(0x0010) (ZeroConstructor, Transient)
	struct FContentViewGlobals                         Globals;                                                  // 0x0448(0x0038)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0480(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ContentView");
		return ptr;
	}


	void OnSideInterfaceChanged(EUserInterfaceType PrimaryInterface, EUserInterfaceType OldInterface);
	void OnLobbyLeave();
	void OnLobbyEnter(bool bFailure);
	void OnInterfaceChanged(EUserInterfaceType OldInterface);
};


// Class Pavlov.PlayOnlineView
// 0x00F8 (0x0580 - 0x0488)
class APlayOnlineView : public AContentView
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0488(0x0008) MISSED OFFSET
	class UServerBrowserV2*                            ServerBrowser;                                            // 0x0490(0x0008) (ZeroConstructor, IsPlainOldData)
	class UServerBrowserModel*                         ServerBrowserModel;                                       // 0x0498(0x0008) (ZeroConstructor, IsPlainOldData)
	class ULobbyStatusModel*                           LobbyStatusModel;                                         // 0x04A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x04A8(0x0010) MISSED OFFSET
	struct FUILobbyModel                               LobbyModel;                                               // 0x04B8(0x00C0)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0578(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PlayOnlineView");
		return ptr;
	}


	void UpdateLobbyData();
	void OnServerBrowserUpdated();
	void OnPingUpdated(class UServerContainer* Container);
	void OnOnlineError(EOnlineError Error, const struct FText& ErrorMessage);
	void OnMapBrowserDestroyed();
	void OnMapBrowserCommit(const struct FModalCommitParams& Params);
	void OnLobbyPinDestroyed();
	void OnLobbyPinCommit(const struct FModalCommitParams& Params);
	void LobbyTalkCheck();
};


// Class Pavlov.ConnectingView
// 0x0000 (0x0580 - 0x0580)
class AConnectingView : public APlayOnlineView
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ConnectingView");
		return ptr;
	}

};


// Class Pavlov.ModalView
// 0x0000 (0x0488 - 0x0488)
class AModalView : public AContentView
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ModalView");
		return ptr;
	}

};


// Class Pavlov.ConnectSpinnerModalView
// 0x0000 (0x0488 - 0x0488)
class AConnectSpinnerModalView : public AModalView
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ConnectSpinnerModalView");
		return ptr;
	}


	void OnWorkshopDownloadProgress(float Progress);
};


// Class Pavlov.CosmeticTickActor
// 0x0000 (0x0328 - 0x0328)
class ACosmeticTickActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.CosmeticTickActor");
		return ptr;
	}


	void CosmeticTick(float DeltaTime);
};


// Class Pavlov.CosmeticTickManagerComponent
// 0x0010 (0x0100 - 0x00F0)
class UCosmeticTickManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.CosmeticTickManagerComponent");
		return ptr;
	}

};


// Class Pavlov.CustomItem
// 0x0020 (0x04F0 - 0x04D0)
class ACustomItem : public AVRItem
{
public:
	class UStaticMeshComponent*                        RootMesh;                                                 // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class APavlov_CustomItem*                          CustomProxy;                                              // 0x04D8(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              ReattachDelay;                                            // 0x04E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x04E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.CustomItem");
		return ptr;
	}


	void SpawnItemProxy(class UClass* CustomItemClass);
	void SetPickDisabled(bool bDisabled);
	void PlayerDroppedItem();
	void OnRep_CustomProxy();
	class APawn* GetPawn();
	unsigned char GetItemState();
	class UAnimSequence* GetItemSequence();
	TArray<unsigned char> GetExcludeSlots();
	void DropItem(bool bDestroy);
	void CustomItemDestroyed(class AActor* DestroyedActor);
};


// Class Pavlov.DamageEffectComponent
// 0x0020 (0x0610 - 0x05F0)
class UDamageEffectComponent : public UStaticMeshComponent
{
public:
	class APavlovPawn*                                 PavPawn;                                                  // 0x05F0(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FDamageEffectHit>                    DamageEffects;                                            // 0x05F8(0x0010) (ZeroConstructor)
	class UCurveFloat*                                 EffectCurve;                                              // 0x0608(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.DamageEffectComponent");
		return ptr;
	}


	void OwnerKilled(class AActor* Owner);
	void InitComponent();
	void EnableDebugging(bool bEnabled);
	void DisplayHit(const struct FVector& BulletDirection);
};


// Class Pavlov.DamageTrackerComponent
// 0x0010 (0x0100 - 0x00F0)
class UDamageTrackerComponent : public UActorComponent
{
public:
	TArray<struct FDamageTrackInfo>                    InfoList;                                                 // 0x00F0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.DamageTrackerComponent");
		return ptr;
	}


	void ResetTracking();
	bool GetLastHit(struct FDamageTrackInfo* LastHit);
	void GatherAssists(TArray<struct FDamageTrackInfo>* Assists);
};


// Class Pavlov.DamageType_Pavlov
// 0x0010 (0x0050 - 0x0040)
class UDamageType_Pavlov : public UDamageType
{
public:
	struct FName                                       IconLookup;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayClientEffects;                                       // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.DamageType_Pavlov");
		return ptr;
	}

};


// Class Pavlov.DamageType_BackBlast
// 0x0000 (0x0050 - 0x0050)
class UDamageType_BackBlast : public UDamageType_Pavlov
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.DamageType_BackBlast");
		return ptr;
	}

};


// Class Pavlov.DamageType_Bayonet
// 0x0000 (0x0050 - 0x0050)
class UDamageType_Bayonet : public UDamageType_Pavlov
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.DamageType_Bayonet");
		return ptr;
	}

};


// Class Pavlov.DamageType_Bayonet_Held
// 0x0000 (0x0050 - 0x0050)
class UDamageType_Bayonet_Held : public UDamageType_Bayonet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.DamageType_Bayonet_Held");
		return ptr;
	}

};


// Class Pavlov.DamageType_Chicken
// 0x0000 (0x0050 - 0x0050)
class UDamageType_Chicken : public UDamageType_Pavlov
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.DamageType_Chicken");
		return ptr;
	}

};


// Class Pavlov.DamageType_Fire
// 0x0000 (0x0050 - 0x0050)
class UDamageType_Fire : public UDamageType_Pavlov
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.DamageType_Fire");
		return ptr;
	}

};


// Class Pavlov.DamageType_KillVolume
// 0x0000 (0x0050 - 0x0050)
class UDamageType_KillVolume : public UDamageType_Pavlov
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.DamageType_KillVolume");
		return ptr;
	}

};


// Class Pavlov.DamageType_PushBomb
// 0x0000 (0x0050 - 0x0050)
class UDamageType_PushBomb : public UDamageType_Pavlov
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.DamageType_PushBomb");
		return ptr;
	}

};


// Class Pavlov.DamageType_RunOver
// 0x0000 (0x0050 - 0x0050)
class UDamageType_RunOver : public UDamageType_Pavlov
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.DamageType_RunOver");
		return ptr;
	}

};


// Class Pavlov.DamageType_RunOver_Tank
// 0x0000 (0x0050 - 0x0050)
class UDamageType_RunOver_Tank : public UDamageType_RunOver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.DamageType_RunOver_Tank");
		return ptr;
	}

};


// Class Pavlov.DamageType_SNDBomb
// 0x0000 (0x0050 - 0x0050)
class UDamageType_SNDBomb : public UDamageType_Pavlov
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.DamageType_SNDBomb");
		return ptr;
	}

};


// Class Pavlov.DamageType_VehicleExplosion
// 0x0000 (0x0050 - 0x0050)
class UDamageType_VehicleExplosion : public UDamageType_Pavlov
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.DamageType_VehicleExplosion");
		return ptr;
	}

};


// Class Pavlov.DamageType_VehicleExplosion_Tank
// 0x0000 (0x0050 - 0x0050)
class UDamageType_VehicleExplosion_Tank : public UDamageType_VehicleExplosion
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.DamageType_VehicleExplosion_Tank");
		return ptr;
	}

};


// Class Pavlov.DecorationSkeletalMeshComponent
// 0x0000 (0x0B30 - 0x0B30)
class UDecorationSkeletalMeshComponent : public USkeletalMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.DecorationSkeletalMeshComponent");
		return ptr;
	}

};


// Class Pavlov.DedicatedServer
// 0x01B8 (0x01E0 - 0x0028)
class UDedicatedServer : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0028(0x00E8) MISSED OFFSET
	class UDepot*                                      BuiltinDepot;                                             // 0x0110(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0118(0x0002) MISSED OFFSET
	bool                                               bInitialized;                                             // 0x011A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x011B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FString                                     ServerName;                                               // 0x0120(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	TArray<struct FRotatedMap>                         MapRotation;                                              // 0x0130(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	struct FString                                     Password;                                                 // 0x0140(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	int                                                MaxPlayers;                                               // 0x0150(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	int                                                TickRate;                                                 // 0x0154(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     DepotURL;                                                 // 0x0158(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	bool                                               bSecured;                                                 // 0x0168(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0169(0x0007) MISSED OFFSET
	struct FString                                     ApiKey;                                                   // 0x0170(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	bool                                               bCustomServer;                                            // 0x0180(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bWhitelist;                                               // 0x0181(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0182(0x0002) MISSED OFFSET
	int                                                RefreshListTime;                                          // 0x0184(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	int                                                TimeLimit;                                                // 0x0188(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	int                                                LimitedAmmoType;                                          // 0x018C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCompetitive;                                             // 0x0190(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bBroadcast;                                               // 0x0191(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x0192(0x0006) MISSED OFFSET
	struct FString                                     BalanceTableURL;                                          // 0x0198(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	bool                                               bVerboseLogging;                                          // 0x01A8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bRotating;                                                // 0x01A9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x01AA(0x0002) MISSED OFFSET
	int                                                RotationIndex;                                            // 0x01AC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FString>                             Blacklist;                                                // 0x01B0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FString>                             ModList;                                                  // 0x01C0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FString>                             Whitelist;                                                // 0x01D0(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.DedicatedServer");
		return ptr;
	}


	void TravelNextTick();
	void OnMapDownloaded(bool bSucceed, const struct FString& ID);
	struct FServerDetails GetServerDetails();
};


// Class Pavlov.PavlovObject
// 0x0020 (0x0048 - 0x0028)
class UPavlovObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovObject");
		return ptr;
	}


	void TickByInterval();
};


// Class Pavlov.Depot
// 0x0028 (0x0070 - 0x0048)
class UDepot : public UPavlovObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
	struct FString                                     DepotContentPath;                                         // 0x0058(0x0010) (ZeroConstructor)
	int                                                Port;                                                     // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Depot");
		return ptr;
	}

};


// Class Pavlov.DestroyedVehicle
// 0x0008 (0x0330 - 0x0328)
class ADestroyedVehicle : public AActor
{
public:
	float                                              CleanUpTime;                                              // 0x0328(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x032C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.DestroyedVehicle");
		return ptr;
	}

};


// Class Pavlov.Destructible
// 0x0000 (0x0328 - 0x0328)
class ADestructible : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Destructible");
		return ptr;
	}


	void OnShatter(const struct FVector& Normal, const struct FVector& Location);
	void MulticastOnShatter(const struct FVector_NetQuantizeNormal& Normal, const struct FVector_NetQuantize& Location);
};


// Class Pavlov.DoubleBarrelGunState
// 0x0018 (0x0180 - 0x0168)
class UDoubleBarrelGunState : public UVRGunState
{
public:
	bool                                               bBarrelOpen;                                              // 0x0168(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0169(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBarrelChanged;                                          // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.DoubleBarrelGunState");
		return ptr;
	}


	void SetBarrel(bool bOpen);
};


// Class Pavlov.FiltersView
// 0x0038 (0x05B8 - 0x0580)
class AFiltersView : public APlayOnlineView
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0580(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.FiltersView");
		return ptr;
	}

};


// Class Pavlov.FlickerTracer
// 0x0030 (0x0358 - 0x0328)
class AFlickerTracer : public AActor
{
public:
	TArray<class ABullet*>                             BulletArray;                                              // 0x0328(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET
	class UStaticMeshComponent*                        SphereMesh;                                               // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                         // 0x0348(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0350(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0351(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.FlickerTracer");
		return ptr;
	}

};


// Class Pavlov.FlyingHelmet
// 0x0020 (0x0348 - 0x0328)
class AFlyingHelmet : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0328(0x0008) MISSED OFFSET
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              ImpulsePower;                                             // 0x0338(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpulseOffset;                                            // 0x033C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USurfaceFXAsset*                             SurfaceFX;                                                // 0x0340(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.FlyingHelmet");
		return ptr;
	}


	void ApplyImpulse();
};


// Class Pavlov.FootstepAnimNotify
// 0x0000 (0x0038 - 0x0038)
class UFootstepAnimNotify : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.FootstepAnimNotify");
		return ptr;
	}

};


// Class Pavlov.FriendsView
// 0x0010 (0x0498 - 0x0488)
class AFriendsView : public AContentView
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0488(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.FriendsView");
		return ptr;
	}


	void UpdateFriendsModel();
};


// Class Pavlov.GameSessionServer
// 0x00B8 (0x0100 - 0x0048)
class UGameSessionServer : public UPavlovObject
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0048(0x0014) MISSED OFFSET
	float                                              DownloadProgress;                                         // 0x005C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     GameMap;                                                  // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     GameMapId;                                                // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     GameMapLabel;                                             // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     GameMode;                                                 // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ID;                                                       // 0x00A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Key;                                                      // 0x00B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EGameSessionState                                  State;                                                    // 0x00C0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	struct FString                                     ServerKey;                                                // 0x00C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MasterServerUrl;                                          // 0x00D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Region;                                                   // 0x00E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      MaxAttempts;                                              // 0x00F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      TickRate;                                                 // 0x00F9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x00FA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.GameSessionServer");
		return ptr;
	}


	void ReportState();
	void OnMapDownloaded(bool bSucceed, const struct FString& ID);
	void OnDownloadProgress(float Progress);
	void AttemptToDispatch();
};


// Class Pavlov.GestureComponent
// 0x0020 (0x0110 - 0x00F0)
class UGestureComponent : public UActorComponent
{
public:
	TArray<struct FGestureSetup>                       Gestures;                                                 // 0x00F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnGesturePerformed;                                       // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.GestureComponent");
		return ptr;
	}


	void RegisterGesture(const struct FGestureSetup& Setup);
};


// Class Pavlov.PavlovItemController
// 0x0220 (0x0890 - 0x0670)
class APavlovItemController : public AVRItemController
{
public:
	class UWidgetComponent*                            UI;                                                       // 0x0670(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        PointerMesh;                                              // 0x0678(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class AHandMenu*                                   HandMenu;                                                 // 0x0680(0x0008) (ZeroConstructor, IsPlainOldData)
	class AKillfeed*                                   Killfeed;                                                 // 0x0688(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0690(0x0050) MISSED OFFSET
	struct FTransform                                  TwoHandReloadBasis;                                       // 0x06E0(0x0030) (Net, IsPlainOldData)
	class AGun*                                        TwoHandReloadRefGun;                                      // 0x0710(0x0008) (ZeroConstructor, IsPlainOldData)
	class AGun*                                        TwoHandGripRefGun;                                        // 0x0718(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SelectionHandMesh;                                        // 0x0720(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0728(0x0040) MISSED OFFSET
	TArray<class AZombie*>                             KnockZombies;                                             // 0x0768(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0778(0x0001) MISSED OFFSET
	bool                                               bBypassMovement;                                          // 0x0779(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x077A(0x0002) MISSED OFFSET
	float                                              TouchPadXValue;                                           // 0x077C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TouchPadYValue;                                           // 0x0780(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0784(0x0004) MISSED OFFSET
	class AVRItem*                                     Selection;                                                // 0x0788(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDominant;                                                // 0x0790(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bTouchPadLocomotion;                                      // 0x0791(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0792(0x0002) MISSED OFFSET
	struct FVector                                     TwoHandPickOffset;                                        // 0x0794(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TwoHandDirection;                                         // 0x07A0(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMenuPressed;                                             // 0x07AC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x07AD(0x0003) MISSED OFFSET
	class AUberWheel*                                  WheelInstance;                                            // 0x07B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TalkHeadDistance;                                         // 0x07B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FingerPointOffset;                                        // 0x07BC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x07C8(0x0008) MISSED OFFSET
	struct FTransform                                  SelectionOffset;                                          // 0x07D0(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   SelectionMaterial;                                        // 0x0800(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     SelectionObjectType;                                      // 0x0808(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0809(0x0003) MISSED OFFSET
	float                                              SelectionSphereRadius;                                    // 0x080C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 SelectionHandMeshAsset;                                   // 0x0810(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SelectionHandMeshScale;                                   // 0x0818(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x081C(0x0004) MISSED OFFSET
	class USoundCue*                                   SelectionSoundCue;                                        // 0x0820(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   SelectionHandLeftMaterial;                                // 0x0828(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   SelectionHandRightMaterial;                               // 0x0830(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BashCooldown;                                             // 0x0838(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BashAcumMomentumDuration;                                 // 0x083C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BashDistanceThreashold;                                   // 0x0840(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BashBeginRadius;                                          // 0x0844(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BashVolumeRadius;                                         // 0x0848(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BashPulsationInterval;                                    // 0x084C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   BashSound;                                                // 0x0850(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WheelClass;                                               // 0x0858(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      HandMenuClass;                                            // 0x0860(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      KillfeedClass;                                            // 0x0868(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSnapTurn;                                               // 0x0870(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBuywheelChanged;                                        // 0x0880(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovItemController");
		return ptr;
	}


	void UpdateUIState();
	void SetWheelEnabled(bool bEnabled);
	void SetMenu(bool bEnabled);
	void SetKillfeed(bool bEnabled);
	void ReleaseTwoHandGrip();
	void OnTeamIdChanged(int TeamId);
	void OnSelectionPicked(class AVRItem* Item);
	bool IsWheelEnabled();
	bool IsTwoHandReloadEnabled();
	bool IsTwoHandGripEnabled();
	bool IsMenuActive();
	class APavlovItemController* GetOppositeHandController();
	class AHandMenu* GetHandMenuInstance();
	struct FVector GetFingerPointLocation();
	void ForceTwoHandGrip();
	void ClientEmptyGrippedHand();
	void ClearWheelInstance();
};


// Class Pavlov.GhostItemController
// 0x0010 (0x08A0 - 0x0890)
class AGhostItemController : public APavlovItemController
{
public:
	EGhostPointMode                                    PointMode;                                                // 0x0890(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0891(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.GhostItemController");
		return ptr;
	}


	void OnPointModeChanged(EGhostPointMode OldPointMode);
	void ChangePointMode(EGhostPointMode NewPointMode);
};


// Class Pavlov.PavlovPawnBase
// 0x0000 (0x0AF0 - 0x0AF0)
class APavlovPawnBase : public AVRPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovPawnBase");
		return ptr;
	}


	class APavlovItemController* GetNonDominantController();
	class APavlovItemController* GetDominantController();
};


// Class Pavlov.GhostPawn
// 0x0070 (0x0B60 - 0x0AF0)
class AGhostPawn : public APavlovPawnBase
{
public:
	TArray<class ASpectatorTag*>                       SpectatorTags;                                            // 0x0AF0(0x0010) (ZeroConstructor)
	class AActor*                                      SpectatorRoomInstance;                                    // 0x0B00(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FreeViewSpeedMul;                                         // 0x0B08(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B0C(0x0004) MISSED OFFSET
	class UClass*                                      KillCamClass;                                             // 0x0B10(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AKillCam*                                    KillCam;                                                  // 0x0B18(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bInSpectatorRoom;                                         // 0x0B20(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOnGrace;                                               // 0x0B21(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHighlightActive;                                         // 0x0B22(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0B23(0x0005) MISSED OFFSET
	class UClass*                                      SpectatorTVCameraClass;                                   // 0x0B28(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SpectatorTagClass;                                        // 0x0B30(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SpectatorRoomClass;                                       // 0x0B38(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GraceDuration;                                            // 0x0B40(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreeViewSpeed;                                            // 0x0B44(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundClass*                                 VoiceSoundClass;                                          // 0x0B48(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundAttenuation*                           VoiceChatAttenuation;                                     // 0x0B50(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0B58(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.GhostPawn");
		return ptr;
	}


	void SpawnTags();
	void OnTraveledToSpectatorRoom();
	void OnTeamIdChanged(int TeamId);
	void OnGraceTimeEnded();
	void EndGraceTime();
	void CreateVoiceComponent();
	void ClientTravelToSpectatorRoom();
	void ClientSpawnKillCam(const struct FKillInfo& KillInfo);
	void ClearTags();
};


// Class Pavlov.GlobalPlayerEffects
// 0x00A8 (0x03D0 - 0x0328)
class AGlobalPlayerEffects : public AInfo
{
public:
	class UMaterialInstanceDynamic*                    FlashedMaterialInstance;                                  // 0x0328(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SupressedMaterialInstance;                                // 0x0330(0x0008) (ZeroConstructor, IsPlainOldData)
	class APostProcessVolume*                          PostProcess;                                              // 0x0338(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0340(0x0010) MISSED OFFSET
	class UAudioComponent*                             BuzzingSound;                                             // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             WindSound;                                                // 0x0358(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USubmixEffectDynamicsProcessorPreset*        MasterLimiterSubmix;                                      // 0x0360(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x9];                                       // 0x0368(0x0009) MISSED OFFSET
	EPlayerEffectState                                 State;                                                    // 0x0371(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0372(0x0002) MISSED OFFSET
	float                                              Time;                                                     // 0x0374(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDisabled;                                                // 0x0378(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
	class UMaterial*                                   GhostMaterial;                                            // 0x0380(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundMix*                                   GhostSoundMix;                                            // 0x0388(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   FlashedMaterial;                                          // 0x0390(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   FlashedSphereMaterial;                                    // 0x0398(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundMix*                                   FlashedSoundMix;                                          // 0x03A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundMix*                                   TankSoundMix;                                             // 0x03A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 FlashedOpacityCurve;                                      // 0x03B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   SupressedMaterial;                                        // 0x03B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundMix*                                   SupressedSoundMix;                                        // 0x03C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundMix*                                   ExplosionSoundMix;                                        // 0x03C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.GlobalPlayerEffects");
		return ptr;
	}


	void SwitchState(EPlayerEffectState NewState);
	void ResetGlobalEffects();
	void InstigateFlashVision(float Duration, float ViewAlpha);
	void InstigateFlash(float Duration, float ViewAlpha);
	float GetFlashDuration();
	void DisableWindSound();
};


// Class Pavlov.DamageType_Explotion
// 0x0000 (0x0040 - 0x0040)
class UDamageType_Explotion : public UDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.DamageType_Explotion");
		return ptr;
	}

};


// Class Pavlov.Grenade
// 0x00D0 (0x05A0 - 0x04D0)
class AGrenade : public AVRItem
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UProjectileMovementComponent*                ProjectileMovement;                                       // 0x04D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04E0(0x0008) MISSED OFFSET
	class AGrenadeTrailProxy*                          TrailProxy;                                               // 0x04E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UVRHandleComponent*                          PinHandleComponent;                                       // 0x04F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                GrenadeDetonation_Handle;                                 // 0x04F8(0x0008)
	class AController*                                 DetonationInstigator;                                     // 0x0500(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AController*                                 CookInstigator;                                           // 0x0508(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EGrenadeState                                      State;                                                    // 0x0510(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bProjectileActive;                                        // 0x0511(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               DropOnPreRoundExploit;                                    // 0x0512(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0513(0x0001) MISSED OFFSET
	float                                              ProjectileThreashold;                                     // 0x0514(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileSpeedMul;                                       // 0x0518(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PinPullRatio;                                             // 0x051C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DetonatorDelay;                                           // 0x0520(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DetonatedLifeSpan;                                        // 0x0524(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHideOnDetonation;                                        // 0x0528(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisablePhysics;                                          // 0x0529(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x052A(0x0006) MISSED OFFSET
	class UStaticMesh*                                 LeverMesh;                                                // 0x0530(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeverImpulse;                                             // 0x0538(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeverAngularImpulse;                                      // 0x0544(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USurfaceFXAsset*                             LeverSurfaceFX;                                           // 0x0550(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   FuseIgniteSound;                                          // 0x0558(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSpawnLeverReleaseSoundAttached;                          // 0x0560(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0561(0x0007) MISSED OFFSET
	class USoundCue*                                   LeverReleaseSound;                                        // 0x0568(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DryLeverReleaseSound;                                     // 0x0570(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SafetyPinRemovedSound;                                    // 0x0578(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DetonationSound;                                          // 0x0580(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EGrenadeType                                       GrenadeType;                                              // 0x0588(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDealDamage;                                              // 0x0589(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x058A(0x0002) MISSED OFFSET
	float                                              Damage;                                                   // 0x058C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDamage;                                                // 0x0590(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageInnerRadius;                                        // 0x0594(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageOuterRadius;                                        // 0x0598(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageFalloff;                                            // 0x059C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Grenade");
		return ptr;
	}


	void ServerRestoreSafetyPin();
	void ServerRemoveSafetyPin();
	void ServerReleaseSafetyLever(float PinPull);
	void RemoveSafetyPin();
	void ReleaseSafetyLever(float PinPull);
	void PullSafetyPin(float Ratio);
	void OnRep_ProjectileActive();
	void OnReleaseSafetyLever();
	void OnProjectileStop(const struct FHitResult& ImpactResult);
	void OnProjectileBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void OnPinReinserted();
	void OnDetonation();
	void MulticastThrow(const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Velocity);
	void MulticastOnSafetyPinRemoved();
	void MulticastOnReleaseSafetyLever();
	void MulticastOnDetonation();
	class USoundCue* GetHolidayLeverSound();
	void FixClientPin();
	void Detonate();
	bool CanPullPin();
};


// Class Pavlov.GrenadeAnimInstance
// 0x0040 (0x0410 - 0x03D0)
class UGrenadeAnimInstance : public UVRControllerAnimInstance
{
public:
	EGrenadeState                                      GrenadeState;                                             // 0x03D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03D1(0x0003) MISSED OFFSET
	float                                              PinPullRatio;                                             // 0x03D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PullPinVectorTarget;                                      // 0x03D8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldSimulateRing;                                      // 0x03E4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bGrabbedByPin;                                            // 0x03E5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03E6(0x0002) MISSED OFFSET
	struct FVector                                     PullPinVector;                                            // 0x03E8(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PinScale;                                                 // 0x03F4(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LeverScale;                                               // 0x0400(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x040C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.GrenadeAnimInstance");
		return ptr;
	}

};


// Class Pavlov.GrenadeLever
// 0x0018 (0x0340 - 0x0328)
class AGrenadeLever : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0328(0x0008) MISSED OFFSET
	class UStaticMeshComponent*                        GrenadeLeverMesh;                                         // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USurfaceFXAsset*                             SurfaceFX;                                                // 0x0338(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.GrenadeLever");
		return ptr;
	}

};


// Class Pavlov.GrenadeTrailProxy
// 0x0020 (0x0348 - 0x0328)
class AGrenadeTrailProxy : public AActor
{
public:
	class UTrailComponent*                             Trail;                                                    // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMaterialInstanceConstant*                   Team0Material;                                            // 0x0330(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceConstant*                   Team1Material;                                            // 0x0338(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                TeamId;                                                   // 0x0340(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0344(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.GrenadeTrailProxy");
		return ptr;
	}

};


// Class Pavlov.Gun
// 0x02D0 (0x0C00 - 0x0930)
class AGun : public AVRGun
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0930(0x001C) MISSED OFFSET
	struct FVector                                     GripRefLocation;                                          // 0x094C(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasLegacyGrip;                                           // 0x0958(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5F];                                      // 0x0959(0x005F) MISSED OFFSET
	class UInstancedSourceBusComponent*                SourceBusComp;                                            // 0x09B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APavlov_AudioVolume*                         AudioVolume;                                              // 0x09C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USoundSubmix*                                ReverbSubmix;                                             // 0x09C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x19];                                      // 0x09D0(0x0019) MISSED OFFSET
	bool                                               bCanRemoveAttachments;                                    // 0x09E9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x09EA(0x0002) MISSED OFFSET
	float                                              LastCheckedAttachmentRemoval;                             // 0x09EC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x09F0(0x0004) MISSED OFFSET
	struct FVector                                     LastTwoHandDirection;                                     // 0x09F4(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TwoHandPickOffset;                                        // 0x0A00(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0A0C(0x0002) MISSED OFFSET
	bool                                               bKeepTwoHand;                                             // 0x0A0E(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x0A0F(0x0001) MISSED OFFSET
	struct FVector                                     AdditionalHandOffset;                                     // 0x0A10(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSideGun;                                                 // 0x0A1C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGenerateMagBoltReleaseEvents;                            // 0x0A1D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCustomCocking;                                           // 0x0A1E(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDeltaCocking;                                            // 0x0A1F(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNeedsTwoHands;                                           // 0x0A20(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0A21(0x0003) MISSED OFFSET
	float                                              StockDuration;                                            // 0x0A24(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTwoHandSupportOnly;                                      // 0x0A28(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTwoHandReload;                                           // 0x0A29(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x6];                                       // 0x0A2A(0x0006) MISSED OFFSET
	class USoundCue*                                   TwoHandGripSound;                                         // 0x0A30(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDropByRecoil;                                            // 0x0A38(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSupportsAutoUngrip;                                      // 0x0A39(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSupportsMagRelease;                                      // 0x0A3A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSingleShotDrop;                                          // 0x0A3B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTwoHandGripDistance;                                   // 0x0A3C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GripOffset;                                               // 0x0A40(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MagneticGripDistance;                                     // 0x0A4C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               MagneticGripSequence;                                     // 0x0A50(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               NoMagazineMagneticGripSequence;                           // 0x0A58(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               AccessoryGripSequence;                                    // 0x0A60(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TriggerAngle;                                             // 0x0A68(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnsteadyRecoilAngleMul;                                   // 0x0A6C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnsteadyRecoilTraslationMul;                              // 0x0A70(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnsteadySpraySpreadMul;                                   // 0x0A74(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxUngrippedRecoil;                                       // 0x0A78(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxUngrippedDuration;                                     // 0x0A7C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GrippedCounterRecoilLimitMul;                             // 0x0A80(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0A8C(0x0004) MISSED OFFSET
	class USoundBase*                                  ExploitSound;                                             // 0x0A90(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FShotConcurrencyQuality                     ShotConcurrencyQuality;                                   // 0x0A98(0x0028) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USurfaceFXAsset*                             HitSurfaceFX;                                             // 0x0AC0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseChamberEjectFX;                                       // 0x0AC8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0AC9(0x0007) MISSED OFFSET
	class USurfaceFXAsset*                             ChamberEjectSurfaceFX;                                    // 0x0AD0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RattlePoints;                                             // 0x0AD8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedModifier;                                            // 0x0ADC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrouchAcuracy;                                            // 0x0AE0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StandingAcuracy;                                          // 0x0AE4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingAcuracy;                                            // 0x0AE8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0AEC(0x0004) MISSED OFFSET
	class UCurveVector*                                BobCurve;                                                 // 0x0AF0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BobSpeed;                                                 // 0x0AF8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BobMultiplier;                                            // 0x0AFC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BobBlendSpeed;                                            // 0x0B00(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ADSSpeedMultiplier;                                       // 0x0B04(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StrafingMultiplier;                                       // 0x0B08(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrouchSideRecoilMul;                                      // 0x0B0C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGunbHapticsRecoil*                          bHapticsRecoil;                                           // 0x0B10(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bScopeIsLongerThanGun;                                    // 0x0B18(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0B19(0x0003) MISSED OFFSET
	float                                              LastHapticTime;                                           // 0x0B1C(0x0004) (ZeroConstructor, IsPlainOldData)
	class AAttachmentSuppressor*                       Suppresor;                                                // 0x0B20(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AAttachmentSight*                            Sight;                                                    // 0x0B28(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AAttachmentGrip*                             Grip;                                                     // 0x0B30(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AAttachmentAccessory*                        Accessory;                                                // 0x0B38(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AAttachmentCanted*                           Canted;                                                   // 0x0B40(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       PicatinnySocket;                                          // 0x0B48(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PicatinnyLength;                                          // 0x0B50(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SightCompatibility;                                       // 0x0B54(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GripSocket;                                               // 0x0B58(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GripCompatibility;                                        // 0x0B60(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0B64(0x0004) MISSED OFFSET
	struct FName                                       SuppressorSocket;                                         // 0x0B68(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SuppressorCompatibility;                                  // 0x0B70(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x0B74(0x0004) MISSED OFFSET
	struct FName                                       AccessorySocket;                                          // 0x0B78(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AccessoryCompatibility;                                   // 0x0B80(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0B84(0x0004) MISSED OFFSET
	struct FName                                       CantedSocket;                                             // 0x0B88(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CantedCompatibility;                                      // 0x0B90(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0B94(0x0004) MISSED OFFSET
	struct FGunAttachmentSetup                         DefaultAttachments;                                       // 0x0B98(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FVector2D                                   AttachmentModeRange;                                      // 0x0BC8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LowEndSightReplacement;                                   // 0x0BD0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttachmentModeHoldTime;                                   // 0x0BD8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttachModeTime;                                           // 0x0BDC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHideIronOverride;                                        // 0x0BE0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPlayManualCockSound;                                     // 0x0BE1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x6];                                       // 0x0BE2(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMagBoltRelease;                                         // 0x0BE8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData18[0x8];                                       // 0x0BF8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Gun");
		return ptr;
	}


	void UpdateCanRemoveAttachments();
	void ToggleAccessory_Server();
	bool ToggleAccessory();
	bool SupportsSuppressorAttachments();
	bool SupportsSightAttachments();
	bool SupportsGripAttachments();
	bool SupportsCantedAttachments();
	bool SupportsAttachments();
	bool SupportsAccessoryAttachments();
	void StartSlideInputSound();
	void SpawnAndAttachLowEndSight();
	void SlideInputSound(float SlideInput);
	void SetupBulletSkin(class UStaticMeshComponent* BulletMesh);
	void SetAccessoryDrawDistance(bool bLocallyOwned, class UStaticMeshComponent* OptimizeMesh);
	void ResetAttachmentMode();
	void RecoilDrop();
	void OptimizeGun(bool bLocallyOwned);
	void OnUnderExploitChanged(bool bUnderExploit);
	void OnTwoHandGripChanged(bool bEnabled);
	void OnSpawnUnloaded();
	void OnSliderUngrabbed();
	void OnSliderInputReceived(const struct FVector& Input, const struct FVector& InputDelta);
	void OnSliderGrabbed();
	void OnSlideModeChanged(bool bSliding);
	void OnRecoilDropCooldown();
	void OnAttachModeChanged(bool bEnabled, bool bJustPicked);
	void OnAttachmentChanged();
	void MulticastOnRecoilDrop();
	bool IsUnderExploit();
	bool IsInAttachmentMode();
	bool IsBeingGrippedBy(class APavlovItemController* ByController);
	bool IsBeingGripped();
	bool STATIC_IsAttachmentCompatible(class UClass* GunClass, class UClass* AttachmentClass);
	bool HasAttachment(class UClass* AttachmentClass);
	float GetPicatinnySlideSpacer();
	class UStaticMeshComponent* GetChamberMesh();
	struct FName GetAttachmentSocket(class UClass* AttachmentClass);
	TArray<struct FName> GetAttachmentNames();
	TArray<class AAttachment*> GetAttachmentList();
	void BayonetDamage_Server(const struct FBayonetDamage& BayonetDamage);
};


// Class Pavlov.GunbHapticsRecoil
// 0x0140 (0x0170 - 0x0030)
class UGunbHapticsRecoil : public UDataAsset
{
public:
	TMap<EAmmoType, class UObject*>                    RightChestMap;                                            // 0x0030(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TMap<EAmmoType, class UObject*>                    LeftChestMap;                                             // 0x0080(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TMap<EAmmoType, class UObject*>                    RightArmMap;                                              // 0x00D0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TMap<EAmmoType, class UObject*>                    LeftArmMap;                                               // 0x0120(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.GunbHapticsRecoil");
		return ptr;
	}

};


// Class Pavlov.SkinComponent
// 0x0050 (0x0140 - 0x00F0)
class USkinComponent : public UActorComponent
{
public:
	TMap<class UMaterialInterface*, int>               SkinMap;                                                  // 0x00F0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.SkinComponent");
		return ptr;
	}


	bool LoadSkin();
};


// Class Pavlov.GunSkinComponent
// 0x0060 (0x01A0 - 0x0140)
class UGunSkinComponent : public USkinComponent
{
public:
	bool                                               bSwapMagazineSkin;                                        // 0x0140(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseMagazineMap;                                          // 0x0141(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0142(0x0006) MISSED OFFSET
	TMap<class UMaterialInterface*, int>               MagazineMap;                                              // 0x0148(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	int                                                BulletMaterialIndex;                                      // 0x0198(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x019C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.GunSkinComponent");
		return ptr;
	}


	bool HasBulletMaterial();
	class UMaterialInterface* GetBulletMaterial();
};


// Class Pavlov.HandMenu
// 0x0010 (0x0338 - 0x0328)
class AHandMenu : public AActor
{
public:
	class USoundBase*                                  ShowSound;                                                // 0x0328(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  HideSound;                                                // 0x0330(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.HandMenu");
		return ptr;
	}

};


// Class Pavlov.HealEffectComponent
// 0x0010 (0x0600 - 0x05F0)
class UHealEffectComponent : public UStaticMeshComponent
{
public:
	float                                              TotalHealTime;                                            // 0x05F0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HealTimeAlpha;                                            // 0x05F4(0x0004) (ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 HealingCurve;                                             // 0x05F8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.HealEffectComponent");
		return ptr;
	}


	void OwnerKilled(class AActor* Owner);
	void Initialize(float HealTime, class UMaterialInterface* HealMat);
};


// Class Pavlov.HighlightInterface
// 0x0000 (0x0028 - 0x0028)
class UHighlightInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.HighlightInterface");
		return ptr;
	}


	void GetHighlightComponents(EHighlightColor* HighlightColor, TArray<class UMeshComponent*>* HighlightMeshes);
};


// Class Pavlov.HitBoxProxyComponent
// 0x0048 (0x0138 - 0x00F0)
class UHitBoxProxyComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	class UBoxComponent*                               BoundingBox;                                              // 0x00F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                NumSamples;                                               // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SampleInterval;                                           // 0x0104(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FHitBox>                             HitBoxDefinitions;                                        // 0x0108(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class USkeletalMeshComponent*                      SkeletonMesh;                                             // 0x0118(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0120(0x0008) MISSED OFFSET
	TArray<struct FHitBoxHistory>                      History;                                                  // 0x0128(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.HitBoxProxyComponent");
		return ptr;
	}


	void OnBulletOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class Pavlov.HolsterComponent
// 0x0030 (0x05B0 - 0x0580)
class UHolsterComponent : public USphereComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0580(0x0008) MISSED OFFSET
	struct FName                                       AttachSocket;                                             // 0x0588(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              AllowedClasses;                                           // 0x0590(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDisabled;                                                // 0x05A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMirrorable;                                              // 0x05A1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRightHanded;                                             // 0x05A2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x05A3(0x0005) MISSED OFFSET
	class AVRItem*                                     HolsteredItem;                                            // 0x05A8(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.HolsterComponent");
		return ptr;
	}


	void TakeItem(class APavlovItemController* Controller);
	void ServerTakeItem(class APavlovItemController* Controller);
	void ServerHolster(class AVRItem* Item);
	void OnRep_HolsteredItem();
	void MulticastOnItemHolstered(class AVRItem* Item);
	void MulticastOnDrop(class AVRItem* Item);
	void Mirror();
	void Holster(class AVRItem* Item);
	void Drop();
	void AttachItemLocally();
};


// Class Pavlov.IconRemover
// 0x0010 (0x0100 - 0x00F0)
class UIconRemover : public UActorComponent
{
public:
	TArray<class UPrimitiveComponent*>                 Icons;                                                    // 0x00F0(0x0010) (ExportObject, Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.IconRemover");
		return ptr;
	}


	void AddIcons(TArray<class UPrimitiveComponent*> IconArray);
	void AddIcon(class UPrimitiveComponent* Icon);
};


// Class Pavlov.ImpairInterface
// 0x0000 (0x0028 - 0x0028)
class UImpairInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ImpairInterface");
		return ptr;
	}


	void MarkAsImpaired(EImpairedType Type, class AActor* EventActor, class AController* Instigator);
	void GetImpairedEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation);
};


// Class Pavlov.InfoView
// 0x0000 (0x0488 - 0x0488)
class AInfoView : public AContentView
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.InfoView");
		return ptr;
	}

};


// Class Pavlov.InstancedSourceBusComponent
// 0x0090 (0x02D0 - 0x0240)
class UInstancedSourceBusComponent : public USceneComponent
{
public:
	class UAudioComponent*                             AudioComp;                                                // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<class USoundBase*, class USoundBase*>         SoundCache;                                               // 0x0248(0x0050) (ZeroConstructor)
	TArray<class UAudioComponent*>                     PlayingAudioComponents;                                   // 0x0298(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET
	class USoundSourceBus*                             SourceBus;                                                // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SilenceDelay;                                             // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNoSilencing;                                             // 0x02BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowAttenuation;                                        // 0x02BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x02BE(0x0002) MISSED OFFSET
	class USoundConcurrency*                           ConcurrencyOverride;                                      // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.InstancedSourceBusComponent");
		return ptr;
	}


	void SilenceAudioComponent();
	class UAudioComponent* Play(class USoundBase* Sound, bool bForceNoOcclusion);
	void OnSourceBusAudioFinished(class UAudioComponent* Comp);
	void OnAudioFinished(class UAudioComponent* Comp);
	class UAudioComponent* GetAudioComponent();
};


// Class Pavlov.KillCam
// 0x00B0 (0x03D8 - 0x0328)
class AKillCam : public AActor
{
public:
	class UStaticMeshComponent*                        BulletTrace;                                              // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ImpactPoint;                                              // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            KillerInfo;                                               // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FKillInfo                                   KillInfo;                                                 // 0x0340(0x0070) (BlueprintVisible, BlueprintReadOnly)
	float                                              TraceScaleMul;                                            // 0x03B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinInfoDistance;                                          // 0x03B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FactorScale;                                              // 0x03B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinScale;                                                 // 0x03BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxScale;                                                 // 0x03C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RefInfoScale;                                             // 0x03C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     InfoOffset;                                               // 0x03C8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.KillCam");
		return ptr;
	}

};


// Class Pavlov.StereoOverlay
// 0x0028 (0x0350 - 0x0328)
class AStereoOverlay : public AActor
{
public:
	EStereoOverlayMode                                 Mode;                                                     // 0x0328(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0329(0x0003) MISSED OFFSET
	float                                              Distance;                                                 // 0x032C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Height;                                                   // 0x0330(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Tilt;                                                     // 0x0334(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Duration;                                                 // 0x0338(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForce;                                                   // 0x033C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDominant;                                                // 0x033D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x033E(0x0002) MISSED OFFSET
	float                                              SidearmLength;                                            // 0x0340(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SidearmHeight;                                            // 0x0344(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SidearmSmoothRatio;                                       // 0x0348(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x034C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.StereoOverlay");
		return ptr;
	}

};


// Class Pavlov.Killfeed
// 0x0020 (0x0370 - 0x0350)
class AKillfeed : public AStereoOverlay
{
public:
	bool                                               bDisplayInArm;                                            // 0x0350(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bKillfeedVisible;                                         // 0x0351(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0352(0x0002) MISSED OFFSET
	float                                              FadeRatio;                                                // 0x0354(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FadeSpeed;                                                // 0x0358(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RelativeOffset;                                           // 0x035C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KillfeedTilt;                                             // 0x0368(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x036C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Killfeed");
		return ptr;
	}


	void Show();
	void OnDisplayModeUpdated();
	void OnArmKillfeedChanged(bool bEnabled);
	void Hide();
};


// Class Pavlov.DamageType_Knife
// 0x0000 (0x0040 - 0x0040)
class UDamageType_Knife : public UDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.DamageType_Knife");
		return ptr;
	}

};


// Class Pavlov.Knife
// 0x00B0 (0x0580 - 0x04D0)
class AKnife : public AVRItem
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BladeProxy;                                               // 0x04D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x04E0(0x0010) MISSED OFFSET
	bool                                               bBloody;                                                  // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04F1(0x0003) MISSED OFFSET
	struct FVector                                     BladeVelocity;                                            // 0x04F4(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  KnifeDamageTable;                                         // 0x0500(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Damage;                                                   // 0x0508(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDamage;                                                // 0x050C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDamage;                                                // 0x0510(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedReference;                                           // 0x0514(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   StabSound;                                                // 0x0518(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ThrowLoopSound;                                           // 0x0520(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             StabParticle;                                             // 0x0528(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ParticleOffset;                                           // 0x0530(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGrabCooldown;                                            // 0x053C(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x053D(0x0003) MISSED OFFSET
	class UClass*                                      ProxyKnifeClass;                                          // 0x0540(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinThrowSoundSpeed;                                       // 0x0548(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x054C(0x0004) MISSED OFFSET
	class AController*                                 LatestInstigator;                                         // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasSpawnedProxy;                                         // 0x0558(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0559(0x0007) MISSED OFFSET
	struct FTimerHandle                                Throw_Handle;                                             // 0x0560(0x0008)
	class UAudioComponent*                             ThrowAudioComp;                                           // 0x0568(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bThrowIsSlow;                                             // 0x0570(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0571(0x0003) MISSED OFFSET
	float                                              ThrowTime;                                                // 0x0574(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0578(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Knife");
		return ptr;
	}


	void StartThrowSound_Multi();
	void StartKnifeThrow();
	void SpawnKnifeProxy(const struct FAttachProxyInfo& AttachInfo);
	void SetBloody(bool bEnabled);
	void OnRep_Bloody();
	void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnBloodyChanged(bool bNewBloody);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void MulticastOnStab(bool bDead);
	bool HasSpawnedProxy();
	class USoundCue* GetKillConfirmationSound2D();
	class USoundCue* GetAlternativeStabSound();
	void EnableTicking();
	void DelayDestroyKnife();
	void CheckThrowThreshold();
};


// Class Pavlov.KOTHObjective
// 0x0090 (0x03B8 - 0x0328)
class AKOTHObjective : public AActor
{
public:
	class USceneComponent*                             HillRoot;                                                 // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        HillMesh;                                                 // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        HillMarker;                                               // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	EHillState                                         KOTHState;                                                // 0x0340(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0341(0x0003) MISSED OFFSET
	int                                                MaxPointsToAward;                                         // 0x0344(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxSecondsActive;                                         // 0x0348(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HillUpdateFrequency;                                      // 0x034C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCanSpawnLootCrate;                                       // 0x0350(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0351(0x0003) MISSED OFFSET
	float                                              IncreaseToBoundsScale;                                    // 0x0354(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HillActiveSoundVolume;                                    // 0x0358(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	class USoundBase*                                  ActiveSound;                                              // 0x0360(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnKOTHStateChanged;                                       // 0x0368(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnKOTHTeamScored;                                         // 0x0378(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnKOTHObjectiveInactive;                                  // 0x0388(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FTimerHandle                                HillTimer_Handle;                                         // 0x0398(0x0008)
	int                                                HillTicks;                                                // 0x03A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalAwardedPoints;                                       // 0x03A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalTimeActive;                                          // 0x03A8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	class AKOTHObjectiveProxy*                         KOTHProxy;                                                // 0x03B0(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.KOTHObjective");
		return ptr;
	}


	void UpdateHillMaterial(class UMaterialInterface* UpdateMaterial);
	void SetHillActive(bool bActive);
	void OnRep_KOTHState(EHillState OldKOTHState);
	void OnRep_KOTHProxy();
	void OnObjectiveInitialized();
	void OnHillActive();
	void InitializeFromProxy(class AKOTHObjectiveProxy* ObjectiveProxy);
};


// Class Pavlov.LimitedAmmoComponent
// 0x0010 (0x0100 - 0x00F0)
class ULimitedAmmoComponent : public UActorComponent
{
public:
	class UClass*                                      AmmoCounterClass;                                         // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ALimitedAmmoCounter*                         AmmoCounter;                                              // 0x00F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.LimitedAmmoComponent");
		return ptr;
	}


	void ShowLimitedAmmoCounter(bool bCounterVisible);
	void SetupAmmoUI_Server(class APavlovPawn* PavPawn);
	void SetupAmmoCounter_Client();
	int RemoveAmmo(EAmmoType AmmoType, int RemoveAmount);
	void PlayerDied(class APavlovPawn* Pawn);
	bool MagToAmmo(class AVRMagazine* Mag);
	bool HasAmmoOfType(EAmmoType AmmoType);
	bool GiveAmmoForBuy(class AVRGun* Gun, int AmmoLimit);
	EAmmoType STATIC_GetGunAmmoType(class AVRGun* Gun);
	struct FName GetAmmoTypeName(EAmmoType AmmoType);
	bool GetAmmoTypeFromName(const struct FName& AmmoId, EAmmoType* AmmoType);
	class UClass* GetAmmoClassFromType(EAmmoType AmmoType);
	class UClass* GetAmmoClassFromName(const struct FName& AmmoId);
	int GetAmmoAmount(EAmmoType AmmoType);
	void AddBulkAmmo(TMap<EAmmoType, int> BulkAmmo);
	int AddAmmo(EAmmoType AmmoType, int Amount);
};


// Class Pavlov.LimitedAmmoBoxesComponent
// 0x0000 (0x0100 - 0x0100)
class ULimitedAmmoBoxesComponent : public ULimitedAmmoComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.LimitedAmmoBoxesComponent");
		return ptr;
	}

};


// Class Pavlov.LimitedAmmoBoxlessComponent
// 0x0060 (0x0160 - 0x0100)
class ULimitedAmmoBoxlessComponent : public ULimitedAmmoComponent
{
public:
	TMap<EAmmoType, int>                               MaxAmmoLimits;                                            // 0x0100(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        AmmoCount;                                                // 0x0150(0x0010) (Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.LimitedAmmoBoxlessComponent");
		return ptr;
	}


	bool AddAmmoBox(EAmmoType AmmoType, int Amount);
};


// Class Pavlov.LimitedAmmoCounter
// 0x0000 (0x0328 - 0x0328)
class ALimitedAmmoCounter : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.LimitedAmmoCounter");
		return ptr;
	}


	void ShowAmmoCounter(bool bVisible);
};


// Class Pavlov.LimitedAmmoCustomComponent
// 0x0000 (0x0100 - 0x0100)
class ULimitedAmmoCustomComponent : public ULimitedAmmoComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.LimitedAmmoCustomComponent");
		return ptr;
	}

};


// Class Pavlov.LoadoutData
// 0x0050 (0x0080 - 0x0030)
class ULoadoutData : public UDataAsset
{
public:
	struct FLoadoutProperties                          LoadoutProperties;                                        // 0x0030(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.LoadoutData");
		return ptr;
	}


	bool RemoveLoadout(const struct FString& LoadoutName);
	class UJsonUtilsObj* PropertiesToJson();
	bool JsonStringToLoadoutProperties(const struct FString& JsonString);
	class ULoadoutData* CreateLoadoutProperties(const struct FString& JsonString);
	bool CanUseLoadout(class APavlovPlayerState* PlayerState, const struct FString& LoadoutName);
	void AddLoadout(const struct FString& LoadoutName, const struct FLoadout& Loadout);
};


// Class Pavlov.UIModel
// 0x0018 (0x0040 - 0x0028)
class UUIModel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.UIModel");
		return ptr;
	}

};


// Class Pavlov.LobbyStatusModel
// 0x0028 (0x0068 - 0x0040)
class ULobbyStatusModel : public UUIModel
{
public:
	struct FString                                     Message;                                                  // 0x0040(0x0010) (ZeroConstructor)
	bool                                               bDownloading;                                             // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              Progress;                                                 // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Timestamp;                                                // 0x0058(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.LobbyStatusModel");
		return ptr;
	}


	void OnLobbyStatusMessage(const struct FString& InMessage, bool bInDownloading, float InProgress);
};


// Class Pavlov.LootSpawner
// 0x0008 (0x0330 - 0x0328)
class ALootSpawner : public AActor
{
public:
	unsigned char                                      LootIndex;                                                // 0x0328(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0329(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.LootSpawner");
		return ptr;
	}


	void SetLootIndexByName(const struct FName& Name, bool bNetUpdate);
	void OnRep_LootIndex();
	void OnLootChanged(unsigned char Index, const struct FName& Name);
	void NetworkUpdate();
	bool IsClear();
	struct FName GetLootNameByIndex(unsigned char Index);
	struct FName GetLootName();
	unsigned char GetLootIndexByName(const struct FName& Name);
	void ClearLoot();
};


// Class Pavlov.Magazine
// 0x0010 (0x0640 - 0x0630)
class AMagazine : public AVRMagazine
{
public:
	class USurfaceFXAsset*                             SurfaceFX;                                                // 0x0630(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0638(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Magazine");
		return ptr;
	}

};


// Class Pavlov.MainMenu
// 0x0010 (0x0348 - 0x0338)
class AMainMenu : public AHandMenu
{
public:
	class UWidgetComponent*                            UI;                                                       // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bScoreboard;                                              // 0x0340(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideUpdateScoreboard;                                // 0x0341(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.MainMenu");
		return ptr;
	}


	void OnUpdateScoreboard();
};


// Class Pavlov.MainMenuView
// 0x0018 (0x04A0 - 0x0488)
class AMainMenuView : public AContentView
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0488(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.MainMenuView");
		return ptr;
	}


	void OnVoteKickModalCommit(const struct FModalCommitParams& Params);
	void LeaveImpl();
	void ExitGameImpl();
};


// Class Pavlov.MapBrowserModalView
// 0x0008 (0x0490 - 0x0488)
class AMapBrowserModalView : public AModalView
{
public:
	class UMapBrowserModel*                            MapBrowserModel;                                          // 0x0488(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.MapBrowserModalView");
		return ptr;
	}

};


// Class Pavlov.MapBrowserModel
// 0x00A8 (0x00E8 - 0x0040)
class UMapBrowserModel : public UUIModel
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET
	class UWorkshop*                                   Workshop;                                                 // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0060(0x0050) MISSED OFFSET
	bool                                               bBusy;                                                    // 0x00B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFavoritesOnly;                                           // 0x00B1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDownloading;                                           // 0x00B2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x00B3(0x0001) MISSED OFFSET
	float                                              DownloadProgress;                                         // 0x00B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     Selection;                                                // 0x00B8(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                Section;                                                  // 0x00C8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumPages;                                                 // 0x00CC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentPage;                                              // 0x00D0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	TArray<struct FUIMapModel>                         Maps;                                                     // 0x00D8(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.MapBrowserModel");
		return ptr;
	}


	void OnSubscritionChanged(const struct FName& ID, bool bSubscribed);
	void OnRequestUserVote(const struct FName& ID, EWorkshopVoteType VoteType);
	void OnPreviewLoaded(const struct FName& ID, class UTexture2D* Texture);
	void OnDownloadProgress(float Progress);
	void OnDownloadBegin();
	void OnCustomMapQueryCompleted();
	void OnCustomMapDownloadCompleted(bool bSucceed, const struct FString& ID);
	void OnArtificialQueryCompleted();
};


// Class Pavlov.MapValidator
// 0x0038 (0x0360 - 0x0328)
class AMapValidator : public AActor
{
public:
	class USceneComponent*                             SceneRoot;                                                // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DebugDrawTime;                                            // 0x0330(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReflectionBounds;                                         // 0x0334(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReflectionGridSize;                                       // 0x0340(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	TArray<struct FColor>                              RandomColors;                                             // 0x0350(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.MapValidator");
		return ptr;
	}


	void GenerateNewColors();
	void FlushDebugPoints();
	void DrawReflectionCaptureView();
};


// Class Pavlov.Matchmaking
// 0x00B8 (0x00E0 - 0x0028)
class UMatchmaking : public UObject
{
public:
	EMatchmakingStatus                                 Status;                                                   // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPartyWaiting;                                            // 0x0029(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdatingPartyList;                                       // 0x002A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
	TArray<struct FPartyInfo>                          PartyList;                                                // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FMatchSettings                              Settings;                                                 // 0x0040(0x0028) (BlueprintVisible, BlueprintReadOnly)
	class UAzureServer*                                AzureServer;                                              // 0x0068(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnStatusChanged;                                          // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyCreated;                                           // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyLeave;                                             // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyUpdated;                                           // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCreatePartyFailed;                                      // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyListUpdated;                                       // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyMemberSpeakChanged;                                // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Matchmaking");
		return ptr;
	}


	bool UpdatePartyList();
	void SetSettings(const struct FMatchSettings& NewSettings);
	void SetDefaultSettings();
	bool Queue();
	void LeaveParty();
	bool JoinParty(const struct FString& NetworkStr);
	bool IsInQueue();
	bool IsConnectingToServer();
	bool IsActive();
	struct FString GetPlayerTitleId();
	struct FString GetPlayerPlayFabId();
	class UMatchmakingParty* GetPartyInstance();
	struct FString GetEntityType();
	struct FString GetEntityToken();
	struct FString GetEntityId();
	bool CreateParty();
	void Cancel();
};


// Class Pavlov.MatchmakingParty
// 0x0068 (0x0090 - 0x0028)
class UMatchmakingParty : public UObject
{
public:
	struct FString                                     SerializedNetworkDescriptor;                              // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bCreatedLocally;                                          // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EMatchmakingStatus                                 RemoteStatus;                                             // 0x0039(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	TMap<struct FString, struct FPartyMember>          Members;                                                  // 0x0040(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.MatchmakingParty");
		return ptr;
	}


	bool IsLocalMemberLeader();
	void Hide();
	TArray<struct FPartyMember> GetMemberArray();
	struct FString GetLeaderEntityId();
	void Broadcast();
};


// Class Pavlov.MatchmakingView
// 0x0000 (0x0438 - 0x0438)
class AMatchmakingView : public AMenuUniverseView
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.MatchmakingView");
		return ptr;
	}

};


// Class Pavlov.MenuUniverse
// 0x0140 (0x0468 - 0x0328)
class AMenuUniverse : public AActor
{
public:
	class USceneComponent*                             Facing;                                                   // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            CameraComponent;                                          // 0x0330(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CameraPivot;                                              // 0x0338(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              HiddenActors;                                             // 0x0340(0x0010) (ZeroConstructor)
	TMap<int, class AMenuUniverseView*>                Views;                                                    // 0x0350(0x0050) (ZeroConstructor, Transient)
	class AContentView*                                MainMenuView;                                             // 0x03A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AContentView*                                InfoView;                                                 // 0x03A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AContentView*                                PrimaryView;                                              // 0x03B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AContentView*                                SecondaryView;                                            // 0x03B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x03C0(0x0005) MISSED OFFSET
	bool                                               bCanBeClosed;                                             // 0x03C5(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03C6(0x0002) MISSED OFFSET
	float                                              HeightOffset;                                             // 0x03C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Distance;                                                 // 0x03CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Scale;                                                    // 0x03D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	class UHapticFeedbackEffect_Base*                  ScrollHaptics;                                            // 0x03D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScrollHapticThreashold;                                   // 0x03E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x54];                                      // 0x03E4(0x0054) MISSED OFFSET
	class UStaticMesh*                                 PointerMesh;                                              // 0x0438(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 PointerLineMesh;                                          // 0x0440(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PointerScale;                                             // 0x0448(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PointerLineScale;                                         // 0x044C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PointerPitch;                                             // 0x0450(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PointerDistance;                                          // 0x0454(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     PointerChannel;                                           // 0x0458(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugPointer;                                            // 0x0459(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x045A(0x0006) MISSED OFFSET
	class APawn*                                       PausePawn;                                                // 0x0460(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.MenuUniverse");
		return ptr;
	}


	void UpdateDocks();
	void SetEnabled(bool bEnabled);
	void OnViewTargetChangingFrom(class AActor* ViewTarget);
	void OnSideInterfaceChanged(EUserInterfaceType PrimaryInterface, EUserInterfaceType OldInterface);
	void OnInterfaceChanged(EUserInterfaceType OldInterface);
	void OnHeadsetScaleChanged(float NewScale);
	void OnEnableChanged(bool bEnabled);
	bool IsEnabled();
	class AMenuUniverseView* GetViewById(int ID);
	void DockView(EMenuUniverseDockingType Dock, int ViewId, int Order);
	class AMenuUniverseView* CreateView(class UClass* ViewClass, const struct FString& ViewUrlOverride, class UObject* ControllerObject);
	void AdjustFacingPivot();
};


// Class Pavlov.MenuUniverseController
// 0x0010 (0x0620 - 0x0610)
class UMenuUniverseController : public UMotionControllerComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0610(0x0008) MISSED OFFSET
	class UVRStickComponent*                           Stick;                                                    // 0x0618(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.MenuUniverseController");
		return ptr;
	}


	void OnTriggerReleased();
	void OnTriggerPressed();
	void OnTouchpadY(float Value);
	void OnTouchpadX(float Value);
	void OnScrollY(float Value);
	void OnScrollX(float Value);
	void OnMenuReleased();
	void OnMenuPressed();
};


// Class Pavlov.Modal
// 0x0058 (0x0080 - 0x0028)
class UModal : public UObject
{
public:
	class AModalView*                                  View;                                                     // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FString                                     ViewContent;                                              // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UClass*                                      ViewClass;                                                // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowContent;                                            // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHideForeground;                                          // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPersistent;                                              // 0x004A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x004B(0x0001) MISSED OFFSET
	int                                                ContextValue;                                             // 0x004C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ContextValueStr;                                          // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnCommit;                                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDestroyed;                                              // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Modal");
		return ptr;
	}


	void Commit(const struct FModalCommitParams& Params);
};


// Class Pavlov.ModalMessageBox
// 0x0028 (0x00A8 - 0x0080)
class UModalMessageBox : public UModal
{
public:
	EModalMessageBoxType                               Type;                                                     // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FText                                       Message;                                                  // 0x0088(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              Progress;                                                 // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ModalMessageBox");
		return ptr;
	}


	void SetProgress(float NewProgress);
};


// Class Pavlov.ModerationView
// 0x0008 (0x0490 - 0x0488)
class AModerationView : public AContentView
{
public:
	class UStaticModel*                                StaticModel;                                              // 0x0488(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ModerationView");
		return ptr;
	}

};


// Class Pavlov.MuzzleExploitBlocker
// 0x0000 (0x0330 - 0x0330)
class AMuzzleExploitBlocker : public ATriggerBox
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.MuzzleExploitBlocker");
		return ptr;
	}

};


// Class Pavlov.NameTag
// 0x0000 (0x00F0 - 0x00F0)
class UNameTag : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.NameTag");
		return ptr;
	}

};


// Class Pavlov.SpriteWidgetComponent
// 0x0010 (0x06B0 - 0x06A0)
class USpriteWidgetComponent : public UWidgetComponent
{
public:
	class AActor*                                      FaceToTargetOverride;                                     // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x06A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.SpriteWidgetComponent");
		return ptr;
	}

};


// Class Pavlov.NameTagComponent
// 0x0000 (0x06B0 - 0x06B0)
class UNameTagComponent : public USpriteWidgetComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.NameTagComponent");
		return ptr;
	}

};


// Class Pavlov.NameTagWidget
// 0x0070 (0x0160 - 0x00F0)
class UNameTagWidget : public UNameTag
{
public:
	class UClass*                                      WidgetClass;                                              // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
	struct FTransform                                  DefaultRelativeTransform;                                 // 0x0100(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   WidgetDrawSize;                                           // 0x0130(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bManuallyRedraw;                                          // 0x0138(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0139(0x0003) MISSED OFFSET
	float                                              RedrawTime;                                               // 0x013C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USpriteWidgetComponent*                      NameTag;                                                  // 0x0140(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APavlovPlayerState*                          LocalPlayerState;                                         // 0x0148(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class APavlovPlayerState*                          OwnerPlayerState;                                         // 0x0150(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class APavlovGameState*                            PavGameState;                                             // 0x0158(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.NameTagWidget");
		return ptr;
	}


	void OnAvatarTextureUpdated(const struct FString& ProductId, const struct FString& PlatformId, class UTexture2D* Texture);
};


// Class Pavlov.NameTagWidgetTTT
// 0x0050 (0x01B0 - 0x0160)
class UNameTagWidgetTTT : public UNameTagWidget
{
public:
	class UStaticMeshComponent*                        RoleMesh;                                                 // 0x0160(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0168(0x0008) MISSED OFFSET
	struct FTransform                                  RoleDefaultTransform;                                     // 0x0170(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 RoleDefaultMesh;                                          // 0x01A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOverrideUpdateVisibility;                                // 0x01A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.NameTagWidgetTTT");
		return ptr;
	}


	void UpdateVis(class APavlovPlayerState* LocalPavPlayerState, class APavlovPlayerState* OwnerPavPlayerState);
};


// Class Pavlov.OculusInputBinding
// 0x0000 (0x0028 - 0x0028)
class UOculusInputBinding : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.OculusInputBinding");
		return ptr;
	}


	void STATIC_ApplyEmulated(class UObject* WorldContext);
};


// Class Pavlov.OnlineAuthentication
// 0x0058 (0x00A0 - 0x0048)
class UOnlineAuthentication : public UPavlovObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0048(0x0028) MISSED OFFSET
	class UOnlineCredential*                           Credential;                                               // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	class UClass*                                      CredentialClass;                                          // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bAllowReLoginAttempts;                                    // 0x0088(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnLoginStatusChanged;                                     // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.OnlineAuthentication");
		return ptr;
	}


	void ResetReLoginCooldown();
	bool IsLoggedIn();
	struct FString GetLocalPlatformId();
	struct FString GetDisplayName();
};


// Class Pavlov.OnlineCredential
// 0x0080 (0x00C8 - 0x0048)
class UOnlineCredential : public UPavlovObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0048(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.OnlineCredential");
		return ptr;
	}

};


// Class Pavlov.OnlineCredentialDevice
// 0x0000 (0x00C8 - 0x00C8)
class UOnlineCredentialDevice : public UOnlineCredential
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.OnlineCredentialDevice");
		return ptr;
	}

};


// Class Pavlov.OnlineCredentialEpic
// 0x0028 (0x00F0 - 0x00C8)
class UOnlineCredentialEpic : public UOnlineCredential
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00C8(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnLoginCodeGranted;                                       // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.OnlineCredentialEpic");
		return ptr;
	}

};


// Class Pavlov.OnlineCredentialSteam
// 0x0028 (0x00F0 - 0x00C8)
class UOnlineCredentialSteam : public UOnlineCredential
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00C8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.OnlineCredentialSteam");
		return ptr;
	}

};


// Class Pavlov.OnlineLeaderboards
// 0x0018 (0x0060 - 0x0048)
class UOnlineLeaderboards : public UPavlovObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnLeaderboardQueryComplete;                               // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.OnlineLeaderboards");
		return ptr;
	}


	void QueryLeaderboardRanks(const struct FString& LeaderboardId, int MaxResults);
};


// Class Pavlov.OnlineLobby
// 0x0158 (0x01A0 - 0x0048)
class UOnlineLobby : public UPavlovObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0048(0x0058) MISSED OFFSET
	TArray<struct FLobbyTalker>                        Talkers;                                                  // 0x00A0(0x0010) (ZeroConstructor)
	float                                              LocalUserTalkTimer;                                       // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x9C];                                      // 0x00B4(0x009C) MISSED OFFSET
	TArray<struct FSteamLobbyMember>                   Members;                                                  // 0x0150(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FSteamLobbyInfo                             Info;                                                     // 0x0160(0x0038) (BlueprintVisible, BlueprintReadOnly)
	float                                              VoiceVolume;                                              // 0x0198(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLightModeEnabled;                                        // 0x019C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x019D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.OnlineLobby");
		return ptr;
	}


	void SetVoiceChat(bool bEnabled);
	void SetMemberData(const struct FString& Key, const struct FString& Value);
	void SetLobbyMemberLimit(int MemberLimit);
	void SetLobbyData(const struct FString& Key, const struct FString& Value);
	void SetFriendsOnly(bool bEnabled);
	void OnEncodedVoiceData(TArray<unsigned char> EncodedVoiceData);
	void OnAvatarUpdated(const struct FString& ProductId, const struct FString& PlatformId, class UTexture2D* AvatarTexture);
	void KickAndBan(int MemberIndex);
	void Kick(int MemberIndex);
	bool IsVoiceChatEnabled();
	bool IsMemberTalking(int Index);
	bool IsLocalUserOwner();
	bool IsFriendsOnly();
	void InviteFriends();
	int GetNumLobbyMembers();
	struct FString GetMemberData(int Index, const struct FString& Key);
	int GetLobbyMemberLimit();
	struct FString GetLobbyId();
	struct FString GetLobbyData(const struct FString& Key);
};


// Class Pavlov.OnlineManager
// 0x0158 (0x01A0 - 0x0048)
class UOnlineManager : public UPavlovObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
	TArray<class UOnlineRequest*>                      Requests;                                                 // 0x0058(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0068(0x0038) MISSED OFFSET
	class UOnlineLobby*                                LobbyInstance;                                            // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x00A8(0x0030) MISSED OFFSET
	class UOnlinePlatform*                             Platform;                                                 // 0x00D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UOnlineAuthentication*                       Authentication;                                           // 0x00E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UOnlineStats*                                Stats;                                                    // 0x00E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UOnlineLeaderboards*                         Leaderboards;                                             // 0x00F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      LobbyClass;                                               // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnLobbyListUpdated;                                       // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyUpdated;                                           // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyEnter;                                             // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyLeave;                                             // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyCreated;                                           // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyMembersUpdate;                                     // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnError;                                                  // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbySearchComplete;                                    // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyStatusMessage;                                     // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnJoinServerStateChanged;                                 // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.OnlineManager");
		return ptr;
	}


	void OnServerConnectFailure(EConnectorFailureReason FailureReason);
	void OnLoginStatusChanged(bool bLoggedIn);
	void OnErrorEvent(EOnlineError Error, const struct FText& ErrorMessage);
	bool LobbySearch(const struct FLobbySearchOptions& SearchOptions);
	void LeaveLobby();
	void JoinLobby(const struct FString& LobbyId);
	bool IsSearchingForLobbies();
	class UOnlineLobby* GetLobbyInstance();
	void FindLobbyById(const struct FString& LobbyId);
	void CreateLobby(int LobbyMemberLimit, bool bPublic);
};


// Class Pavlov.OnlinePlatform
// 0x0150 (0x0198 - 0x0048)
class UOnlinePlatform : public UPavlovObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	class UTexture2D*                                  FailoverAvatarTexture;                                    // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FAvatarTextureInstance> AvatarTextures;                                           // 0x0058(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xC0];                                      // 0x00A8(0x00C0) MISSED OFFSET
	TArray<struct FFriendRichPresence>                 Friends;                                                  // 0x0168(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnRichPresenceUpdated;                                    // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAvatarUpdated;                                          // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.OnlinePlatform");
		return ptr;
	}


	class UTexture2D* GetAvatarByPlayerState(class APlayerState* PlayerState);
	class UTexture2D* GetAvatar(const struct FString& ProductId, bool bFailOver);
};


// Class Pavlov.OnlinePlatformOculus
// 0x0000 (0x0198 - 0x0198)
class UOnlinePlatformOculus : public UOnlinePlatform
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.OnlinePlatformOculus");
		return ptr;
	}


	void OnFriendsUpdated();
	void OnDeepLinkMessage(const struct FString& ApiName, const struct FString& Message);
};


// Class Pavlov.OnlinePlatformSteam
// 0x0008 (0x01A0 - 0x0198)
class UOnlinePlatformSteam : public UOnlinePlatform
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0198(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.OnlinePlatformSteam");
		return ptr;
	}


	void OnSteamRichPresenceUpdated();
};


// Class Pavlov.OnlineRequest
// 0x00B0 (0x00F8 - 0x0048)
class UOnlineRequest : public UPavlovObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0048(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.OnlineRequest");
		return ptr;
	}

};


// Class Pavlov.OnlineStatics
// 0x0000 (0x0028 - 0x0028)
class UOnlineStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.OnlineStatics");
		return ptr;
	}


	class UOnlineStats* STATIC_GetOnlineStats(class UObject* WorldContextObject);
	class UOnlinePlatform* STATIC_GetOnlinePlatform(class UObject* WorldContextObject);
	class UOnlineManager* STATIC_GetOnlineManager(class UObject* WorldContextObject);
	class UOnlineLeaderboards* STATIC_GetOnlineLeaderboards(class UObject* WorldContextObject);
	struct FString STATIC_GetLocalUserIdAsString(class UObject* WorldContextObject);
	struct FString STATIC_GetLocalDisplayName(class UObject* WorldContextObject);
};


// Class Pavlov.OnlineStats
// 0x0028 (0x0070 - 0x0048)
class UOnlineStats : public UPavlovObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnIngestStatsComplete;                                    // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnQueryStatsComplete;                                     // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.OnlineStats");
		return ptr;
	}


	bool QueryStatsServer(const struct FString& ProductUserId, const struct FString& StatName);
	bool QueryStatsLocal(const struct FString& StatName);
	bool IngestStatsServer(const struct FString& ProductUserIdString, const struct FString& StatName, int StatAmount);
	bool IngestStatsLocal(const struct FString& StatName, int StatAmount);
};


// Class Pavlov.OutOfBoundsComponent
// 0x0050 (0x0140 - 0x00F0)
class UOutOfBoundsComponent : public UActorComponent
{
public:
	float                                              DamageGraceTime;                                          // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamagePerTick;                                            // 0x00F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageTickRate;                                           // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageScale;                                              // 0x00FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        GuideMesh;                                                // 0x0100(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        VignetteMesh;                                             // 0x0108(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UStaticMesh*                                 SphereMesh;                                               // 0x0110(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          VignetteMaterial;                                         // 0x0118(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FOutOfBoundsInfo                            OutOfBoundsInfo;                                          // 0x0120(0x0018) (BlueprintVisible, BlueprintReadOnly, Net)
	struct FTimerHandle                                DamageTick_Handle;                                        // 0x0138(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.OutOfBoundsComponent");
		return ptr;
	}


	void SetGuideToLocation(const struct FVector& GuideLocation);
	void RecalculateGuide();
	void PlayDamageSound();
	void OwnerKilled(class AActor* Killed);
	void OutOfBounds_Server(const struct FVector& EscapeLocation, class APavlov_OutOfBoundsVolume* OOBVolume);
	void OnPawnDamaged_Client();
	void OnOutOfBounds();
	void InBounds();
	void DamageTick();
	void AddGuideMesh();
};


// Class Pavlov.Painkillers
// 0x0000 (0x04D0 - 0x04D0)
class APainkillers : public AVRItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Painkillers");
		return ptr;
	}


	bool SetPainkillerDetails(int PillAmount, float HealAmountPerPill);
	int GetNumOfPills();
};


// Class Pavlov.PavlovAIController
// 0x00D8 (0x0510 - 0x0438)
class APavlovAIController : public AAIController
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0438(0x0040) MISSED OFFSET
	struct FVector                                     LastKnownAimTarget;                                       // 0x0478(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x0484(0x0024) MISSED OFFSET
	TArray<struct FVector>                             SuppresionSources;                                        // 0x04A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bTargetVisible;                                           // 0x04B8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04B9(0x0003) MISSED OFFSET
	float                                              TargetDistance;                                           // 0x04BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCanEngage;                                               // 0x04C0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EAIEngageState                                     EngageState;                                              // 0x04C1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x04C2(0x0002) MISSED OFFSET
	float                                              SkillRatio;                                               // 0x04C4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkillMultiplier;                                          // 0x04C8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET
	struct FAIPersonality                              Personality;                                              // 0x04D0(0x0028) (BlueprintVisible)
	float                                              SwitchTargetCooldown;                                     // 0x04F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VisibilityCheckInterval;                                  // 0x04FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuppresedThreashold;                                      // 0x0500(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuppresionCleanUpInterval;                                // 0x0504(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReactionDelay;                                            // 0x0508(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OutOfSightShootingDuration;                               // 0x050C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovAIController");
		return ptr;
	}


	void SetTargetPawn(class APavlovPawn* TargetPawn);
	void OnPawnCollisionBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	bool IsSuppressed();
	class APavlovPawn* GetTargetPawn();
};


// Class Pavlov.PavlovAvatarAnimInstance
// 0x00A0 (0x0540 - 0x04A0)
class UPavlovAvatarAnimInstance : public UVRAvatarAnimInstance
{
public:
	struct FRotator                                    MovingRotationTarget;                                     // 0x04A0(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              MovingRotationLerpRatio;                                  // 0x04AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSprinting;                                               // 0x04B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04B1(0x0003) MISSED OFFSET
	struct FRotator                                    MovingRotation;                                           // 0x04B4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     JointPickup;                                              // 0x04C0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     JointGun;                                                 // 0x04CC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     JointGunGripped;                                          // 0x04D8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HandBlendExp;                                             // 0x04E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FingerLerpExp;                                            // 0x04E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRightHanded;                                             // 0x04EC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsGrippingGun;                                           // 0x04ED(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasPickupRight;                                          // 0x04EE(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasGunRight;                                             // 0x04EF(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasPickupLeft;                                           // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasGunLeft;                                              // 0x04F1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x04F2(0x0002) MISSED OFFSET
	float                                              HandBlendLeft;                                            // 0x04F4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HandBlendRight;                                           // 0x04F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HTR0;                                                     // 0x04FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HTR1;                                                     // 0x0500(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HTR2;                                                     // 0x0504(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HTR3;                                                     // 0x0508(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HTR4;                                                     // 0x050C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HTL0;                                                     // 0x0510(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HTL1;                                                     // 0x0514(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HTL2;                                                     // 0x0518(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HTL3;                                                     // 0x051C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HTL4;                                                     // 0x0520(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSupportsFingerTracking;                                  // 0x0524(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bInVehicle;                                               // 0x0525(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0526(0x0002) MISSED OFFSET
	struct FRotator                                    SeatRot;                                                  // 0x0528(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0534(0x0004) MISSED OFFSET
	class UAnimSequence*                               SeatAnim;                                                 // 0x0538(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovAvatarAnimInstance");
		return ptr;
	}


	float GetFingerBlend(bool bRight, EFinger Finger);
};


// Class Pavlov.PavlovCustomGameMode
// 0x0088 (0x07C0 - 0x0738)
class APavlovCustomGameMode : public APavlovGameMode
{
public:
	class UPavlovZSpawnCMP*                            ZSpawnCMP;                                                // 0x0738(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class APavlov_GameLogic*                           CustomGameLogic;                                          // 0x0740(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<struct FName, class UClass*>                  PlayerSkins;                                              // 0x0748(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      ChickenClass;                                             // 0x0798(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FString>                             BanList;                                                  // 0x07A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             Whitelist;                                                // 0x07B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovCustomGameMode");
		return ptr;
	}


	void OnCustomRconCommand(const struct FString& Command);
};


// Class Pavlov.PavlovGameInstance
// 0x0528 (0x05C8 - 0x00A0)
class UPavlovGameInstance : public UGameInstance
{
public:
	class USteamworksManager*                          SteamworksManager;                                        // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x00A8(0x0048) MISSED OFFSET
	class UClass*                                      PlayerEffectsClass;                                       // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x00F8(0x0038) MISSED OFFSET
	class UTutorial*                                   Tutorial;                                                 // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData)
	class UServerBrowser*                              ServerBrowser;                                            // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData)
	class UServerBrowserV2*                            ServerBrowserV2;                                          // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              OculusScale;                                              // 0x0148(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	struct FString                                     BuildLabel;                                               // 0x0150(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             HiddenMaps;                                               // 0x0160(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             HiddenMapsShack;                                          // 0x0170(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData03[0x38];                                      // 0x0180(0x0038) MISSED OFFSET
	class USoundSubmix*                                ReverbSubmixGarage;                                       // 0x01B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class USoundSubmix*                                ReverbSubmixWarehouse;                                    // 0x01C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class USoundSubmix*                                ReverbSubmixTunnel;                                       // 0x01C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UUIManager*                                  UIManager;                                                // 0x01D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMatchmaking*                                Matchmaking;                                              // 0x01D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UOnlineManager*                              OnlineManager;                                            // 0x01E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UVoiceSource*                                VoiceSource;                                              // 0x01E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGameSessionServer*                          GameSessionServer;                                        // 0x01F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USoundMixingSettings*                        SoundMixingSettings;                                      // 0x01F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      SoundMixingSettingsClass;                                 // 0x0200(0x0008) (ZeroConstructor, IsPlainOldData)
	class UVoiceModerationInstance*                    LocalVoiceModeration;                                     // 0x0208(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             ObjectRefBucket;                                          // 0x0210(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData04[0xE8];                                      // 0x0220(0x00E8) MISSED OFFSET
	EBuildVersionStatus                                BuildVersionStatus;                                       // 0x0308(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTV;                                                      // 0x0309(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x030A(0x0006) MISSED OFFSET
	class UReplayManager*                              ReplayManager;                                            // 0x0310(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Exp;                                                      // 0x0318(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x031C(0x0004) MISSED OFFSET
	class UDedicatedServer*                            DedicatedServer;                                          // 0x0320(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UServerStatusHelper*                         ServerStatusHelper;                                       // 0x0328(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x0330(0x0008) MISSED OFFSET
	bool                                               bFirstBoot;                                               // 0x0338(0x0001) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	struct FString                                     MasterServerSessionId;                                    // 0x0340(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bStopFindingGameServer;                                   // 0x0350(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	TArray<struct FPavlovServerInfo>                   ServerList;                                               // 0x0358(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EMatchmakingState                                  MatchmakingState;                                         // 0x0368(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	struct FString                                     MasterServerUrl;                                          // 0x0370(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	float                                              ServerQueryInterval;                                      // 0x0380(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData11[0x14];                                      // 0x0384(0x0014) MISSED OFFSET
	TArray<struct FString>                             PatreonList;                                              // 0x0398(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	struct FScriptMulticastDelegate                    OnMenuUniverseChanged;                                    // 0x03A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMatchmakingStateChanged;                                // 0x03B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnQuickmatchFailed;                                       // 0x03C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyStateChanged;                                      // 0x03D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnServerListUpdated;                                      // 0x03E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGetMapListAdvancedResult;                               // 0x03F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnServerConnectFailure;                                   // 0x0408(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBuildVersionStatusChanged;                              // 0x0418(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UServerConnector*                            ConnectorInstance;                                        // 0x0428(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UTexture*>                            SplashScreenTextures;                                     // 0x0430(0x0010) (ZeroConstructor)
	int                                                SplashScreenIndex;                                        // 0x0440(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0444(0x0004) MISSED OFFSET
	struct FTimerHandle                                SplashScreenHide_Handle;                                  // 0x0448(0x0008)
	unsigned char                                      UnknownData13[0xF0];                                      // 0x0450(0x00F0) MISSED OFFSET
	TMap<struct FName, class UPavlov_Map*>             MapDefinitions;                                           // 0x0540(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData14[0x1A];                                      // 0x0590(0x001A) MISSED OFFSET
	EGameSessionState                                  GameSessionState;                                         // 0x05AA(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x5];                                       // 0x05AB(0x0005) MISSED OFFSET
	class UWorkshop*                                   Workshop;                                                 // 0x05B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FPavlovAdvancedMap>                  AdvancedMapList;                                          // 0x05B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovGameInstance");
		return ptr;
	}


	void UpdateServerList(const struct FString& Map, const struct FString& GameMode, bool bFriendsOnly, bool bPrivateOnly);
	void UpdateNextSplashScreen(bool bInitialSplash);
	void ToggleMenu();
	void TestServerConnect(const struct FString& ConnectURL, const struct FString& MapId, float Delay);
	void ShowPavlovSplash(bool bVisible, bool bFade);
	void SetMutedByProductId(const struct FString& ID, bool bEnabled);
	void SetMuted(class APavlovPlayerState* PlayerState, bool bEnabled);
	void SetMixingChannelVolume(const struct FName& Name, float Volume);
	void SetMatchmakingState(EMatchmakingState NewState);
	void SetItemRotation(float Roll, float Pitch, float Yaw);
	void ServerStartStatusHelper();
	void ServerConnectFailed(EConnectorFailureReason FailureReason);
	void ServerConnectComplete();
	void ServerConnectByURL(const struct FString& URL);
	void ServerConnectByIp(const struct FString& IpString, int Port);
	bool ServerConnect(const struct FServerConnectParams& Params);
	void RetrieveMasterServerSessionId();
	void ResumeShaderPreCompilation();
	void ResetTutorial();
	void ResetPhononScene();
	void ReportServerState();
	bool RemoveMap(const struct FString& UniqueID);
	void RemoveFromRefBucket(class UObject* Object);
	void QuickMatch();
	void QueryForGameSession();
	void OpenMap_Implementation();
	void OpenMap(const struct FString& Map, const struct FString& Options);
	void OnWorkshopSpecificQuery();
	void OnSteamServersConnected();
	void OnSteamLobbyListUpdated();
	void OnSplashScreenLoaded(const struct FDateTime& StartTimestamp);
	void OnServerMapDownloaded(bool bSucceed, const struct FString& ID);
	void OnNetworkFailure(class UWorld* World, class UNetDriver* NetDriver, TEnumAsByte<ENetworkFailure> FailureType, const struct FString& ErrorString);
	void OnLoginStatusChanged(bool bLoggedIn);
	void OnLobbyLeave();
	void OnLobbyEnter(bool bFailed);
	void OnClientMapDownloaded(bool bSucceed, const struct FString& ID);
	void OnAuthSessionTicketResponse(bool bSucceed, const struct FString& HexAuthTicket);
	void OnAndroidPermisionsGranted(TArray<struct FString> Permissions, TArray<bool> GrantResults);
	void LogoutTest();
	void JoinServer(const struct FString& LobbyId);
	bool IsMutedByProductId(const struct FString& ID);
	bool IsMuted(class APavlovPlayerState* PlayerState);
	void InitClientProxies();
	void HideSplashScreen();
	bool HasGameSession();
	class UVoiceSource* GetVoiceSource();
	class UUIManager* GetUIManager();
	class UTutorial* GetTutorial();
	class USoundMixingSettings* GetSoundMixingSettings();
	class UServerBrowserV2* GetServerBrowserV2();
	class UServerBrowser* GetServerBrowser();
	EOnlineRegion GetOnlineRegion();
	class UOnlineManager* GetOnlineManager();
	float GetOculusScale();
	class UMatchmaking* GetMatchmaking();
	int GetMapVersion(const struct FString& UniqueID);
	void GetMapListAdvanced(int Compatibility, bool bFavoriteOnly);
	TArray<class UPavlov_Map*> GetMapList(int Compatibility);
	class UPavlov_Map* GetMap(const struct FString& UniqueID);
	class UTexture* GetCurrentSplashScreen();
	struct FString GetBuildLabel();
	void DumpLobbyData();
	void DisplayNetworkFailureMessage();
	void DisplayMessageImpl();
	void DisplayMessage(const struct FString& Message, bool bDeferredDelay);
	void CreateLobby();
	void CreateGameSession();
	void CreateCoopLobby();
	class UServerStatusHelper* ClientStartStatusHelper(int ListenPort);
	void CheckPlacementStatus();
	void CheckBuildVersionStatus();
	void CancelServerFind();
	void CancelServerConnect();
	void CancelQuickmatch();
	void AsyncLoadSplashScreens();
	void ApplyOculusBindings();
	void AddToRefBucket(class UObject* Object);
};


// Class Pavlov.PavlovGameState
// 0x02F8 (0x0680 - 0x0388)
class APavlovGameState : public AGameState
{
public:
	TArray<class APavlovPlayerState*>                  TempPlayerArray;                                          // 0x0388(0x0010) (ZeroConstructor, Transient)
	TMap<class UClass*, struct FEquipmentData>         EquipmentDataByClassMap;                                  // 0x0398(0x0050) (ZeroConstructor, Transient)
	TMap<struct FName, struct FPreloadedSkins>         PreloadedSkins;                                           // 0x03E8(0x0050) (ZeroConstructor)
	struct FServerSettings                             Settings;                                                 // 0x0438(0x0030) (BlueprintVisible, BlueprintReadOnly, Net)
	bool                                               bNoTeams;                                                 // 0x0468(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bMovementDisabled;                                        // 0x0469(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bNoFallDamage;                                            // 0x046A(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bLimitedAmmo;                                             // 0x046B(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                Team0Score;                                               // 0x046C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                Team1Score;                                               // 0x0470(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                RoundDuration;                                            // 0x0474(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                RoundTime;                                                // 0x0478(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                AttackingTeam;                                            // 0x047C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                RoundWinner;                                              // 0x0480(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                RoundsLeft;                                               // 0x0484(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bMatchTimePaused;                                         // 0x0488(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0489(0x0003) MISSED OFFSET
	float                                              MatchTime;                                                // 0x048C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  EquipmentCosts;                                           // 0x0490(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ScoreboardClass;                                          // 0x0498(0x0008) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	class UClass*                                      HandMenuClass;                                            // 0x04A0(0x0008) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NameTagClass;                                             // 0x04A8(0x0008) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bShowNameTags;                                            // 0x04B0(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	ECompetitiveMode                                   CompetitiveMode;                                          // 0x04B1(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventGrenadePin;                                       // 0x04B2(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bCanReviveEnemies;                                        // 0x04B3(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	EPavlovGameModeType                                GameModeType;                                             // 0x04B4(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04B5(0x0003) MISSED OFFSET
	struct FBuyRestrictions                            BuyRestrictions;                                          // 0x04B8(0x0140) (Net)
	struct FString                                     BuyMenuScript;                                            // 0x05F8(0x0010) (Net, ZeroConstructor)
	struct FString                                     BalancingCSV;                                             // 0x0608(0x0010) (Net, ZeroConstructor)
	class UDataTable*                                  EquipmentTable;                                           // 0x0618(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  VehicleTable;                                             // 0x0620(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  LootMeshTable;                                            // 0x0628(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               EquipmentIndexCache;                                      // 0x0630(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FKillfeedEntry>                      Killfeed;                                                 // 0x0640(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UCosmeticTickManagerComponent*               CosmeticTickManager;                                      // 0x0650(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVRAsyncLoader*                              AsyncLoader;                                              // 0x0658(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                MaxPlayers;                                               // 0x0660(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bPinProtected;                                            // 0x0664(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	EHolidays                                          Holiday;                                                  // 0x0665(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0666(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnKillfeedEntry;                                          // 0x0668(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UPavlov_GlobalInfo*                          GlobalInfo;                                               // 0x0678(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovGameState");
		return ptr;
	}


	void UnpauseMatchTime();
	void SetGlobalInfo(class UPavlov_GlobalInfo* GI);
	void SetAttackingTeam(bool Team0);
	void ResetMatchTime(bool bPause);
	void ResetBuyRestrictions();
	bool PreloadSkin(const struct FName& ItemName, int SkinFamilyId);
	void PauseMatchTime();
	void OnSkinPreloaded(const struct FName& ItemName, int SkinFamilyId);
	void OnSkinLoaded(class AActor* Item);
	void OnRep_GlobalInfo();
	void OnRep_BalancingCSV();
	bool OnModkitLoadLootMeshAsync(const struct FAsyncLoadLootMesh& LoadLootMesh);
	void OnGetVehicleClassToSpawnWRef__DelegateSignature(class UClass* VehicleClass, const struct FAsyncVehicleSpawnData& AsyncVehicleSpawnData);
	void OnGetVehicleClassToSpawn__DelegateSignature(class UClass* VehicleClass, const struct FTransform& SpawnTransform, int TeamId);
	void OnGetVehicleClass__DelegateSignature(class UClass* VehicleClass);
	void MulticastOnKillfeedEntry(const struct FKillfeedEntry& NewEntry);
	void ModkitLootLoaded(const struct FAsyncLoadLootMesh& LoadLootMesh);
	void LootLoaded(const struct FScriptDelegate& LoadedDelegate);
	bool LoadSkinForItem(class APavlovPlayerState* PavPlayerState, class UClass* ItemClass, class AVRItem* Item);
	bool LoadSkin(class APavlovPlayerState* PavPlayerState, const struct FName& ItemName, class AActor* Item);
	void LoadedVehicleClassToSpawnWRef(const struct FScriptDelegate& OnVehicleClassToSpawnWRefLoaded, const struct FAsyncVehicleSpawnData& AsyncVehicleSpawnData);
	void LoadedVehicleClassToSpawn(const struct FScriptDelegate& OnVehicleClassToSpawnLoaded, const struct FTransform& SpawnTransform, int TeamId);
	void LoadedVehicleClass(const struct FScriptDelegate& OnVehicleClassLoaded);
	void LoadBalanceTableAsync();
	bool IsVehicleNameValid(const struct FName& VehicleName);
	bool IsTeamAbleToBuy(const struct FName& EquipmentName, int TeamId);
	bool IsSkinPreloaded(const struct FName& ItemName, int SkinFamilyId);
	void InitializeCosmeticTickActors();
	bool GetVehicleClassWRef(const struct FScriptDelegate& OnVehicleClassToSpawnWRefLoaded, const struct FAsyncVehicleSpawnData& AsyncVehicleSpawnData);
	bool GetVehicleClassToSpawnAsync(const struct FName& VehicleName, const struct FScriptDelegate& OnVehicleClassToSpawnLoaded, const struct FTransform& SpawnTransform, int TeamId);
	bool GetVehicleClassByNameAsync(const struct FName& VehicleName, const struct FScriptDelegate& OnVehicleClassLoaded);
	class UClass* GetVehicleClassByName(const struct FName& VehicleName);
	int GetTeamScore(int TeamId);
	void GetTeamArray(int TeamId, TArray<class APavlovPlayerState*>* TeamArray);
	TArray<struct FName> GetSpawnableEquipmentNames();
	void GetSortedPlayerArray(int FilterByTeamId, TArray<class APavlovPlayerState*>* SortedPlayerArray);
	struct FString GetPlayerStringId(class APavlovPlayerState* PlayerState);
	class APavlovPlayerState* GetPlayerStateByStringId(const struct FString& StringId);
	class APavlovPlayerState* GetPlayerByScore(int Index, int TeamId);
	unsigned char GetMaxPurchasesPerPlayer(const struct FName& EquipmentName);
	EMatchResult GetMatchResult();
	bool GetLootMesh(const struct FName& LootName, const struct FScriptDelegate& OnLoaded);
	TArray<struct FName> GetEquipmentNames();
	struct FName GetEquipmentNameByIndex(int Index);
	struct FName GetEquipmentNameByClass(class UClass* ItemClass);
	int GetEquipmentMagCount(const struct FName& EquipmentName);
	int GetEquipmentKillBonus(const struct FName& EquipmentName);
	int GetEquipmentIndexByName(const struct FName& EquipmentName);
	struct FEquipmentData GetEquipmentDataByClass(class UClass* ItemClass, bool* bSuccess);
	struct FEquipmentData GetEquipmentData(const struct FName& EquipmentName, bool* bSuccess);
	int GetEquipmentCost(const struct FName& EquipmentName);
	class UClass* GetEquipmentClassByName(const struct FName& EquipmentName);
	class UVRAsyncLoader* GetAsyncLoader();
	void DisplayMatchStateOverlay(class UClass* OverlayClass);
	bool CanRemoveAttachments();
	bool ArePlayersEnemies(class APlayerState* A, class APlayerState* B);
};


// Class Pavlov.PavlovGameUserSettings
// 0x0138 (0x0250 - 0x0118)
class UPavlovGameUserSettings : public UGameUserSettings
{
public:
	float                                              PlayerHeight;                                             // 0x0118(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              PlayerCrouchHeight;                                       // 0x011C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bPlayerRightHanded;                                       // 0x0120(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCalibrated;                                              // 0x0121(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bOOBLocomotion;                                           // 0x0122(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bTwoHandToggle;                                           // 0x0123(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAutoUngrip;                                              // 0x0124(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bLegacyGrip;                                              // 0x0125(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSnapTurnEnabled;                                         // 0x0126(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bMountFriendly;                                           // 0x0127(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EOnlineRegion                                      PrimaryRegion;                                            // 0x0128(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bHideFullServers;                                         // 0x0129(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bHideEmptyServers;                                        // 0x012A(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bHidePinLockedServers;                                    // 0x012B(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EServerSearchType                                  ServerSearchType;                                         // 0x012C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EServerSortType                                    ServerSortType;                                           // 0x012D(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x012E(0x0002) MISSED OFFSET
	TArray<struct FString>                             GMFilters;                                                // 0x0130(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             GMFiltersV2;                                              // 0x0140(0x0010) (ZeroConstructor, Config)
	TArray<struct FFavoriteServer>                     FavoriteServers;                                          // 0x0150(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             RegionFilters;                                            // 0x0160(0x0010) (ZeroConstructor, Config)
	bool                                               bForceNoPostProcess;                                      // 0x0170(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAutoSwapHands;                                           // 0x0171(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bLeftEyeRendering;                                        // 0x0172(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSwapControllers;                                         // 0x0173(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bVirtualStock;                                            // 0x0174(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EGripMode                                          GripModeVive;                                             // 0x0175(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EGripMode                                          GripModeOculus;                                           // 0x0176(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSmoothTurn;                                              // 0x0177(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	float                                              SmoothTurnRate;                                           // 0x0178(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	ECustomAction                                      MainHandAction;                                           // 0x017C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	ECustomAction                                      OffHandAction;                                            // 0x017D(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAutoSprint;                                              // 0x017E(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bLiteFootStepHaptics;                                     // 0x017F(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bLockInventory;                                           // 0x0180(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bHeadLocomotion;                                          // 0x0181(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bFreeSpectating;                                          // 0x0182(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0183(0x0005) MISSED OFFSET
	TArray<struct FSpectatorViews>                     SpectatorViews;                                           // 0x0188(0x0010) (ZeroConstructor, Config)
	bool                                               bInvertTouchpad;                                          // 0x0198(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bArmKillfeed;                                             // 0x0199(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x019A(0x0006) MISSED OFFSET
	struct FString                                     VoiceDevice;                                              // 0x01A0(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             FavoriteMaps;                                             // 0x01B0(0x0010) (ZeroConstructor, Config)
	bool                                               bRealTimeReverb;                                          // 0x01C0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseAudioThread;                                          // 0x01C1(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bNoAmbisonics;                                            // 0x01C2(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSwapMenuScoreboard;                                      // 0x01C3(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EGripMode                                          GripMode;                                                 // 0x01C4(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EVRSmoothLocomotionMode                            SmoothLocomotionMode;                                     // 0x01C5(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EGoreLevel                                         GoreLevel;                                                // 0x01C6(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x01C7(0x0001) MISSED OFFSET
	float                                              GrabForceThreashold;                                      // 0x01C8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseGrabForce;                                            // 0x01CC(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x01CD(0x0003) MISSED OFFSET
	struct FString                                     StartUpMap;                                               // 0x01D0(0x0010) (ZeroConstructor, Config)
	bool                                               bForceTubeHaptics;                                        // 0x01E0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bHapticsSuit;                                             // 0x01E1(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseAdvancedVehicleInput;                                 // 0x01E2(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bHideAmmoCounter;                                         // 0x01E3(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bMicMuted;                                                // 0x01E4(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bOnScreenEffects;                                         // 0x01E5(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x01E6(0x0002) MISSED OFFSET
	uint32_t                                           PavlovVersion;                                            // 0x01E8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x01EC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHandsSwitched;                                          // 0x01F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnVirtualStockChanged;                                    // 0x0200(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnArmKillfeedChanged;                                     // 0x0210(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAdvancedVehicleInputChanged;                            // 0x0220(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnScreenEffectsChanged;                                   // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FString>                             MutedPlayers;                                             // 0x0240(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovGameUserSettings");
		return ptr;
	}


	bool UseOOBLocomotion();
	bool UseGrabForce();
	bool ShouldSwapControllers();
	void SetVoiceDevice(const struct FString& DeviceURL);
	void SetVirtualStock(bool bEnabled);
	void SetUseGrabForce(bool bEnabled);
	void SetUseAudioThread(bool bEnabled);
	void SetTwoHandToggle(bool bEnabled);
	void SetTouchpadInverted(bool bInverted);
	void SetSwapControllers(bool bEnabled);
	void SetStartUpMap(const struct FString& NewStartUpMap);
	void SetSnapTurn(bool bEnabled);
	void SetSmoothTurnRate(float Rate);
	void SetSmoothTurn(bool bEnabled);
	void SetSmoothLocomotionMode(EVRSmoothLocomotionMode NewMode);
	void SetServerSortType(EServerSortType SortType);
	void SetServerSearchType(EServerSearchType SearchType);
	void SetResolutionQuality(float Quality);
	void SetRegionFilters(TArray<struct FString> Filters);
	void SetRealTimeReverb(bool bEnabled);
	void SetPrimaryRegion(EOnlineRegion Region);
	void SetPlayerRightHanded(bool bRightHanded);
	void SetPlayerHeight(float Height);
	void SetOOBLocomotion(bool bUse);
	void SetOnScreenEffectsEnabled(bool bEnabled);
	void SetOffHandAction(ECustomAction Action);
	void SetNoAmbisonics(bool bEnabled);
	void SetMountFriendly(bool bFriendly);
	void SetMicMuted(bool bMuted);
	void SetMenuScoreboardSwaped(bool bEnabled);
	void SetMapAsFavoriteById(const struct FString& ID, bool bEnabled);
	void SetMapAsFavorite(class UPavlov_Map* Map, bool bEnabled);
	void SetMainHandAction(ECustomAction Action);
	void SetLockInventory(bool bEnabled);
	void SetLiteFootStepHaptics(bool bEnabled);
	void SetLegacyGrip(bool bEnabled);
	void SetLeftEyeRendering(bool bEnabled);
	void SetHidePinLockedServers(bool bHideLocked);
	void SetHideFullServers(bool HideFull);
	void SetHideEmptyServers(bool bHideEmpty);
	void SetHideAmmoCount(bool bHidden);
	void SetHeadLocomotion(bool bEnabled);
	void SetGripMode(EGripMode NewGripMode);
	void SetGrabForceThreashold(float Value);
	void SetGoreLevel(EGoreLevel Level);
	void SetGMFilters(TArray<struct FString> Filters);
	void SetFreeSpectatingEnabled(bool bEnabled);
	void SetForceTubeEnabled(bool bEnabled);
	void SetFavoriteServers(TArray<struct FFavoriteServer> Servers);
	void SetbHapticsSuitEnabled(bool bEnabled);
	void SetAutoUngrip(bool bEnabled);
	void SetAutoSwapHandsEnabled(bool bEnabled);
	void SetAutoSprint(bool bEnabled);
	void SetArmKillfeedEnabled(bool bEnabled);
	void SetAdvancedVehicleInput(bool bUseAdvanced);
	void SendAnalyticEvents();
	void SaveSpectatorView(class UObject* WorldContextObject, int Index, const struct FTransform& Transform);
	void MarkAsCalibrated();
	bool IsTwoHandToggleEnabled();
	bool IsTouchpadInverted();
	bool IsSnapTurnEnabled();
	bool IsSmoothTurnEnabled();
	bool IsPostProcessDisabled();
	bool IsPlayerRightHanded();
	bool IsOnScreenEffectsEnabled();
	bool IsMountFriendly();
	bool IsMicMuted();
	bool IsMenuScoreboardSwapped();
	bool IsLiteFootStepHapticsEnabled();
	bool IsLeftEyeRendering();
	bool IsHeadLocomotionEnabled();
	bool IsFreeSpectatingEnabled();
	bool IsForceTubeEnabled();
	bool IsFavoriteMapById(const struct FString& ID);
	bool IsFavoriteMap(class UPavlov_Map* Map);
	bool IsCalibrated();
	bool IsBHapticsSuitEnabled();
	bool IsAutoUngripEnabled();
	bool IsAutoSwapHandsEnabled();
	bool IsAutoSprintEnabled();
	bool IsArmKillfeedEnabled();
	bool IsAmmoCounterHidden();
	bool IsAdvancedVehicleInputEnabled();
	bool HasLegacyGrip();
	struct FString GetVoiceDevice();
	bool GetVirtualStock();
	bool GetUseAudioThread();
	struct FString GetStartUpMap();
	struct FTransform GetSpectatorView(class UObject* WorldContextObject, int Index);
	float GetSmoothTurnRate();
	EVRSmoothLocomotionMode GetSmoothLocomotionMode();
	EServerSortType GetServerSortType();
	EServerSearchType GetServerSearchType();
	TArray<struct FString> GetRegionFilters();
	bool GetRealTimeVoiceReverb();
	EOnlineRegion GetPrimaryRegion();
	float GetPlayerHeight();
	ECustomAction GetOffHandAction();
	bool GetNoAmbisonics();
	ECustomAction GetMainHandAction();
	bool GetLockInventory();
	bool GetHidePinLockedServers();
	bool GetHideFullServers();
	bool GetHideEmptyServers();
	EGripMode GetGripMode();
	float GetGrabForceThreashold();
	EGoreLevel GetGoreLevel();
	TArray<struct FString> GetGMFilters();
	TArray<struct FFavoriteServer> GetFavoriteServers();
	void ForceNoPostProcessing(bool bEnabled);
};


// Class Pavlov.PavlovHandAnimInstance
// 0x0080 (0x0450 - 0x03D0)
class UPavlovHandAnimInstance : public UVRControllerAnimInstance
{
public:
	float                                              IndexSafeTriggerTimer;                                    // 0x03D0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x03D4(0x0054) MISSED OFFSET
	struct FVector                                     IKTriggerLocation;                                        // 0x0428(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIKTriggerAvailable;                                      // 0x0434(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0435(0x0003) MISSED OFFSET
	struct FRotator                                    TriggerFingerRotation;                                    // 0x0438(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bImmersiveMode;                                           // 0x0444(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0445(0x0003) MISSED OFFSET
	class UAnimSequence*                               DefaultImmersiveSequence;                                 // 0x0448(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovHandAnimInstance");
		return ptr;
	}


	void SetDefaultGripSequence(class UAnimSequence* UpdateSequence, bool bImmersiveSequence);
	float GetFingerBlend(EFinger Finger);
};


// Class Pavlov.PavlovHUD
// 0x0000 (0x0418 - 0x0418)
class APavlovHUD : public AHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovHUD");
		return ptr;
	}

};


// Class Pavlov.PavlovInventory
// 0x0030 (0x0478 - 0x0448)
class APavlovInventory : public AVRInventory
{
public:
	struct FScriptMulticastDelegate                    OnLowAmmo;                                                // 0x0448(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class USoundCue*                                   MagazineGrabSound;                                        // 0x0458(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   OutOfAmmoSound;                                           // 0x0460(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   LastMagazineGrabSound;                                    // 0x0468(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  MagazineGrabHaptic;                                       // 0x0470(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovInventory");
		return ptr;
	}

};


// Class Pavlov.PavlovLevelScriptActor
// 0x0000 (0x0330 - 0x0330)
class APavlovLevelScriptActor : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovLevelScriptActor");
		return ptr;
	}

};


// Class Pavlov.PavlovLobby
// 0x00F0 (0x0290 - 0x01A0)
class UPavlovLobby : public UOnlineLobby
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x01A0(0x0058) MISSED OFFSET
	class UPavlovGameInstance*                         GameInstance;                                             // 0x01F8(0x0008) (ZeroConstructor, IsPlainOldData)
	ELobbyState                                        LocalState;                                               // 0x0200(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0201(0x0003) MISSED OFFSET
	float                                              HostLocallyTimer;                                         // 0x0204(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SanityTimer;                                              // 0x0208(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x15];                                      // 0x020C(0x0015) MISSED OFFSET
	bool                                               bHostLocally;                                             // 0x0221(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0222(0x0006) MISSED OFFSET
	struct FServerSettings                             ServerSettings;                                           // 0x0228(0x0030) (BlueprintVisible, BlueprintReadOnly)
	struct FString                                     GameMode;                                                 // 0x0258(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Map;                                                      // 0x0268(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MapLabel;                                                 // 0x0278(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	ELobbyState                                        State;                                                    // 0x0288(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EServerHostingType                                 HostingType;                                              // 0x0289(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFillWithBots;                                            // 0x028A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bConnecting;                                              // 0x028B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CompetitiveMode;                                          // 0x028C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovLobby");
		return ptr;
	}


	void Start();
	void SetWantToStart(bool bEnabled);
	void SetServerSettings(const struct FServerSettings& NewServerSettings);
	void SetRegion(const struct FString& NewRegion);
	void SetPin(const struct FString& Pin);
	void SetMap(const struct FString& MapName);
	void SetHostingType(EServerHostingType NewHostingType);
	void SetGameMode(const struct FString& NewGameMode);
	void SetFillWithBots(bool bEnabled);
	void SetCompetitiveMode(int CompMode);
	void RequestTeam(int TeamId);
	void OnMapDownloadProgress(float Progress);
	void OnMapDownloaded(bool bSucceed, const struct FString& ID);
	void MuteMember(int Index, bool bEnabled);
	bool IsPinProtected();
	bool IsMemberMuted(int Index);
	struct FString GetRegion();
	struct FString GetPin();
	int GetMemberTeam(int Index);
	int GetLocalUserIndex();
	void FindServer();
	bool DoesMemberWantsToStart(int Index);
	void CheckSessionStatus();
	void CancelServerFind();
};


// Class Pavlov.PavlovLocalPlayer
// 0x0000 (0x01C8 - 0x01C8)
class UPavlovLocalPlayer : public ULocalPlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovLocalPlayer");
		return ptr;
	}

};


// Class Pavlov.PavlovMinimalGameMode
// 0x0010 (0x0420 - 0x0410)
class APavlovMinimalGameMode : public AGameMode
{
public:
	class UClass*                                      GhostPawnClass;                                           // 0x0410(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAsyncLoader;                                          // 0x0418(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0419(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovMinimalGameMode");
		return ptr;
	}

};


// Class Pavlov.PavlovMinimalGameState
// 0x0000 (0x0680 - 0x0680)
class APavlovMinimalGameState : public APavlovGameState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovMinimalGameState");
		return ptr;
	}

};


// Class Pavlov.FallDamageType
// 0x0000 (0x0040 - 0x0040)
class UFallDamageType : public UDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.FallDamageType");
		return ptr;
	}

};


// Class Pavlov.PavlovMovementComponent
// 0x00A0 (0x07C0 - 0x0720)
class UPavlovMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0720(0x0018) MISSED OFFSET
	float                                              LastSeatYaw;                                              // 0x0738(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x11];                                      // 0x073C(0x0011) MISSED OFFSET
	EParachuteState                                    ParachuteState;                                           // 0x074D(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x074E(0x0002) MISSED OFFSET
	float                                              FallDamage;                                               // 0x0750(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bVehicleReCenter;                                         // 0x0754(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bVehicleRecenterRotation;                                 // 0x0755(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyFallDamage;                                         // 0x0756(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0757(0x0001) MISSED OFFSET
	float                                              AiSpeedMultiplier;                                        // 0x0758(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRoomScaleLocomotion;                                     // 0x075C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x075D(0x0003) MISSED OFFSET
	float                                              FreeFallThreashold;                                       // 0x0760(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreeFallMaxLateralSpeed;                                  // 0x0764(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreeFallAirControlBoost;                                  // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallDamagePerSecond;                                      // 0x076C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumFallDamage;                                        // 0x0770(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoParachuteAltitude;                                    // 0x0774(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ParachuteDeceleration;                                    // 0x0778(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ParachuteTerminalVelocity;                                // 0x077C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ParachuteAirControlBoost;                                 // 0x0780(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeploymentDuration;                                       // 0x0784(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DeploymentSound;                                          // 0x0788(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintSpeedMultiplier;                                    // 0x0790(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintAccelerationMultiplier;                             // 0x0794(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ADSSpeedMultiplier;                                       // 0x0798(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowParachuteMode;                                      // 0x079C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x079D(0x0003) MISSED OFFSET
	float                                              SeatOffset;                                               // 0x07A0(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastHMDLocation;                                          // 0x07A4(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              HMDSpeed;                                                 // 0x07B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0xC];                                       // 0x07B4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovMovementComponent");
		return ptr;
	}


	void ServerDeployParachute();
	void OnRep_PrachuteState();
	void MulticastOnParachuteDeployed();
	void EnableParachuteMode(bool bEnableParachuteMode);
};


// Class Pavlov.PavlovPawn
// 0x05C0 (0x10B0 - 0x0AF0)
class APavlovPawn : public APavlovPawnBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0AF0(0x0018) MISSED OFFSET
	class UVRAvatarComponent*                          Avatar;                                                   // 0x0B08(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UVHealthComponent*                           HealthComponent;                                          // 0x0B10(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            PlayerInfo;                                               // 0x0B18(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UVRSelectionComponent*                       SelectionComponent;                                       // 0x0B20(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDamageTrackerComponent*                     DamageTracker;                                            // 0x0B28(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UInstancedSourceBusComponent*                FootStepAudio;                                            // 0x0B30(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UInstancedSourceBusComponent*                LeftCameraAudio;                                          // 0x0B38(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UInstancedSourceBusComponent*                RightCameraAudio;                                         // 0x0B40(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAvatarSkin*                                 AvatarSkin;                                               // 0x0B48(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0B50(0x0010) MISSED OFFSET
	struct FEquipmentDefinition                        EquipmentToLoad;                                          // 0x0B60(0x0048)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0BA8(0x0018) MISSED OFFSET
	struct FFingerTracking                             FingerTrackingSent;                                       // 0x0BC0(0x0003) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x0BC3(0x0005) MISSED OFFSET
	struct FKillInfo                                   LatestKillInfo;                                           // 0x0BC8(0x0070)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0C38(0x0008) MISSED OFFSET
	float                                              StopSprintTimer;                                          // 0x0C40(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PlaySpaceExploitKillTimer;                                // 0x0C44(0x0004) (ZeroConstructor, IsPlainOldData)
	class UHolsterComponent*                           MainWeaponHolster;                                        // 0x0C48(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWatch*                                      WatchComponent;                                           // 0x0C50(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVoiceComponent*                             Voice;                                                    // 0x0C58(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x20];                                      // 0x0C60(0x0020) MISSED OFFSET
	TArray<struct FWoundInfo>                          DelayedWoundInfoList;                                     // 0x0C80(0x0010) (ZeroConstructor, Transient)
	TArray<class UParticleSystemComponent*>            HeadshotParticleInstances;                                // 0x0C90(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UAudioComponent*>                     HeadshotSoundInstances;                                   // 0x0CA0(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData06[0x10];                                      // 0x0CB0(0x0010) MISSED OFFSET
	class UNameTag*                                    NameTag;                                                  // 0x0CC0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FFingerTracking                             FingerTracking;                                           // 0x0CC8(0x0003) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x5];                                       // 0x0CCB(0x0005) MISSED OFFSET
	struct FPlayerAvatar                               AvatarSkinInfo;                                           // 0x0CD0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net)
	float                                              SlowTimer;                                                // 0x0CE0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              CorpseTime;                                               // 0x0CE4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bInvulnerable;                                            // 0x0CE8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RadioChannel;                                             // 0x0CE9(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0CEA(0x0002) MISSED OFFSET
	int                                                Armour;                                                   // 0x0CEC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                HelmetArmour;                                             // 0x0CF0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                TeamId;                                                   // 0x0CF4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bVoiceActive;                                             // 0x0CF8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0CF9(0x0003) MISSED OFFSET
	float                                              ImpactWeight;                                             // 0x0CFC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ImpactCurve;                                              // 0x0D00(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BloodSplatClass;                                          // 0x0D08(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BloodSplatClassShack;                                     // 0x0D10(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxBloodSplats;                                           // 0x0D18(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0D1C(0x0004) MISSED OFFSET
	class UParticleSystem*                             HeadshotParticle;                                         // 0x0D20(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             HeadshotBleedParticle;                                    // 0x0D28(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   HeadshotBleedSound;                                       // 0x0D30(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   HeadshotSound;                                            // 0x0D38(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   HeadshotSound2D;                                          // 0x0D40(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   FallDamageSound;                                          // 0x0D48(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HeadBoneName;                                             // 0x0D50(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ChestBoneName;                                            // 0x0D58(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             HelmetHitParticle;                                        // 0x0D60(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   HelmetHitSound;                                           // 0x0D68(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnProtectionDuration;                                  // 0x0D70(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlaySpaceLimits;                                          // 0x0D74(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUnderPlaySpaceExploit;                                   // 0x0D80(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0D81(0x0003) MISSED OFFSET
	float                                              PlaySpaceExploitKillDelay;                                // 0x0D84(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCameraClipProtectionEnabled;                             // 0x0D88(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0D89(0x0003) MISSED OFFSET
	float                                              CameraClipThreashold;                                     // 0x0D8C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraClipMaxDuration;                                    // 0x0D90(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0D94(0x0004) MISSED OFFSET
	class USoundCue*                                   WearArmourSound;                                          // 0x0D98(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   WearHelmetSound;                                          // 0x0DA0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSlowDuration;                                          // 0x0DA8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitSlowDuration;                                          // 0x0DAC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlowMultiplier;                                           // 0x0DB0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x0DB4(0x0004) MISSED OFFSET
	TArray<struct FName>                               SlowBones;                                                // 0x0DB8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class USoundCue*                                   HitSound;                                                 // 0x0DC8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   HitSoundVictim;                                           // 0x0DD0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   HitSoundShooter;                                          // 0x0DD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ZombieHitSound;                                           // 0x0DE0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             HitEffect;                                                // 0x0DE8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             HitEffectVictim;                                          // 0x0DF0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAnimMontage*>                        HitMontages;                                              // 0x0DF8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class USoundCue*                                   RogerSound;                                               // 0x0E08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WatchClass;                                               // 0x0E10(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ADSZThreashold;                                           // 0x0E18(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0E1C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          XRayMaterialTeam0;                                        // 0x0E20(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          XRayMaterialTeam1;                                        // 0x0E28(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundAttenuation*                           VoiceAttenuation;                                         // 0x0E30(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundClass*                                 VoiceSoundClass;                                          // 0x0E38(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundEffectSourcePresetChain*               VoiceEffectChain;                                         // 0x0E40(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 VoiceVolumeCurve;                                         // 0x0E48(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundSourceBus*                             RadioSourceBus;                                           // 0x0E50(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundClass*                                 RadioSoundClass;                                          // 0x0E58(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPickDisableOnDead;                                       // 0x0E60(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bXRayEnabled;                                             // 0x0E61(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceFirstPerson;                                        // 0x0E62(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x5];                                       // 0x0E63(0x0005) MISSED OFFSET
	TArray<class UClass*>                              DefaultAvatarSkins;                                       // 0x0E68(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      DefaultNameTagClass;                                      // 0x0E78(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APavlovPlayerState*                          RevivePlayerState;                                        // 0x0E80(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TazerClass;                                               // 0x0E88(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              GenerateHitGunClasses;                                    // 0x0E90(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      PlayerbHaptics;                                           // 0x0EA0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<ELimitedAmmoType, class UClass*>              LimitedAmmoComps;                                         // 0x0EA8(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UDamageEffectComponent*                      DamageEffectComp;                                         // 0x0EF8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnVoiceChanged;                                           // 0x0F00(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRadioToggle;                                            // 0x0F10(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAvatarSkinChanged;                                      // 0x0F20(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFlashed;                                                // 0x0F30(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOwnerImpactDamage;                                      // 0x0F40(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGrenadeCooked;                                          // 0x0F50(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class APavlov_PlayerProxy*                         WorkshopProxy;                                            // 0x0F60(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  AvatarSkinTable;                                          // 0x0F68(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAISlotManager*                              AISlotManager;                                            // 0x0F70(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              LastMagGrabTime;                                          // 0x0F78(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x0F7C(0x0004) MISSED OFFSET
	struct FTimerHandle                                TeleportHandle;                                           // 0x0F80(0x0008)
	float                                              LastVehicleExitTime;                                      // 0x0F88(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeSinceLastFootStep;                                    // 0x0F8C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FootStepTimer;                                            // 0x0F90(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SprintFootStepCount;                                      // 0x0F94(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bArmorRattlePlayed;                                       // 0x0F98(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x7];                                       // 0x0F99(0x0007) MISSED OFFSET
	class USurfaceFXAsset*                             FootStepSneak;                                            // 0x0FA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USurfaceFXAsset*                             FootStepWalk;                                             // 0x0FA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USurfaceFXAsset*                             FootStepRun;                                              // 0x0FB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ArmorRattleSound;                                         // 0x0FB8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DefaultFootStepSound;                                     // 0x0FC0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DefaultRunFootStepSound;                                  // 0x0FC8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ConcreteFootStepSound;                                    // 0x0FD0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ConcreteRunFootStepSound;                                 // 0x0FD8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   MetalFootStepSound;                                       // 0x0FE0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   MetalRunFootStepSound;                                    // 0x0FE8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   CarpetFootStepSound;                                      // 0x0FF0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   CarpetRunFootStepSound;                                   // 0x0FF8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   FabricFootStepSound;                                      // 0x1000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   FabricRunFootStepSound;                                   // 0x1008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   WoodFootStepSound;                                        // 0x1010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   WoodRunFootStepSound;                                     // 0x1018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   GlassFootStepSound;                                       // 0x1020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   GlassRunFootStepSound;                                    // 0x1028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   WaterFootStepSound;                                       // 0x1030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   WaterRunFootStepSound;                                    // 0x1038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DirtFootStepSound;                                        // 0x1040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DirtRunFootStepSound;                                     // 0x1048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  FootStepHaptic;                                           // 0x1050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FootStepInterval;                                         // 0x1058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinFootStepInterval;                                      // 0x105C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SneakSpeedMul;                                            // 0x1060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x1064(0x0004) MISSED OFFSET
	struct FTimestampTeleport                          LastTeleport;                                             // 0x1068(0x0020) (Net)
	unsigned char                                      UnknownData20[0x8];                                       // 0x1088(0x0008) MISSED OFFSET
	float                                              RagdollMinDamping;                                        // 0x1090(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RagdollLifeDuration;                                      // 0x1094(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RagdollLife;                                              // 0x1098(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x109C(0x0004) MISSED OFFSET
	TArray<struct FConstraintProfileProperties>        ConstraintDefaultProfiles;                                // 0x10A0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovPawn");
		return ptr;
	}


	void WearKevlar(bool bWithHelmet);
	void WearHelmet();
	void UpdateLocomotion();
	bool TryStackAmmoBoxes(class AAmmoBox* AmmoBox);
	void ToggleRadio(bool bEnabled);
	void TakePointDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class UDamageType* DamageType, class AActor* DamageCauser);
	class UAudioComponent* SpawnHitFeedbackSound(EHitFeedbackType Type);
	void SpawnHeadshotEffect(class APlayerState* Killer, const struct FVector& HitLocation, const struct FVector& HitDirection, struct FVector* WorldHitLocation, struct FVector* WorldHitDirection);
	void ShowLimitedAmmoCounter(bool bCounterVisible);
	void SetupWatch(class UWatch* WatchComp);
	void SetupLimitedAmmoComp(ELimitedAmmoType LimitedAmmoMode);
	void SetTeamId(int NewTeamId);
	void SetPlayerSkin(const struct FName& PlayerSkin);
	bool SetPainkillerDetails(class AActor* Painkillers, int NumOfPills, float HealAmount);
	bool SetNumOfSyringeRevives(class AActor* Syringe, int NumOfRevives);
	void SetModdingVoiceAttn();
	void SetAvatarSkin(class UClass* NewSkinClass, const struct FName& CustomMesh);
	void ServerUpdateFingerTracking(const struct FFingerTracking& Data);
	void ServerSetRadioChannel(unsigned char Channel);
	void ServerReportFallDamage(float Damage);
	void ServerGiveMagazine(bool bOffHand);
	void ServerGive(const struct FName& EquipmentName, const struct FName& Skin);
	void ServerDeployParachute();
	void SanityCheck();
	bool RevivePawn();
	void Revived_Client();
	void ReplenishPlayerAmmo(bool bSpawnKnife);
	int RemoveAmmo(const struct FName& AmmoId, int RemoveAmount);
	void ProxyTrigger(bool bDominantController);
	void ProxyGrab(bool bDominantController);
	void OverrideVoiceAttn(class USoundAttenuation* NewAttn);
	void OnWW2AvatarLoaded_Owner();
	void OnTeamIdChanged();
	void OnRevive(class AActor* OwnerActor);
	void OnRep_TeamId();
	void OnRep_RadioChannel();
	void OnRep_PlayerProxy();
	void OnRep_LastTeleport();
	void OnRep_HelmetArmour();
	void OnRep_AvatarSkinInfo();
	void OnRep_Armour();
	void OnPawnRevived();
	void OnKill(class AActor* OwnerActor);
	void OnImpactDamage(const struct FImpactDamage& ImpactDamage);
	void OnHitByTazer();
	void OnHitByGun(class UClass* GunClass, class AController* HitInstigator, const struct FVector& HitLocation);
	void OnDismember(const struct FWoundInfo& WoundInfo, const struct FPreBakedWound& PreBakedWound);
	void OnCameraClipChanged(bool bClipping);
	void NotifyProxySkinChanged();
	void MulticastTeleportTo(const struct FVector& DestLocation, const struct FRotator& DestRotation);
	void MulticastResetPawn();
	void MulticastOnZombieHit();
	void MulticastOnWearArmour();
	void MulticastOnRadialDeath(const struct FVector_NetQuantize& Origin);
	void MulticastOnMagazineGrabbed(bool bDominant);
	void MulticastOnImpactDamage(const struct FImpactDamage& ImpactDamage);
	void MulticastOnHitSlow();
	void MulticastOnHit(const struct FVector_NetQuantize& Location, const struct FVector_NetQuantizeNormal& Normal, class APlayerState* Shooter, bool bOnArmor);
	void MulticastOnHelmetHit(const struct FVector_NetQuantize& Location, const struct FVector_NetQuantizeNormal& Direction);
	void MulticastOnHelmetBlownoff();
	void MulticastOnHeadshot(class APlayerState* Killer, const struct FVector& HitLocation, const struct FVector& HitDirection, unsigned char WoundRate);
	void MulticastOnFallDamage();
	void MulticastAdjustAvatarScale(float PlayerHeight);
	void ModKitLeaveVehicle();
	bool ModkitIsInVehicle();
	void LoadEquipment(const struct FEquipmentDefinition& definition);
	void KillByDamageType(class UClass* DamageType, class AController* KilledByInstigator, class AActor* KilledBy);
	bool IsSprinting();
	bool IsPickupDisabled();
	bool IsLobbyLeaderModkit();
	bool IsDead();
	bool IsCarryingBomb();
	bool IsCameraClipping();
	bool IsArmExploiting(bool bRight);
	void HealEffect(float HealTime, class UMaterialInterface* HealMaterial);
	class AActor* HasItem(const struct FName& Item);
	void GorePawn(const struct FImpactDamage& Impact);
	class AVRItem* GiveItemInventory(const struct FGiveItemInventoryParams& Params);
	class AVRItem* GiveItem(const struct FGiveItemParams& Params);
	void GiveBomb(class ABomb* Bomb);
	void Give(const struct FName& EquipmentName, const struct FName& Skin, bool bWithAmmo, bool bByBuyMenu);
	TArray<struct FName> GetWeaponAttachments(class AActor* Weapon);
	struct FName GetWeaponAmmoType(class AActor* Weapon);
	class UWatch* GetWatch();
	class UVehicleOccupant* GetVehicleOccupant();
	class USkeletalMeshComponent* GetSkinSkeleton();
	class UHolsterComponent* GetSideWeaponHolster();
	int GetNumOfSyringeRevives(class AActor* Syringe);
	int GetNumOfPainkillerPills(class AActor* Painkillers);
	class UHolsterComponent* GetMainWeaponHolster();
	class ULimitedAmmoComponent* GetLimitedAmmoComponent();
	class UHolsterComponent* GetKnifeHolster();
	class AVRItem* GetItemOfClass(class UClass* ItemClass, bool bSkipHands, bool bSubClass);
	bool GetInventorySlotsVis();
	class AVRItem* GetHoldingItemByName(const struct FName& ItemName);
	float GetHealth();
	void GetHeadSpaceHitVectors(const struct FVector& HitLocation, const struct FVector& HitDirection, struct FVector* HeadSpaceHitLocation, struct FVector* HeadSpaceHitDirection);
	TArray<class UHolsterComponent*> GetGrenadeHolsters();
	bool GetEquipmentByName(const struct FName& EquipmentName, struct FEquipmentDefinition* definition);
	unsigned char GetCompatibleSlot(const struct FName& Item);
	class UHolsterComponent* GetBombHolster();
	class UAvatarSkin* GetAvatarSkin();
	struct FName GetAmmoTypeName(EAmmoType AmmoType);
	class UVRPocketComponent* GetAmmoPocket();
	int GetAmmoAmount(const struct FName& AmmoId);
	void FinishExitVehicleServer();
	void FinishExitVehicleClient();
	void ExitVehicle(const struct FVector& ExitLocation);
	void EnableVehicleCollisionRecenter();
	void EnableVehicleCollision();
	void EnableItemUse(bool bEnableUse);
	bool DropItem(const struct FName& Item, bool bDestroy, bool bFromHandsOnly);
	void DropHeldItems(bool bDominant, bool bBoth, bool bDestroyItem);
	void DropEquipment();
	void DropAllItems(bool bDestroyItems, bool bInventoryOnly);
	void DisablePickup(bool bDisabled);
	void ClientSanityCheck();
	void ClientOnExplosionDamage();
	bool CanRevive();
	bool CanListenToRadio();
	void BlowHelmetOff();
	void ApplyDelayedWound();
	void AddWatch();
	void AddHitSlow();
	void AddAmmo(const struct FName& AmmoId, int Amount);
	void ActivateCameraClip();
};


// Class Pavlov.PavlovPhysicsCollisionHandler
// 0x0008 (0x0048 - 0x0040)
class UPavlovPhysicsCollisionHandler : public UPhysicsCollisionHandler
{
public:
	float                                              MaxDistance;                                              // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovPhysicsCollisionHandler");
		return ptr;
	}

};


// Class Pavlov.PavlovPlayerCameraManager
// 0x0000 (0x2470 - 0x2470)
class APavlovPlayerCameraManager : public APlayerCameraManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovPlayerCameraManager");
		return ptr;
	}

};


// Class Pavlov.PavlovPlayerController
// 0x0188 (0x0810 - 0x0688)
class APavlovPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0688(0x005C) MISSED OFFSET
	float                                              AuthTimeout;                                              // 0x06E4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x06E8(0x0008) MISSED OFFSET
	class AVoiceRouter*                                VoiceRouter;                                              // 0x06F0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class APavlovPawn*                                 PassengerPawn;                                            // 0x06F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bBuyingEnabled;                                           // 0x0700(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipHeadsetScale;                                        // 0x0701(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBoughtSomething;                                      // 0x0702(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0703(0x0005) MISSED OFFSET
	struct FEquipmentSnapshot                          EquipmentSnapshot;                                        // 0x0708(0x0090) (BlueprintVisible, BlueprintReadOnly)
	bool                                               bHasEquipmentSnapshot;                                    // 0x0798(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoreEquipment;                                        // 0x0799(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x079A(0x0006) MISSED OFFSET
	class UClass*                                      LastWeaponBuy;                                            // 0x07A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LastSecondaryWeaponBuy;                                   // 0x07A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class APavlovPlayerState*                          TeamKiller;                                               // 0x07B0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MessageClass;                                             // 0x07B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  KillPingSound;                                            // 0x07C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      RussianAvatarSkinClass;                                   // 0x07C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnBuyingChanged;                                          // 0x07D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTeamKilled;                                             // 0x07E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHeadsetScaleChanged;                                    // 0x07F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0800(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovPlayerController");
		return ptr;
	}


	void UnBoardVehicle();
	void TryRestoreEquipmentBySnapshot();
	void TestTeamKill();
	void TestKillfeed();
	void TakeEquipmentSnapshot();
	void SwitchToSpectator();
	void SwitchTeam();
	void SwapControllers();
	void Suicide();
	void SNDPreGameSpawnTimer();
	void SetServerTickRate(int Rate);
	void SetHeadMountedDisplayScale(float Scale);
	void SetBuyingEnabled(float ForDuration, float BuyZoneMaxDistance);
	void SetBuyingDisabled();
	void SetBlackScreen(bool bEnabled);
	void ServerVote(class AVote* Vote, bool bYes);
	void ServerUnBoardVehicle();
	void ServerTestTeamKill();
	void ServerSwitchTeam();
	void ServerSuicide();
	void ServerSetServerTickRate(int Rate);
	void ServerReportZombieBulletHit(const struct FClientZombieBulletHit& Hit);
	void ServerReportVirtualStockChange(bool bEnabled);
	void ServerReportTrigger(class AGun* Gun, bool bTrigger, TArray<unsigned char> GunState);
	void ServerReportShatter(class ADestructible* Destructible, const struct FVector_NetQuantizeNormal& Normal, const struct FVector_NetQuantize& Location);
	void ServerReportKnifeDamage(const struct FClientKnifeDamage& Info);
	void ServerReportHandenessChange(bool bRightHanded);
	void ServerReportCorpseHitByClass(class APavlovPawn* PawnCorpse, class UClass* GunClass);
	void ServerReportCorpseHit(class APavlovPawn* PawnCorpse, const struct FImpactDamage& ImpactDamage);
	void ServerReportBulletHit(const struct FClientBulletHit& Hit);
	void ServerProcessZombieDamage();
	void ServerKnockZombie(class AZAICharacter* Zombie, EZKnockBackDirection Direction, unsigned char Flags);
	void ServerInstigateVote(class UClass* VoteClass, const struct FString& Param1, int Param2);
	void ServerEnterVehicle(class APavlovVehicle* Vehicle, int Seat);
	void ServerEnterDigit(class ABomb* Bomb, int Index);
	void ServerBuy(const struct FName& EquipmentName);
	void ServerBoardVehicle(class APavlovWheeledVehicle* Vehicle, int Seat);
	void ServerAuthenticate(const struct FString& HexTicket);
	void ServerAbstainToVote();
	void ResetPlayerHeight();
	void ResetPlayerEffects();
	void PunishTeamKiller();
	void OnZombieClientKnock(class AZAICharacter* Zombie, EZKnockBackDirection Direction, unsigned char Flags);
	void OnMenuUniverseChanged(bool bEnabled);
	void OnAuthTimedout();
	void OnAuthTicketReceived(bool bSucceed, const struct FString& HexAuthTicket);
	void MulticastDebugPoint(const struct FVector& Location, const struct FString& Text);
	void LeaveVehicle();
	void KilledInVehicle(class APavlovVehicle* Vehicle);
	bool IsInVehicle();
	float GetHeadMountedDisplayScale();
	void ForgiveTeamKiller();
	void ExecuteRconCommand(const struct FRconCommand& RconCommand);
	void EnterVehicle(class APavlovVehicle* Vehicle, int Seat);
	void ClientSetBuying(bool bEnabled);
	void ClientServerConnect(const struct FServerConnectParams& Params);
	void ClientReportMatchEnd();
	void ClientPlayKillPing();
	void ClientOnTeamKilled(class APavlovPlayerState* CulpritTeamKiller);
	void ClientInstigateFlashVision(float Seconds, float ViewAlpha);
	void ClientInstigateFlash(float Seconds, float ViewAlpha);
	void ClientDisplayMessage(const struct FString& Message);
	void ClientConnectTo(const struct FString& ConnectURL);
	void ClientAuthenticate();
	void Buy(const struct FName& EquipmentName);
	void BoardVehicle(class APavlovWheeledVehicle* Vehicle, int Seat);
	void ApplySkippedHeadMountedDisplayScale();
};


// Class Pavlov.PavlovPlayerState
// 0x0118 (0x0508 - 0x03F0)
class APavlovPlayerState : public APlayerState
{
public:
	int                                                TeamId;                                                   // 0x03F0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                Kills;                                                    // 0x03F4(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                Deaths;                                                   // 0x03F8(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                Assists;                                                  // 0x03FC(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                Cash;                                                     // 0x0400(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                Exp;                                                      // 0x0404(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                Progress;                                                 // 0x0408(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x040C(0x0004) MISSED OFFSET
	struct FString                                     PlatformId;                                               // 0x0410(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	bool                                               bDead;                                                    // 0x0420(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bDev;                                                     // 0x0421(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPlayerFlair                                       Flair;                                                    // 0x0422(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0423(0x0001) MISSED OFFSET
	int                                                RespawnCountdown;                                         // 0x0424(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              PlayerHeight;                                             // 0x0428(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bRightHanded;                                             // 0x042C(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bVirtualStock;                                            // 0x042D(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bCanVote;                                                 // 0x042E(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bSpeaking;                                                // 0x042F(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, unsigned char>                  Purchases;                                                // 0x0430(0x0050) (Net, ZeroConstructor)
	bool                                               bAuthenticated;                                           // 0x0480(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0481(0x0003) MISSED OFFSET
	int                                                LifeTeamKillCount;                                        // 0x0484(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ExtraRespawnCountdown;                                    // 0x0488(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DeadTime;                                                 // 0x048C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, int>                            EquippedSkins;                                            // 0x0490(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bSpawnGhost;                                              // 0x04E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x04E1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCashUpdated;                                            // 0x04E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bHasPlayerProxy;                                          // 0x04F8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x04F9(0x0007) MISSED OFFSET
	struct FName                                       SkinOverride;                                             // 0x0500(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovPlayerState");
		return ptr;
	}


	bool SendJoinDataToClient(class UJsonUtilsObj* JsonObj);
	void Reset();
	void ReceiveJoinJsonData(TArray<unsigned char> JoinData);
	void OnRep_HasPlayerProxy();
	void OnRep_Flair();
	void OnRep_Cash();
	void LoadEquippedSkins();
	bool IsAbleToBuy(const struct FName& EquipmentName);
	bool HasSkinOverride();
	bool HasSkinEquipped(const struct FName& ItemName);
	EVRDevice GetVRDevice();
	int GetTeamId();
	struct FString GetStringId();
	int GetSkinId(const struct FName& ItemName);
	void DisableFallSound();
	void AddEquippedSkinByFamily(const struct FName& ItemName, ESkinFamily SkinFamily);
	void AddEquippedSkin(const struct FName& ItemName, int SkinId);
};


// Class Pavlov.PavlovSimpleVehicleMovement
// 0x0040 (0x0310 - 0x02D0)
class UPavlovSimpleVehicleMovement : public USimpleWheeledVehicleMovementComponent
{
public:
	TArray<int>                                        RightWheels;                                              // 0x02D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        LeftWheels;                                               // 0x02E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       TurnTorqueBone;                                           // 0x02F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnTorque;                                               // 0x02F8(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FReplicatedWheelState                       RightWheelsInput;                                         // 0x02FC(0x0008)
	struct FReplicatedWheelState                       LeftWheelsInput;                                          // 0x0304(0x0008)
	unsigned char                                      UnknownData00[0x4];                                       // 0x030C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovSimpleVehicleMovement");
		return ptr;
	}


	void UpdateWheels(bool bRight, const struct FReplicatedWheelState& WheelUpdate);
	void SetWheelInfo(bool bRight, const struct FReplicatedWheelState& WheelsState);
	void SetWheelDriveTorque(bool bRight, float DriveTorque);
	void SetWheelDriveAndBrakeTorque(bool bRight, float DriveTorque, float BrakeTorque);
	void SetWheelBrakingTorque(bool bRight, float BrakeTorque);
	void SetTurnTorque(float TurningTorque);
	void ServerUpdateWheels(const struct FReplicatedWheelState& LeftWheelInput, const struct FReplicatedWheelState& RightWheelInput, float TurnTorque);
	void ServerEBrake();
};


// Class Pavlov.PavlovSpectatorPawn
// 0x0020 (0x03D0 - 0x03B0)
class APavlovSpectatorPawn : public ASpectatorPawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03B0(0x0010) MISSED OFFSET
	bool                                               bIsScrubing;                                              // 0x03C0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03C1(0x0007) MISSED OFFSET
	class UPlayerCycler*                               Cycler;                                                   // 0x03C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovSpectatorPawn");
		return ptr;
	}


	void ScrubToLive();
	void ScrubRelative(float Seconds);
	void ScrubNormalized(float NormalizedTime);
	void Scrub(float Time);
	void OnScrubChanged(bool bScrubing);
	void OnGotoTime(bool bWasSuccessful);
	void OnDemoPlaybackError(TEnumAsByte<EDemoPlayFailure> FailureType, const struct FString& ErrorString);
	float GetNormalizedScrubTime();
};


// Class Pavlov.PavlovStatics
// 0x0000 (0x0028 - 0x0028)
class UPavlovStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovStatics");
		return ptr;
	}


	void STATIC_SwapHands(class UObject* WorldContextObject);
	bool STATIC_SupportsGripForce();
	void STATIC_SpawnLocalSound2DByPawn(class APawn* Pawn, class USoundBase* Sound);
	void STATIC_SpawnLocalSound2D(class APlayerController* Controller, class USoundBase* Sound);
	void STATIC_SpawnHitFeedbackSound(class UObject* WorldContextObject, EHitFeedbackType Type);
	void STATIC_SetPlayerEffectsDisabled(class UObject* WorldContextObject, bool bDisabled);
	void STATIC_SetPavlovSplash(bool bVisible, class UTexture* SplashTexture);
	void STATIC_SetActorNetDormancy(class AActor* Actor, TEnumAsByte<ENetDormancy> Dormancy);
	void STATIC_ResetVoiceCaptureDevice(class UObject* WorldContextObject);
	void STATIC_PropRadialDamage(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);
	void STATIC_OpenPavlovMapById(class UObject* WorldContextObject, const struct FString& ID, const struct FString& Options, bool bNoDelay);
	bool STATIC_IsXmas(class UObject* WorldContextObject);
	bool STATIC_IsReplay(class UObject* WorldContextObject);
	bool STATIC_IsQuestServer();
	bool STATIC_IsQuest();
	bool STATIC_IsPlayingOnlineGame(class UObject* WorldContextObject);
	bool STATIC_IsOculusTouch();
	bool STATIC_IsInEntry(class UObject* WorldContextObject);
	bool STATIC_IsHalloween(class UObject* WorldContextObject);
	bool STATIC_IsEditor();
	bool STATIC_IsCompetitiveMode(class UObject* WorldContextObject);
	bool STATIC_IsBombDropped(class UObject* WorldContextObject);
	bool STATIC_IsAprilFools(class UObject* WorldContextObject);
	bool STATIC_HasGunOptimizations();
	void STATIC_GoToStartUpMap(class UObject* WorldContextObject);
	void STATIC_GoToEntry(class UObject* WorldContextObject);
	class UWorkshop* STATIC_GetWorkshop(class UObject* WorldContextObject);
	float STATIC_GetVoiceLevelPeak(class UObject* WorldContextObject);
	struct FString STATIC_GetUserId(class UObject* WorldContextObject);
	class UUIManager* STATIC_GetUIManager(class UObject* WorldContextObject);
	class UTutorial* STATIC_GetTutorial(class UObject* WorldContextObject);
	class ASpectatorTVCamera* STATIC_GetSpectatorTVCamera(class UObject* WorldContextObject);
	int STATIC_GetShackQualityLevel();
	EShackDeviceType STATIC_GetShackDeviceType();
	struct FTransform STATIC_GetRefPoseBoneTransform(class USkeletalMeshComponent* SkelMesh, const struct FName& BoneName);
	struct FString STATIC_GetPlayerUniqueIdAsString(class APlayerState* PlayerState);
	void STATIC_GetPlayerEquipment(class APlayerState* PlayerState, struct FName* Primary, TArray<struct FName>* Secondary);
	class AGlobalPlayerEffects* STATIC_GetPlayerEffects(class UObject* WorldContextObject);
	class APavlovPawn* STATIC_GetPawnByPlayerState(class UObject* WorldContextObject, class APlayerState* PlayerState);
	struct FString STATIC_GetPavlovVersionString(class UObject* WorldContextObject);
	class UPavlovLobby* STATIC_GetPavlovLobby(class UObject* WorldContextObject);
	class UPavlovGameUserSettings* STATIC_GetPavlovGameUserSettings();
	class UPavlovGameInstance* STATIC_GetPavlovGameInstance(class UObject* WorldContextObject);
	TArray<class UMaterialInterface*> STATIC_GetMeshMaterials(class UStaticMesh* StaticMesh);
	class AMenuUniverse* STATIC_GetMenuUniverseInstance(class UObject* WorldContextObject);
	class UMatchmaking* STATIC_GetMatchmaking(class UObject* WorldContextObject);
	class APavlovPlayerState* STATIC_GetLocalPlayerState(class UObject* WorldContextObject);
	struct FTransform STATIC_GetLocalPlayerCameraTransform(class UObject* WorldContextObject);
	EHolidays STATIC_GetHoliday(class UObject* WorldContextObject);
	TArray<struct FString> STATIC_GetFriendsUserId(class UObject* WorldContextObject);
	class UObject* STATIC_GetDefaultObject(class UClass* ObjectClass);
	class AController* STATIC_GetControllerByPlayerState(class APlayerState* PlayerState);
	struct FTransform STATIC_GetBoneTransform(class USkeletalMeshComponent* SkelMesh, const struct FName& BoneName);
	class ABomb* STATIC_GetBombInstance(class UObject* WorldContextObject);
	void STATIC_ForceNoSoundOcclusion(class UAudioComponent* AudioComp);
	void STATIC_FlushActorNetDormancy(class AActor* Actor);
	class ABombPlantSpot* STATIC_FindClosestBombPlantSpot(class UObject* WorldContextObject, const struct FVector& RefLocation);
	bool STATIC_ArePawnsHostile(class UObject* WorldContextObject, class APawn* A, class APawn* B);
};


// Class Pavlov.PavlovStickComponent
// 0x0000 (0x0460 - 0x0460)
class UPavlovStickComponent : public UVRStickComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovStickComponent");
		return ptr;
	}

};


// Class Pavlov.PavlovVehicle
// 0x02A8 (0x0640 - 0x0398)
class APavlovVehicle : public AWheeledVehicle
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0398(0x0008) MISSED OFFSET
	int                                                MaxSeats;                                                 // 0x03A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET
	TArray<class UClass*>                              SeatOccupantClasses;                                      // 0x03A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TMap<int, class UClass*>                           VehicleInteriorClasses;                                   // 0x03B8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              VehicleMaxVelocity;                                       // 0x0408(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CriticalTime;                                             // 0x040C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleDespawnTime;                                       // 0x0410(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0414(0x0004) MISSED OFFSET
	struct FName                                       ExplosionDamageSocket;                                    // 0x0418(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 DestroyedVehicleMesh;                                     // 0x0420(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    DestroyedVehicleRelativeRot;                              // 0x0428(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DestroyImpulse;                                           // 0x0434(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USurfaceFXAsset*                             SurfaceFX;                                                // 0x0440(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEngineOn;                                                // 0x0448(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsVehicleOccupied;                                       // 0x0449(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x044A(0x0006) MISSED OFFSET
	TMap<struct FName, float>                          DamageHitMap;                                             // 0x0450(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      VehicleExplosionDamageClass;                              // 0x04A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoEject;                                               // 0x04A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x04A9(0x0003) MISSED OFFSET
	float                                              MaxHealth;                                                // 0x04AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RepairHealthAmount;                                       // 0x04B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EVehicleDamageState                                VehicleDamageState;                                       // 0x04B4(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x04B5(0x0003) MISSED OFFSET
	float                                              EngineOffDelay;                                           // 0x04B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EngineFadeTime;                                           // 0x04BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   EngineStartSound;                                         // 0x04C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   EngineStopSound;                                          // 0x04C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   EnterVehicleSound;                                        // 0x04D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ExitVehicleSound;                                         // 0x04D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   VehicleCriticalSound;                                     // 0x04E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   VehicleCriticalSoundLQ;                                   // 0x04E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   VehicleDestroyedSound;                                    // 0x04F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   VehicleDestroyedSoundLQ;                                  // 0x04F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   RepairSound;                                              // 0x0500(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ZombieHitSound;                                           // 0x0508(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   CriticalDamageAlarm;                                      // 0x0510(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             CriticalSoundComp;                                        // 0x0518(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       DestroyFXSocket;                                          // 0x0520(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             VehicleCriticalFX;                                        // 0x0528(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             VehicleCriticalFXLQ;                                      // 0x0530(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             VehicleDestroyedFX;                                       // 0x0538(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             VehicleDestroyedFXLQ;                                     // 0x0540(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    CriticalFXComp;                                           // 0x0548(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bEnableDebug;                                             // 0x0550(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0551(0x0003) MISSED OFFSET
	int                                                ExitPoints;                                               // 0x0554(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExitRadius;                                               // 0x0558(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PawnRadius;                                               // 0x055C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExitAngle;                                                // 0x0560(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExitZHeight;                                              // 0x0564(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnVehicleDamageStateChanged;                              // 0x0568(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEnterExitVehicle;                                       // 0x0578(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class UVehicleOccupant*>                    Occupants;                                                // 0x0588(0x0010) (ExportObject, Net, ZeroConstructor)
	int                                                TeamId;                                                   // 0x0598(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x54];                                      // 0x059C(0x0054) MISSED OFFSET
	float                                              Health;                                                   // 0x05F0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x05F4(0x0004) MISSED OFFSET
	struct FTimerHandle                                EngineOff_Handle;                                         // 0x05F8(0x0008)
	struct FTimerHandle                                CriticalDamage_Handle;                                    // 0x0600(0x0008)
	struct FTimerHandle                                OutOfBounds_Handle;                                       // 0x0608(0x0008)
	struct FTimerHandle                                Despawn_Handle;                                           // 0x0610(0x0008)
	struct FTimerHandle                                FlipEject_Handle;                                         // 0x0618(0x0008)
	float                                              LastFlipAlpha;                                            // 0x0620(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0624(0x0004) MISSED OFFSET
	class AController*                                 KilledByInstigator;                                       // 0x0628(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      KilledByActor;                                            // 0x0630(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bOutOfBounds;                                             // 0x0638(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasBeenOccupied;                                         // 0x0639(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x6];                                       // 0x063A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovVehicle");
		return ptr;
	}


	void ZombieHit_Multi(const struct FVector_NetQuantize& HitLocation);
	void VehicleSoundSetup(bool bEntered);
	void VehicleKilled_Multi();
	void TryFlipVehicle();
	void TakeRadialDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
	void TakePointDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class UDamageType* DamageType, class AActor* DamageCauser);
	void StartVehicleDespawnTimer();
	void SetVehicleOccupied(bool bOccupied);
	void SetEngineState(bool bStart);
	void SeatVehicleTeamID(int NewTeamId);
	bool RepairVehicle();
	void PlayRepairSound_Multi(bool bFullyRepaired);
	void PlayerEnterExit_Multi(bool bEntered, int Seat);
	void OutOfBounds(bool bOut);
	void OnVehicleCritical(bool bCritical);
	void OnRep_VehicleDamageState(EVehicleDamageState OldVehicleDamageState);
	void OnRep_Occupied();
	void OnRep_EngineOn();
	void OnEngineChanged(bool bOn, bool bDisabled);
	bool IsVehicleEmpty();
	bool IsVehicleDisabled();
	bool IsSeatEmpty(int Seat);
	bool IsLocalPlayerInVehicle();
	bool IsLocalPlayerInSeat(int Seat);
	bool IsDriver(class UVehicleOccupant* Occupant);
	bool HasDriver();
	class UClass* GetVehicleInterior(int Seat);
	TArray<class UAudioComponent*> GetVehicleEngineAudioComponents();
	TArray<class UAudioComponent*> GetVehicleAudioComponents();
	int GetTeamId();
	bool GetSeatExitLocation(bool bRight, struct FVector* ExitLocation);
	class UVehicleSeat* GetSeat(int Seat);
	int GetOccupantSeat(class UVehicleOccupant* Occupant);
	TArray<class UVehicleOccupant*> GetOccupants();
	class UVehicleOccupant* GetOccupant(int Seat);
	struct FVector GetMovmentVelocity();
	struct FVector GetExitLocation(bool bRight);
	int GetDriverSeat();
	class UVehicleOccupant* GetDriver();
	int FindEmptySeat();
	void EnteredKillVolume();
	bool DoesSeatExitRight(int Seat);
	void DelayEngineOffSound();
	void ClearBumpers_Multi(float Direction);
	void ClearBumpers(float Direction);
	bool CanEnterVehicle(class APavlovPawn* PavlovPawn, int Seat);
};


// Class Pavlov.PavlovVehicle_4w
// 0x0000 (0x0640 - 0x0640)
class APavlovVehicle_4w : public APavlovVehicle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovVehicle_4w");
		return ptr;
	}

};


// Class Pavlov.PavlovVehicle_Simple
// 0x0000 (0x0640 - 0x0640)
class APavlovVehicle_Simple : public APavlovVehicle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovVehicle_Simple");
		return ptr;
	}

};


// Class Pavlov.PavlovVehicle_Tank
// 0x0240 (0x0880 - 0x0640)
class APavlovVehicle_Tank : public APavlovVehicle
{
public:
	float                                              RedrawTime;                                               // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TankTrackSpeed;                                           // 0x0644(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TankTrackOffset;                                          // 0x0648(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LeftTrackMaterialIndex;                                   // 0x064C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RightTrackMaterialIndex;                                  // 0x0650(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0654(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    RightTrackInstance;                                       // 0x0658(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    LeftTrackInstance;                                        // 0x0660(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MinMaxTurretPitch;                                        // 0x0668(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   TurretYawSpeedMinMax;                                     // 0x0670(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   TurretPitchSpeedMinMax;                                   // 0x0678(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurretYawSpeed;                                           // 0x0680(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TurretPitchSpeed;                                         // 0x0684(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TurretBulletClass;                                        // 0x0688(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TurretDamageClass;                                        // 0x0690(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TurretSocket;                                             // 0x0698(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurretCooldown;                                           // 0x06A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastTurretFireTime;                                       // 0x06A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                TurretFireMontage;                                        // 0x06A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GunnerBulletClass;                                        // 0x06B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GunnerDamageClass;                                        // 0x06B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GunnerShellClass;                                         // 0x06C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GunnerSocket;                                             // 0x06C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GunnerShellSocket;                                        // 0x06D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GunnerFireRate;                                           // 0x06D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   GunnerConeAngle;                                          // 0x06DC(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GunnerCooldown;                                           // 0x06E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GunnerHeatBuildup;                                        // 0x06E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GunnerHeat;                                               // 0x06EC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bGunnerOverheating;                                       // 0x06F0(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x06F1(0x0007) MISSED OFFSET
	struct FTimerHandle                                GunnerFire_Handle;                                        // 0x06F8(0x0008) (BlueprintVisible, BlueprintReadOnly)
	struct FTimerHandle                                GunneCooldown_Handle;                                     // 0x0700(0x0008) (BlueprintVisible, BlueprintReadOnly)
	float                                              EngineRPMs;                                               // 0x0708(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x070C(0x0004) MISSED OFFSET
	class USoundCue*                                   TurretFireSound;                                          // 0x0710(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   TurretFire2DTailSound;                                    // 0x0718(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   GunnerFireSound;                                          // 0x0720(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   GunnerFire2DTailSound;                                    // 0x0728(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   GunnerOverheatSound;                                      // 0x0730(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   TurretFireSoundLQ;                                        // 0x0738(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   TurretFire2DTailSoundLQ;                                  // 0x0740(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   GunnerFireSoundLQ;                                        // 0x0748(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   GunnerFire2DTailSoundLQ;                                  // 0x0750(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   GunnerOverheatSoundLQ;                                    // 0x0758(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EngineSoundRPMScale;                                      // 0x0760(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RPMSoundAccelSpeed;                                       // 0x0764(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RPMSoundDecelSpeed;                                       // 0x0768(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x076C(0x0004) MISSED OFFSET
	struct FName                                       TurretTurnSocket;                                         // 0x0770(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   TurretTurnLoopSound;                                      // 0x0778(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   TurretTurnEndSound;                                       // 0x0780(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             TurretTurnAudioComp;                                      // 0x0788(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             OverheatSoundComponent;                                   // 0x0790(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             TurretFireFX;                                             // 0x0798(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             TurretFireFXLQ;                                           // 0x07A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GunnerMuzzleFlashDuration;                                // 0x07A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x07AC(0x0004) MISSED OFFSET
	class UParticleSystem*                             GunnerFireFX;                                             // 0x07B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             GunnerFireFXLQ;                                           // 0x07B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    GunnerFireFXComponent;                                    // 0x07C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                GunnerFireFX_Handle;                                      // 0x07C8(0x0008)
	struct FScriptMulticastDelegate                    OnGunnerOverheat;                                         // 0x07D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTurretFired;                                            // 0x07E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGunnerFired;                                            // 0x07F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FVector2D                                   TurretRotation;                                           // 0x0800(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              TurretAudioTurnSpeed;                                     // 0x0808(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TurretInput;                                              // 0x080C(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    MachineGunRotation;                                       // 0x0814(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bWasTurretMoving;                                         // 0x0820(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0821(0x0003) MISSED OFFSET
	float                                              TimeSinceRedraw;                                          // 0x0824(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0828(0x0008) MISSED OFFSET
	struct FTransform                                  LastTransform;                                            // 0x0830(0x0030) (IsPlainOldData)
	float                                              LeftTrackOffset;                                          // 0x0860(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RightTrackOffset;                                         // 0x0864(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastSoundRPM;                                             // 0x0868(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EngineSoundMaxRPMs;                                       // 0x086C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TurretYaw;                                                // 0x0870(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bTurretEmpty;                                             // 0x0874(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0xB];                                       // 0x0875(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovVehicle_Tank");
		return ptr;
	}


	void UpdateSeatWidget();
	void TurretMoving_Multi(bool bIsTurretMoving);
	void TurretFired_Multi();
	void StopGunnerFire();
	bool StartGunnerFire();
	void SetTurretTurnRate(float FOVAlpha);
	void SetTurretInput(const struct FVector2D& AddRotation);
	void SetMachineGunRotation(const struct FRotator& MGRot);
	void OnRep_Overheating();
	bool IsTurretPitchLimitReached(float TurretPitchInput);
	bool IsTurretMoving();
	bool IsGunnerOverheated();
	void GunnerFired_Multi();
	void GunnerFireBullet();
	void GunnerCooldownTick();
	struct FVector2D GetTurretRotation();
	bool FireTankTurret();
	void DeactivateGunnerFireFX();
	bool CanFireTurret();
	void AddHeatBuildup();
};


// Class Pavlov.PavlovVehicleAnimInstance
// 0x0000 (0x0900 - 0x0900)
class UPavlovVehicleAnimInstance : public UVehicleAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovVehicleAnimInstance");
		return ptr;
	}

};


// Class Pavlov.PavlovVehicleMovementComponent
// 0x0000 (0x0428 - 0x0428)
class UPavlovVehicleMovementComponent : public UWheeledVehicleMovementComponent4W
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovVehicleMovementComponent");
		return ptr;
	}

};


// Class Pavlov.PavlovVOIPTalker
// 0x0010 (0x0138 - 0x0128)
class UPavlovVOIPTalker : public UVOIPTalker
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET
	class USoundSourceBus*                             RadioSourceBus;                                           // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovVOIPTalker");
		return ptr;
	}

};


// Class Pavlov.PavlovWheeledVehicle
// 0x0058 (0x03F0 - 0x0398)
class APavlovWheeledVehicle : public AWheeledVehicle
{
public:
	class UAudioComponent*                             EngineAudio;                                              // 0x0398(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             RollingAudio;                                             // 0x03A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x03A8(0x0018) MISSED OFFSET
	class USoundCue*                                   EngineSound;                                              // 0x03C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   EngineStartSound;                                         // 0x03C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   EngineOffSound;                                           // 0x03D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   EngineReverseSound;                                       // 0x03D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       EngineSocket;                                             // 0x03E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   RollingSound;                                             // 0x03E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovWheeledVehicle");
		return ptr;
	}


	void SetSteeringInput(float Input);
};


// Class Pavlov.PavlovZSpawnCMP
// 0x0000 (0x0178 - 0x0178)
class UPavlovZSpawnCMP : public UZSpawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovZSpawnCMP");
		return ptr;
	}

};


// Class Pavlov.PivotComponent
// 0x0010 (0x0250 - 0x0240)
class UPivotComponent : public USceneComponent
{
public:
	class AVRPawn*                                     VRPawn;                                                   // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0248(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PivotComponent");
		return ptr;
	}

};


// Class Pavlov.PlayerCycler
// 0x0020 (0x0048 - 0x0028)
class UPlayerCycler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PlayerCycler");
		return ptr;
	}


	void GetNext(class APavlovPlayerState** PlayerState, class APavlovPawn** Pawn);
};


// Class Pavlov.PlayerSpawnPoint
// 0x0020 (0x0378 - 0x0358)
class APlayerSpawnPoint : public APlayerStart
{
public:
	int                                                TeamId;                                                   // 0x0358(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDynamic;                                                 // 0x035C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyTeam;                                                // 0x035D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoUnStack;                                             // 0x035E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x035F(0x0001) MISSED OFFSET
	struct FVector                                     CountHalfExtent;                                          // 0x0360(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SpawnCount;                                               // 0x036C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                VisibilityCountTeam0;                                     // 0x0370(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                VisibilityCountTeam1;                                     // 0x0374(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PlayerSpawnPoint");
		return ptr;
	}

};


// Class Pavlov.PlayOfflineView
// 0x0008 (0x0490 - 0x0488)
class APlayOfflineView : public AContentView
{
public:
	class UStaticModel*                                StaticModel;                                              // 0x0488(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PlayOfflineView");
		return ptr;
	}


	void OnMapBrowserCommit(const struct FModalCommitParams& Params);
};


// Class Pavlov.Pliers
// 0x0040 (0x0510 - 0x04D0)
class APliers : public AVRItem
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	EPliersState                                       State;                                                    // 0x04D8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04D9(0x0003) MISSED OFFSET
	float                                              CutDelay;                                                 // 0x04DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReleaseDelay;                                             // 0x04E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET
	class USoundCue*                                   CutSound;                                                 // 0x04E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   CuttingSound;                                             // 0x04F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ReleaseSound;                                             // 0x04F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CutLocationSocket;                                        // 0x0500(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  CutHaptics;                                               // 0x0508(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Pliers");
		return ptr;
	}


	void ServerReportCut(class ABomb* Bomb, int WireIndex);
	void MulticastOnCut();
};


// Class Pavlov.PostMatchSummary
// 0x0000 (0x0350 - 0x0350)
class APostMatchSummary : public AStereoOverlay
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PostMatchSummary");
		return ptr;
	}

};


// Class Pavlov.PumpActionGunState
// 0x0000 (0x01A0 - 0x01A0)
class UPumpActionGunState : public UActionGunState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PumpActionGunState");
		return ptr;
	}

};


// Class Pavlov.PushBomb
// 0x0010 (0x04E0 - 0x04D0)
class APushBomb : public AVRItem
{
public:
	EBombState                                         BombState;                                                // 0x04D0(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04D1(0x0007) MISSED OFFSET
	struct FTimerHandle                                BombCheckTimer;                                           // 0x04D8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PushBomb");
		return ptr;
	}


	void SetBombState(EBombState State);
	void OnRep_BombState();
	void OnBombStateChanged(EBombState State);
	void CheckSiteOverlap();
};


// Class Pavlov.PushBombObjective
// 0x00B0 (0x0580 - 0x04D0)
class APushBombObjective : public AVRItem
{
public:
	struct FScriptMulticastDelegate                    OnPushBombObjectiveStateChanged;                          // 0x04D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UStaticMeshComponent*                        MeshComponent;                                            // 0x04E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BombOverlap;                                              // 0x04E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	int                                                ObjectiveId;                                              // 0x04F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	EObjectiveMarker                                   ObjectiveMarker;                                          // 0x04F4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04F5(0x0003) MISSED OFFSET
	float                                              BombExplosionTime;                                        // 0x04F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BombTimerAlpha;                                           // 0x04FC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x0500(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDamage;                                                // 0x0504(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageFalloff;                                            // 0x0508(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageOuterRadius;                                        // 0x050C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KillRadius;                                               // 0x0510(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0514(0x0004) MISSED OFFSET
	class USoundBase*                                  ObjectiveArmed;                                           // 0x0518(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ExplosionFX;                                              // 0x0520(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ExplosionFXLQ;                                            // 0x0528(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ExplosionSound;                                           // 0x0530(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DestroyedFX;                                              // 0x0538(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EPushObjectiveState                                ObjectiveState;                                           // 0x0540(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0541(0x0007) MISSED OFFSET
	class APavlov_PushBombObjective*                   PushObjectiveProxy;                                       // 0x0548(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class APushBomb*                                   AttachedPushBomb;                                         // 0x0550(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                BombTimer;                                                // 0x0558(0x0008)
	class UParticleSystemComponent*                    DestroyedFXComp;                                          // 0x0560(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ObjectiveArmedAudioComp;                                  // 0x0568(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AController*                                 PlantInstigator;                                          // 0x0570(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              PlantedTime;                                              // 0x0578(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x057C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PushBombObjective");
		return ptr;
	}


	void TickBombTimer();
	void SetPushObjectiveProxy(class APavlov_PushBombObjective* PushBombProxy);
	void SetObjectiveState(EPushObjectiveState PushObjectiveState);
	void SetObjectiveMarker(EObjectiveMarker Marker);
	void ResetObjective();
	void RemoveBomb();
	void PushObjectiveStateChanged(EPushObjectiveState CurrentState);
	bool PlantPushBomb(class APushBomb* PushBomb);
	void OnTeamsSwitched();
	void OnRep_PushObjectiveProxy();
	void OnRep_ObjectiveState();
	void OnRep_ObjectiveMarker();
	void OnRep_BombTimerAlpha();
	void OnPushBombObjectiveStateChanged__DelegateSignature(class APushBombObjective* PushBombObjective, EPushObjectiveState ObjectiveState);
	void OnObjectiveMarkerChanged(EObjectiveMarker Marker);
	void OnBombTimerAlphaChanged();
	void OnBombOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnBombExplosion_Server();
	bool IsLowQuality();
	EPushObjectiveState GetObjectiveState();
	class UPrimitiveComponent* GetBombMarker();
	int GetActiveObjectiveID();
	void CleanupDestroyFX();
	void BombExplosion_Multi();
	void BombExplosion();
	void BombDefused();
	void AttachPushBomb_Multi(class APushBomb* PushBomb);
};


// Class Pavlov.PushLoadout
// 0x0160 (0x0488 - 0x0328)
class APushLoadout : public AActor
{
public:
	TArray<struct FPushLoadoutEquipment>               DefaultLoadouts;                                          // 0x0328(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FPushLoadoutEquipment>               Loadouts;                                                 // 0x0338(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	class UClass*                                      KnifeClass;                                               // 0x0348(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ModernKnifeClass;                                         // 0x0350(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MedKitClass;                                              // 0x0358(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ModernMedkitClass;                                        // 0x0360(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AmmoCrateClass;                                           // 0x0368(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      RepairToolClass;                                          // 0x0370(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MedsClass;                                                // 0x0378(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ModernMedsClass;                                          // 0x0380(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SyringeClass;                                             // 0x0388(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ModernSyringeClass;                                       // 0x0390(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AntiTankMineClass;                                        // 0x0398(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AntiPersonnelMineClass;                                   // 0x03A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BombClass;                                                // 0x03A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ShackSmokeReplacement;                                    // 0x03B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LootLockerClass;                                          // 0x03B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PushPlayerDataClass;                                      // 0x03C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxLootLockers;                                           // 0x03C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TeamId;                                                   // 0x03CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class APavlov_PushLoadoutProxy*                    PushProxy;                                                // 0x03D0(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<class UClass*, struct FPushMeshLazyLoad>      MeshesToLoad;                                             // 0x03D8(0x0050) (ZeroConstructor)
	TMap<class UClass*, struct FPushMeshLoaded>        LoadedMeshes;                                             // 0x0428(0x0050) (ZeroConstructor)
	struct FTimerHandle                                RetryLoad_Handle;                                         // 0x0478(0x0008)
	bool                                               bUseWW2Items;                                             // 0x0480(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0481(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PushLoadout");
		return ptr;
	}


	void UpdateLoadouts();
	void SpawnLoadoutEquipment(const struct FName& LoadoutSlot, class APavlovPawn* PavPawn, int ObjectiveId);
	void SetTeamId(int LoadoutTeamId);
	bool SetLockerAvailability(int LoadoutIndex, int NumOfLoadoutsAvailable, int MaxLoadouts);
	void PlayerLoadoutTaken(class APavlovPawn* PavPawn, bool bTPToPlay);
	void OnRep_Loadouts();
	bool IsAttackersRoom();
	void InitializePushLoadout(class APavlov_PushLoadoutProxy* LoadoutProxy, bool bWW2Items);
	class APushLootLocker* GetLootLocker(int LootLockerIndex);
	struct FTransform GetLockerSpawnTransform(int LockerNum);
	struct FTransform GetLoadoutSpawnTransform();
	bool GetLoadoutByName(const struct FName& LoadoutId, struct FPushLoadoutEquipment* LoadoutEquipment);
	bool DoesPlayerHaveLoadout(class APavlovPawn* PavPawn);
	void DeleteUnusedLockers(int CurrentLockers);
};


// Class Pavlov.PushLootLocker
// 0x0058 (0x0380 - 0x0328)
class APushLootLocker : public AActor
{
public:
	class USkeletalMeshComponent*                      LockerMesh;                                               // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      PrimaryHandMesh;                                          // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      PrimaryBackMesh;                                          // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SecondaryMesh;                                            // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      KnifeMesh;                                                // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      MedsMesh;                                                 // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SyringeMesh;                                              // 0x0358(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      MineMesh;                                                 // 0x0360(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      BombMesh;                                                 // 0x0368(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	struct FName                                       LoadoutId;                                                // 0x0370(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FPushLoadoutCount                           LoadoutCount;                                             // 0x0378(0x0008) (BlueprintVisible, BlueprintReadOnly, Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PushLootLocker");
		return ptr;
	}


	bool SetupMesh(const struct FName& ItemName, class USkeletalMeshComponent* SKComp);
	void SetNumOfLoadoutsAvailable(int NumAvailable, int MaxLoadouts);
	void OnRep_LoadoutCount();
	void OnLockerStateChanged(bool bOpen);
	bool GrabLocker(class APavlovPawn* PavPawn);
	class APushLoadout* GetLoadoutRoom();
	bool CanGrabLocker();
};


// Class Pavlov.PushManagerComponent
// 0x0078 (0x0168 - 0x00F0)
class UPushManagerComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnGracePeriodEnded;                                       // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                ActiveObjectiveId;                                        // 0x0100(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                AttackerTickets;                                          // 0x0104(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                DefenderTickets;                                          // 0x0108(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                MaxAttackerTickets;                                       // 0x010C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TicketsPerWave;                                           // 0x0110(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	class APushLoadout*                                Team0Loadout;                                             // 0x0118(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class APushLoadout*                                Team1Loadout;                                             // 0x0120(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LastObjectiveId;                                          // 0x0128(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	struct FDateTime                                   MoveSpawnTime;                                            // 0x0130(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EPushWinCondition                                  WinCondition;                                             // 0x0138(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0139(0x0007) MISSED OFFSET
	TArray<class APushBombObjective*>                  BombObjectives;                                           // 0x0140(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                GracePeriod;                                              // 0x0150(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoadoutRefreshTime;                                       // 0x0154(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                LoadoutHandle;                                            // 0x0158(0x0008)
	struct FTimerHandle                                OOBGraceHandle;                                           // 0x0160(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PushManagerComponent");
		return ptr;
	}


	void UpdateOOBGracePeriod();
	void SwappedSides();
	void SetWinCondition(EPushWinCondition PushWinCondition);
	bool SetTickets(bool bAttackers, int Tickets);
	void SetGracePeriod(float GraceTime);
	void SetActiveObjectiveId(int ObjectiveId);
	int RemoveTicket(bool bAttackers);
	bool IsSpawnGracePeriod();
	void InitializePush(int ObjectiveId, int AttackTickets, int DefendTickets, int MaxAttackTickets, int WaveTickets, float LockerRefreshTime, class APushLoadout* Team0LoadoutRoom, class APushLoadout* Team1LoadoutRoom);
	void CheckLoadoutAvailability();
	int AwardAttackersTicketsPerWave();
};


// Class Pavlov.PushPlayerDataComponent
// 0x0060 (0x0150 - 0x00F0)
class UPushPlayerDataComponent : public UActorComponent
{
public:
	struct FName                                       LoadoutId;                                                // 0x00F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EMineType                                          AllowedMine;                                              // 0x00F8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	EPushHipSlot                                       HipSlotType;                                              // 0x00F9(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00FA(0x0006) MISSED OFFSET
	class UClass*                                      HipSlotItemClass;                                         // 0x0100(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPushPlayerDialog*                           PlayerDialog;                                             // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                HipSlot_Handle;                                           // 0x0110(0x0008)
	struct FTimerHandle                                LowHealthTimer;                                           // 0x0118(0x0008)
	struct FTimerHandle                                DialogBufferTimer;                                        // 0x0120(0x0008)
	float                                              LastLowAmmoTime;                                          // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastOofTime;                                              // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastGrenadeTime;                                          // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentChantIndex;                                        // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLastPushDialog                             LastDialogPlayed;                                         // 0x0138(0x0010)
	EPushDialog                                        DialogQueue;                                              // 0x0148(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0149(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PushPlayerDataComponent");
		return ptr;
	}


	void TakePushSnapshot();
	void SetHipSlotType(EPushHipSlot HipSlot);
	void SetDialogAsset(class UPushPlayerDialog* Dialog);
	void RestorePushSnapshot(const struct FName& FallbackWeapon, class UPushPlayerStateComponent* PushPlayerStateComp);
	void RespawnHipSlot();
	void PlayDialogReplicated(EPushDialog PushDialog);
	class UAudioComponent* PlayDialogFromHead(class USoundCue* DialogCue);
	void PlayDialog_Multi(EPushDialog PushDialog);
	void PlayDialog(EPushDialog PushDialog);
	void PlayChantResponse_Multi(int ChantIndex);
	void PlayChantResponse();
	void PlayChant(int ChantIndex);
	void OwnerKilled();
	void OnRep_HipSlotType();
	void OnOwnerDamaged();
	void OnLowHealth();
	void OnLowAmmo();
	void OnGrenadeCooked(class AGrenade* Grenade);
	void OnBufferTimeComplete();
	void LoadDialogAsset(const struct FName& PlayerSkin);
	void Init_Client();
	void HipSlotUsed();
	class UPushPlayerDataComponent* STATIC_GetPushPlayerData(class APawn* Pawn);
	void ClearQueue(bool bFadeCurrent, bool bChantInQueue);
	void AskForMeds();
};


// Class Pavlov.PushPlayerDialog
// 0x0118 (0x0148 - 0x0030)
class UPushPlayerDialog : public UDataAsset
{
public:
	class USoundCue*                                   Revived;                                                  // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   LowHealth;                                                // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   LowAmmo;                                                  // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   MineDeployed;                                             // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   AmmoDeployed;                                             // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   MedkitDeployed;                                           // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   OutOfBounds;                                              // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ObjectiveLost;                                            // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ObjectiveComplete;                                        // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   OofSound;                                                 // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DeathSound;                                               // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   GrenadeOut;                                               // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SmokeOut;                                                 // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FPushChant>                          Chants;                                                   // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TMap<EPushDialog, int>                             DialogPriority;                                           // 0x00A8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TMap<EPushDialog, float>                           DialogBuffers;                                            // 0x00F8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PushPlayerDialog");
		return ptr;
	}


	int GetRandomChantIndex();
	int GetDialogPriority(EPushDialog DialogType);
	class USoundCue* GetDialogByType(EPushDialog DialogType);
	float GetDialogBuffer(EPushDialog DialogType);
	struct FPushChant GetChantByIndex(int ChantIndex);
};


// Class Pavlov.PushPlayerStateComponent
// 0x0020 (0x0110 - 0x00F0)
class UPushPlayerStateComponent : public UActorComponent
{
public:
	struct FName                                       LoadoutId;                                                // 0x00F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EMineType                                          AllowedMine;                                              // 0x00F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	class UClass*                                      HipSlotItemClass;                                         // 0x0100(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPushHipSlot                                       HipSlotType;                                              // 0x0108(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	float                                              LastLowHealthTime;                                        // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PushPlayerStateComponent");
		return ptr;
	}


	void PlayerRevived(class APavlovPawn* PavPawn, class UClass* PushPlayerDataClass, const struct FName& FallbackWeapon);
};


// Class Pavlov.RadioToggleComponent
// 0x0020 (0x05A0 - 0x0580)
class URadioToggleComponent : public UBoxComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0580(0x0008) MISSED OFFSET
	class UHapticFeedbackEffect_Base*                  ToggleHaptic;                                             // 0x0588(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ToggleSound;                                              // 0x0590(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   RogerSound;                                               // 0x0598(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.RadioToggleComponent");
		return ptr;
	}

};


// Class Pavlov.Rat
// 0x0010 (0x0750 - 0x0740)
class ARat : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0740(0x0004) MISSED OFFSET
	float                                              ImpactWeight;                                             // 0x0744(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ImpactCurve;                                              // 0x0748(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Rat");
		return ptr;
	}


	void OnRevive(class AActor* ActorOwner);
	void OnKill(class AActor* ActorOwner);
	void ApplyImpact();
};


// Class Pavlov.RatAIController
// 0x0018 (0x0450 - 0x0438)
class ARatAIController : public AAIController
{
public:
	class AVRPawn*                                     TargetPawn;                                               // 0x0438(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x0440(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x044C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.RatAIController");
		return ptr;
	}

};


// Class Pavlov.RatAnimInstance
// 0x0050 (0x03B0 - 0x0360)
class URatAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0360(0x0010) MISSED OFFSET
	float                                              MovingSpeedReference;                                     // 0x0370(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingSpeed;                                              // 0x0374(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    PelvisRotation;                                           // 0x0378(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    SpineRotation;                                            // 0x0384(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SpineLerpExp;                                             // 0x0390(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMoving;                                                  // 0x0394(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFalling;                                                 // 0x0395(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLookAt;                                                  // 0x0396(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0397(0x0001) MISSED OFFSET
	struct FVector                                     LookAtLocation;                                           // 0x0398(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x03A4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.RatAnimInstance");
		return ptr;
	}

};


// Class Pavlov.RconPawn
// 0x0038 (0x03E8 - 0x03B0)
class ARconPawn : public ASpectatorPawn
{
public:
	class USceneComponent*                             PawnRoot;                                                 // 0x03B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            PawnCamera;                                               // 0x03B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x03C0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.RconPawn");
		return ptr;
	}


	void ExitSpectator_Server();
};


// Class Pavlov.RepairTool
// 0x0000 (0x04D0 - 0x04D0)
class ARepairTool : public AVRItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.RepairTool");
		return ptr;
	}


	bool RepairVehicle(class AActor* Vehicle);
	bool CanRepairVehicle(class AActor* RepairActor, bool bNoTeams, int TeamId);
};


// Class Pavlov.ReplayManager
// 0x0040 (0x0068 - 0x0028)
class UReplayManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	TArray<struct FReplayInfo>                         ReplayList;                                               // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnReplayListUpdated;                                      // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReplayPlay;                                             // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ReplayManager");
		return ptr;
	}


	void PlayReplay(const struct FString& ReplayId);
	void OnCustomMapDownloaded(bool bSucceed, const struct FString& ID);
	void Find(const struct FString& GameMode, bool bCompetitive);
};


// Class Pavlov.ReplayPawn
// 0x0000 (0x0388 - 0x0388)
class AReplayPawn : public APawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ReplayPawn");
		return ptr;
	}

};


// Class Pavlov.ReplayPlayerController
// 0x0000 (0x0688 - 0x0688)
class AReplayPlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ReplayPlayerController");
		return ptr;
	}

};


// Class Pavlov.ReviveTool
// 0x0000 (0x04D0 - 0x04D0)
class AReviveTool : public AVRItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ReviveTool");
		return ptr;
	}


	bool SetNumOfRevives(int AmountOfRevives);
	int GetNumOfRevives();
};


// Class Pavlov.RevolverGunState
// 0x0018 (0x0180 - 0x0168)
class URevolverGunState : public UVRGunState
{
public:
	bool                                               bCylinderOpen;                                            // 0x0168(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0169(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnRevolverCylinderChanged;                                // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.RevolverGunState");
		return ptr;
	}


	void SetCylinder(bool bOpen);
};


// Class Pavlov.RifleGunState
// 0x0000 (0x01A0 - 0x01A0)
class URifleGunState : public UActionGunState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.RifleGunState");
		return ptr;
	}

};


// Class Pavlov.RockerLauncherGunState
// 0x0018 (0x0180 - 0x0168)
class URockerLauncherGunState : public UVRGunState
{
public:
	ELauncherState                                     LauncherState;                                            // 0x0168(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0169(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnLauncherStateChanged;                                   // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.RockerLauncherGunState");
		return ptr;
	}


	void SetLauncherState(ELauncherState State);
	void ChamberChanged(int ChamberIndex, EVRGunChamberState OldState, EVRGunChamberState NewState);
};


// Class Pavlov.Rocket
// 0x0038 (0x0580 - 0x0548)
class ARocket : public ABullet
{
public:
	bool                                               bDebugRocket;                                             // 0x0548(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTankRound;                                             // 0x0549(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x054A(0x0002) MISSED OFFSET
	float                                              MinDamage;                                                // 0x054C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageInnerRadius;                                        // 0x0550(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageOuterRadius;                                        // 0x0554(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageFalloff;                                            // 0x0558(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x055C(0x0004) MISSED OFFSET
	class UParticleSystem*                             SmokeTrailFX;                                             // 0x0560(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             SmokeTrailFXLQ;                                           // 0x0568(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    SmokeTrail;                                               // 0x0570(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsLocalCopy;                                             // 0x0578(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0579(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Rocket");
		return ptr;
	}


	void OnDetonation(const struct FTransform& DecalTransform);
};


// Class Pavlov.RotationHandle
// 0x0030 (0x0700 - 0x06D0)
class URotationHandle : public UVRHandleComponent
{
public:
	bool                                               bTopDownRotation;                                         // 0x06D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x06D1(0x0007) MISSED OFFSET
	struct FName                                       CenterSocket;                                             // 0x06D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ERotationHandleOffset                              HandleOffsetType;                                         // 0x06E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06E1(0x0003) MISSED OFFSET
	float                                              StartingAngle;                                            // 0x06E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnHandleRotation;                                         // 0x06E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x8];                                       // 0x06F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.RotationHandle");
		return ptr;
	}

};


// Class Pavlov.Scoreboard
// 0x0088 (0x03C0 - 0x0338)
class AScoreboard : public AHandMenu
{
public:
	class UStaticMeshComponent*                        PlaneMesh;                                                // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCohtmlComponent*                            CohtmlComponent;                                          // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0348(0x0010) MISSED OFFSET
	TArray<struct FScoreboardSlot>                     Team0Slots;                                               // 0x0358(0x0010) (ZeroConstructor)
	TArray<struct FScoreboardSlot>                     Team1Slots;                                               // 0x0368(0x0010) (ZeroConstructor)
	int                                                MaxPlayers;                                               // 0x0378(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Team0Score;                                               // 0x037C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Team1Score;                                               // 0x0380(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RoundsLeft;                                               // 0x0384(0x0004) (ZeroConstructor, IsPlainOldData)
	EPavlovGameModeType                                GameModeType;                                             // 0x0388(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0389(0x0003) MISSED OFFSET
	int                                                AttackingTeam;                                            // 0x038C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LocalTeam;                                                // 0x0390(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                VerticalSlots;                                            // 0x0394(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bNoTeams;                                                 // 0x0398(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0399(0x0003) MISSED OFFSET
	int                                                RoundTime;                                                // 0x039C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RoundDuration;                                            // 0x03A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AnchorBasisHeightPadding;                                 // 0x03A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnchorBasisMinHeight;                                     // 0x03A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnchorBasisHeightPerSlot;                                 // 0x03AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    AnchorBasisRotation;                                      // 0x03B0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnchorBasisScale;                                         // 0x03BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Scoreboard");
		return ptr;
	}


	void OnScriptingReady();
	void OnReadyForBindings();
	void OnAvatarUpdated(const struct FString& ProductId, const struct FString& PlatformId, class UTexture2D* AvatarTexture);
};


// Class Pavlov.ServerBrowser
// 0x0090 (0x00B8 - 0x0028)
class UServerBrowser : public UObject
{
public:
	bool                                               bUseNewPingMethod;                                        // 0x0028(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x57];                                      // 0x0029(0x0057) MISSED OFFSET
	bool                                               bUpdating;                                                // 0x0080(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bNotFull;                                                 // 0x0081(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNotEmpty;                                                // 0x0082(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNoPassword;                                              // 0x0083(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FString                                     GMFilter;                                                 // 0x0088(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FServerDetails>                      ServerList;                                               // 0x0098(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnUpdate;                                                 // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ServerBrowser");
		return ptr;
	}


	void Update(bool bUpdatePings);
	void OrderServerListByPlayerCount(bool bDescending);
	TArray<struct FCombinedServerList> GenerateSortedCombinedList(TArray<struct FPavlovServerInfo> LobbyDetails, bool bAddServerList, bool bDescending);
};


// Class Pavlov.ServerBrowserModel
// 0x0040 (0x0080 - 0x0040)
class UServerBrowserModel : public UUIModel
{
public:
	bool                                               bBusy;                                                    // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FString                                     ActiveEntryId;                                            // 0x0048(0x0010) (ZeroConstructor)
	struct FString                                     SortType;                                                 // 0x0058(0x0010) (ZeroConstructor)
	float                                              Scroll;                                                   // 0x0068(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NeedlePosition;                                           // 0x006C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FUIServerBrowserEntryModel>          Entries;                                                  // 0x0070(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ServerBrowserModel");
		return ptr;
	}

};


// Class Pavlov.ServerBrowserV2
// 0x0118 (0x0140 - 0x0028)
class UServerBrowserV2 : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnBrowserUpdated;                                         // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bUpdating;                                                // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EServerSearchType                                  ServerSearchType;                                         // 0x0039(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHideFull;                                                // 0x003A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHideEmpty;                                               // 0x003B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHidePasswordProtected;                                   // 0x003C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateFavoritesOnly;                                     // 0x003D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
	TArray<struct FString>                             RegionFilters;                                            // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             GMFilters;                                                // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EServerSortType                                    ServerSortType;                                           // 0x0060(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	TArray<class UServerContainer*>                    ServerList;                                               // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FFavoriteServer>                     FavoriteServers;                                          // 0x0078(0x0010) (ZeroConstructor)
	int                                                UpdateCount;                                              // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	TMap<struct FString, struct FServerPingInfo>       CommunityServerPingList;                                  // 0x0090(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FServerPingInfo>       LobbyServerPingList;                                      // 0x00E0(0x0050) (ZeroConstructor)
	class UServerStatusHelper*                         PingHelper;                                               // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   LastUpdateTime;                                           // 0x0138(0x0008) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ServerBrowserV2");
		return ptr;
	}


	void UpdateRegionFilters(EOnlineRegion Region, bool bAdd);
	void UpdateGMFilters(const struct FString& Filter, bool bAdd);
	void UpdateFavoritesOnly(bool bEnabled);
	void UpdateFavoriteServer(class UServerContainer* ServerContainer, bool bAdd);
	void SortServerList();
	void SetServerSortType(EServerSortType SortType);
	void SetServerSearchType(EServerSearchType SearchType);
	void SetHidePinLockedServers(bool bHide);
	void SetHideFullServers(bool bHide);
	void SetHideEmptyServers(bool bHide);
	void RefreshList();
	void OnLobbyUpdateComplete();
	void OnLobbyListUpdate(const struct FLobbySearchResult& SearchResult);
	void OnCommunityServerPingListComplete();
	void OnCommunityServerPingComplete(const struct FServerStatusInfo& StatusInfo, const struct FString& IPAddress);
	bool JoinServer(class UServerContainer* ServerContainer, const struct FString& Pin);
	bool HasRegionFilter(EOnlineRegion Region);
	class UServerContainer* GetServerContainerById(const struct FString& ID);
};


// Class Pavlov.ServerConnector
// 0x0090 (0x00D8 - 0x0048)
class UServerConnector : public UPavlovObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0048(0x0058) MISSED OFFSET
	class UServerStatusHelper*                         StatusHelper;                                             // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x00A8(0x0005) MISSED OFFSET
	EConnectorFailureReason                            FailureReason;                                            // 0x00AD(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2A];                                      // 0x00AE(0x002A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ServerConnector");
		return ptr;
	}


	void TickServerConnect();
	void StartConnection();
	void OnStatusTimeout();
	void OnStatusReceived(const struct FServerStatusInfo& StatusInfo, const struct FString& IPAddress);
	void OnServerConnectMapDownloaded(bool bSucceed, const struct FString& ID);
	void FailedToConnect();
};


// Class Pavlov.ServerContainer
// 0x0110 (0x0138 - 0x0028)
class UServerContainer : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnPingUpdated;                                            // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FServerContainerInfo                        ServerContainerInfo;                                      // 0x0038(0x00F0) (BlueprintVisible, BlueprintReadOnly)
	bool                                               bOfflineContainer;                                        // 0x0128(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0129(0x0003) MISSED OFFSET
	float                                              LastPingAlpha;                                            // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastUpdateAlpha;                                          // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0134(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ServerContainer");
		return ptr;
	}


	void UpdatePing(int NewPing);
};


// Class Pavlov.ServerStatusHelper
// 0x0058 (0x0080 - 0x0028)
class UServerStatusHelper : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnRecServerResponse;                                      // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnServerResponseTimeout;                                  // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bClient;                                                  // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	class UPavlovGameInstance*                         GameInstance;                                             // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   ResponseTime;                                             // 0x0058(0x0008) (ZeroConstructor)
	bool                                               bClientRecievedResponse;                                  // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0061(0x0017) MISSED OFFSET
	struct FTimerHandle                                AutoCloseHandle;                                          // 0x0078(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ServerStatusHelper");
		return ptr;
	}


	void Stop();
	bool SendStringToAddress(const struct FString& SendString, const struct FString& Address);
	bool SendServerStatusUpdate(const struct FString& Pin, const struct FString& Address);
	bool SendDataToAddress(const struct FServerStatusMsg& SendMsg);
	bool IsConnected();
	bool GetServerStatusInfo(const struct FString& Pin, struct FServerStatusInfo* StatusInfo);
	bool GetServerInfo(const struct FString& Address, int Port, const struct FString& Pin, float AutoCloseTime);
	struct FString DataToString(TArray<unsigned char> Data);
};


// Class Pavlov.SettingsView
// 0x0040 (0x04C8 - 0x0488)
class ASettingsView : public AContentView
{
public:
	class UStaticModel*                                StaticModel;                                              // 0x0488(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0490(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.SettingsView");
		return ptr;
	}

};


// Class Pavlov.Shell
// 0x0008 (0x0330 - 0x0328)
class AShell : public AActor
{
public:
	class USurfaceFXAsset*                             SurfaceFX;                                                // 0x0328(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Shell");
		return ptr;
	}


	void SpawnHitEffect(const struct FHitResult& HitResult);
};


// Class Pavlov.ShootingRangeTargetComponent
// 0x0010 (0x0600 - 0x05F0)
class UShootingRangeTargetComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x05F0(0x0008) MISSED OFFSET
	int                                                UVChannel;                                                // 0x05F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ShootingRangeTargetComponent");
		return ptr;
	}


	void TargetHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};


// Class Pavlov.ShowOnlyComponent
// 0x0018 (0x0108 - 0x00F0)
class UShowOnlyComponent : public UActorComponent
{
public:
	class APavlovPlayerController*                     PlayerController;                                         // 0x00F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ShowOnlyComponent");
		return ptr;
	}

};


// Class Pavlov.SkinAsset
// 0x0028 (0x0058 - 0x0030)
class USkinAsset : public UDataAsset
{
public:
	int                                                DefinitionId;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UClass*                                      For;                                                      // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSimplified;                                              // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	class UMaterialInterface*                          MaterialOverride;                                         // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaterialOverrideIndex;                                    // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.SkinAsset");
		return ptr;
	}

};


// Class Pavlov.SkinFamily
// 0x0000 (0x0028 - 0x0028)
class USkinFamily : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.SkinFamily");
		return ptr;
	}


	ESkinFamily STATIC_SkinIntToSkinFamily(int SkinFamilyInt);
	struct FString STATIC_SkinFamilyToString(ESkinFamily SkinFamily);
	int STATIC_SkinFamilyToInt(ESkinFamily SkinFamily);
	struct FString STATIC_SkinFamilyIdToString(int SkinFamilyId);
};


// Class Pavlov.SoldierSkin
// 0x0028 (0x0198 - 0x0170)
class USoldierSkin : public UAvatarSkin
{
public:
	class USkeletalMeshComponent*                      ArmorMeshComp;                                            // 0x0170(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0178(0x0001) MISSED OFFSET
	bool                                               bAlwaysOnArmor;                                           // 0x0179(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCombinedPlayerMeshes;                                    // 0x017A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x017B(0x0005) MISSED OFFSET
	class USkeletalMesh*                               Vest;                                                     // 0x0180(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               Helmet;                                                   // 0x0188(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               Combined;                                                 // 0x0190(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.SoldierSkin");
		return ptr;
	}

};


// Class Pavlov.SoundMixingSettings
// 0x0018 (0x0060 - 0x0048)
class USoundMixingSettings : public UPavlovObject
{
public:
	class USoundMix*                                   SoundMix;                                                 // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FSoundMixingChannel>                 Channels;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.SoundMixingSettings");
		return ptr;
	}


	void SetVolumeByChannelName(const struct FName& Name, float Volume);
	void SetVolumeByChannelIndex(int Index, float Volume);
	void Save();
	void RestoreDefaults();
	void Load();
	float GetVolumeByChannelName(const struct FName& Name);
	float GetVolumeByChannelIndex(int Index);
	void ApplyAndSave();
	void Apply();
};


// Class Pavlov.SoundNodeOutdoor
// 0x0010 (0x0048 - 0x0038)
class USoundNodeOutdoor : public USoundNode
{
public:
	float                                              Alpha;                                                    // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FadeDuration;                                             // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInvertCondition;                                         // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.SoundNodeOutdoor");
		return ptr;
	}

};


// Class Pavlov.SpectatorTag
// 0x0060 (0x0388 - 0x0328)
class ASpectatorTag : public AActor
{
public:
	class USceneComponent*                             Pivot;                                                    // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             NamePivot;                                                // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        VerticalLine;                                             // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            Widget;                                                   // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0348(0x0008) MISSED OFFSET
	bool                                               bRaised;                                                  // 0x0350(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFadingOut;                                               // 0x0351(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0352(0x0002) MISSED OFFSET
	float                                              RaiseTime;                                                // 0x0354(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RaiseDuration;                                            // 0x0358(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RaiseHeight;                                              // 0x035C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LineGirth;                                                // 0x0360(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	class UCurveVector*                                RaiseCurve;                                               // 0x0368(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeOutDuration;                                          // 0x0370(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	class UCurveFloat*                                 FadeOutCurve;                                             // 0x0378(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   RaiseSound;                                               // 0x0380(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.SpectatorTag");
		return ptr;
	}


	void OnFadeOut();
	class APavlovPlayerState* GetPlayerState();
};


// Class Pavlov.SpectatorTV
// 0x0000 (0x0328 - 0x0328)
class ASpectatorTV : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.SpectatorTV");
		return ptr;
	}

};


// Class Pavlov.SpectatorTVCamera
// 0x0030 (0x0358 - 0x0328)
class ASpectatorTVCamera : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0328(0x0008) MISSED OFFSET
	class USceneCaptureComponent2D*                    SceneCapture;                                             // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0338(0x0008) MISSED OFFSET
	class APavlovPawn*                                 FocusedPawn;                                              // 0x0340(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TeamId;                                                   // 0x0348(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTeamOnly;                                                // 0x034C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoCycle;                                               // 0x034D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x034E(0x0002) MISSED OFFSET
	float                                              YawExp;                                                   // 0x0350(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoCycleRate;                                            // 0x0354(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.SpectatorTVCamera");
		return ptr;
	}


	void OnAttachedToFocusedPawn();
	class USceneCaptureComponent2D* GetSceneCapture();
	void Cycle();
	void AddYawInput(float Value);
};


// Class Pavlov.StaticModel
// 0x0040 (0x0080 - 0x0040)
class UStaticModel : public UUIModel
{
public:
	int                                                SettingsTab;                                              // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     OfflineActivity;                                          // 0x0048(0x0010) (ZeroConstructor)
	bool                                               bOfflineBots;                                             // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FString                                     OfflineMap;                                               // 0x0060(0x0010) (ZeroConstructor)
	struct FString                                     TrainingCourse;                                           // 0x0070(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.StaticModel");
		return ptr;
	}

};


// Class Pavlov.StatsManager
// 0x0060 (0x0150 - 0x00F0)
class UStatsManager : public UActorComponent
{
public:
	float                                              KValue;                                                   // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	TMap<struct FString, struct FPlayerStats>          PlayerStats;                                              // 0x00F8(0x0050) (ZeroConstructor)
	bool                                               bHasPosted;                                               // 0x0148(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0149(0x0003) MISSED OFFSET
	float                                              ExperienceMultiplier;                                     // 0x014C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.StatsManager");
		return ptr;
	}


	void SetStat(const struct FString& UniqueID, EPlayerStats OptionStat, int Amount);
	bool PostStats(const struct FString& URL);
	bool HasAuthority();
	int GetXPForStat(EPlayerStats StatType, int Amount);
	float GetTransformedEloRatings(float Elo);
	class UJsonUtilsObj* GetStatsAsJson();
	float GetProbabilityOfWinning(float CurrentElo, float OpponentElo);
	bool GetPlayerStats(const struct FString& UniqueID, struct FPlayerStats* PlayerStatistics);
	TMap<struct FString, struct FPlayerStats> GetPlayersStats();
	bool GetAllPlayersStats(TArray<struct FPlayerStats>* PlayersStatistics);
	struct FPlayerStats FindOrCreatePlayerStats(const struct FString& UniqueID);
	void DumpStatsToLog();
	void CalulateTeamElos(TMap<struct FString, float> InTeam0Elos, TMap<struct FString, float> InTeam1Elos, bool bTeam0Won, TMap<struct FString, float>* OutTeam0Elos, TMap<struct FString, float>* OutTeam1Elos);
	float CalculateNewElo(float CurrentElo, float OpponentElo, bool bWin);
	void AwardPlayersXP();
	float AverageElos(TArray<float> Elos);
	void AddStatByUniqueId(class APavlovPlayerState* PlayerState, EPlayerStats OptionStat);
	void AddStat(class APavlovPlayerState* PavPlayerState, EPlayerStats OptionStat);
	void AddPlayer(const struct FString& UniqueID);
};


// Class Pavlov.StencilSuppressionComponent
// 0x0010 (0x0600 - 0x05F0)
class UStencilSuppressionComponent : public UStaticMeshComponent
{
public:
	bool                                               bMenuOpen;                                                // 0x05F0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x05F1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.StencilSuppressionComponent");
		return ptr;
	}


	void OwnerKilled(class AActor* Owner);
	void OnMenuOpened(bool bEnabled);
};


// Class Pavlov.StereoMessage
// 0x0010 (0x0360 - 0x0350)
class AStereoMessage : public AStereoOverlay
{
public:
	struct FString                                     Message;                                                  // 0x0350(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.StereoMessage");
		return ptr;
	}

};


// Class Pavlov.StripperClipCosmetic
// 0x0010 (0x0348 - 0x0338)
class AStripperClipCosmetic : public AVRStripperClipCosmetic
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET
	class USurfaceFXAsset*                             SurfaceFX;                                                // 0x0340(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.StripperClipCosmetic");
		return ptr;
	}

};


// Class Pavlov.SurfaceFXAsset
// 0x0138 (0x0168 - 0x0030)
class USurfaceFXAsset : public UDataAsset
{
public:
	class USoundCue*                                   DefaultSound;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ConcreteSound;                                            // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   MetalSound;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   CarpetSound;                                              // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   FabricSound;                                              // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   WoodSound;                                                // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   GlassSound;                                               // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   WaterSound;                                               // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DirtSound;                                                // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   MudSound;                                                 // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SnowSound;                                                // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   VehicleSound;                                             // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   WorldFleshSound;                                          // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DefaultParticle;                                          // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ConcreteParticle;                                         // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MetalParticle;                                            // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             CarpetParticle;                                           // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FabricParticle;                                           // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WoodParticle;                                             // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             GlassParticle;                                            // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WaterParticle;                                            // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DirtParticle;                                             // 0x00D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MudParticle;                                              // 0x00E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             SnowParticle;                                             // 0x00E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             VehicleParticle;                                          // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WorldFleshParticle;                                       // 0x00F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DefaultParticleLowQuality;                                // 0x0100(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ConcreteParticleLowQuality;                               // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MetalParticleLowQuality;                                  // 0x0110(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             CarpetParticleLowQuality;                                 // 0x0118(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FabricParticleLowQuality;                                 // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WoodParticleLowQuality;                                   // 0x0128(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             GlassParticleLowQuality;                                  // 0x0130(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WaterParticleLowQuality;                                  // 0x0138(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DirtParticleLowQuality;                                   // 0x0140(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MudParticleLowQuality;                                    // 0x0148(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             SnowParticleLowQuality;                                   // 0x0150(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             VehicleParticleLowQuality;                                // 0x0158(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WorldFleshParticleLowQuality;                             // 0x0160(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.SurfaceFXAsset");
		return ptr;
	}


	class USoundCue* GetVehicleSound();
	class UParticleSystem* GetVehicleParticleSystem();
	class USoundCue* GetSoundBySurfaceType(TEnumAsByte<EPhysicalSurface> SurfaceType);
	class UParticleSystem* GetParticleBySurfaceType(TEnumAsByte<EPhysicalSurface> SurfaceType);
};


// Class Pavlov.SurfaceFXInterface
// 0x0000 (0x0028 - 0x0028)
class USurfaceFXInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.SurfaceFXInterface");
		return ptr;
	}

};


// Class Pavlov.TankInteriorAnimInstance
// 0x0020 (0x0380 - 0x0360)
class UTankInteriorAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0360(0x0008) MISSED OFFSET
	struct FRotator                                    RightLeverRotation;                                       // 0x0368(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EngineRPMs;                                               // 0x0374(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KMPH;                                                     // 0x0378(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x037C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.TankInteriorAnimInstance");
		return ptr;
	}


	float GetMPH();
};


// Class Pavlov.TankVehicleMovement
// 0x0020 (0x0448 - 0x0428)
class UTankVehicleMovement : public UWheeledVehicleMovementComponent4W
{
public:
	bool                                               bUseSteeringWheel;                                        // 0x0428(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0429(0x0003) MISSED OFFSET
	float                                              TankThrottleInput;                                        // 0x042C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              TankLeftTrustInput;                                       // 0x0430(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              TankRightTrustInput;                                      // 0x0434(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastLeftThrustInput;                                      // 0x0438(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastRightThrustInput;                                     // 0x043C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastThrottleInput;                                        // 0x0440(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastBumperPushTime;                                       // 0x0444(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.TankVehicleMovement");
		return ptr;
	}


	void ServerUpdateTankSteeringWheel(float LeftThrustInput, float RightThrustInput, float UpdateThrottle);
	void ServerUpdateTankInput(float LeftTrustInput, float RightTrustInput);
	void DriverLeft();
};


// Class Pavlov.TextureWidgetComponent
// 0x0000 (0x06A0 - 0x06A0)
class UTextureWidgetComponent : public UWidgetComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.TextureWidgetComponent");
		return ptr;
	}

};


// Class Pavlov.ToolTip
// 0x0050 (0x0378 - 0x0328)
class AToolTip : public AActor
{
public:
	class UObject*                                     Context;                                                  // 0x0328(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ContextLocation;                                          // 0x0330(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EToolTipState                                      State;                                                    // 0x033C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCompleted;                                               // 0x033D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x033E(0x0002) MISSED OFFSET
	float                                              Timer;                                                    // 0x0340(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0344(0x0004) MISSED OFFSET
	struct FName                                       ID;                                                       // 0x0348(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInsist;                                                  // 0x0350(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0351(0x0003) MISSED OFFSET
	float                                              TransitionDuration;                                       // 0x0354(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ShowSound;                                                // 0x0358(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   TerminateSound;                                           // 0x0360(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   TerminateCompletedSound;                                  // 0x0368(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoAttach;                                              // 0x0370(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	float                                              SelfDestroyDuration;                                      // 0x0374(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ToolTip");
		return ptr;
	}


	float GetFadeScalar();
};


// Class Pavlov.TrailComponent
// 0x0040 (0x05D0 - 0x0590)
class UTrailComponent : public UCustomMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0590(0x0028) MISSED OFFSET
	float                                              PointLifeSpan;                                            // 0x05B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PointRate;                                                // 0x05BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PointDistance;                                            // 0x05C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrailGirth;                                               // 0x05C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStopped;                                                 // 0x05C8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x05C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.TrailComponent");
		return ptr;
	}

};


// Class Pavlov.TrainingView
// 0x0008 (0x0490 - 0x0488)
class ATrainingView : public AContentView
{
public:
	class UStaticModel*                                StaticModel;                                              // 0x0488(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.TrainingView");
		return ptr;
	}

};


// Class Pavlov.TTTGameInfo
// 0x0000 (0x00F0 - 0x00F0)
class UTTTGameInfo : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.TTTGameInfo");
		return ptr;
	}


	bool TTTFlushKarma();
	bool TTTAlwaysEnableSkinMenu(bool bEnable);
	bool SetTTTPlayerRole(class APavlovPlayerState* PavPlayerState, const struct FString& TTTRole);
	bool SetTTTKarma(class APavlovPlayerState* PavPlayerState, int Karma);
	void RetryInit();
	bool PauseTTTTimer(bool bPaused);
	struct FTTTPlayerInfo GetTTTPlayerInfo(class APlayerState* PlayerState);
	bool GetTTTKarma(class APavlovPlayerState* PlayerState, int* Karma);
	TArray<struct FTTTPlayerInfo> GetAllTTTPlayersInfo();
	bool EndTTTRound();
};


// Class Pavlov.Tutorial
// 0x00C0 (0x00E8 - 0x0028)
class UTutorial : public UObject
{
public:
	TArray<struct FName>                               ToolTipsCompleted;                                        // 0x0028(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0038(0x00A0) MISSED OFFSET
	class UPavlovGameInstance*                         Instance;                                                 // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UObjectLibrary*                              ToolTipLibrary;                                           // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Tutorial");
		return ptr;
	}


	void TerminateToolTip(const struct FName& ID);
	void ShowToolTip(const struct FName& ID, class UObject* Context, const struct FVector& ContextLocation);
	void Reset();
	void MarkToolTipAsComplete(const struct FName& ID);
	bool IsToolTipCompleted(const struct FName& ID);
	int GetToolTipInstanceCount();
};


// Class Pavlov.TwoHandGripComponent
// 0x0010 (0x0590 - 0x0580)
class UTwoHandGripComponent : public UBoxComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0580(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.TwoHandGripComponent");
		return ptr;
	}

};


// Class Pavlov.UIHapticLibrary
// 0x0010 (0x0040 - 0x0030)
class UUIHapticLibrary : public UDataAsset
{
public:
	TArray<class UHapticFeedbackEffect_Base*>          HapticEffects;                                            // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.UIHapticLibrary");
		return ptr;
	}

};


// Class Pavlov.UIManager
// 0x0158 (0x0180 - 0x0028)
class UUIManager : public UObject
{
public:
	class UModal*                                      ModalInstance;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	class UClass*                                      MenuUniverseClass;                                        // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatchmakingView*                            MatchmakingView;                                          // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AMenuUniverseView*                           FriendGamesView;                                          // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
	class UClass*                                      MatchmakingViewClass;                                     // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      FriendGamesViewClass;                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<class UClass*, class UUIModel*>               Models;                                                   // 0x0070(0x0050) (ZeroConstructor, Transient)
	class UModal*                                      VotePromptModal;                                          // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UModal*                                      PinPromptModal;                                           // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UModal*                                      ConnectSpinnerModal;                                      // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	EUserInterfaceType                                 Interface;                                                // 0x00D8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	TMap<EUserInterfaceType, EUserInterfaceType>       SideInterfaceMap;                                         // 0x00E0(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0130(0x0018) MISSED OFFSET
	struct FString                                     ConnectingTo;                                             // 0x0148(0x0010) (ZeroConstructor)
	struct FScriptMulticastDelegate                    OnUserInterfaceChanged;                                   // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSideUserInterfaceChanged;                               // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bMenuUniverseEnabled;                                     // 0x0178(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShowMOTD;                                                // 0x0179(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x017A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.UIManager");
		return ptr;
	}


	void ShowMenuUniverse();
	void ShowMatchmaking();
	void SetSideInterface(EUserInterfaceType PrimaryInterface, EUserInterfaceType NewInterface);
	void SetMenuUniverse(bool bEnabled);
	void SetMatchmakingMode(bool bEnabled);
	void SetInterface(EUserInterfaceType NewInterface);
	void OnVotePromptCommit(const struct FModalCommitParams& Params);
	void OnPinPromptDestroyed();
	void OnPinPromptCommit(const struct FModalCommitParams& Params);
	void OnPartyCreated();
	void OnOnlineError(EOnlineError Error, const struct FText& ErrorMessage);
	void OnMatchmakingStatusChanged(EMatchmakingStatus Status);
	void OnJoinServerStateChanged(EOnlineJoinServerState JoinServerState);
	class UModal* K2_CreateModalWithParams(const struct FUICreateModalParams& Params);
	bool IsMenuUniverseEnabled();
	void HideMenuUniverse();
	void HideMatchmaking(bool bForce);
	EUserInterfaceType GetSideInterface();
	class UModal* GetModalInstance();
	class AMenuUniverse* GetMenuUniverse();
	void DismissMOTD();
	class UModal* CreateModalMessageBox(const struct FText& Message, EModalMessageBoxType Type);
	class UModal* CreateModal(class UClass* ModalClass, const struct FString& ModalContent, bool bCreateView);
	void CreateConnectSpinnerModal();
	void ClearModalInstance();
};


// Class Pavlov.UISoundLibrary
// 0x0060 (0x0090 - 0x0030)
class UUISoundLibrary : public UDataAsset
{
public:
	struct FString                                     Namespace;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, class USoundBase*>            Definitions;                                              // 0x0040(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.UISoundLibrary");
		return ptr;
	}

};


// Class Pavlov.VehicleBumper
// 0x0030 (0x05B0 - 0x0580)
class UVehicleBumper : public UBoxComponent
{
public:
	float                                              KillVelocity;                                             // 0x0580(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageVelocity;                                           // 0x0584(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PushVelocity;                                             // 0x0588(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinorHitDamageAmount;                                     // 0x058C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LaunchMultiplier;                                         // 0x0590(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxZLaunch;                                               // 0x0594(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLaunchForce;                                           // 0x0598(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFrontBumper;                                             // 0x059C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTruckBed;                                                // 0x059D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x059E(0x0002) MISSED OFFSET
	class UClass*                                      RunoverDamageClass;                                       // 0x05A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x05A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.VehicleBumper");
		return ptr;
	}


	void OnBumperOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	class APavlovVehicle* GetVehicle();
	void ClearBumper();
};


// Class Pavlov.VehicleInterior
// 0x0038 (0x0360 - 0x0328)
class AVehicleInterior : public AActor
{
public:
	struct FName                                       AttachSocket;                                             // 0x0328(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USceneCaptureComponent2D*                    SceneCapture;                                             // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bCaptureScene;                                            // 0x0338(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	struct FName                                       CaptureSocket;                                            // 0x0340(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTextureRenderTarget2D*                      CaptureTarget;                                            // 0x0348(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   FOVMinMax;                                                // 0x0350(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FOVZoomRate;                                              // 0x0358(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x035C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.VehicleInterior");
		return ptr;
	}


	void ZoomScopeFOV(float ZoomDirection);
	void SetupVehicleInterior(class APavlovVehicle* Vehicle, int Seat, class UVehicleOccupant* VehicleOccupant);
	void SetScopeFOV(float ScopeFOV);
	void SetScopeActive(bool bActive);
	void PlayFireHaptics();
	void OnScopeExploit(bool bExploit);
	void OnPassengerChanged(bool bEnteredVehicle, int Seat, class APavlovPawn* PavPawn);
	void OnInteriorIntialized(class APavlovVehicle* Vehicle, int Seat, class UVehicleOccupant* VehicleOccupant);
	void HideActorInScope(class AActor* HideInScope);
	bool GunnerSocketOverride(struct FName* OverrideSocket);
	TArray<class AActor*> GetScopeHiddenActors();
	float GetScopeFOVAlpha();
	float GetScopeFOV();
	class USceneComponent* GetSceneCaptureParent();
};


// Class Pavlov.VehicleOccupant
// 0x0028 (0x0118 - 0x00F0)
class UVehicleOccupant : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x00F0(0x0001) MISSED OFFSET
	bool                                               bIgnoreSeatRot;                                           // 0x00F1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00F2(0x0002) MISSED OFFSET
	float                                              SeatRotationMax;                                          // 0x00F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHideVehicle;                                             // 0x00F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHidePawn;                                                // 0x00F9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHideInventory;                                           // 0x00FA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanBeDamagedInSeat;                                      // 0x00FB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanPullPin;                                              // 0x00FC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	class AVehicleInterior*                            VehicleInterior;                                          // 0x0100(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseInVehicleSoundMix;                                    // 0x0108(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
	class APavlovVehicle*                              Vehicle;                                                  // 0x0110(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.VehicleOccupant");
		return ptr;
	}


	void SetupInput(class UInputComponent* InputComponent);
	void RetryHideInventory();
	void RemoveVehicleInputServer();
	void PassengerChanged(bool bEnteredVehicle, int Seat, class APavlovPawn* PavPawn);
	bool OnLeaveVehicle();
	void OnEnteredVehicleClient(class APavlovVehicle* Vehicle, int Seat);
	void LeaveVehicleServer();
	bool IsDriver();
	void HideInScope(class AActor* HideActor);
	class APavlovVehicle* GetVehicle();
	struct FTransform GetSeatTransform();
	int GetSeat();
	class APavlovPawn* GetPawn();
	void ClientEnteredVehicle(class APavlovVehicle* InVehicle, int Seat);
	bool CanSendInput();
};


// Class Pavlov.VehicleOccupant_Prototyping
// 0x0000 (0x0118 - 0x0118)
class UVehicleOccupant_Prototyping : public UVehicleOccupant
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.VehicleOccupant_Prototyping");
		return ptr;
	}


	void TriggerAxisRight(float Value);
	void TriggerAxisLeft(float Value);
	void ThrottleServer(float Value);
	void SteerServer(float Value);
	void MoveX(float Value);
};


// Class Pavlov.VehicleOccupant_Tank_Driver
// 0x0010 (0x0128 - 0x0118)
class UVehicleOccupant_Tank_Driver : public UVehicleOccupant
{
public:
	bool                                               bBindTriggerInput;                                        // 0x0118(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	float                                              LeftLever;                                                // 0x011C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RightLever;                                               // 0x0120(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x0124(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.VehicleOccupant_Tank_Driver");
		return ptr;
	}


	void UpdateMovementInput();
	void TriggerAxisRight(float Value);
	void TriggerAxisLeft(float Value);
	class UTankVehicleMovement* GetTankMovementComponent();
};


// Class Pavlov.VehicleOccupant_Tank_Gunner
// 0x0000 (0x0118 - 0x0118)
class UVehicleOccupant_Tank_Gunner : public UVehicleOccupant
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.VehicleOccupant_Tank_Gunner");
		return ptr;
	}


	void SetMachineGunRotation(const struct FRotator& MGRot);
	void ServerSetMGRotation(const struct FRotator& MGRot);
	void RightTriggerReleased();
	void RightTriggerPressed();
	void RightTrigger(bool bPressed);
	void LeftTriggerReleased();
	void LeftTriggerPressed();
	void LeftTrigger(bool bPressed);
};


// Class Pavlov.VehicleOccupant_Tank_Turret
// 0x0050 (0x0168 - 0x0118)
class UVehicleOccupant_Tank_Turret : public UVehicleOccupant
{
public:
	struct FScriptMulticastDelegate                    OnTriggerDown;                                            // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bUseAdvancedInput;                                        // 0x0128(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0129(0x0003) MISSED OFFSET
	float                                              YawHapticThreshold;                                       // 0x012C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PitchHapticThreshold;                                     // 0x0130(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	class UHapticFeedbackEffect_Base*                  YawHapticsEffect;                                         // 0x0138(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  PitchHapticsEffect;                                       // 0x0140(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   InputTurretRotation;                                      // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   LastSentInput;                                            // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              LastScopeFOVAlpha;                                        // 0x0158(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              YawInputHaptics;                                          // 0x015C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PitchInputHaptics;                                        // 0x0160(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0164(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.VehicleOccupant_Tank_Turret");
		return ptr;
	}


	void TurretZoomInput(float Input);
	void TurretYawInput(float Input);
	void TurretPitchInput(float Input);
	void ServerSetTurretRotation(const struct FVector2D& TurretRot, float ScopeFOV);
	void RightTriggerPressed();
	void OnAdvancedVehicleSettingsChanged(bool bUseAdvanced);
	void LeftTriggerPressed();
	void AddTurretYaw(float Yaw);
	void AddTurretPitch(float Pitch);
};


// Class Pavlov.VehicleSeat
// 0x0030 (0x0270 - 0x0240)
class UVehicleSeat : public USceneComponent
{
public:
	float                                              CameraOffset;                                             // 0x0240(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SeatBounds;                                               // 0x0244(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxZDistance;                                             // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ThirdPersonSeatOffset;                                    // 0x0250(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    PelvisOffset;                                             // 0x025C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SeatAnim;                                                 // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.VehicleSeat");
		return ptr;
	}

};


// Class Pavlov.VehicleSpawner
// 0x0048 (0x0370 - 0x0328)
class AVehicleSpawner : public AActor
{
public:
	class UBillboardComponent*                         SpawnMarker;                                              // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             ArrowComp;                                                // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	TArray<struct FName>                               VehicleSpawnList;                                         // 0x0338(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              VehicleRespawnTime;                                       // 0x0348(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              InitialRespawnTime;                                       // 0x034C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                VehicleTeamID;                                            // 0x0350(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VehicleDespawnTime;                                       // 0x0354(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlySpawnInPush;                                         // 0x0358(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0359(0x0003) MISSED OFFSET
	int                                                ObjectiveId;                                              // 0x035C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                SpawnVehicle_Handle;                                      // 0x0360(0x0008)
	class APavlovVehicle*                              LastSpawnedVehicle;                                       // 0x0368(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.VehicleSpawner");
		return ptr;
	}


	void VehicleDestroyed(class AActor* DestroyedActor);
	void StopVehicleSpawner();
	void StartVehicleSpawner();
	void OnGetVehicleClass(class UClass* VehicleClass);
};


// Class Pavlov.VoiceComponent
// 0x0050 (0x0290 - 0x0240)
class UVoiceComponent : public USceneComponent
{
public:
	class USoundWaveProcedural*                        Sound;                                                    // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0248(0x0008) MISSED OFFSET
	bool                                               bTalking;                                                 // 0x0250(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0251(0x0003) MISSED OFFSET
	float                                              IdleTime;                                                 // 0x0254(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x0258(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x025C(0x0004) MISSED OFFSET
	class USoundAttenuation*                           Attenuation;                                              // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FSoundSourceBusSendInfo>             PreEffectBusSends;                                        // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundEffectSourcePresetChain*               SourceEffectChain;                                        // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundClass*                                 SoundClass;                                               // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0288(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.VoiceComponent");
		return ptr;
	}


	void OnEnvelopeValue(class USoundWave* PlayingSoundWave, float Value);
};


// Class Pavlov.VoiceManager
// 0x0050 (0x0378 - 0x0328)
class AVoiceManager : public AActor
{
public:
	TMap<class APlayerState*, struct FPavlovVoicePacket> VoicePackets;                                             // 0x0328(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.VoiceManager");
		return ptr;
	}

};


// Class Pavlov.VoiceModerationInstance
// 0x0040 (0x0088 - 0x0048)
class UVoiceModerationInstance : public UPavlovObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0048(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.VoiceModerationInstance");
		return ptr;
	}

};


// Class Pavlov.VoiceRouter
// 0x0028 (0x0350 - 0x0328)
class AVoiceRouter : public AActor
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0328(0x0024) MISSED OFFSET
	bool                                               bAllMuted;                                                // 0x034C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x034D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.VoiceRouter");
		return ptr;
	}


	void ServerOnVoice(const struct FPavlovVoicePacket& VoicePacket);
	void OnEncodedVoiceData(TArray<unsigned char> EncodedVoiceData);
	void ClientOnVoiceBunch(const struct FVoicePacketBunch& VoiceBunch);
};


// Class Pavlov.VoiceSource
// 0x00A8 (0x00F0 - 0x0048)
class UVoiceSource : public UPavlovObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0048(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.VoiceSource");
		return ptr;
	}


	void SetCapture(bool bEnabled);
	void ResetCaptureDevice(const struct FString& DeviceName);
	bool IsCapturing();
	bool IsBroadcasting();
};


// Class Pavlov.Vote
// 0x00C0 (0x0410 - 0x0350)
class AVote : public AStereoOverlay
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0350(0x0050) MISSED OFFSET
	unsigned char                                      YesVotes;                                                 // 0x03A0(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NoVotes;                                                  // 0x03A1(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      TimeLeft;                                                 // 0x03A2(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	EVoteState                                         State;                                                    // 0x03A3(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CensusNum;                                                // 0x03A4(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03A5(0x0003) MISSED OFFSET
	int                                                TeamId;                                                   // 0x03A8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	struct FString                                     VoteInstigatorName;                                       // 0x03B0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	struct FString                                     VoteInstigator;                                           // 0x03C0(0x0010) (Net, ZeroConstructor)
	struct FString                                     Param1;                                                   // 0x03D0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	int                                                Param2;                                                   // 0x03E0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              VoteTimer;                                                // 0x03E4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Percentage;                                               // 0x03E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTeamVote;                                                // 0x03EC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03ED(0x0003) MISSED OFFSET
	float                                              VoteDuration;                                             // 0x03F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Cooldown;                                                 // 0x03F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GraceDuration;                                            // 0x03F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIgnoreModerators;                                        // 0x03FC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03FD(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnVoteEnd;                                                // 0x0400(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Vote");
		return ptr;
	}


	void OnVoteEnded(bool bSucceeded);
	void MulticastOnVoteEnded(bool bSucceeded);
	struct FText GetVotePromptMessage();
};


// Class Pavlov.Watch
// 0x0050 (0x06F0 - 0x06A0)
class UWatch : public UTextureWidgetComponent
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x06A0(0x0014) MISSED OFFSET
	float                                              Health;                                                   // 0x06B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Armor;                                                    // 0x06B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasHelmet;                                               // 0x06BC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06BD(0x0003) MISSED OFFSET
	class UTexture2D*                                  VictimAvatar;                                             // 0x06C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              KillConfirmationOpacity;                                  // 0x06C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              KillConfirmationDuration;                                 // 0x06CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KillConfirmationFadeSpeed;                                // 0x06D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x06D4(0x0004) MISSED OFFSET
	class USoundCue*                                   KillConfirmationSound;                                    // 0x06D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  KillConfirmationFailoverAvatar;                           // 0x06E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x06E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Watch");
		return ptr;
	}


	void OnKillfeedEntry(const struct FKillfeedEntry& NewEntry);
	void OnKillConfirmationPush(class APavlovPlayerState* Victim);
	class USceneComponent* GetWatchAttachComponent();
};


// Class Pavlov.Waypoint
// 0x0028 (0x0350 - 0x0328)
class AWaypoint : public AActor
{
public:
	TArray<struct FWaypointInfo>                       WaypointInfos;                                            // 0x0328(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET
	class AWaypoint*                                   NextA;                                                    // 0x0340(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AWaypoint*                                   NextB;                                                    // 0x0348(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Waypoint");
		return ptr;
	}


	class AWaypoint* GetNextWaypointTo(class AWaypoint* TargetWaypoint, int Seed);
	class AWaypoint* STATIC_GetClosestWaypoint(class UObject* WorldContextObject, const struct FVector& Location, bool bOnlyLeaf, bool bUseNavMesh);
};


// Class Pavlov.WeaponFilterData
// 0x0030 (0x0060 - 0x0030)
class UWeaponFilterData : public UDataAsset
{
public:
	TArray<class UClass*>                              RiflesOnlyClasses;                                        // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              PistolsOnlyClasses;                                       // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      GrenadesOnlyClass;                                        // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      KnivesOnlyClass;                                          // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.WeaponFilterData");
		return ptr;
	}


	class UClass* GetRandomRifle();
	class UClass* GetRandomPistol();
};


// Class Pavlov.WebleyGunState
// 0x0000 (0x0180 - 0x0180)
class UWebleyGunState : public URevolverGunState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.WebleyGunState");
		return ptr;
	}

};


// Class Pavlov.Workshop
// 0x0478 (0x04A0 - 0x0028)
class UWorkshop : public UObject
{
public:
	unsigned char                                      UnknownData00[0x220];                                     // 0x0028(0x0220) MISSED OFFSET
	TMap<struct FName, class UTexture2D*>              MapPreviews;                                              // 0x0248(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x109];                                     // 0x0298(0x0109) MISSED OFFSET
	bool                                               bQueryingCustomMaps;                                      // 0x03A1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x03A2(0x0006) MISSED OFFSET
	TArray<struct FWorkshopItem>                       CustomMaps;                                               // 0x03A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bSteamServerConnected;                                    // 0x03B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET
	class UPavlovGameInstance*                         Instance;                                                 // 0x03C0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x50];                                      // 0x03C8(0x0050) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCustomMapDownloadCompleted;                             // 0x0418(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSpecificCustomMapQueryCompleted;                        // 0x0428(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCustomMapQueryCompleted;                                // 0x0438(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSubscriptionChanged;                                    // 0x0448(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDownloadBegin;                                          // 0x0458(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDownloadProgress;                                       // 0x0468(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPreviewLoaded;                                          // 0x0478(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRequestUserVote;                                        // 0x0488(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0498(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Workshop");
		return ptr;
	}


	void Vote(const struct FName& ID, bool bUp);
	void Unsubscribe(const struct FName& ID);
	void SubscribeTo(const struct FName& ID);
	void RequestUserVote(const struct FName& ID);
	void QueryForSpecificCustomMaps(TArray<struct FName> UniqueIds);
	void QueryForCustomMaps(EWorkshopQueryType QueryType);
	int QueryDownloadProgress();
	void OnCustomMapDownloaded(bool bSucceed, const struct FString& ID);
	void OnAfterMount();
	bool IsSubscribedTo(const struct FName& ID);
	bool IsDownloadingMap();
	bool IsCustomMapId(const struct FString& CustomMapId);
	class UTexture2D* GetPreviewTexture(const struct FName& ID);
	struct FName GetCurrentDownloadId();
	void DownloadTest();
	void DownloadCustomMap(const struct FString& ID);
	void CheckForDownload();
};


// Class Pavlov.WoundAux
// 0x0090 (0x03B8 - 0x0328)
class AWoundAux : public AActor
{
public:
	struct FWoundInfo                                  WoundInfo;                                                // 0x0328(0x0030) (BlueprintVisible, BlueprintReadOnly)
	struct FName                                       PreBakedName;                                             // 0x0358(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FPreBakedWound                              PreBakedData;                                             // 0x0360(0x0050) (BlueprintVisible, BlueprintReadOnly)
	class UWoundComponent*                             WoundComponent;                                           // 0x03B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.WoundAux");
		return ptr;
	}


	class UAvatarSkin* GetAvatarSkin();
	struct FName GetAttachSocket();
};


// Class Pavlov.WoundComponent
// 0x01F8 (0x02E8 - 0x00F0)
class UWoundComponent : public UActorComponent
{
public:
	class USkeletalMeshComponent*                      GoreMeshComp;                                             // 0x00F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SkullMeshComp;                                            // 0x00F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class AWoundAux*>                           WoundAuxs;                                                // 0x0100(0x0010) (ZeroConstructor, Transient)
	TMap<struct FName, struct FWoundBoneState>         BoneStates;                                               // 0x0110(0x0050) (ZeroConstructor, Transient)
	EWoundMaterialType                                 MaterialType;                                             // 0x0160(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0161(0x0007) MISSED OFFSET
	TMap<int, struct FVector4>                         MinorWounds;                                              // 0x0168(0x0050) (ZeroConstructor, Transient)
	TMap<int, struct FPreBakedWound>                   MajorWounds;                                              // 0x01B8(0x0050) (ZeroConstructor, Transient)
	class USkeletalMeshComponent*                      MasterPoseComponent;                                      // 0x0208(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FWoundMeshInstance>                  Instances;                                                // 0x0210(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                MinorHitCount;                                            // 0x0220(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxMinorHits;                                             // 0x0224(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinorWoundScale;                                          // 0x0228(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MajorHitCount;                                            // 0x022C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxMajorHits;                                             // 0x0230(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowMajorHitRecycle;                                    // 0x0234(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowDynamicLookup;                                      // 0x0235(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0236(0x0002) MISSED OFFSET
	TMap<class UMaterialInterface*, struct FWoundMaterialSet> MaterialMap;                                              // 0x0238(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      BloodPuddleClass;                                         // 0x0288(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  PreBakedWounds;                                           // 0x0290(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HeadBoneName;                                             // 0x0298(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               GoreMesh;                                                 // 0x02A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DismemberSound;                                           // 0x02A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DismemberParticle;                                        // 0x02B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FMemberFX>                           MemberFXSetup;                                            // 0x02B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnDismember;                                              // 0x02C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMaterialCreated;                                        // 0x02D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.WoundComponent");
		return ptr;
	}


	void UpdateBaseMesh(class USkeletalMeshComponent* MeshComponent, class USkeletalMesh* UpdateMesh);
	void SetMasterPoseComponent(class USkeletalMeshComponent* MeshComponent);
	void ResetWounds();
	void ReportHit(const struct FWoundInfo& WoundInfo);
	struct FWoundBoneState GetBoneState(const struct FName& BoneName);
	void ApplyInheritedCustomDepthValues(class UMeshComponent* MeshComponent);
	void AddMesh(class USkeletalMeshComponent* MeshComponent);
};


// Class Pavlov.Zombie
// 0x0100 (0x0930 - 0x0830)
class AZombie : public AZAICharacter
{
public:
	class UWoundComponent*                             WoundComponent;                                           // 0x0830(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0838(0x0048) MISSED OFFSET
	float                                              Health;                                                   // 0x0880(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0884(0x0004) MISSED OFFSET
	struct FZombieHitInfo                              LastHitInfo;                                              // 0x0888(0x0038) (Net)
	class UDataTable*                                  BalanceTable;                                             // 0x08C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxHealth;                                                // 0x08C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x08CC(0x0004) MISSED OFFSET
	class USoundCue*                                   HitSound;                                                 // 0x08D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   HitSoundShooter;                                          // 0x08D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             HitEffect;                                                // 0x08E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   HeadshotSound;                                            // 0x08E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   HeadshotSound2D;                                          // 0x08F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ThirdPersonKnockBackSound;                                // 0x08F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             HeadshotParticle;                                         // 0x0900(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USurfaceFXAsset*                             SprintFootStepFX;                                         // 0x0908(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USurfaceFXAsset*                             JockeyFootStepFX;                                         // 0x0910(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USurfaceFXAsset*                             WalkFootStepFX;                                           // 0x0918(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USurfaceFXAsset*                             LandedFX;                                                 // 0x0920(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WoundClass;                                               // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Zombie");
		return ptr;
	}


	void OnWoundMaterialCreated(class UMaterialInstanceDynamic* MaterialInstance);
	void MulticastOnRadialDeath(const struct FVector_NetQuantize& Origin);
	void MulticastOnHit(const struct FZombieHitInfo& HitInfo);
	class UWoundComponent* GetWoundComponent();
	void ApplyLastHitEffect();
};


// Class Pavlov.ZombieAIController
// 0x0000 (0x0438 - 0x0438)
class AZombieAIController : public AAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ZombieAIController");
		return ptr;
	}

};


// Class Pavlov.ZombieAnimInstance
// 0x0000 (0x0360 - 0x0360)
class UZombieAnimInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ZombieAnimInstance");
		return ptr;
	}

};


// Class Pavlov.ZombieSkeletalMeshComponent
// 0x0030 (0x0B60 - 0x0B30)
class UZombieSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0B30(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ZombieSkeletalMeshComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
