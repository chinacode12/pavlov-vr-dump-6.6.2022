#pragma once

// Name: Pavlov_internal, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum HapticsManager.EFeedbackMotors
enum class EFeedbackMotors : uint8_t
{
	EFeedbackMotors__Head          = 0,
	EFeedbackMotors__Chest         = 1,
	EFeedbackMotors__LArm          = 2,
	EFeedbackMotors__RArm          = 3,
	EFeedbackMotors__LLeg          = 4,
	EFeedbackMotors__RLeg          = 5,
	EFeedbackMotors__EFeedbackMotors_MAX = 6
};


// Enum HapticsManager.EPosition
enum class EPosition : uint8_t
{
	EPosition__VestFront           = 0,
	EPosition__VestBack            = 1,
	EPosition__Head                = 2,
	EPosition__ForearmL            = 3,
	EPosition__ForearmR            = 4,
	EPosition__HandL               = 5,
	EPosition__HandR               = 6,
	EPosition__FootL               = 7,
	EPosition__FootR               = 8,
	EPosition__Left                = 9,
	EPosition__Right               = 10,
	EPosition__Default             = 11,
	EPosition__EPosition_MAX       = 12
};


// Enum HapticsManager.EFeedbackMode
enum class EFeedbackMode : uint8_t
{
	EFeedbackMode__PATH_MODE       = 0,
	EFeedbackMode__DOT_MODE        = 1,
	EFeedbackMode__EFeedbackMode_MAX = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct HapticsManager.Device
// 0x0050
struct FDevice
{
	struct FString                                     DeviceName;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     Address;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     Position;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                Battery;                                                  // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     ConnectionStatus;                                         // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	bool                                               IsPaired;                                                 // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct HapticsManager.PathPoint
// 0x0010
struct FPathPoint
{
	float                                              X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Intensity;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MotorCount;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct HapticsManager.RotationOption
// 0x0008
struct FRotationOption
{
	float                                              OffsetAngleX;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OffsetY;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct HapticsManager.ScaleOption
// 0x0008
struct FScaleOption
{
	float                                              Intensity;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct HapticsManager.DotPoint
// 0x0008
struct FDotPoint
{
	int                                                Index;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Intensity;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct HapticsManager.BodyHaptics
// 0x0020
struct FBodyHaptics
{
	class UFeedbackFile*                               HeadHaptics;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFeedbackFile*                               ChestHaptics;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFeedbackFile*                               LArmHaptics;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFeedbackFile*                               RArmHaptics;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct HapticsManager.HitHaptics
// 0x0008 (0x0010 - 0x0008)
struct FHitHaptics : public FTableRowBase
{
	EFeedbackMotors                                    FeedbackMotors;                                           // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct HapticsManager.HapticFrame
// 0x0038
struct FHapticFrame
{
	int                                                DurationMillis;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Position;                                                 // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FPathPoint>                          PathPoints;                                               // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FDotPoint>                           DotPoints;                                                // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct HapticsManager.SubmitRequest
// 0x00A8
struct FSubmitRequest
{
	struct FString                                     Type;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Key;                                                      // 0x0010(0x0010) (ZeroConstructor)
	TMap<struct FString, struct FString>               Parameters;                                               // 0x0020(0x0050) (ZeroConstructor)
	struct FHapticFrame                                Frame;                                                    // 0x0070(0x0038)
};

// ScriptStruct HapticsManager.RegisterRequest
// 0x0020
struct FRegisterRequest
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct HapticsManager.PlayerRequest
// 0x0020
struct FPlayerRequest
{
	TArray<struct FRegisterRequest>                    Register;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FSubmitRequest>                      Submit;                                                   // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct HapticsManager.PlayerResponse
// 0x0048
struct FPlayerResponse
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct HapticsManager.HapticFeedback
// 0x0018
struct FHapticFeedback
{
	EPosition                                          Position;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFeedbackMode                                      Mode;                                                     // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<unsigned char>                              Values;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
