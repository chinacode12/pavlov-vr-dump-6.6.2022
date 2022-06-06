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

// Enum CohtmlPlugin.ECohtmlKeys
enum class ECohtmlKeys : uint8_t
{
	ECohtmlKeys__LeftMouseButton   = 0,
	ECohtmlKeys__RightMouseButton  = 1,
	ECohtmlKeys__MiddleMouseButton = 2,
	ECohtmlKeys__ThumbMouseButton  = 3,
	ECohtmlKeys__ThumbMouseButton2 = 4,
	ECohtmlKeys__BackSpace         = 5,
	ECohtmlKeys__Tab               = 6,
	ECohtmlKeys__Enter             = 7,
	ECohtmlKeys__Pause             = 8,
	ECohtmlKeys__CapsLock          = 9,
	ECohtmlKeys__Escape            = 10,
	ECohtmlKeys__SpaceBar          = 11,
	ECohtmlKeys__PageUp            = 12,
	ECohtmlKeys__PageDown          = 13,
	ECohtmlKeys__End               = 14,
	ECohtmlKeys__Home              = 15,
	ECohtmlKeys__Left              = 16,
	ECohtmlKeys__Up                = 17,
	ECohtmlKeys__Right             = 18,
	ECohtmlKeys__Down              = 19,
	ECohtmlKeys__Insert            = 20,
	ECohtmlKeys__Delete            = 21,
	ECohtmlKeys__Zero              = 22,
	ECohtmlKeys__One               = 23,
	ECohtmlKeys__Two               = 24,
	ECohtmlKeys__Three             = 25,
	ECohtmlKeys__Four              = 26,
	ECohtmlKeys__Five              = 27,
	ECohtmlKeys__Six               = 28,
	ECohtmlKeys__Seven             = 29,
	ECohtmlKeys__Eight             = 30,
	ECohtmlKeys__Nine              = 31,
	ECohtmlKeys__A                 = 32,
	ECohtmlKeys__B                 = 33,
	ECohtmlKeys__C                 = 34,
	ECohtmlKeys__D                 = 35,
	ECohtmlKeys__E                 = 36,
	ECohtmlKeys__F                 = 37,
	ECohtmlKeys__G                 = 38,
	ECohtmlKeys__H                 = 39,
	ECohtmlKeys__I                 = 40,
	ECohtmlKeys__J                 = 41,
	ECohtmlKeys__K                 = 42,
	ECohtmlKeys__L                 = 43,
	ECohtmlKeys__M                 = 44,
	ECohtmlKeys__N                 = 45,
	ECohtmlKeys__O                 = 46,
	ECohtmlKeys__P                 = 47,
	ECohtmlKeys__Q                 = 48,
	ECohtmlKeys__R                 = 49,
	ECohtmlKeys__S                 = 50,
	ECohtmlKeys__T                 = 51,
	ECohtmlKeys__U                 = 52,
	ECohtmlKeys__V                 = 53,
	ECohtmlKeys__W                 = 54,
	ECohtmlKeys__X                 = 55,
	ECohtmlKeys__Y                 = 56,
	ECohtmlKeys__Z                 = 57,
	ECohtmlKeys__NumPadZero        = 58,
	ECohtmlKeys__NumPadOne         = 59,
	ECohtmlKeys__NumPadTwo         = 60,
	ECohtmlKeys__NumPadThree       = 61,
	ECohtmlKeys__NumPadFour        = 62,
	ECohtmlKeys__NumPadFive        = 63,
	ECohtmlKeys__NumPadSix         = 64,
	ECohtmlKeys__NumPadSeven       = 65,
	ECohtmlKeys__NumPadEight       = 66,
	ECohtmlKeys__NumPadNine        = 67,
	ECohtmlKeys__Multiply          = 68,
	ECohtmlKeys__Add               = 69,
	ECohtmlKeys__Subtract          = 70,
	ECohtmlKeys__Decimal           = 71,
	ECohtmlKeys__Divide            = 72,
	ECohtmlKeys__F1                = 73,
	ECohtmlKeys__F2                = 74,
	ECohtmlKeys__F3                = 75,
	ECohtmlKeys__F4                = 76,
	ECohtmlKeys__F5                = 77,
	ECohtmlKeys__F6                = 78,
	ECohtmlKeys__F7                = 79,
	ECohtmlKeys__F8                = 80,
	ECohtmlKeys__F9                = 81,
	ECohtmlKeys__F10               = 82,
	ECohtmlKeys__F11               = 83,
	ECohtmlKeys__F12               = 84,
	ECohtmlKeys__NumLock           = 85,
	ECohtmlKeys__ScrollLock        = 86,
	ECohtmlKeys__LeftShift         = 87,
	ECohtmlKeys__RightShift        = 88,
	ECohtmlKeys__LeftControl       = 89,
	ECohtmlKeys__RightControl      = 90,
	ECohtmlKeys__LeftAlt           = 91,
	ECohtmlKeys__RightAlt          = 92,
	ECohtmlKeys__LeftCommand       = 93,
	ECohtmlKeys__RightCommand      = 94,
	ECohtmlKeys__Semicolon         = 95,
	ECohtmlKeys__Equals            = 96,
	ECohtmlKeys__Comma             = 97,
	ECohtmlKeys__Underscore        = 98,
	ECohtmlKeys__Period            = 99,
	ECohtmlKeys__Slash             = 100,
	ECohtmlKeys__Tilde             = 101,
	ECohtmlKeys__LeftBracket       = 102,
	ECohtmlKeys__Backslash         = 103,
	ECohtmlKeys__RightBracket      = 104,
	ECohtmlKeys__Quote             = 105,
	ECohtmlKeys__Unknown           = 106,
	ECohtmlKeys__ECohtmlKeys_MAX   = 107
};


// Enum CohtmlPlugin.ECohtmlImageFormat
enum class ECohtmlImageFormat : uint8_t
{
	ECohtmlImageFormat__PNG        = 0,
	ECohtmlImageFormat__TGA        = 1,
	ECohtmlImageFormat__JPEG       = 2,
	ECohtmlImageFormat__PSD        = 3,
	ECohtmlImageFormat__SVG        = 4,
	ECohtmlImageFormat__DDS        = 5,
	ECohtmlImageFormat__BMP        = 6,
	ECohtmlImageFormat__ASTC       = 7,
	ECohtmlImageFormat__PKM        = 8,
	ECohtmlImageFormat__KTX        = 9,
	ECohtmlImageFormat__ECohtmlImageFormat_MAX = 10
};


// Enum CohtmlPlugin.ECohtmlMSAA
enum class ECohtmlMSAA : uint8_t
{
	ECohtmlMSAA__MSAA_1x           = 0,
	ECohtmlMSAA__MSAA_2x           = 1,
	ECohtmlMSAA__MSAA_4x           = 2,
	ECohtmlMSAA__MSAA_MAX          = 3
};


// Enum CohtmlPlugin.ECohtmlInputPropagationBehaviour
enum class ECohtmlInputPropagationBehaviour : uint8_t
{
	ECohtmlInputPropagationBehaviour__None = 0,
	ECohtmlInputPropagationBehaviour__Keyboard = 1,
	ECohtmlInputPropagationBehaviour__Joystick = 2,
	ECohtmlInputPropagationBehaviour__KeyboardAndJoystick = 3,
	ECohtmlInputPropagationBehaviour__ECohtmlInputPropagationBehaviour_MAX = 4
};


// Enum CohtmlPlugin.ECohtmlInputWidgetLineTraceMode
enum class ECohtmlInputWidgetLineTraceMode : uint8_t
{
	CohtmlInputLineTrace_Single    = 0,
	CohtmlInputLineTrace_Multi     = 1,
	CohtmlInputLineTrace_MAX       = 2
};


// Enum CohtmlPlugin.ECohtmlInputWidgetRaycastQuality
enum class ECohtmlInputWidgetRaycastQuality : uint8_t
{
	CohtmlRaycastQuality_Fast      = 0,
	CohtmlRaycastQuality_Balanced  = 1,
	CohtmlRaycastQuality_Accurate  = 2,
	CohtmlRaycastQuality_MAX       = 3
};


// Enum CohtmlPlugin.ECohtmlGamepadBehaviourOnFocusLost
enum class ECohtmlGamepadBehaviourOnFocusLost : uint8_t
{
	CohtmlResetState               = 0,
	CohtmlUseCurrentState          = 1,
	CohtmlUseStateBeforeReset      = 2,
	ECohtmlGamepadBehaviourOnFocusLost_MAX = 3
};


// Enum CohtmlPlugin.ECohtmlSettingsSeverity
enum class ECohtmlSettingsSeverity : uint8_t
{
	ECohtmlSettingsSeverity__Trace = 0,
	ECohtmlSettingsSeverity__Debug = 1,
	ECohtmlSettingsSeverity__Info  = 2,
	ECohtmlSettingsSeverity__Warning = 3,
	ECohtmlSettingsSeverity__AssertFailure = 4,
	ECohtmlSettingsSeverity__Error = 5,
	ECohtmlSettingsSeverity__ECohtmlSettingsSeverity_MAX = 6
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CohtmlPlugin.CohtmlSound
// 0x0018
struct FCohtmlSound
{
	class UAudioComponent*                             Component;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundWaveProcedural*                        Stream;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct CohtmlPlugin.SingleFormatFallbacks
// 0x0018
struct FSingleFormatFallbacks
{
	ECohtmlImageFormat                                 BaseFormat;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<ECohtmlImageFormat>                         PossibleFallbacks;                                        // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct CohtmlPlugin.TextureAtlasMetaData
// 0x0100
struct FTextureAtlasMetaData
{
	TMap<struct FString, class UCohtmlAtlasContainedTextures*> AtlasContainedTextures;                                   // 0x0000(0x0050) (ZeroConstructor)
	TMap<struct FString, class UCohtmlTextureAtlasDetails*> AtlasDetails;                                             // 0x0050(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x60];                                      // 0x00A0(0x0060) MISSED OFFSET
};

// ScriptStruct CohtmlPlugin.TextureAtlasMappingInfo
// 0x0020
struct FTextureAtlasMappingInfo
{
	struct FString                                     AtlasPath;                                                // 0x0000(0x0010) (ZeroConstructor)
	int                                                Width;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OriginX;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OriginY;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CohtmlPlugin.CohtmlViewSettings
// 0x0010
struct FCohtmlViewSettings
{
	int                                                Width;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsTransparent;                                            // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              AnimationFrameDefer;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
