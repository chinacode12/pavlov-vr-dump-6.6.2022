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

// Enum CoherentRenderingPlugin.ECoherentRenderingSettingsSeverity
enum class ECoherentRenderingSettingsSeverity : uint8_t
{
	ECoherentRenderingSettingsSeverity__Trace = 0,
	ECoherentRenderingSettingsSeverity__Debug = 1,
	ECoherentRenderingSettingsSeverity__Info = 2,
	ECoherentRenderingSettingsSeverity__Warning = 3,
	ECoherentRenderingSettingsSeverity__AssertFailure = 4,
	ECoherentRenderingSettingsSeverity__Error = 5,
	ECoherentRenderingSettingsSeverity__ECoherentRenderingSettingsSeverity_MAX = 6
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
