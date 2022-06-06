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

// Function Pavlov.ActionGunState.SetAction
struct UActionGunState_SetAction_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.ActionGunState.OpenAction
struct UActionGunState_OpenAction_Params
{
};

// Function Pavlov.ActionGunState.CloseAction
struct UActionGunState_CloseAction_Params
{
};

// Function Pavlov.AirdropPlane.GeneratePath
struct AAirdropPlane_GeneratePath_Params
{
	struct FVector                                     DropLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.AirplaneRoyale.StartTravel
struct AAirplaneRoyale_StartTravel_Params
{
};

// Function Pavlov.AirplaneRoyale.SetAsBase
struct AAirplaneRoyale_SetAsBase_Params
{
	class APavlovPawn*                                 Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.AirplaneRoyale.OnRep_Traveled
struct AAirplaneRoyale_OnRep_Traveled_Params
{
};

// Function Pavlov.AirplaneRoyale.ClearBase
struct AAirplaneRoyale_ClearBase_Params
{
	class APavlovPawn*                                 Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.AmmoBox.SetAmmoCount
struct AAmmoBox_SetAmmoCount_Params
{
	int                                                NewAmmoCount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.AmmoBox.RemoveAmmo
struct AAmmoBox_RemoveAmmo_Params
{
	int                                                RemoveAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.AmmoBox.OnRep_AmmoCount
struct AAmmoBox_OnRep_AmmoCount_Params
{
};

// Function Pavlov.AmmoBox.OnAmmoCountChanged
struct AAmmoBox_OnAmmoCountChanged_Params
{
};

// Function Pavlov.AmmoBox.GetAmmoType
struct AAmmoBox_GetAmmoType_Params
{
	EAmmoType                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.AmmoBox.AddAmmo
struct AAmmoBox_AddAmmo_Params
{
	int                                                AddAmount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Attachment.TryAttach
struct AAttachment_TryAttach_Params
{
	unsigned char                                      SlideModeSlot;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayFailureSound;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bSliding;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Attachment.SetSelectionEnable
struct AAttachment_SetSelectionEnable_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Attachment.OnSlideModeChanged
struct AAttachment_OnSlideModeChanged_Params
{
	bool                                               bSlideMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Attachment.OnGunTickChanged
struct AAttachment_OnGunTickChanged_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Attachment.OnAttachmentModeChanged
struct AAttachment_OnAttachmentModeChanged_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Attachment.MakeSlideModeSlot
struct AAttachment_MakeSlideModeSlot_Params
{
	class AGun*                                        Gun;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Attachment.GunTick
struct AAttachment_GunTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Attachment.GetSlideTransform
struct AAttachment_GetSlideTransform_Params
{
	struct FTransform                                  SlideTransform;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Attachment.GetSlideModeSlot
struct AAttachment_GetSlideModeSlot_Params
{
	unsigned char                                      SlideModeSlot;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Attachment.GetGrabLoc
struct AAttachment_GetGrabLoc_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Attachment.ClearSlideGun
struct AAttachment_ClearSlideGun_Params
{
};

// Function Pavlov.Attachment.CanAttach
struct AAttachment_CanAttach_Params
{
	class AGun*                                        Gun;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceAttach;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Attachment.AttachToGunServer
struct AAttachment_AttachToGunServer_Params
{
	class AGun*                                        Gun;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SlideModeSlot;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Attachment.AttachToGun
struct AAttachment_AttachToGun_Params
{
	class AGun*                                        Gun;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceAttach;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.AttachmentAccessory.SetAccessoryActive_Server
struct AAttachmentAccessory_SetAccessoryActive_Server_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.AttachmentAccessory.SetAccessoryActive
struct AAttachmentAccessory_SetAccessoryActive_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.AttachmentAccessory.OnRep_AccessoryOn
struct AAttachmentAccessory_OnRep_AccessoryOn_Params
{
};

// Function Pavlov.AttachmentAccessory.OnAccessoryStateChanged
struct AAttachmentAccessory_OnAccessoryStateChanged_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.AttachmentAccessory.IsAccessoryOn
struct AAttachmentAccessory_IsAccessoryOn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.AttachmentAccessory.CheckDropped
struct AAttachmentAccessory_CheckDropped_Params
{
};

// Function Pavlov.AttachmentAccessory_Bayonet.StabPlayerMulti
struct AAttachmentAccessory_Bayonet_StabPlayerMulti_Params
{
	bool                                               bSlashed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.AttachmentAccessory_Bayonet.StabPlayer
struct AAttachmentAccessory_Bayonet_StabPlayer_Params
{
	struct FBayonetDamage                              BayonetDamage;                                            // (Parm)
};

// Function Pavlov.AttachmentAccessory_Bayonet.OnSwitchToBlood
struct AAttachmentAccessory_Bayonet_OnSwitchToBlood_Params
{
};

// Function Pavlov.AttachmentCanted.OnFlipCantedSight
struct AAttachmentCanted_OnFlipCantedSight_Params
{
	bool                                               bRightHanded;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.AttachmentSight.UpdateScopeHiddenActors
struct AAttachmentSight_UpdateScopeHiddenActors_Params
{
};

// Function Pavlov.AttachmentSight.SetScopeActive
struct AAttachmentSight_SetScopeActive_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.AttachmentSight.OnScopeExploit
struct AAttachmentSight_OnScopeExploit_Params
{
	bool                                               bExploit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.AttachmentSight.GetLenseMesh
struct AAttachmentSight_GetLenseMesh_Params
{
	int                                                MaterialIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMeshComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.AttachmentSight.DebugFOVAngle
struct AAttachmentSight_DebugFOVAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.AttachmentSight.ApplyZeroing
struct AAttachmentSight_ApplyZeroing_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.AttachProxy.SetupOwnerAttachment
struct AAttachProxy_SetupOwnerAttachment_Params
{
	struct FAttachProxyInfo                            NewAttachInfo;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.AttachProxy.SetAttachInfo
struct AAttachProxy_SetAttachInfo_Params
{
	struct FAttachProxyInfo                            NewAttachInfo;                                            // (Parm)
};

// Function Pavlov.AttachProxy.OwnerKilled
struct AAttachProxy_OwnerKilled_Params
{
	class AActor*                                      Killed;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.AttachProxy.OnRep_AttachInfo
struct AAttachProxy_OnRep_AttachInfo_Params
{
};

// Function Pavlov.AttachProxy.OnParentDestroyed
struct AAttachProxy_OnParentDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.AvatarSkin.Update
struct UAvatarSkin_Update_Params
{
};

// Function Pavlov.AvatarSkin.SetStencilValue
struct UAvatarSkin_SetStencilValue_Params
{
	unsigned char                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.AvatarSkin.SetRenderToCustomDepth
struct UAvatarSkin_SetRenderToCustomDepth_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.AvatarSkin.RemoveUsedComponent
struct UAvatarSkin_RemoveUsedComponent_Params
{
	class UActorComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Pavlov.AvatarSkin.OptimizeAvatar
struct UAvatarSkin_OptimizeAvatar_Params
{
	class USkeletalMeshComponent*                      PawnAvatar;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Pavlov.AvatarSkin.GetPawn
struct UAvatarSkin_GetPawn_Params
{
	class APavlovPawn*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.AvatarSkin.GetBaseMeshComponent
struct UAvatarSkin_GetBaseMeshComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.AvatarSkin.CreateChildSkeletalMeshComponent
struct UAvatarSkin_CreateChildSkeletalMeshComponent_Params
{
	class USkeletalMesh*                               SkeletalMesh;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.AvatarSkin.AddUsedComponent
struct UAvatarSkin_AddUsedComponent_Params
{
	class UActorComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Pavlov.AvatarSkinCustom.SetCustomMesh
struct UAvatarSkinCustom_SetCustomMesh_Params
{
	struct FName                                       MeshName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               CustomHandMesh;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.AzureGameMode.Travel
struct AAzureGameMode_Travel_Params
{
};

// Function Pavlov.AzureServer.SoftTick
struct UAzureServer_SoftTick_Params
{
};

// Function Pavlov.PavlovGameMode.TerminateGameSession
struct APavlovGameMode_TerminateGameSession_Params
{
};

// Function Pavlov.PavlovGameMode.SwitchTeam
struct APavlovGameMode_SwitchTeam_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.Suicide
struct APavlovGameMode_Suicide_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.StopReplayRecording
struct APavlovGameMode_StopReplayRecording_Params
{
};

// Function Pavlov.PavlovGameMode.StartReplayRecording
struct APavlovGameMode_StartReplayRecording_Params
{
};

// Function Pavlov.PavlovGameMode.SpawnVehicleWRef
struct APavlovGameMode_SpawnVehicleWRef_Params
{
	struct FAsyncVehicleSpawnData                      AsyncVehicleSpawnData;                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.SpawnVehicleForPawn
struct APavlovGameMode_SpawnVehicleForPawn_Params
{
	class APavlovPawn*                                 Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.SpawnVehicle
struct APavlovGameMode_SpawnVehicle_Params
{
	struct FTransform                                  SpawnTransform;                                           // (ConstParm, Parm, IsPlainOldData)
	struct FName                                       VehicleID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.SpawnPlayer
struct APavlovGameMode_SpawnPlayer_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.SpawnPavlovPawn
struct APavlovGameMode_SpawnPavlovPawn_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class APavlovPawn*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.SpawnAndPossesPawns
struct APavlovGameMode_SpawnAndPossesPawns_Params
{
};

// Function Pavlov.PavlovGameMode.ShuffleTeams
struct APavlovGameMode_ShuffleTeams_Params
{
};

// Function Pavlov.PavlovGameMode.SetTTTRoundEndSoundEnabled
struct APavlovGameMode_SetTTTRoundEndSoundEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.SetTeamLockTime
struct APavlovGameMode_SetTeamLockTime_Params
{
	float                                              LockTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.SetTeamCash
struct APavlovGameMode_SetTeamCash_Params
{
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CashAmmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.SetRoundState
struct APavlovGameMode_SetRoundState_Params
{
	EPavlovRoundState                                  State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.SetPlayerScore
struct APavlovGameMode_SetPlayerScore_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.SetPawnsInvulnerable
struct APavlovGameMode_SetPawnsInvulnerable_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.SetMovement
struct APavlovGameMode_SetMovement_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.SetLimitedAmmoMode
struct APavlovGameMode_SetLimitedAmmoMode_Params
{
	unsigned char                                      LimitedAmmoType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.SetInactivityThresholds
struct APavlovGameMode_SetInactivityThresholds_Params
{
	int                                                NewInactivityThreashold;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewInactivityDormantThreashold;                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.SetGrenadePinPrevention
struct APavlovGameMode_SetGrenadePinPrevention_Params
{
	bool                                               bPreventGrenadePins;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.SetEveryoneCash
struct APavlovGameMode_SetEveryoneCash_Params
{
	int                                                CashAmmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.SetAttackingTeam
struct APavlovGameMode_SetAttackingTeam_Params
{
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.RotateMap
struct APavlovGameMode_RotateMap_Params
{
};

// Function Pavlov.PavlovGameMode.ResetSNDMatch
struct APavlovGameMode_ResetSNDMatch_Params
{
};

// Function Pavlov.PavlovGameMode.ResetScore
struct APavlovGameMode_ResetScore_Params
{
};

// Function Pavlov.PavlovGameMode.ReplenishPlayersAmmo
struct APavlovGameMode_ReplenishPlayersAmmo_Params
{
};

// Function Pavlov.PavlovGameMode.ReplaceVehicleSpawners
struct APavlovGameMode_ReplaceVehicleSpawners_Params
{
};

// Function Pavlov.PavlovGameMode.RefreshOutOfBounds
struct APavlovGameMode_RefreshOutOfBounds_Params
{
};

// Function Pavlov.PavlovGameMode.PunishTeamKiller
struct APavlovGameMode_PunishTeamKiller_Params
{
	class APavlovPlayerState*                          TeamKiller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.PostStats
struct APavlovGameMode_PostStats_Params
{
};

// Function Pavlov.PavlovGameMode.PostRoundCleanUp
struct APavlovGameMode_PostRoundCleanUp_Params
{
};

// Function Pavlov.PavlovGameMode.OnSteamTicketValidation
struct APavlovGameMode_OnSteamTicketValidation_Params
{
	struct FString                                     SteamUserId;                                              // (Parm, ZeroConstructor)
	ESteamAuthResponse                                 Response;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OwnerSteamUserId;                                         // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovGameMode.OnspawnVehicleWRefAsync
struct APavlovGameMode_OnspawnVehicleWRefAsync_Params
{
	class UClass*                                      VehicleClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAsyncVehicleSpawnData                      AsyncVehicleSpawnData;                                    // (Parm)
};

// Function Pavlov.PavlovGameMode.OnSpawnVehicleAsync
struct APavlovGameMode_OnSpawnVehicleAsync_Params
{
	class UClass*                                      VehicleClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SpawnTransform;                                           // (ConstParm, Parm, IsPlainOldData)
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.OnRoundStateChanged
struct APavlovGameMode_OnRoundStateChanged_Params
{
	EPavlovRoundState                                  OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EPavlovRoundState                                  NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.OnPlayerSpawned
struct APavlovGameMode_OnPlayerSpawned_Params
{
	class APavlovPlayerState*                          PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPawn*                                 Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.OnPlayerKilled
struct APavlovGameMode_OnPlayerKilled_Params
{
	class APavlovPlayerState*                          PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPawn*                                 Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.OnPawnKilled
struct APavlovGameMode_OnPawnKilled_Params
{
	class AActor*                                      OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.OnOutOfBoundsOverlap
struct APavlovGameMode_OnOutOfBoundsOverlap_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.OnOutOfBoundsEndOverlap
struct APavlovGameMode_OnOutOfBoundsEndOverlap_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.OnLimitedAmmoModeChanged
struct APavlovGameMode_OnLimitedAmmoModeChanged_Params
{
	ELimitedAmmoType                                   LimitedAmmoType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.OnKillVolumeOverlap
struct APavlovGameMode_OnKillVolumeOverlap_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.MakeNavmeshStatic
struct APavlovGameMode_MakeNavmeshStatic_Params
{
};

// Function Pavlov.PavlovGameMode.LogSNDWinner
struct APavlovGameMode_LogSNDWinner_Params
{
	int                                                LogRound;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LogTeamID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.LogBombExplosion
struct APavlovGameMode_LogBombExplosion_Params
{
};

// Function Pavlov.PavlovGameMode.LogBomb
struct APavlovGameMode_LogBomb_Params
{
	class AController*                                 Interactor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBombPlanted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.KickByStringId
struct APavlovGameMode_KickByStringId_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FText                                       KickReason;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bBan;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.KickByPlayerState
struct APavlovGameMode_KickByPlayerState_Params
{
	class APavlovPlayerState*                          PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       KickReason;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bBan;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToBlacklist;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.IsTeamDead
struct APavlovGameMode_IsTeamDead_Params
{
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.InitializedVehicleSpawners
struct APavlovGameMode_InitializedVehicleSpawners_Params
{
	bool                                               bHasSpawners;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.IncrementTeamScore
struct APavlovGameMode_IncrementTeamScore_Params
{
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.IncrementPlayerScore
struct APavlovGameMode_IncrementPlayerScore_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.GiveTeamCash
struct APavlovGameMode_GiveTeamCash_Params
{
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CashAmmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.GiveItem
struct APavlovGameMode_GiveItem_Params
{
	class APavlovPawn*                                 Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlockDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoaded;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.GiveEveryoneCash
struct APavlovGameMode_GiveEveryoneCash_Params
{
	int                                                CashAmmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.GetTeamStatus
struct APavlovGameMode_GetTeamStatus_Params
{
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Casualties;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.GetTeamRealPlayerCount
struct APavlovGameMode_GetTeamRealPlayerCount_Params
{
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.GetSteamAudioGun
struct APavlovGameMode_GetSteamAudioGun_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovGameMode.GetSpawnPointsForQuery
struct APavlovGameMode_GetSpawnPointsForQuery_Params
{
	int                                                NumOfSpawnPoints;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class APlayerSpawnPoint*>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovGameMode.GetRoundNumber
struct APavlovGameMode_GetRoundNumber_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.GetRealPlayerCount
struct APavlovGameMode_GetRealPlayerCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.GetRandomController
struct APavlovGameMode_GetRandomController_Params
{
	int                                                TeamFilter;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRealPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.GetMaxPlayerCount
struct APavlovGameMode_GetMaxPlayerCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.GetKillZHeight
struct APavlovGameMode_GetKillZHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.GetKillReward
struct APavlovGameMode_GetKillReward_Params
{
	class APavlovPlayerState*                          Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPlayerState*                          Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageTrackInfo                            LastHitInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.GetDynamicSpawnPointForTeam
struct APavlovGameMode_GetDynamicSpawnPointForTeam_Params
{
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerSpawnPoint*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.GetDynamicOccludedSpawnPoint
struct APavlovGameMode_GetDynamicOccludedSpawnPoint_Params
{
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerSpawnPoint*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.FinalizeMapSwitch
struct APavlovGameMode_FinalizeMapSwitch_Params
{
};

// Function Pavlov.PavlovGameMode.FinalizeMapRotation
struct APavlovGameMode_FinalizeMapRotation_Params
{
};

// Function Pavlov.PavlovGameMode.EndTTTRound
struct APavlovGameMode_EndTTTRound_Params
{
};

// Function Pavlov.PavlovGameMode.EnableFallDamage
struct APavlovGameMode_EnableFallDamage_Params
{
	bool                                               bFallEnabled;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.DestroyPushSpawns
struct APavlovGameMode_DestroyPushSpawns_Params
{
};

// Function Pavlov.PavlovGameMode.DestroyBot
struct APavlovGameMode_DestroyBot_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.CreateDedicatedServerSession
struct APavlovGameMode_CreateDedicatedServerSession_Params
{
};

// Function Pavlov.PavlovGameMode.CreateBot
struct APavlovGameMode_CreateBot_Params
{
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.CleanUpItems
struct APavlovGameMode_CleanUpItems_Params
{
};

// Function Pavlov.PavlovGameMode.CanRotateMap
struct APavlovGameMode_CanRotateMap_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.CanChangeScore
struct APavlovGameMode_CanChangeScore_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.AssignPlayerSkin
struct APavlovGameMode_AssignPlayerSkin_Params
{
	class APavlovPlayerState*                          PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPawn*                                 Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.AddTTTGameInfo
struct APavlovGameMode_AddTTTGameInfo_Params
{
	class UClass*                                      TTTGameInfoClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UTTTGameInfo*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.AddStatByController
struct APavlovGameMode_AddStatByController_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EPlayerStats                                       PlayerStat;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.AddStat
struct APavlovGameMode_AddStat_Params
{
	class APavlovPlayerState*                          PavPlayerState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	EPlayerStats                                       PlayerStat;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.AddExtraRoundTime
struct APavlovGameMode_AddExtraRoundTime_Params
{
	float                                              ExtraTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.AddAssist
struct APavlovGameMode_AddAssist_Params
{
	class APavlovPlayerState*                          PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.BattlegroundsGameMode.PerformWaitingHeartBeat
struct ABattlegroundsGameMode_PerformWaitingHeartBeat_Params
{
};

// Function Pavlov.BattlegroundsGameMode.PerformGameHeartBeat
struct ABattlegroundsGameMode_PerformGameHeartBeat_Params
{
};

// Function Pavlov.BloodPuddle.OnPour
struct ABloodPuddle_OnPour_Params
{
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.BloodPuddle.OnOwnerEndPlay
struct ABloodPuddle_OnOwnerEndPlay_Params
{
	class AActor*                                      OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.BloodSplatGeometry.FadeOut
struct ABloodSplatGeometry_FadeOut_Params
{
};

// Function Pavlov.Bomb.ResetBombPosition
struct ABomb_ResetBombPosition_Params
{
};

// Function Pavlov.Bomb.PlantAt
struct ABomb_PlantAt_Params
{
	class ABombPlantSpot*                              Spot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Bomb.OnPlayerOcclusionChange
struct ABomb_OnPlayerOcclusionChange_Params
{
	bool                                               bNewOccluded;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Bomb.OnPlanted
struct ABomb_OnPlanted_Params
{
};

// Function Pavlov.Bomb.OnGrace
struct ABomb_OnGrace_Params
{
};

// Function Pavlov.Bomb.OnDetonation
struct ABomb_OnDetonation_Params
{
};

// Function Pavlov.Bomb.OnDefuse
struct ABomb_OnDefuse_Params
{
};

// Function Pavlov.Bomb.OnCodeReset
struct ABomb_OnCodeReset_Params
{
};

// Function Pavlov.Bomb.OnButtonPressed
struct ABomb_OnButtonPressed_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Bomb.OnBeep
struct ABomb_OnBeep_Params
{
};

// Function Pavlov.Bomb.MulticastOnPlantAt
struct ABomb_MulticastOnPlantAt_Params
{
	class ABombPlantSpot*                              Spot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Bomb.MulticastOnGrace
struct ABomb_MulticastOnGrace_Params
{
};

// Function Pavlov.Bomb.MulticastOnEnterCode
struct ABomb_MulticastOnEnterCode_Params
{
	bool                                               bSucceed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Bomb.MulticastOnDetonation
struct ABomb_MulticastOnDetonation_Params
{
};

// Function Pavlov.Bomb.MulticastOnDefuse
struct ABomb_MulticastOnDefuse_Params
{
};

// Function Pavlov.Bomb.MulticastOnCodeReset
struct ABomb_MulticastOnCodeReset_Params
{
};

// Function Pavlov.Bomb.MulticastOnBeep
struct ABomb_MulticastOnBeep_Params
{
};

// Function Pavlov.Bomb.IsWireCut
struct ABomb_IsWireCut_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Bomb.IsButtonPressed
struct ABomb_IsButtonPressed_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Bomb.GetWireLocation
struct ABomb_GetWireLocation_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Bomb.GetClosestValidWireIndex
struct ABomb_GetClosestValidWireIndex_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Bomb.ExpireCode
struct ABomb_ExpireCode_Params
{
};

// Function Pavlov.Bomb.EnterDigit
struct ABomb_EnterDigit_Params
{
	int                                                Digit;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Presser;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Bomb.Detonate
struct ABomb_Detonate_Params
{
};

// Function Pavlov.Bomb.Defuse
struct ABomb_Defuse_Params
{
	class AController*                                 Defuser;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Bomb.CutWire
struct ABomb_CutWire_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Defuser;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Bomb.AllowAutoResetBomb
struct ABomb_AllowAutoResetBomb_Params
{
	bool                                               bAutoReset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.BombPlantSpot.UpdateEnabledState
struct ABombPlantSpot_UpdateEnabledState_Params
{
};

// Function Pavlov.BombPlantSpot.SetSpotEnabled
struct ABombPlantSpot_SetSpotEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.BombPlantSpot.ResetSpot
struct ABombPlantSpot_ResetSpot_Params
{
};

// Function Pavlov.BombPlantSpot.OnRep_PlantedHere
struct ABombPlantSpot_OnRep_PlantedHere_Params
{
};

// Function Pavlov.BombPlantSpot.MulticastOnPlantStateChanged
struct ABombPlantSpot_MulticastOnPlantStateChanged_Params
{
	bool                                               bPlanted;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.BootGameMode.OnAsyncLoadCompleted
struct ABootGameMode_OnAsyncLoadCompleted_Params
{
};

// Function Pavlov.Bullet.GetBulletMesh
struct ABullet_GetBulletMesh_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.UberWheel.SetEnabled
struct AUberWheel_SetEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.UberWheel.IsEnabled
struct AUberWheel_IsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.BuyMenu.OnScriptingReady
struct ABuyMenu_OnScriptingReady_Params
{
};

// Function Pavlov.BuyMenu.OnReadyForBindings
struct ABuyMenu_OnReadyForBindings_Params
{
};

// Function Pavlov.BuyMenu.OnCashUpdated
struct ABuyMenu_OnCashUpdated_Params
{
	int                                                Cash;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.BuyMenu.OnBuyingChanged
struct ABuyMenu_OnBuyingChanged_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.BuyMenuData.RemoveBuyMenuSlot
struct UBuyMenuData_RemoveBuyMenuSlot_Params
{
	struct FName                                       ItemName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.BuyMenuData.PropertiesToJson
struct UBuyMenuData_PropertiesToJson_Params
{
	class UJsonUtilsObj*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.BuyMenuData.JsonStringToBuyWheelData
struct UBuyMenuData_JsonStringToBuyWheelData_Params
{
	struct FString                                     JsonString;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.BuyMenuData.GetFilteredList
struct UBuyMenuData_GetFilteredList_Params
{
	class APavlovPlayerState*                          PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FBuyMenuSlot>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.BuyMenuData.CreateBuyMenuData
struct UBuyMenuData_CreateBuyMenuData_Params
{
	struct FString                                     JsonString;                                               // (Parm, ZeroConstructor)
	class UBuyMenuData*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.BuyMenuData.AddBuyMenuSlot
struct UBuyMenuData_AddBuyMenuSlot_Params
{
	struct FBuyMenuSlot                                Slot;                                                     // (Parm)
};

// Function Pavlov.ChamberComponent.ResetChamber
struct UChamberComponent_ResetChamber_Params
{
};

// Function Pavlov.ChamberComponent.OnOverlap
struct UChamberComponent_OnOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.ChamberComponent.OnChamberStateChanged
struct UChamberComponent_OnChamberStateChanged_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EVRGunChamberState                                 OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EVRGunChamberState                                 NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.ChamberComponent.DestroyConstrainedMesh
struct UChamberComponent_DestroyConstrainedMesh_Params
{
};

// Function Pavlov.ChamberComponent.DebugDraw
struct UChamberComponent_DebugDraw_Params
{
};

// Function Pavlov.ChamberComponent.CheckConstraintBreakThreshold
struct UChamberComponent_CheckConstraintBreakThreshold_Params
{
};

// Function Pavlov.ChamberComponent.BreakCheck
struct UChamberComponent_BreakCheck_Params
{
};

// Function Pavlov.ChamberComponent.AllowRemoval
struct UChamberComponent_AllowRemoval_Params
{
};

// Function Pavlov.UIView.OnScriptingReady
struct AUIView_OnScriptingReady_Params
{
};

// Function Pavlov.UIView.OnReadyForBindings
struct AUIView_OnReadyForBindings_Params
{
};

// Function Pavlov.MenuUniverseView.SetVisible
struct AMenuUniverseView_SetVisible_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.MenuUniverseView.SetDockTransformOverride
struct AMenuUniverseView_SetDockTransformOverride_Params
{
	struct FTransform                                  T;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.MenuUniverseView.IsVisible
struct AMenuUniverseView_IsVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.MenuUniverseView.GetUniverseTransform
struct AMenuUniverseView_GetUniverseTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Pavlov.MenuUniverseView.GetTopRightLocation
struct AMenuUniverseView_GetTopRightLocation_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.MenuUniverseView.GetTopLeftLocation
struct AMenuUniverseView_GetTopLeftLocation_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.MenuUniverseView.GetOffset2D
struct AMenuUniverseView_GetOffset2D_Params
{
	struct FVector2D                                   Pivot2D;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.MenuUniverseView.GetOffset
struct AMenuUniverseView_GetOffset_Params
{
	struct FVector2D                                   Pivot2D;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.MenuUniverseView.GetMenuUniverse
struct AMenuUniverseView_GetMenuUniverse_Params
{
	class AMenuUniverse*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.MenuUniverseView.GetCenterLocation
struct AMenuUniverseView_GetCenterLocation_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.MenuUniverseView.GetBottomRightLocation
struct AMenuUniverseView_GetBottomRightLocation_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.MenuUniverseView.GetBottomLeftLocation
struct AMenuUniverseView_GetBottomLeftLocation_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.MenuUniverseView.FadeEnded
struct AMenuUniverseView_FadeEnded_Params
{
};

// Function Pavlov.MenuUniverseView.Fade
struct AMenuUniverseView_Fade_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.MenuUniverseView.ClearDockTransformOverride
struct AMenuUniverseView_ClearDockTransformOverride_Params
{
};

// Function Pavlov.MenuUniverseView.AnimateTo
struct AMenuUniverseView_AnimateTo_Params
{
	struct FVector2D                                   NewPivotLocation;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Rotator;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.ContentView.OnSideInterfaceChanged
struct AContentView_OnSideInterfaceChanged_Params
{
	EUserInterfaceType                                 PrimaryInterface;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	EUserInterfaceType                                 OldInterface;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.ContentView.OnLobbyLeave
struct AContentView_OnLobbyLeave_Params
{
};

// Function Pavlov.ContentView.OnLobbyEnter
struct AContentView_OnLobbyEnter_Params
{
	bool                                               bFailure;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.ContentView.OnInterfaceChanged
struct AContentView_OnInterfaceChanged_Params
{
	EUserInterfaceType                                 OldInterface;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PlayOnlineView.UpdateLobbyData
struct APlayOnlineView_UpdateLobbyData_Params
{
};

// Function Pavlov.PlayOnlineView.OnServerBrowserUpdated
struct APlayOnlineView_OnServerBrowserUpdated_Params
{
};

// Function Pavlov.PlayOnlineView.OnPingUpdated
struct APlayOnlineView_OnPingUpdated_Params
{
	class UServerContainer*                            Container;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PlayOnlineView.OnOnlineError
struct APlayOnlineView_OnOnlineError_Params
{
	EOnlineError                                       Error;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ErrorMessage;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Pavlov.PlayOnlineView.OnMapBrowserDestroyed
struct APlayOnlineView_OnMapBrowserDestroyed_Params
{
};

// Function Pavlov.PlayOnlineView.OnMapBrowserCommit
struct APlayOnlineView_OnMapBrowserCommit_Params
{
	struct FModalCommitParams                          Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Pavlov.PlayOnlineView.OnLobbyPinDestroyed
struct APlayOnlineView_OnLobbyPinDestroyed_Params
{
};

// Function Pavlov.PlayOnlineView.OnLobbyPinCommit
struct APlayOnlineView_OnLobbyPinCommit_Params
{
	struct FModalCommitParams                          Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Pavlov.PlayOnlineView.LobbyTalkCheck
struct APlayOnlineView_LobbyTalkCheck_Params
{
};

// Function Pavlov.ConnectSpinnerModalView.OnWorkshopDownloadProgress
struct AConnectSpinnerModalView_OnWorkshopDownloadProgress_Params
{
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.CosmeticTickActor.CosmeticTick
struct ACosmeticTickActor_CosmeticTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.CustomItem.SpawnItemProxy
struct ACustomItem_SpawnItemProxy_Params
{
	class UClass*                                      CustomItemClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.CustomItem.SetPickDisabled
struct ACustomItem_SetPickDisabled_Params
{
	bool                                               bDisabled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.CustomItem.PlayerDroppedItem
struct ACustomItem_PlayerDroppedItem_Params
{
};

// Function Pavlov.CustomItem.OnRep_CustomProxy
struct ACustomItem_OnRep_CustomProxy_Params
{
};

// Function Pavlov.CustomItem.GetPawn
struct ACustomItem_GetPawn_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.CustomItem.GetItemState
struct ACustomItem_GetItemState_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.CustomItem.GetItemSequence
struct ACustomItem_GetItemSequence_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.CustomItem.GetExcludeSlots
struct ACustomItem_GetExcludeSlots_Params
{
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.CustomItem.DropItem
struct ACustomItem_DropItem_Params
{
	bool                                               bDestroy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.CustomItem.CustomItemDestroyed
struct ACustomItem_CustomItemDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.DamageEffectComponent.OwnerKilled
struct UDamageEffectComponent_OwnerKilled_Params
{
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.DamageEffectComponent.InitComponent
struct UDamageEffectComponent_InitComponent_Params
{
};

// Function Pavlov.DamageEffectComponent.EnableDebugging
struct UDamageEffectComponent_EnableDebugging_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.DamageEffectComponent.DisplayHit
struct UDamageEffectComponent_DisplayHit_Params
{
	struct FVector                                     BulletDirection;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.DamageTrackerComponent.ResetTracking
struct UDamageTrackerComponent_ResetTracking_Params
{
};

// Function Pavlov.DamageTrackerComponent.GetLastHit
struct UDamageTrackerComponent_GetLastHit_Params
{
	struct FDamageTrackInfo                            LastHit;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.DamageTrackerComponent.GatherAssists
struct UDamageTrackerComponent_GatherAssists_Params
{
	TArray<struct FDamageTrackInfo>                    Assists;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function Pavlov.DedicatedServer.TravelNextTick
struct UDedicatedServer_TravelNextTick_Params
{
};

// Function Pavlov.DedicatedServer.OnMapDownloaded
struct UDedicatedServer_OnMapDownloaded_Params
{
	bool                                               bSucceed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Pavlov.DedicatedServer.GetServerDetails
struct UDedicatedServer_GetServerDetails_Params
{
	struct FServerDetails                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Pavlov.PavlovObject.TickByInterval
struct UPavlovObject_TickByInterval_Params
{
};

// Function Pavlov.Destructible.OnShatter
struct ADestructible_OnShatter_Params
{
	struct FVector                                     Normal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Destructible.MulticastOnShatter
struct ADestructible_MulticastOnShatter_Params
{
	struct FVector_NetQuantizeNormal                   Normal;                                                   // (Parm)
	struct FVector_NetQuantize                         Location;                                                 // (Parm)
};

// Function Pavlov.DoubleBarrelGunState.SetBarrel
struct UDoubleBarrelGunState_SetBarrel_Params
{
	bool                                               bOpen;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.FlyingHelmet.ApplyImpulse
struct AFlyingHelmet_ApplyImpulse_Params
{
};

// Function Pavlov.FriendsView.UpdateFriendsModel
struct AFriendsView_UpdateFriendsModel_Params
{
};

// Function Pavlov.GameSessionServer.ReportState
struct UGameSessionServer_ReportState_Params
{
};

// Function Pavlov.GameSessionServer.OnMapDownloaded
struct UGameSessionServer_OnMapDownloaded_Params
{
	bool                                               bSucceed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Pavlov.GameSessionServer.OnDownloadProgress
struct UGameSessionServer_OnDownloadProgress_Params
{
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.GameSessionServer.AttemptToDispatch
struct UGameSessionServer_AttemptToDispatch_Params
{
};

// Function Pavlov.GestureComponent.RegisterGesture
struct UGestureComponent_RegisterGesture_Params
{
	struct FGestureSetup                               Setup;                                                    // (Parm)
};

// Function Pavlov.PavlovItemController.UpdateUIState
struct APavlovItemController_UpdateUIState_Params
{
};

// Function Pavlov.PavlovItemController.SetWheelEnabled
struct APavlovItemController_SetWheelEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovItemController.SetMenu
struct APavlovItemController_SetMenu_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovItemController.SetKillfeed
struct APavlovItemController_SetKillfeed_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovItemController.ReleaseTwoHandGrip
struct APavlovItemController_ReleaseTwoHandGrip_Params
{
};

// Function Pavlov.PavlovItemController.OnTeamIdChanged
struct APavlovItemController_OnTeamIdChanged_Params
{
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovItemController.OnSelectionPicked
struct APavlovItemController_OnSelectionPicked_Params
{
	class AVRItem*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovItemController.IsWheelEnabled
struct APavlovItemController_IsWheelEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovItemController.IsTwoHandReloadEnabled
struct APavlovItemController_IsTwoHandReloadEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovItemController.IsTwoHandGripEnabled
struct APavlovItemController_IsTwoHandGripEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovItemController.IsMenuActive
struct APavlovItemController_IsMenuActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovItemController.GetOppositeHandController
struct APavlovItemController_GetOppositeHandController_Params
{
	class APavlovItemController*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovItemController.GetHandMenuInstance
struct APavlovItemController_GetHandMenuInstance_Params
{
	class AHandMenu*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovItemController.GetFingerPointLocation
struct APavlovItemController_GetFingerPointLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovItemController.ForceTwoHandGrip
struct APavlovItemController_ForceTwoHandGrip_Params
{
};

// Function Pavlov.PavlovItemController.ClientEmptyGrippedHand
struct APavlovItemController_ClientEmptyGrippedHand_Params
{
};

// Function Pavlov.PavlovItemController.ClearWheelInstance
struct APavlovItemController_ClearWheelInstance_Params
{
};

// Function Pavlov.GhostItemController.OnPointModeChanged
struct AGhostItemController_OnPointModeChanged_Params
{
	EGhostPointMode                                    OldPointMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.GhostItemController.ChangePointMode
struct AGhostItemController_ChangePointMode_Params
{
	EGhostPointMode                                    NewPointMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawnBase.GetNonDominantController
struct APavlovPawnBase_GetNonDominantController_Params
{
	class APavlovItemController*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawnBase.GetDominantController
struct APavlovPawnBase_GetDominantController_Params
{
	class APavlovItemController*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.GhostPawn.SpawnTags
struct AGhostPawn_SpawnTags_Params
{
};

// Function Pavlov.GhostPawn.OnTraveledToSpectatorRoom
struct AGhostPawn_OnTraveledToSpectatorRoom_Params
{
};

// Function Pavlov.GhostPawn.OnTeamIdChanged
struct AGhostPawn_OnTeamIdChanged_Params
{
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.GhostPawn.OnGraceTimeEnded
struct AGhostPawn_OnGraceTimeEnded_Params
{
};

// Function Pavlov.GhostPawn.EndGraceTime
struct AGhostPawn_EndGraceTime_Params
{
};

// Function Pavlov.GhostPawn.CreateVoiceComponent
struct AGhostPawn_CreateVoiceComponent_Params
{
};

// Function Pavlov.GhostPawn.ClientTravelToSpectatorRoom
struct AGhostPawn_ClientTravelToSpectatorRoom_Params
{
};

// Function Pavlov.GhostPawn.ClientSpawnKillCam
struct AGhostPawn_ClientSpawnKillCam_Params
{
	struct FKillInfo                                   KillInfo;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function Pavlov.GhostPawn.ClearTags
struct AGhostPawn_ClearTags_Params
{
};

// Function Pavlov.GlobalPlayerEffects.SwitchState
struct AGlobalPlayerEffects_SwitchState_Params
{
	EPlayerEffectState                                 NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.GlobalPlayerEffects.ResetGlobalEffects
struct AGlobalPlayerEffects_ResetGlobalEffects_Params
{
};

// Function Pavlov.GlobalPlayerEffects.InstigateFlashVision
struct AGlobalPlayerEffects_InstigateFlashVision_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ViewAlpha;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.GlobalPlayerEffects.InstigateFlash
struct AGlobalPlayerEffects_InstigateFlash_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ViewAlpha;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.GlobalPlayerEffects.GetFlashDuration
struct AGlobalPlayerEffects_GetFlashDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.GlobalPlayerEffects.DisableWindSound
struct AGlobalPlayerEffects_DisableWindSound_Params
{
};

// Function Pavlov.Grenade.ServerRestoreSafetyPin
struct AGrenade_ServerRestoreSafetyPin_Params
{
};

// Function Pavlov.Grenade.ServerRemoveSafetyPin
struct AGrenade_ServerRemoveSafetyPin_Params
{
};

// Function Pavlov.Grenade.ServerReleaseSafetyLever
struct AGrenade_ServerReleaseSafetyLever_Params
{
	float                                              PinPull;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Grenade.RemoveSafetyPin
struct AGrenade_RemoveSafetyPin_Params
{
};

// Function Pavlov.Grenade.ReleaseSafetyLever
struct AGrenade_ReleaseSafetyLever_Params
{
	float                                              PinPull;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Grenade.PullSafetyPin
struct AGrenade_PullSafetyPin_Params
{
	float                                              Ratio;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Grenade.OnRep_ProjectileActive
struct AGrenade_OnRep_ProjectileActive_Params
{
};

// Function Pavlov.Grenade.OnReleaseSafetyLever
struct AGrenade_OnReleaseSafetyLever_Params
{
};

// Function Pavlov.Grenade.OnProjectileStop
struct AGrenade_OnProjectileStop_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.Grenade.OnProjectileBounce
struct AGrenade_OnProjectileBounce_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.Grenade.OnPinReinserted
struct AGrenade_OnPinReinserted_Params
{
};

// Function Pavlov.Grenade.OnDetonation
struct AGrenade_OnDetonation_Params
{
};

// Function Pavlov.Grenade.MulticastThrow
struct AGrenade_MulticastThrow_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Grenade.MulticastOnSafetyPinRemoved
struct AGrenade_MulticastOnSafetyPinRemoved_Params
{
};

// Function Pavlov.Grenade.MulticastOnReleaseSafetyLever
struct AGrenade_MulticastOnReleaseSafetyLever_Params
{
};

// Function Pavlov.Grenade.MulticastOnDetonation
struct AGrenade_MulticastOnDetonation_Params
{
};

// Function Pavlov.Grenade.GetHolidayLeverSound
struct AGrenade_GetHolidayLeverSound_Params
{
	class USoundCue*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Grenade.FixClientPin
struct AGrenade_FixClientPin_Params
{
};

// Function Pavlov.Grenade.Detonate
struct AGrenade_Detonate_Params
{
};

// Function Pavlov.Grenade.CanPullPin
struct AGrenade_CanPullPin_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Gun.UpdateCanRemoveAttachments
struct AGun_UpdateCanRemoveAttachments_Params
{
};

// Function Pavlov.Gun.ToggleAccessory_Server
struct AGun_ToggleAccessory_Server_Params
{
};

// Function Pavlov.Gun.ToggleAccessory
struct AGun_ToggleAccessory_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Gun.SupportsSuppressorAttachments
struct AGun_SupportsSuppressorAttachments_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Gun.SupportsSightAttachments
struct AGun_SupportsSightAttachments_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Gun.SupportsGripAttachments
struct AGun_SupportsGripAttachments_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Gun.SupportsCantedAttachments
struct AGun_SupportsCantedAttachments_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Gun.SupportsAttachments
struct AGun_SupportsAttachments_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Gun.SupportsAccessoryAttachments
struct AGun_SupportsAccessoryAttachments_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Gun.StartSlideInputSound
struct AGun_StartSlideInputSound_Params
{
};

// Function Pavlov.Gun.SpawnAndAttachLowEndSight
struct AGun_SpawnAndAttachLowEndSight_Params
{
};

// Function Pavlov.Gun.SlideInputSound
struct AGun_SlideInputSound_Params
{
	float                                              SlideInput;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Gun.SetupBulletSkin
struct AGun_SetupBulletSkin_Params
{
	class UStaticMeshComponent*                        BulletMesh;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Pavlov.Gun.SetAccessoryDrawDistance
struct AGun_SetAccessoryDrawDistance_Params
{
	bool                                               bLocallyOwned;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        OptimizeMesh;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Pavlov.Gun.ResetAttachmentMode
struct AGun_ResetAttachmentMode_Params
{
};

// Function Pavlov.Gun.RecoilDrop
struct AGun_RecoilDrop_Params
{
};

// Function Pavlov.Gun.OptimizeGun
struct AGun_OptimizeGun_Params
{
	bool                                               bLocallyOwned;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Gun.OnUnderExploitChanged
struct AGun_OnUnderExploitChanged_Params
{
	bool                                               bUnderExploit;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Gun.OnTwoHandGripChanged
struct AGun_OnTwoHandGripChanged_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Gun.OnSpawnUnloaded
struct AGun_OnSpawnUnloaded_Params
{
};

// Function Pavlov.Gun.OnSliderUngrabbed
struct AGun_OnSliderUngrabbed_Params
{
};

// Function Pavlov.Gun.OnSliderInputReceived
struct AGun_OnSliderInputReceived_Params
{
	struct FVector                                     Input;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InputDelta;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Gun.OnSliderGrabbed
struct AGun_OnSliderGrabbed_Params
{
};

// Function Pavlov.Gun.OnSlideModeChanged
struct AGun_OnSlideModeChanged_Params
{
	bool                                               bSliding;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Gun.OnRecoilDropCooldown
struct AGun_OnRecoilDropCooldown_Params
{
};

// Function Pavlov.Gun.OnAttachModeChanged
struct AGun_OnAttachModeChanged_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bJustPicked;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Gun.OnAttachmentChanged
struct AGun_OnAttachmentChanged_Params
{
};

// Function Pavlov.Gun.MulticastOnRecoilDrop
struct AGun_MulticastOnRecoilDrop_Params
{
};

// Function Pavlov.Gun.IsUnderExploit
struct AGun_IsUnderExploit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Gun.IsInAttachmentMode
struct AGun_IsInAttachmentMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Gun.IsBeingGrippedBy
struct AGun_IsBeingGrippedBy_Params
{
	class APavlovItemController*                       ByController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Gun.IsBeingGripped
struct AGun_IsBeingGripped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Gun.IsAttachmentCompatible
struct AGun_IsAttachmentCompatible_Params
{
	class UClass*                                      GunClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AttachmentClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Gun.HasAttachment
struct AGun_HasAttachment_Params
{
	class UClass*                                      AttachmentClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Gun.GetPicatinnySlideSpacer
struct AGun_GetPicatinnySlideSpacer_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Gun.GetChamberMesh
struct AGun_GetChamberMesh_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.Gun.GetAttachmentSocket
struct AGun_GetAttachmentSocket_Params
{
	class UClass*                                      AttachmentClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Gun.GetAttachmentNames
struct AGun_GetAttachmentNames_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.Gun.GetAttachmentList
struct AGun_GetAttachmentList_Params
{
	TArray<class AAttachment*>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.Gun.BayonetDamage_Server
struct AGun_BayonetDamage_Server_Params
{
	struct FBayonetDamage                              BayonetDamage;                                            // (Parm)
};

// Function Pavlov.SkinComponent.LoadSkin
struct USkinComponent_LoadSkin_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.GunSkinComponent.HasBulletMaterial
struct UGunSkinComponent_HasBulletMaterial_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.GunSkinComponent.GetBulletMaterial
struct UGunSkinComponent_GetBulletMaterial_Params
{
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.HealEffectComponent.OwnerKilled
struct UHealEffectComponent_OwnerKilled_Params
{
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.HealEffectComponent.Initialize
struct UHealEffectComponent_Initialize_Params
{
	float                                              HealTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          HealMat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.HighlightInterface.GetHighlightComponents
struct UHighlightInterface_GetHighlightComponents_Params
{
	EHighlightColor                                    HighlightColor;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class UMeshComponent*>                      HighlightMeshes;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function Pavlov.HitBoxProxyComponent.OnBulletOverlap
struct UHitBoxProxyComponent_OnBulletOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.HolsterComponent.TakeItem
struct UHolsterComponent_TakeItem_Params
{
	class APavlovItemController*                       Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.HolsterComponent.ServerTakeItem
struct UHolsterComponent_ServerTakeItem_Params
{
	class APavlovItemController*                       Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.HolsterComponent.ServerHolster
struct UHolsterComponent_ServerHolster_Params
{
	class AVRItem*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.HolsterComponent.OnRep_HolsteredItem
struct UHolsterComponent_OnRep_HolsteredItem_Params
{
};

// Function Pavlov.HolsterComponent.MulticastOnItemHolstered
struct UHolsterComponent_MulticastOnItemHolstered_Params
{
	class AVRItem*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.HolsterComponent.MulticastOnDrop
struct UHolsterComponent_MulticastOnDrop_Params
{
	class AVRItem*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.HolsterComponent.Mirror
struct UHolsterComponent_Mirror_Params
{
};

// Function Pavlov.HolsterComponent.Holster
struct UHolsterComponent_Holster_Params
{
	class AVRItem*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.HolsterComponent.Drop
struct UHolsterComponent_Drop_Params
{
};

// Function Pavlov.HolsterComponent.AttachItemLocally
struct UHolsterComponent_AttachItemLocally_Params
{
};

// Function Pavlov.IconRemover.AddIcons
struct UIconRemover_AddIcons_Params
{
	TArray<class UPrimitiveComponent*>                 IconArray;                                                // (Parm, ZeroConstructor)
};

// Function Pavlov.IconRemover.AddIcon
struct UIconRemover_AddIcon_Params
{
	class UPrimitiveComponent*                         Icon;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Pavlov.ImpairInterface.MarkAsImpaired
struct UImpairInterface_MarkAsImpaired_Params
{
	EImpairedType                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.ImpairInterface.GetImpairedEyesViewPoint
struct UImpairInterface_GetImpairedEyesViewPoint_Params
{
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.InstancedSourceBusComponent.SilenceAudioComponent
struct UInstancedSourceBusComponent_SilenceAudioComponent_Params
{
};

// Function Pavlov.InstancedSourceBusComponent.Play
struct UInstancedSourceBusComponent_Play_Params
{
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceNoOcclusion;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.InstancedSourceBusComponent.OnSourceBusAudioFinished
struct UInstancedSourceBusComponent_OnSourceBusAudioFinished_Params
{
	class UAudioComponent*                             Comp;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Pavlov.InstancedSourceBusComponent.OnAudioFinished
struct UInstancedSourceBusComponent_OnAudioFinished_Params
{
	class UAudioComponent*                             Comp;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Pavlov.InstancedSourceBusComponent.GetAudioComponent
struct UInstancedSourceBusComponent_GetAudioComponent_Params
{
	class UAudioComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.Killfeed.Show
struct AKillfeed_Show_Params
{
};

// Function Pavlov.Killfeed.OnDisplayModeUpdated
struct AKillfeed_OnDisplayModeUpdated_Params
{
};

// Function Pavlov.Killfeed.OnArmKillfeedChanged
struct AKillfeed_OnArmKillfeedChanged_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Killfeed.Hide
struct AKillfeed_Hide_Params
{
};

// Function Pavlov.Knife.StartThrowSound_Multi
struct AKnife_StartThrowSound_Multi_Params
{
};

// Function Pavlov.Knife.StartKnifeThrow
struct AKnife_StartKnifeThrow_Params
{
};

// Function Pavlov.Knife.SpawnKnifeProxy
struct AKnife_SpawnKnifeProxy_Params
{
	struct FAttachProxyInfo                            AttachInfo;                                               // (Parm)
};

// Function Pavlov.Knife.SetBloody
struct AKnife_SetBloody_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Knife.OnRep_Bloody
struct AKnife_OnRep_Bloody_Params
{
};

// Function Pavlov.Knife.OnEndOverlap
struct AKnife_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Knife.OnBloodyChanged
struct AKnife_OnBloodyChanged_Params
{
	bool                                               bNewBloody;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Knife.OnBeginOverlap
struct AKnife_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.Knife.MulticastOnStab
struct AKnife_MulticastOnStab_Params
{
	bool                                               bDead;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Knife.HasSpawnedProxy
struct AKnife_HasSpawnedProxy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Knife.GetKillConfirmationSound2D
struct AKnife_GetKillConfirmationSound2D_Params
{
	class USoundCue*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Knife.GetAlternativeStabSound
struct AKnife_GetAlternativeStabSound_Params
{
	class USoundCue*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Knife.EnableTicking
struct AKnife_EnableTicking_Params
{
};

// Function Pavlov.Knife.DelayDestroyKnife
struct AKnife_DelayDestroyKnife_Params
{
};

// Function Pavlov.Knife.CheckThrowThreshold
struct AKnife_CheckThrowThreshold_Params
{
};

// Function Pavlov.KOTHObjective.UpdateHillMaterial
struct AKOTHObjective_UpdateHillMaterial_Params
{
	class UMaterialInterface*                          UpdateMaterial;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.KOTHObjective.SetHillActive
struct AKOTHObjective_SetHillActive_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.KOTHObjective.OnRep_KOTHState
struct AKOTHObjective_OnRep_KOTHState_Params
{
	EHillState                                         OldKOTHState;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.KOTHObjective.OnRep_KOTHProxy
struct AKOTHObjective_OnRep_KOTHProxy_Params
{
};

// Function Pavlov.KOTHObjective.OnObjectiveInitialized
struct AKOTHObjective_OnObjectiveInitialized_Params
{
};

// Function Pavlov.KOTHObjective.OnHillActive
struct AKOTHObjective_OnHillActive_Params
{
};

// Function Pavlov.KOTHObjective.InitializeFromProxy
struct AKOTHObjective_InitializeFromProxy_Params
{
	class AKOTHObjectiveProxy*                         ObjectiveProxy;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.LimitedAmmoComponent.ShowLimitedAmmoCounter
struct ULimitedAmmoComponent_ShowLimitedAmmoCounter_Params
{
	bool                                               bCounterVisible;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.LimitedAmmoComponent.SetupAmmoUI_Server
struct ULimitedAmmoComponent_SetupAmmoUI_Server_Params
{
	class APavlovPawn*                                 PavPawn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.LimitedAmmoComponent.SetupAmmoCounter_Client
struct ULimitedAmmoComponent_SetupAmmoCounter_Client_Params
{
};

// Function Pavlov.LimitedAmmoComponent.RemoveAmmo
struct ULimitedAmmoComponent_RemoveAmmo_Params
{
	EAmmoType                                          AmmoType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RemoveAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.LimitedAmmoComponent.PlayerDied
struct ULimitedAmmoComponent_PlayerDied_Params
{
	class APavlovPawn*                                 Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.LimitedAmmoComponent.MagToAmmo
struct ULimitedAmmoComponent_MagToAmmo_Params
{
	class AVRMagazine*                                 Mag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.LimitedAmmoComponent.HasAmmoOfType
struct ULimitedAmmoComponent_HasAmmoOfType_Params
{
	EAmmoType                                          AmmoType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.LimitedAmmoComponent.GiveAmmoForBuy
struct ULimitedAmmoComponent_GiveAmmoForBuy_Params
{
	class AVRGun*                                      Gun;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AmmoLimit;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.LimitedAmmoComponent.GetGunAmmoType
struct ULimitedAmmoComponent_GetGunAmmoType_Params
{
	class AVRGun*                                      Gun;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	EAmmoType                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.LimitedAmmoComponent.GetAmmoTypeName
struct ULimitedAmmoComponent_GetAmmoTypeName_Params
{
	EAmmoType                                          AmmoType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.LimitedAmmoComponent.GetAmmoTypeFromName
struct ULimitedAmmoComponent_GetAmmoTypeFromName_Params
{
	struct FName                                       AmmoId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EAmmoType                                          AmmoType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.LimitedAmmoComponent.GetAmmoClassFromType
struct ULimitedAmmoComponent_GetAmmoClassFromType_Params
{
	EAmmoType                                          AmmoType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.LimitedAmmoComponent.GetAmmoClassFromName
struct ULimitedAmmoComponent_GetAmmoClassFromName_Params
{
	struct FName                                       AmmoId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.LimitedAmmoComponent.GetAmmoAmount
struct ULimitedAmmoComponent_GetAmmoAmount_Params
{
	EAmmoType                                          AmmoType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.LimitedAmmoComponent.AddBulkAmmo
struct ULimitedAmmoComponent_AddBulkAmmo_Params
{
	TMap<EAmmoType, int>                               BulkAmmo;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Pavlov.LimitedAmmoComponent.AddAmmo
struct ULimitedAmmoComponent_AddAmmo_Params
{
	EAmmoType                                          AmmoType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.LimitedAmmoBoxlessComponent.AddAmmoBox
struct ULimitedAmmoBoxlessComponent_AddAmmoBox_Params
{
	EAmmoType                                          AmmoType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.LimitedAmmoCounter.ShowAmmoCounter
struct ALimitedAmmoCounter_ShowAmmoCounter_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.LoadoutData.RemoveLoadout
struct ULoadoutData_RemoveLoadout_Params
{
	struct FString                                     LoadoutName;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.LoadoutData.PropertiesToJson
struct ULoadoutData_PropertiesToJson_Params
{
	class UJsonUtilsObj*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.LoadoutData.JsonStringToLoadoutProperties
struct ULoadoutData_JsonStringToLoadoutProperties_Params
{
	struct FString                                     JsonString;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.LoadoutData.CreateLoadoutProperties
struct ULoadoutData_CreateLoadoutProperties_Params
{
	struct FString                                     JsonString;                                               // (Parm, ZeroConstructor)
	class ULoadoutData*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.LoadoutData.CanUseLoadout
struct ULoadoutData_CanUseLoadout_Params
{
	class APavlovPlayerState*                          PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     LoadoutName;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.LoadoutData.AddLoadout
struct ULoadoutData_AddLoadout_Params
{
	struct FString                                     LoadoutName;                                              // (Parm, ZeroConstructor)
	struct FLoadout                                    Loadout;                                                  // (Parm)
};

// Function Pavlov.LobbyStatusModel.OnLobbyStatusMessage
struct ULobbyStatusModel_OnLobbyStatusMessage_Params
{
	struct FString                                     InMessage;                                                // (Parm, ZeroConstructor)
	bool                                               bInDownloading;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InProgress;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.LootSpawner.SetLootIndexByName
struct ALootSpawner_SetLootIndexByName_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bNetUpdate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.LootSpawner.OnRep_LootIndex
struct ALootSpawner_OnRep_LootIndex_Params
{
};

// Function Pavlov.LootSpawner.OnLootChanged
struct ALootSpawner_OnLootChanged_Params
{
	unsigned char                                      Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.LootSpawner.NetworkUpdate
struct ALootSpawner_NetworkUpdate_Params
{
};

// Function Pavlov.LootSpawner.IsClear
struct ALootSpawner_IsClear_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.LootSpawner.GetLootNameByIndex
struct ALootSpawner_GetLootNameByIndex_Params
{
	unsigned char                                      Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.LootSpawner.GetLootName
struct ALootSpawner_GetLootName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.LootSpawner.GetLootIndexByName
struct ALootSpawner_GetLootIndexByName_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.LootSpawner.ClearLoot
struct ALootSpawner_ClearLoot_Params
{
};

// Function Pavlov.MainMenu.OnUpdateScoreboard
struct AMainMenu_OnUpdateScoreboard_Params
{
};

// Function Pavlov.MainMenuView.OnVoteKickModalCommit
struct AMainMenuView_OnVoteKickModalCommit_Params
{
	struct FModalCommitParams                          Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Pavlov.MainMenuView.LeaveImpl
struct AMainMenuView_LeaveImpl_Params
{
};

// Function Pavlov.MainMenuView.ExitGameImpl
struct AMainMenuView_ExitGameImpl_Params
{
};

// Function Pavlov.MapBrowserModel.OnSubscritionChanged
struct UMapBrowserModel_OnSubscritionChanged_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSubscribed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.MapBrowserModel.OnRequestUserVote
struct UMapBrowserModel_OnRequestUserVote_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EWorkshopVoteType                                  VoteType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.MapBrowserModel.OnPreviewLoaded
struct UMapBrowserModel_OnPreviewLoaded_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.MapBrowserModel.OnDownloadProgress
struct UMapBrowserModel_OnDownloadProgress_Params
{
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.MapBrowserModel.OnDownloadBegin
struct UMapBrowserModel_OnDownloadBegin_Params
{
};

// Function Pavlov.MapBrowserModel.OnCustomMapQueryCompleted
struct UMapBrowserModel_OnCustomMapQueryCompleted_Params
{
};

// Function Pavlov.MapBrowserModel.OnCustomMapDownloadCompleted
struct UMapBrowserModel_OnCustomMapDownloadCompleted_Params
{
	bool                                               bSucceed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Pavlov.MapBrowserModel.OnArtificialQueryCompleted
struct UMapBrowserModel_OnArtificialQueryCompleted_Params
{
};

// Function Pavlov.MapValidator.GenerateNewColors
struct AMapValidator_GenerateNewColors_Params
{
};

// Function Pavlov.MapValidator.FlushDebugPoints
struct AMapValidator_FlushDebugPoints_Params
{
};

// Function Pavlov.MapValidator.DrawReflectionCaptureView
struct AMapValidator_DrawReflectionCaptureView_Params
{
};

// Function Pavlov.Matchmaking.UpdatePartyList
struct UMatchmaking_UpdatePartyList_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Matchmaking.SetSettings
struct UMatchmaking_SetSettings_Params
{
	struct FMatchSettings                              NewSettings;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Pavlov.Matchmaking.SetDefaultSettings
struct UMatchmaking_SetDefaultSettings_Params
{
};

// Function Pavlov.Matchmaking.Queue
struct UMatchmaking_Queue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Matchmaking.LeaveParty
struct UMatchmaking_LeaveParty_Params
{
};

// Function Pavlov.Matchmaking.JoinParty
struct UMatchmaking_JoinParty_Params
{
	struct FString                                     NetworkStr;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Matchmaking.IsInQueue
struct UMatchmaking_IsInQueue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Matchmaking.IsConnectingToServer
struct UMatchmaking_IsConnectingToServer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Matchmaking.IsActive
struct UMatchmaking_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Matchmaking.GetPlayerTitleId
struct UMatchmaking_GetPlayerTitleId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.Matchmaking.GetPlayerPlayFabId
struct UMatchmaking_GetPlayerPlayFabId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.Matchmaking.GetPartyInstance
struct UMatchmaking_GetPartyInstance_Params
{
	class UMatchmakingParty*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Matchmaking.GetEntityType
struct UMatchmaking_GetEntityType_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.Matchmaking.GetEntityToken
struct UMatchmaking_GetEntityToken_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.Matchmaking.GetEntityId
struct UMatchmaking_GetEntityId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.Matchmaking.CreateParty
struct UMatchmaking_CreateParty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Matchmaking.Cancel
struct UMatchmaking_Cancel_Params
{
};

// Function Pavlov.MatchmakingParty.IsLocalMemberLeader
struct UMatchmakingParty_IsLocalMemberLeader_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.MatchmakingParty.Hide
struct UMatchmakingParty_Hide_Params
{
};

// Function Pavlov.MatchmakingParty.GetMemberArray
struct UMatchmakingParty_GetMemberArray_Params
{
	TArray<struct FPartyMember>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.MatchmakingParty.GetLeaderEntityId
struct UMatchmakingParty_GetLeaderEntityId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.MatchmakingParty.Broadcast
struct UMatchmakingParty_Broadcast_Params
{
};

// Function Pavlov.MenuUniverse.UpdateDocks
struct AMenuUniverse_UpdateDocks_Params
{
};

// Function Pavlov.MenuUniverse.SetEnabled
struct AMenuUniverse_SetEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.MenuUniverse.OnViewTargetChangingFrom
struct AMenuUniverse_OnViewTargetChangingFrom_Params
{
	class AActor*                                      ViewTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.MenuUniverse.OnSideInterfaceChanged
struct AMenuUniverse_OnSideInterfaceChanged_Params
{
	EUserInterfaceType                                 PrimaryInterface;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	EUserInterfaceType                                 OldInterface;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.MenuUniverse.OnInterfaceChanged
struct AMenuUniverse_OnInterfaceChanged_Params
{
	EUserInterfaceType                                 OldInterface;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.MenuUniverse.OnHeadsetScaleChanged
struct AMenuUniverse_OnHeadsetScaleChanged_Params
{
	float                                              NewScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.MenuUniverse.OnEnableChanged
struct AMenuUniverse_OnEnableChanged_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.MenuUniverse.IsEnabled
struct AMenuUniverse_IsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.MenuUniverse.GetViewById
struct AMenuUniverse_GetViewById_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AMenuUniverseView*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.MenuUniverse.DockView
struct AMenuUniverse_DockView_Params
{
	EMenuUniverseDockingType                           Dock;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ViewId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Order;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.MenuUniverse.CreateView
struct AMenuUniverse_CreateView_Params
{
	class UClass*                                      ViewClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ViewUrlOverride;                                          // (Parm, ZeroConstructor)
	class UObject*                                     ControllerObject;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AMenuUniverseView*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.MenuUniverse.AdjustFacingPivot
struct AMenuUniverse_AdjustFacingPivot_Params
{
};

// Function Pavlov.MenuUniverseController.OnTriggerReleased
struct UMenuUniverseController_OnTriggerReleased_Params
{
};

// Function Pavlov.MenuUniverseController.OnTriggerPressed
struct UMenuUniverseController_OnTriggerPressed_Params
{
};

// Function Pavlov.MenuUniverseController.OnTouchpadY
struct UMenuUniverseController_OnTouchpadY_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.MenuUniverseController.OnTouchpadX
struct UMenuUniverseController_OnTouchpadX_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.MenuUniverseController.OnScrollY
struct UMenuUniverseController_OnScrollY_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.MenuUniverseController.OnScrollX
struct UMenuUniverseController_OnScrollX_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.MenuUniverseController.OnMenuReleased
struct UMenuUniverseController_OnMenuReleased_Params
{
};

// Function Pavlov.MenuUniverseController.OnMenuPressed
struct UMenuUniverseController_OnMenuPressed_Params
{
};

// Function Pavlov.Modal.Commit
struct UModal_Commit_Params
{
	struct FModalCommitParams                          Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Pavlov.ModalMessageBox.SetProgress
struct UModalMessageBox_SetProgress_Params
{
	float                                              NewProgress;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.NameTagWidget.OnAvatarTextureUpdated
struct UNameTagWidget_OnAvatarTextureUpdated_Params
{
	struct FString                                     ProductId;                                                // (Parm, ZeroConstructor)
	struct FString                                     PlatformId;                                               // (Parm, ZeroConstructor)
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.NameTagWidgetTTT.UpdateVis
struct UNameTagWidgetTTT_UpdateVis_Params
{
	class APavlovPlayerState*                          LocalPavPlayerState;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPlayerState*                          OwnerPavPlayerState;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.OculusInputBinding.ApplyEmulated
struct UOculusInputBinding_ApplyEmulated_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.OnlineAuthentication.ResetReLoginCooldown
struct UOnlineAuthentication_ResetReLoginCooldown_Params
{
};

// Function Pavlov.OnlineAuthentication.IsLoggedIn
struct UOnlineAuthentication_IsLoggedIn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.OnlineAuthentication.GetLocalPlatformId
struct UOnlineAuthentication_GetLocalPlatformId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.OnlineAuthentication.GetDisplayName
struct UOnlineAuthentication_GetDisplayName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.OnlineLeaderboards.QueryLeaderboardRanks
struct UOnlineLeaderboards_QueryLeaderboardRanks_Params
{
	struct FString                                     LeaderboardId;                                            // (Parm, ZeroConstructor)
	int                                                MaxResults;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.OnlineLobby.SetVoiceChat
struct UOnlineLobby_SetVoiceChat_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.OnlineLobby.SetMemberData
struct UOnlineLobby_SetMemberData_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function Pavlov.OnlineLobby.SetLobbyMemberLimit
struct UOnlineLobby_SetLobbyMemberLimit_Params
{
	int                                                MemberLimit;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.OnlineLobby.SetLobbyData
struct UOnlineLobby_SetLobbyData_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function Pavlov.OnlineLobby.SetFriendsOnly
struct UOnlineLobby_SetFriendsOnly_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.OnlineLobby.OnEncodedVoiceData
struct UOnlineLobby_OnEncodedVoiceData_Params
{
	TArray<unsigned char>                              EncodedVoiceData;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Pavlov.OnlineLobby.OnAvatarUpdated
struct UOnlineLobby_OnAvatarUpdated_Params
{
	struct FString                                     ProductId;                                                // (Parm, ZeroConstructor)
	struct FString                                     PlatformId;                                               // (Parm, ZeroConstructor)
	class UTexture2D*                                  AvatarTexture;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.OnlineLobby.KickAndBan
struct UOnlineLobby_KickAndBan_Params
{
	int                                                MemberIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.OnlineLobby.Kick
struct UOnlineLobby_Kick_Params
{
	int                                                MemberIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.OnlineLobby.IsVoiceChatEnabled
struct UOnlineLobby_IsVoiceChatEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.OnlineLobby.IsMemberTalking
struct UOnlineLobby_IsMemberTalking_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.OnlineLobby.IsLocalUserOwner
struct UOnlineLobby_IsLocalUserOwner_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.OnlineLobby.IsFriendsOnly
struct UOnlineLobby_IsFriendsOnly_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.OnlineLobby.InviteFriends
struct UOnlineLobby_InviteFriends_Params
{
};

// Function Pavlov.OnlineLobby.GetNumLobbyMembers
struct UOnlineLobby_GetNumLobbyMembers_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.OnlineLobby.GetMemberData
struct UOnlineLobby_GetMemberData_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.OnlineLobby.GetLobbyMemberLimit
struct UOnlineLobby_GetLobbyMemberLimit_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.OnlineLobby.GetLobbyId
struct UOnlineLobby_GetLobbyId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.OnlineLobby.GetLobbyData
struct UOnlineLobby_GetLobbyData_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.OnlineManager.OnServerConnectFailure
struct UOnlineManager_OnServerConnectFailure_Params
{
	EConnectorFailureReason                            FailureReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.OnlineManager.OnLoginStatusChanged
struct UOnlineManager_OnLoginStatusChanged_Params
{
	bool                                               bLoggedIn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.OnlineManager.OnErrorEvent
struct UOnlineManager_OnErrorEvent_Params
{
	EOnlineError                                       Error;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ErrorMessage;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Pavlov.OnlineManager.LobbySearch
struct UOnlineManager_LobbySearch_Params
{
	struct FLobbySearchOptions                         SearchOptions;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.OnlineManager.LeaveLobby
struct UOnlineManager_LeaveLobby_Params
{
};

// Function Pavlov.OnlineManager.JoinLobby
struct UOnlineManager_JoinLobby_Params
{
	struct FString                                     LobbyId;                                                  // (Parm, ZeroConstructor)
};

// Function Pavlov.OnlineManager.IsSearchingForLobbies
struct UOnlineManager_IsSearchingForLobbies_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.OnlineManager.GetLobbyInstance
struct UOnlineManager_GetLobbyInstance_Params
{
	class UOnlineLobby*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.OnlineManager.FindLobbyById
struct UOnlineManager_FindLobbyById_Params
{
	struct FString                                     LobbyId;                                                  // (Parm, ZeroConstructor)
};

// Function Pavlov.OnlineManager.CreateLobby
struct UOnlineManager_CreateLobby_Params
{
	int                                                LobbyMemberLimit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPublic;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.OnlinePlatform.GetAvatarByPlayerState
struct UOnlinePlatform_GetAvatarByPlayerState_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.OnlinePlatform.GetAvatar
struct UOnlinePlatform_GetAvatar_Params
{
	struct FString                                     ProductId;                                                // (Parm, ZeroConstructor)
	bool                                               bFailOver;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.OnlinePlatformOculus.OnFriendsUpdated
struct UOnlinePlatformOculus_OnFriendsUpdated_Params
{
};

// Function Pavlov.OnlinePlatformOculus.OnDeepLinkMessage
struct UOnlinePlatformOculus_OnDeepLinkMessage_Params
{
	struct FString                                     ApiName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function Pavlov.OnlinePlatformSteam.OnSteamRichPresenceUpdated
struct UOnlinePlatformSteam_OnSteamRichPresenceUpdated_Params
{
};

// Function Pavlov.OnlineStatics.GetOnlineStats
struct UOnlineStatics_GetOnlineStats_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UOnlineStats*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.OnlineStatics.GetOnlinePlatform
struct UOnlineStatics_GetOnlinePlatform_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UOnlinePlatform*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.OnlineStatics.GetOnlineManager
struct UOnlineStatics_GetOnlineManager_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UOnlineManager*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.OnlineStatics.GetOnlineLeaderboards
struct UOnlineStatics_GetOnlineLeaderboards_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UOnlineLeaderboards*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.OnlineStatics.GetLocalUserIdAsString
struct UOnlineStatics_GetLocalUserIdAsString_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.OnlineStatics.GetLocalDisplayName
struct UOnlineStatics_GetLocalDisplayName_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.OnlineStats.QueryStatsServer
struct UOnlineStats_QueryStatsServer_Params
{
	struct FString                                     ProductUserId;                                            // (Parm, ZeroConstructor)
	struct FString                                     StatName;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.OnlineStats.QueryStatsLocal
struct UOnlineStats_QueryStatsLocal_Params
{
	struct FString                                     StatName;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.OnlineStats.IngestStatsServer
struct UOnlineStats_IngestStatsServer_Params
{
	struct FString                                     ProductUserIdString;                                      // (Parm, ZeroConstructor)
	struct FString                                     StatName;                                                 // (Parm, ZeroConstructor)
	int                                                StatAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.OnlineStats.IngestStatsLocal
struct UOnlineStats_IngestStatsLocal_Params
{
	struct FString                                     StatName;                                                 // (Parm, ZeroConstructor)
	int                                                StatAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.OutOfBoundsComponent.SetGuideToLocation
struct UOutOfBoundsComponent_SetGuideToLocation_Params
{
	struct FVector                                     GuideLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.OutOfBoundsComponent.RecalculateGuide
struct UOutOfBoundsComponent_RecalculateGuide_Params
{
};

// Function Pavlov.OutOfBoundsComponent.PlayDamageSound
struct UOutOfBoundsComponent_PlayDamageSound_Params
{
};

// Function Pavlov.OutOfBoundsComponent.OwnerKilled
struct UOutOfBoundsComponent_OwnerKilled_Params
{
	class AActor*                                      Killed;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.OutOfBoundsComponent.OutOfBounds_Server
struct UOutOfBoundsComponent_OutOfBounds_Server_Params
{
	struct FVector                                     EscapeLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class APavlov_OutOfBoundsVolume*                   OOBVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.OutOfBoundsComponent.OnPawnDamaged_Client
struct UOutOfBoundsComponent_OnPawnDamaged_Client_Params
{
};

// Function Pavlov.OutOfBoundsComponent.OnOutOfBounds
struct UOutOfBoundsComponent_OnOutOfBounds_Params
{
};

// Function Pavlov.OutOfBoundsComponent.InBounds
struct UOutOfBoundsComponent_InBounds_Params
{
};

// Function Pavlov.OutOfBoundsComponent.DamageTick
struct UOutOfBoundsComponent_DamageTick_Params
{
};

// Function Pavlov.OutOfBoundsComponent.AddGuideMesh
struct UOutOfBoundsComponent_AddGuideMesh_Params
{
};

// Function Pavlov.Painkillers.SetPainkillerDetails
struct APainkillers_SetPainkillerDetails_Params
{
	int                                                PillAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HealAmountPerPill;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Painkillers.GetNumOfPills
struct APainkillers_GetNumOfPills_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovAIController.SetTargetPawn
struct APavlovAIController_SetTargetPawn_Params
{
	class APavlovPawn*                                 TargetPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovAIController.OnPawnCollisionBeginOverlap
struct APavlovAIController_OnPawnCollisionBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.PavlovAIController.IsSuppressed
struct APavlovAIController_IsSuppressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovAIController.GetTargetPawn
struct APavlovAIController_GetTargetPawn_Params
{
	class APavlovPawn*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovAvatarAnimInstance.GetFingerBlend
struct UPavlovAvatarAnimInstance_GetFingerBlend_Params
{
	bool                                               bRight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EFinger                                            Finger;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovCustomGameMode.OnCustomRconCommand
struct APavlovCustomGameMode_OnCustomRconCommand_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovGameInstance.UpdateServerList
struct UPavlovGameInstance_UpdateServerList_Params
{
	struct FString                                     Map;                                                      // (Parm, ZeroConstructor)
	struct FString                                     GameMode;                                                 // (Parm, ZeroConstructor)
	bool                                               bFriendsOnly;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrivateOnly;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.UpdateNextSplashScreen
struct UPavlovGameInstance_UpdateNextSplashScreen_Params
{
	bool                                               bInitialSplash;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.ToggleMenu
struct UPavlovGameInstance_ToggleMenu_Params
{
};

// Function Pavlov.PavlovGameInstance.TestServerConnect
struct UPavlovGameInstance_TestServerConnect_Params
{
	struct FString                                     ConnectURL;                                               // (Parm, ZeroConstructor)
	struct FString                                     MapId;                                                    // (Parm, ZeroConstructor)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.ShowPavlovSplash
struct UPavlovGameInstance_ShowPavlovSplash_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFade;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.SetMutedByProductId
struct UPavlovGameInstance_SetMutedByProductId_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.SetMuted
struct UPavlovGameInstance_SetMuted_Params
{
	class APavlovPlayerState*                          PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.SetMixingChannelVolume
struct UPavlovGameInstance_SetMixingChannelVolume_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.SetMatchmakingState
struct UPavlovGameInstance_SetMatchmakingState_Params
{
	EMatchmakingState                                  NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.SetItemRotation
struct UPavlovGameInstance_SetItemRotation_Params
{
	float                                              Roll;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.ServerStartStatusHelper
struct UPavlovGameInstance_ServerStartStatusHelper_Params
{
};

// Function Pavlov.PavlovGameInstance.ServerConnectFailed
struct UPavlovGameInstance_ServerConnectFailed_Params
{
	EConnectorFailureReason                            FailureReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.ServerConnectComplete
struct UPavlovGameInstance_ServerConnectComplete_Params
{
};

// Function Pavlov.PavlovGameInstance.ServerConnectByURL
struct UPavlovGameInstance_ServerConnectByURL_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovGameInstance.ServerConnectByIp
struct UPavlovGameInstance_ServerConnectByIp_Params
{
	struct FString                                     IpString;                                                 // (Parm, ZeroConstructor)
	int                                                Port;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.ServerConnect
struct UPavlovGameInstance_ServerConnect_Params
{
	struct FServerConnectParams                        Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.RetrieveMasterServerSessionId
struct UPavlovGameInstance_RetrieveMasterServerSessionId_Params
{
};

// Function Pavlov.PavlovGameInstance.ResumeShaderPreCompilation
struct UPavlovGameInstance_ResumeShaderPreCompilation_Params
{
};

// Function Pavlov.PavlovGameInstance.ResetTutorial
struct UPavlovGameInstance_ResetTutorial_Params
{
};

// Function Pavlov.PavlovGameInstance.ResetPhononScene
struct UPavlovGameInstance_ResetPhononScene_Params
{
};

// Function Pavlov.PavlovGameInstance.ReportServerState
struct UPavlovGameInstance_ReportServerState_Params
{
};

// Function Pavlov.PavlovGameInstance.RemoveMap
struct UPavlovGameInstance_RemoveMap_Params
{
	struct FString                                     UniqueID;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.RemoveFromRefBucket
struct UPavlovGameInstance_RemoveFromRefBucket_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.QuickMatch
struct UPavlovGameInstance_QuickMatch_Params
{
};

// Function Pavlov.PavlovGameInstance.QueryForGameSession
struct UPavlovGameInstance_QueryForGameSession_Params
{
};

// Function Pavlov.PavlovGameInstance.OpenMap_Implementation
struct UPavlovGameInstance_OpenMap_Implementation_Params
{
};

// Function Pavlov.PavlovGameInstance.OpenMap
struct UPavlovGameInstance_OpenMap_Params
{
	struct FString                                     Map;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovGameInstance.OnWorkshopSpecificQuery
struct UPavlovGameInstance_OnWorkshopSpecificQuery_Params
{
};

// Function Pavlov.PavlovGameInstance.OnSteamServersConnected
struct UPavlovGameInstance_OnSteamServersConnected_Params
{
};

// Function Pavlov.PavlovGameInstance.OnSteamLobbyListUpdated
struct UPavlovGameInstance_OnSteamLobbyListUpdated_Params
{
};

// Function Pavlov.PavlovGameInstance.OnSplashScreenLoaded
struct UPavlovGameInstance_OnSplashScreenLoaded_Params
{
	struct FDateTime                                   StartTimestamp;                                           // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovGameInstance.OnServerMapDownloaded
struct UPavlovGameInstance_OnServerMapDownloaded_Params
{
	bool                                               bSucceed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovGameInstance.OnNetworkFailure
struct UPavlovGameInstance_OnNetworkFailure_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UNetDriver*                                  NetDriver;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetworkFailure>                       FailureType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ErrorString;                                              // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovGameInstance.OnLoginStatusChanged
struct UPavlovGameInstance_OnLoginStatusChanged_Params
{
	bool                                               bLoggedIn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.OnLobbyLeave
struct UPavlovGameInstance_OnLobbyLeave_Params
{
};

// Function Pavlov.PavlovGameInstance.OnLobbyEnter
struct UPavlovGameInstance_OnLobbyEnter_Params
{
	bool                                               bFailed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.OnClientMapDownloaded
struct UPavlovGameInstance_OnClientMapDownloaded_Params
{
	bool                                               bSucceed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovGameInstance.OnAuthSessionTicketResponse
struct UPavlovGameInstance_OnAuthSessionTicketResponse_Params
{
	bool                                               bSucceed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     HexAuthTicket;                                            // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovGameInstance.OnAndroidPermisionsGranted
struct UPavlovGameInstance_OnAndroidPermisionsGranted_Params
{
	TArray<struct FString>                             Permissions;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<bool>                                       GrantResults;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Pavlov.PavlovGameInstance.LogoutTest
struct UPavlovGameInstance_LogoutTest_Params
{
};

// Function Pavlov.PavlovGameInstance.JoinServer
struct UPavlovGameInstance_JoinServer_Params
{
	struct FString                                     LobbyId;                                                  // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovGameInstance.IsMutedByProductId
struct UPavlovGameInstance_IsMutedByProductId_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.IsMuted
struct UPavlovGameInstance_IsMuted_Params
{
	class APavlovPlayerState*                          PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.InitClientProxies
struct UPavlovGameInstance_InitClientProxies_Params
{
};

// Function Pavlov.PavlovGameInstance.HideSplashScreen
struct UPavlovGameInstance_HideSplashScreen_Params
{
};

// Function Pavlov.PavlovGameInstance.HasGameSession
struct UPavlovGameInstance_HasGameSession_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.GetVoiceSource
struct UPavlovGameInstance_GetVoiceSource_Params
{
	class UVoiceSource*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.GetUIManager
struct UPavlovGameInstance_GetUIManager_Params
{
	class UUIManager*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.GetTutorial
struct UPavlovGameInstance_GetTutorial_Params
{
	class UTutorial*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.GetSoundMixingSettings
struct UPavlovGameInstance_GetSoundMixingSettings_Params
{
	class USoundMixingSettings*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.GetServerBrowserV2
struct UPavlovGameInstance_GetServerBrowserV2_Params
{
	class UServerBrowserV2*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.GetServerBrowser
struct UPavlovGameInstance_GetServerBrowser_Params
{
	class UServerBrowser*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.GetOnlineRegion
struct UPavlovGameInstance_GetOnlineRegion_Params
{
	EOnlineRegion                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.GetOnlineManager
struct UPavlovGameInstance_GetOnlineManager_Params
{
	class UOnlineManager*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.GetOculusScale
struct UPavlovGameInstance_GetOculusScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.GetMatchmaking
struct UPavlovGameInstance_GetMatchmaking_Params
{
	class UMatchmaking*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.GetMapVersion
struct UPavlovGameInstance_GetMapVersion_Params
{
	struct FString                                     UniqueID;                                                 // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.GetMapListAdvanced
struct UPavlovGameInstance_GetMapListAdvanced_Params
{
	int                                                Compatibility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFavoriteOnly;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.GetMapList
struct UPavlovGameInstance_GetMapList_Params
{
	int                                                Compatibility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UPavlov_Map*>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovGameInstance.GetMap
struct UPavlovGameInstance_GetMap_Params
{
	struct FString                                     UniqueID;                                                 // (Parm, ZeroConstructor)
	class UPavlov_Map*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.GetCurrentSplashScreen
struct UPavlovGameInstance_GetCurrentSplashScreen_Params
{
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.GetBuildLabel
struct UPavlovGameInstance_GetBuildLabel_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovGameInstance.DumpLobbyData
struct UPavlovGameInstance_DumpLobbyData_Params
{
};

// Function Pavlov.PavlovGameInstance.DisplayNetworkFailureMessage
struct UPavlovGameInstance_DisplayNetworkFailureMessage_Params
{
};

// Function Pavlov.PavlovGameInstance.DisplayMessageImpl
struct UPavlovGameInstance_DisplayMessageImpl_Params
{
};

// Function Pavlov.PavlovGameInstance.DisplayMessage
struct UPavlovGameInstance_DisplayMessage_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	bool                                               bDeferredDelay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.CreateLobby
struct UPavlovGameInstance_CreateLobby_Params
{
};

// Function Pavlov.PavlovGameInstance.CreateGameSession
struct UPavlovGameInstance_CreateGameSession_Params
{
};

// Function Pavlov.PavlovGameInstance.CreateCoopLobby
struct UPavlovGameInstance_CreateCoopLobby_Params
{
};

// Function Pavlov.PavlovGameInstance.ClientStartStatusHelper
struct UPavlovGameInstance_ClientStartStatusHelper_Params
{
	int                                                ListenPort;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UServerStatusHelper*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.CheckPlacementStatus
struct UPavlovGameInstance_CheckPlacementStatus_Params
{
};

// Function Pavlov.PavlovGameInstance.CheckBuildVersionStatus
struct UPavlovGameInstance_CheckBuildVersionStatus_Params
{
};

// Function Pavlov.PavlovGameInstance.CancelServerFind
struct UPavlovGameInstance_CancelServerFind_Params
{
};

// Function Pavlov.PavlovGameInstance.CancelServerConnect
struct UPavlovGameInstance_CancelServerConnect_Params
{
};

// Function Pavlov.PavlovGameInstance.CancelQuickmatch
struct UPavlovGameInstance_CancelQuickmatch_Params
{
};

// Function Pavlov.PavlovGameInstance.AsyncLoadSplashScreens
struct UPavlovGameInstance_AsyncLoadSplashScreens_Params
{
};

// Function Pavlov.PavlovGameInstance.ApplyOculusBindings
struct UPavlovGameInstance_ApplyOculusBindings_Params
{
};

// Function Pavlov.PavlovGameInstance.AddToRefBucket
struct UPavlovGameInstance_AddToRefBucket_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.UnpauseMatchTime
struct APavlovGameState_UnpauseMatchTime_Params
{
};

// Function Pavlov.PavlovGameState.SetGlobalInfo
struct APavlovGameState_SetGlobalInfo_Params
{
	class UPavlov_GlobalInfo*                          GI;                                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.SetAttackingTeam
struct APavlovGameState_SetAttackingTeam_Params
{
	bool                                               Team0;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.ResetMatchTime
struct APavlovGameState_ResetMatchTime_Params
{
	bool                                               bPause;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.ResetBuyRestrictions
struct APavlovGameState_ResetBuyRestrictions_Params
{
};

// Function Pavlov.PavlovGameState.PreloadSkin
struct APavlovGameState_PreloadSkin_Params
{
	struct FName                                       ItemName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkinFamilyId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.PauseMatchTime
struct APavlovGameState_PauseMatchTime_Params
{
};

// Function Pavlov.PavlovGameState.OnSkinPreloaded
struct APavlovGameState_OnSkinPreloaded_Params
{
	struct FName                                       ItemName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkinFamilyId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.OnSkinLoaded
struct APavlovGameState_OnSkinLoaded_Params
{
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.OnRep_GlobalInfo
struct APavlovGameState_OnRep_GlobalInfo_Params
{
};

// Function Pavlov.PavlovGameState.OnRep_BalancingCSV
struct APavlovGameState_OnRep_BalancingCSV_Params
{
};

// Function Pavlov.PavlovGameState.OnModkitLoadLootMeshAsync
struct APavlovGameState_OnModkitLoadLootMeshAsync_Params
{
	struct FAsyncLoadLootMesh                          LoadLootMesh;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction Pavlov.PavlovGameState.OnGetVehicleClassToSpawnWRef__DelegateSignature
struct APavlovGameState_OnGetVehicleClassToSpawnWRef__DelegateSignature_Params
{
	class UClass*                                      VehicleClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAsyncVehicleSpawnData                      AsyncVehicleSpawnData;                                    // (Parm)
};

// DelegateFunction Pavlov.PavlovGameState.OnGetVehicleClassToSpawn__DelegateSignature
struct APavlovGameState_OnGetVehicleClassToSpawn__DelegateSignature_Params
{
	class UClass*                                      VehicleClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SpawnTransform;                                           // (ConstParm, Parm, IsPlainOldData)
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Pavlov.PavlovGameState.OnGetVehicleClass__DelegateSignature
struct APavlovGameState_OnGetVehicleClass__DelegateSignature_Params
{
	class UClass*                                      VehicleClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.MulticastOnKillfeedEntry
struct APavlovGameState_MulticastOnKillfeedEntry_Params
{
	struct FKillfeedEntry                              NewEntry;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function Pavlov.PavlovGameState.ModkitLootLoaded
struct APavlovGameState_ModkitLootLoaded_Params
{
	struct FAsyncLoadLootMesh                          LoadLootMesh;                                             // (Parm)
};

// Function Pavlov.PavlovGameState.LootLoaded
struct APavlovGameState_LootLoaded_Params
{
	struct FScriptDelegate                             LoadedDelegate;                                           // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovGameState.LoadSkinForItem
struct APavlovGameState_LoadSkinForItem_Params
{
	class APavlovPlayerState*                          PavPlayerState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AVRItem*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.LoadSkin
struct APavlovGameState_LoadSkin_Params
{
	class APavlovPlayerState*                          PavPlayerState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ItemName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.LoadedVehicleClassToSpawnWRef
struct APavlovGameState_LoadedVehicleClassToSpawnWRef_Params
{
	struct FScriptDelegate                             OnVehicleClassToSpawnWRefLoaded;                          // (Parm, ZeroConstructor)
	struct FAsyncVehicleSpawnData                      AsyncVehicleSpawnData;                                    // (Parm)
};

// Function Pavlov.PavlovGameState.LoadedVehicleClassToSpawn
struct APavlovGameState_LoadedVehicleClassToSpawn_Params
{
	struct FScriptDelegate                             OnVehicleClassToSpawnLoaded;                              // (Parm, ZeroConstructor)
	struct FTransform                                  SpawnTransform;                                           // (ConstParm, Parm, IsPlainOldData)
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.LoadedVehicleClass
struct APavlovGameState_LoadedVehicleClass_Params
{
	struct FScriptDelegate                             OnVehicleClassLoaded;                                     // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovGameState.LoadBalanceTableAsync
struct APavlovGameState_LoadBalanceTableAsync_Params
{
};

// Function Pavlov.PavlovGameState.IsVehicleNameValid
struct APavlovGameState_IsVehicleNameValid_Params
{
	struct FName                                       VehicleName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.IsTeamAbleToBuy
struct APavlovGameState_IsTeamAbleToBuy_Params
{
	struct FName                                       EquipmentName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.IsSkinPreloaded
struct APavlovGameState_IsSkinPreloaded_Params
{
	struct FName                                       ItemName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkinFamilyId;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.InitializeCosmeticTickActors
struct APavlovGameState_InitializeCosmeticTickActors_Params
{
};

// Function Pavlov.PavlovGameState.GetVehicleClassWRef
struct APavlovGameState_GetVehicleClassWRef_Params
{
	struct FScriptDelegate                             OnVehicleClassToSpawnWRefLoaded;                          // (Parm, ZeroConstructor)
	struct FAsyncVehicleSpawnData                      AsyncVehicleSpawnData;                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.GetVehicleClassToSpawnAsync
struct APavlovGameState_GetVehicleClassToSpawnAsync_Params
{
	struct FName                                       VehicleName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnVehicleClassToSpawnLoaded;                              // (Parm, ZeroConstructor)
	struct FTransform                                  SpawnTransform;                                           // (ConstParm, Parm, IsPlainOldData)
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.GetVehicleClassByNameAsync
struct APavlovGameState_GetVehicleClassByNameAsync_Params
{
	struct FName                                       VehicleName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnVehicleClassLoaded;                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.GetVehicleClassByName
struct APavlovGameState_GetVehicleClassByName_Params
{
	struct FName                                       VehicleName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.GetTeamScore
struct APavlovGameState_GetTeamScore_Params
{
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.GetTeamArray
struct APavlovGameState_GetTeamArray_Params
{
	TArray<class APavlovPlayerState*>                  TeamArray;                                                // (Parm, OutParm, ZeroConstructor)
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.GetSpawnableEquipmentNames
struct APavlovGameState_GetSpawnableEquipmentNames_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovGameState.GetSortedPlayerArray
struct APavlovGameState_GetSortedPlayerArray_Params
{
	TArray<class APavlovPlayerState*>                  SortedPlayerArray;                                        // (Parm, OutParm, ZeroConstructor)
	int                                                FilterByTeamId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.GetPlayerStringId
struct APavlovGameState_GetPlayerStringId_Params
{
	class APavlovPlayerState*                          PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovGameState.GetPlayerStateByStringId
struct APavlovGameState_GetPlayerStateByStringId_Params
{
	struct FString                                     StringId;                                                 // (Parm, ZeroConstructor)
	class APavlovPlayerState*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.GetPlayerByScore
struct APavlovGameState_GetPlayerByScore_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPlayerState*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.GetMaxPurchasesPerPlayer
struct APavlovGameState_GetMaxPurchasesPerPlayer_Params
{
	struct FName                                       EquipmentName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.GetMatchResult
struct APavlovGameState_GetMatchResult_Params
{
	EMatchResult                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.GetLootMesh
struct APavlovGameState_GetLootMesh_Params
{
	struct FName                                       LootName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnLoaded;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.GetEquipmentNames
struct APavlovGameState_GetEquipmentNames_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovGameState.GetEquipmentNameByIndex
struct APavlovGameState_GetEquipmentNameByIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.GetEquipmentNameByClass
struct APavlovGameState_GetEquipmentNameByClass_Params
{
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.GetEquipmentMagCount
struct APavlovGameState_GetEquipmentMagCount_Params
{
	struct FName                                       EquipmentName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.GetEquipmentKillBonus
struct APavlovGameState_GetEquipmentKillBonus_Params
{
	struct FName                                       EquipmentName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.GetEquipmentIndexByName
struct APavlovGameState_GetEquipmentIndexByName_Params
{
	struct FName                                       EquipmentName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.GetEquipmentDataByClass
struct APavlovGameState_GetEquipmentDataByClass_Params
{
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FEquipmentData                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Pavlov.PavlovGameState.GetEquipmentData
struct APavlovGameState_GetEquipmentData_Params
{
	struct FName                                       EquipmentName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FEquipmentData                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Pavlov.PavlovGameState.GetEquipmentCost
struct APavlovGameState_GetEquipmentCost_Params
{
	struct FName                                       EquipmentName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.GetEquipmentClassByName
struct APavlovGameState_GetEquipmentClassByName_Params
{
	struct FName                                       EquipmentName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.GetAsyncLoader
struct APavlovGameState_GetAsyncLoader_Params
{
	class UVRAsyncLoader*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.DisplayMatchStateOverlay
struct APavlovGameState_DisplayMatchStateOverlay_Params
{
	class UClass*                                      OverlayClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.CanRemoveAttachments
struct APavlovGameState_CanRemoveAttachments_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.ArePlayersEnemies
struct APavlovGameState_ArePlayersEnemies_Params
{
	class APlayerState*                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.UseOOBLocomotion
struct UPavlovGameUserSettings_UseOOBLocomotion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.UseGrabForce
struct UPavlovGameUserSettings_UseGrabForce_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.ShouldSwapControllers
struct UPavlovGameUserSettings_ShouldSwapControllers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetVoiceDevice
struct UPavlovGameUserSettings_SetVoiceDevice_Params
{
	struct FString                                     DeviceURL;                                                // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovGameUserSettings.SetVirtualStock
struct UPavlovGameUserSettings_SetVirtualStock_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetUseGrabForce
struct UPavlovGameUserSettings_SetUseGrabForce_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetUseAudioThread
struct UPavlovGameUserSettings_SetUseAudioThread_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetTwoHandToggle
struct UPavlovGameUserSettings_SetTwoHandToggle_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetTouchpadInverted
struct UPavlovGameUserSettings_SetTouchpadInverted_Params
{
	bool                                               bInverted;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetSwapControllers
struct UPavlovGameUserSettings_SetSwapControllers_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetStartUpMap
struct UPavlovGameUserSettings_SetStartUpMap_Params
{
	struct FString                                     NewStartUpMap;                                            // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovGameUserSettings.SetSnapTurn
struct UPavlovGameUserSettings_SetSnapTurn_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetSmoothTurnRate
struct UPavlovGameUserSettings_SetSmoothTurnRate_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetSmoothTurn
struct UPavlovGameUserSettings_SetSmoothTurn_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetSmoothLocomotionMode
struct UPavlovGameUserSettings_SetSmoothLocomotionMode_Params
{
	EVRSmoothLocomotionMode                            NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetServerSortType
struct UPavlovGameUserSettings_SetServerSortType_Params
{
	EServerSortType                                    SortType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetServerSearchType
struct UPavlovGameUserSettings_SetServerSearchType_Params
{
	EServerSearchType                                  SearchType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetResolutionQuality
struct UPavlovGameUserSettings_SetResolutionQuality_Params
{
	float                                              Quality;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetRegionFilters
struct UPavlovGameUserSettings_SetRegionFilters_Params
{
	TArray<struct FString>                             Filters;                                                  // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovGameUserSettings.SetRealTimeReverb
struct UPavlovGameUserSettings_SetRealTimeReverb_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetPrimaryRegion
struct UPavlovGameUserSettings_SetPrimaryRegion_Params
{
	EOnlineRegion                                      Region;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetPlayerRightHanded
struct UPavlovGameUserSettings_SetPlayerRightHanded_Params
{
	bool                                               bRightHanded;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetPlayerHeight
struct UPavlovGameUserSettings_SetPlayerHeight_Params
{
	float                                              Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetOOBLocomotion
struct UPavlovGameUserSettings_SetOOBLocomotion_Params
{
	bool                                               bUse;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetOnScreenEffectsEnabled
struct UPavlovGameUserSettings_SetOnScreenEffectsEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetOffHandAction
struct UPavlovGameUserSettings_SetOffHandAction_Params
{
	ECustomAction                                      Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetNoAmbisonics
struct UPavlovGameUserSettings_SetNoAmbisonics_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetMountFriendly
struct UPavlovGameUserSettings_SetMountFriendly_Params
{
	bool                                               bFriendly;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetMicMuted
struct UPavlovGameUserSettings_SetMicMuted_Params
{
	bool                                               bMuted;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetMenuScoreboardSwaped
struct UPavlovGameUserSettings_SetMenuScoreboardSwaped_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetMapAsFavoriteById
struct UPavlovGameUserSettings_SetMapAsFavoriteById_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetMapAsFavorite
struct UPavlovGameUserSettings_SetMapAsFavorite_Params
{
	class UPavlov_Map*                                 Map;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetMainHandAction
struct UPavlovGameUserSettings_SetMainHandAction_Params
{
	ECustomAction                                      Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetLockInventory
struct UPavlovGameUserSettings_SetLockInventory_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetLiteFootStepHaptics
struct UPavlovGameUserSettings_SetLiteFootStepHaptics_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetLegacyGrip
struct UPavlovGameUserSettings_SetLegacyGrip_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetLeftEyeRendering
struct UPavlovGameUserSettings_SetLeftEyeRendering_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetHidePinLockedServers
struct UPavlovGameUserSettings_SetHidePinLockedServers_Params
{
	bool                                               bHideLocked;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetHideFullServers
struct UPavlovGameUserSettings_SetHideFullServers_Params
{
	bool                                               HideFull;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetHideEmptyServers
struct UPavlovGameUserSettings_SetHideEmptyServers_Params
{
	bool                                               bHideEmpty;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetHideAmmoCount
struct UPavlovGameUserSettings_SetHideAmmoCount_Params
{
	bool                                               bHidden;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetHeadLocomotion
struct UPavlovGameUserSettings_SetHeadLocomotion_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetGripMode
struct UPavlovGameUserSettings_SetGripMode_Params
{
	EGripMode                                          NewGripMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetGrabForceThreashold
struct UPavlovGameUserSettings_SetGrabForceThreashold_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetGoreLevel
struct UPavlovGameUserSettings_SetGoreLevel_Params
{
	EGoreLevel                                         Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetGMFilters
struct UPavlovGameUserSettings_SetGMFilters_Params
{
	TArray<struct FString>                             Filters;                                                  // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovGameUserSettings.SetFreeSpectatingEnabled
struct UPavlovGameUserSettings_SetFreeSpectatingEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetForceTubeEnabled
struct UPavlovGameUserSettings_SetForceTubeEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetFavoriteServers
struct UPavlovGameUserSettings_SetFavoriteServers_Params
{
	TArray<struct FFavoriteServer>                     Servers;                                                  // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovGameUserSettings.SetbHapticsSuitEnabled
struct UPavlovGameUserSettings_SetbHapticsSuitEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetAutoUngrip
struct UPavlovGameUserSettings_SetAutoUngrip_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetAutoSwapHandsEnabled
struct UPavlovGameUserSettings_SetAutoSwapHandsEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetAutoSprint
struct UPavlovGameUserSettings_SetAutoSprint_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetArmKillfeedEnabled
struct UPavlovGameUserSettings_SetArmKillfeedEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetAdvancedVehicleInput
struct UPavlovGameUserSettings_SetAdvancedVehicleInput_Params
{
	bool                                               bUseAdvanced;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SendAnalyticEvents
struct UPavlovGameUserSettings_SendAnalyticEvents_Params
{
};

// Function Pavlov.PavlovGameUserSettings.SaveSpectatorView
struct UPavlovGameUserSettings_SaveSpectatorView_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.MarkAsCalibrated
struct UPavlovGameUserSettings_MarkAsCalibrated_Params
{
};

// Function Pavlov.PavlovGameUserSettings.IsTwoHandToggleEnabled
struct UPavlovGameUserSettings_IsTwoHandToggleEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsTouchpadInverted
struct UPavlovGameUserSettings_IsTouchpadInverted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsSnapTurnEnabled
struct UPavlovGameUserSettings_IsSnapTurnEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsSmoothTurnEnabled
struct UPavlovGameUserSettings_IsSmoothTurnEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsPostProcessDisabled
struct UPavlovGameUserSettings_IsPostProcessDisabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsPlayerRightHanded
struct UPavlovGameUserSettings_IsPlayerRightHanded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsOnScreenEffectsEnabled
struct UPavlovGameUserSettings_IsOnScreenEffectsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsMountFriendly
struct UPavlovGameUserSettings_IsMountFriendly_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsMicMuted
struct UPavlovGameUserSettings_IsMicMuted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsMenuScoreboardSwapped
struct UPavlovGameUserSettings_IsMenuScoreboardSwapped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsLiteFootStepHapticsEnabled
struct UPavlovGameUserSettings_IsLiteFootStepHapticsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsLeftEyeRendering
struct UPavlovGameUserSettings_IsLeftEyeRendering_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsHeadLocomotionEnabled
struct UPavlovGameUserSettings_IsHeadLocomotionEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsFreeSpectatingEnabled
struct UPavlovGameUserSettings_IsFreeSpectatingEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsForceTubeEnabled
struct UPavlovGameUserSettings_IsForceTubeEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsFavoriteMapById
struct UPavlovGameUserSettings_IsFavoriteMapById_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsFavoriteMap
struct UPavlovGameUserSettings_IsFavoriteMap_Params
{
	class UPavlov_Map*                                 Map;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsCalibrated
struct UPavlovGameUserSettings_IsCalibrated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsBHapticsSuitEnabled
struct UPavlovGameUserSettings_IsBHapticsSuitEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsAutoUngripEnabled
struct UPavlovGameUserSettings_IsAutoUngripEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsAutoSwapHandsEnabled
struct UPavlovGameUserSettings_IsAutoSwapHandsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsAutoSprintEnabled
struct UPavlovGameUserSettings_IsAutoSprintEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsArmKillfeedEnabled
struct UPavlovGameUserSettings_IsArmKillfeedEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsAmmoCounterHidden
struct UPavlovGameUserSettings_IsAmmoCounterHidden_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsAdvancedVehicleInputEnabled
struct UPavlovGameUserSettings_IsAdvancedVehicleInputEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.HasLegacyGrip
struct UPavlovGameUserSettings_HasLegacyGrip_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetVoiceDevice
struct UPavlovGameUserSettings_GetVoiceDevice_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovGameUserSettings.GetVirtualStock
struct UPavlovGameUserSettings_GetVirtualStock_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetUseAudioThread
struct UPavlovGameUserSettings_GetUseAudioThread_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetStartUpMap
struct UPavlovGameUserSettings_GetStartUpMap_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovGameUserSettings.GetSpectatorView
struct UPavlovGameUserSettings_GetSpectatorView_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetSmoothTurnRate
struct UPavlovGameUserSettings_GetSmoothTurnRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetSmoothLocomotionMode
struct UPavlovGameUserSettings_GetSmoothLocomotionMode_Params
{
	EVRSmoothLocomotionMode                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetServerSortType
struct UPavlovGameUserSettings_GetServerSortType_Params
{
	EServerSortType                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetServerSearchType
struct UPavlovGameUserSettings_GetServerSearchType_Params
{
	EServerSearchType                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetRegionFilters
struct UPavlovGameUserSettings_GetRegionFilters_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovGameUserSettings.GetRealTimeVoiceReverb
struct UPavlovGameUserSettings_GetRealTimeVoiceReverb_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetPrimaryRegion
struct UPavlovGameUserSettings_GetPrimaryRegion_Params
{
	EOnlineRegion                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetPlayerHeight
struct UPavlovGameUserSettings_GetPlayerHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetOffHandAction
struct UPavlovGameUserSettings_GetOffHandAction_Params
{
	ECustomAction                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetNoAmbisonics
struct UPavlovGameUserSettings_GetNoAmbisonics_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetMainHandAction
struct UPavlovGameUserSettings_GetMainHandAction_Params
{
	ECustomAction                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetLockInventory
struct UPavlovGameUserSettings_GetLockInventory_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetHidePinLockedServers
struct UPavlovGameUserSettings_GetHidePinLockedServers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetHideFullServers
struct UPavlovGameUserSettings_GetHideFullServers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetHideEmptyServers
struct UPavlovGameUserSettings_GetHideEmptyServers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetGripMode
struct UPavlovGameUserSettings_GetGripMode_Params
{
	EGripMode                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetGrabForceThreashold
struct UPavlovGameUserSettings_GetGrabForceThreashold_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetGoreLevel
struct UPavlovGameUserSettings_GetGoreLevel_Params
{
	EGoreLevel                                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetGMFilters
struct UPavlovGameUserSettings_GetGMFilters_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovGameUserSettings.GetFavoriteServers
struct UPavlovGameUserSettings_GetFavoriteServers_Params
{
	TArray<struct FFavoriteServer>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovGameUserSettings.ForceNoPostProcessing
struct UPavlovGameUserSettings_ForceNoPostProcessing_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovHandAnimInstance.SetDefaultGripSequence
struct UPavlovHandAnimInstance_SetDefaultGripSequence_Params
{
	class UAnimSequence*                               UpdateSequence;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bImmersiveSequence;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovHandAnimInstance.GetFingerBlend
struct UPavlovHandAnimInstance_GetFingerBlend_Params
{
	EFinger                                            Finger;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovLobby.Start
struct UPavlovLobby_Start_Params
{
};

// Function Pavlov.PavlovLobby.SetWantToStart
struct UPavlovLobby_SetWantToStart_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovLobby.SetServerSettings
struct UPavlovLobby_SetServerSettings_Params
{
	struct FServerSettings                             NewServerSettings;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Pavlov.PavlovLobby.SetRegion
struct UPavlovLobby_SetRegion_Params
{
	struct FString                                     NewRegion;                                                // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovLobby.SetPin
struct UPavlovLobby_SetPin_Params
{
	struct FString                                     Pin;                                                      // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovLobby.SetMap
struct UPavlovLobby_SetMap_Params
{
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovLobby.SetHostingType
struct UPavlovLobby_SetHostingType_Params
{
	EServerHostingType                                 NewHostingType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovLobby.SetGameMode
struct UPavlovLobby_SetGameMode_Params
{
	struct FString                                     NewGameMode;                                              // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovLobby.SetFillWithBots
struct UPavlovLobby_SetFillWithBots_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovLobby.SetCompetitiveMode
struct UPavlovLobby_SetCompetitiveMode_Params
{
	int                                                CompMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovLobby.RequestTeam
struct UPavlovLobby_RequestTeam_Params
{
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovLobby.OnMapDownloadProgress
struct UPavlovLobby_OnMapDownloadProgress_Params
{
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovLobby.OnMapDownloaded
struct UPavlovLobby_OnMapDownloaded_Params
{
	bool                                               bSucceed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovLobby.MuteMember
struct UPavlovLobby_MuteMember_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovLobby.IsPinProtected
struct UPavlovLobby_IsPinProtected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovLobby.IsMemberMuted
struct UPavlovLobby_IsMemberMuted_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovLobby.GetRegion
struct UPavlovLobby_GetRegion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovLobby.GetPin
struct UPavlovLobby_GetPin_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovLobby.GetMemberTeam
struct UPavlovLobby_GetMemberTeam_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovLobby.GetLocalUserIndex
struct UPavlovLobby_GetLocalUserIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovLobby.FindServer
struct UPavlovLobby_FindServer_Params
{
};

// Function Pavlov.PavlovLobby.DoesMemberWantsToStart
struct UPavlovLobby_DoesMemberWantsToStart_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovLobby.CheckSessionStatus
struct UPavlovLobby_CheckSessionStatus_Params
{
};

// Function Pavlov.PavlovLobby.CancelServerFind
struct UPavlovLobby_CancelServerFind_Params
{
};

// Function Pavlov.PavlovMovementComponent.ServerDeployParachute
struct UPavlovMovementComponent_ServerDeployParachute_Params
{
};

// Function Pavlov.PavlovMovementComponent.OnRep_PrachuteState
struct UPavlovMovementComponent_OnRep_PrachuteState_Params
{
};

// Function Pavlov.PavlovMovementComponent.MulticastOnParachuteDeployed
struct UPavlovMovementComponent_MulticastOnParachuteDeployed_Params
{
};

// Function Pavlov.PavlovMovementComponent.EnableParachuteMode
struct UPavlovMovementComponent_EnableParachuteMode_Params
{
	bool                                               bEnableParachuteMode;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.WearKevlar
struct APavlovPawn_WearKevlar_Params
{
	bool                                               bWithHelmet;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.WearHelmet
struct APavlovPawn_WearHelmet_Params
{
};

// Function Pavlov.PavlovPawn.UpdateLocomotion
struct APavlovPawn_UpdateLocomotion_Params
{
};

// Function Pavlov.PavlovPawn.TryStackAmmoBoxes
struct APavlovPawn_TryStackAmmoBoxes_Params
{
	class AAmmoBox*                                    AmmoBox;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.ToggleRadio
struct APavlovPawn_ToggleRadio_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.TakePointDamage
struct APavlovPawn_TakePointDamage_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ShotFromDirection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.SpawnHitFeedbackSound
struct APavlovPawn_SpawnHitFeedbackSound_Params
{
	EHitFeedbackType                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.SpawnHeadshotEffect
struct APavlovPawn_SpawnHeadshotEffect_Params
{
	class APlayerState*                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldHitLocation;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldHitDirection;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.ShowLimitedAmmoCounter
struct APavlovPawn_ShowLimitedAmmoCounter_Params
{
	bool                                               bCounterVisible;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.SetupWatch
struct APavlovPawn_SetupWatch_Params
{
	class UWatch*                                      WatchComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.SetupLimitedAmmoComp
struct APavlovPawn_SetupLimitedAmmoComp_Params
{
	ELimitedAmmoType                                   LimitedAmmoMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.SetTeamId
struct APavlovPawn_SetTeamId_Params
{
	int                                                NewTeamId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.SetPlayerSkin
struct APavlovPawn_SetPlayerSkin_Params
{
	struct FName                                       PlayerSkin;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.SetPainkillerDetails
struct APavlovPawn_SetPainkillerDetails_Params
{
	class AActor*                                      Painkillers;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumOfPills;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HealAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.SetNumOfSyringeRevives
struct APavlovPawn_SetNumOfSyringeRevives_Params
{
	class AActor*                                      Syringe;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumOfRevives;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.SetModdingVoiceAttn
struct APavlovPawn_SetModdingVoiceAttn_Params
{
};

// Function Pavlov.PavlovPawn.SetAvatarSkin
struct APavlovPawn_SetAvatarSkin_Params
{
	class UClass*                                      NewSkinClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CustomMesh;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.ServerUpdateFingerTracking
struct APavlovPawn_ServerUpdateFingerTracking_Params
{
	struct FFingerTracking                             Data;                                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.ServerSetRadioChannel
struct APavlovPawn_ServerSetRadioChannel_Params
{
	unsigned char                                      Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.ServerReportFallDamage
struct APavlovPawn_ServerReportFallDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.ServerGiveMagazine
struct APavlovPawn_ServerGiveMagazine_Params
{
	bool                                               bOffHand;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.ServerGive
struct APavlovPawn_ServerGive_Params
{
	struct FName                                       EquipmentName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Skin;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.ServerDeployParachute
struct APavlovPawn_ServerDeployParachute_Params
{
};

// Function Pavlov.PavlovPawn.SanityCheck
struct APavlovPawn_SanityCheck_Params
{
};

// Function Pavlov.PavlovPawn.RevivePawn
struct APavlovPawn_RevivePawn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.Revived_Client
struct APavlovPawn_Revived_Client_Params
{
};

// Function Pavlov.PavlovPawn.ReplenishPlayerAmmo
struct APavlovPawn_ReplenishPlayerAmmo_Params
{
	bool                                               bSpawnKnife;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.RemoveAmmo
struct APavlovPawn_RemoveAmmo_Params
{
	struct FName                                       AmmoId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RemoveAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.ProxyTrigger
struct APavlovPawn_ProxyTrigger_Params
{
	bool                                               bDominantController;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.ProxyGrab
struct APavlovPawn_ProxyGrab_Params
{
	bool                                               bDominantController;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.OverrideVoiceAttn
struct APavlovPawn_OverrideVoiceAttn_Params
{
	class USoundAttenuation*                           NewAttn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.OnWW2AvatarLoaded_Owner
struct APavlovPawn_OnWW2AvatarLoaded_Owner_Params
{
};

// Function Pavlov.PavlovPawn.OnTeamIdChanged
struct APavlovPawn_OnTeamIdChanged_Params
{
};

// Function Pavlov.PavlovPawn.OnRevive
struct APavlovPawn_OnRevive_Params
{
	class AActor*                                      OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.OnRep_TeamId
struct APavlovPawn_OnRep_TeamId_Params
{
};

// Function Pavlov.PavlovPawn.OnRep_RadioChannel
struct APavlovPawn_OnRep_RadioChannel_Params
{
};

// Function Pavlov.PavlovPawn.OnRep_PlayerProxy
struct APavlovPawn_OnRep_PlayerProxy_Params
{
};

// Function Pavlov.PavlovPawn.OnRep_LastTeleport
struct APavlovPawn_OnRep_LastTeleport_Params
{
};

// Function Pavlov.PavlovPawn.OnRep_HelmetArmour
struct APavlovPawn_OnRep_HelmetArmour_Params
{
};

// Function Pavlov.PavlovPawn.OnRep_AvatarSkinInfo
struct APavlovPawn_OnRep_AvatarSkinInfo_Params
{
};

// Function Pavlov.PavlovPawn.OnRep_Armour
struct APavlovPawn_OnRep_Armour_Params
{
};

// Function Pavlov.PavlovPawn.OnPawnRevived
struct APavlovPawn_OnPawnRevived_Params
{
};

// Function Pavlov.PavlovPawn.OnKill
struct APavlovPawn_OnKill_Params
{
	class AActor*                                      OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.OnImpactDamage
struct APavlovPawn_OnImpactDamage_Params
{
	struct FImpactDamage                               ImpactDamage;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Pavlov.PavlovPawn.OnHitByTazer
struct APavlovPawn_OnHitByTazer_Params
{
};

// Function Pavlov.PavlovPawn.OnHitByGun
struct APavlovPawn_OnHitByGun_Params
{
	class UClass*                                      GunClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 HitInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.OnDismember
struct APavlovPawn_OnDismember_Params
{
	struct FWoundInfo                                  WoundInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FPreBakedWound                              PreBakedWound;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Pavlov.PavlovPawn.OnCameraClipChanged
struct APavlovPawn_OnCameraClipChanged_Params
{
	bool                                               bClipping;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.NotifyProxySkinChanged
struct APavlovPawn_NotifyProxySkinChanged_Params
{
};

// Function Pavlov.PavlovPawn.MulticastTeleportTo
struct APavlovPawn_MulticastTeleportTo_Params
{
	struct FVector                                     DestLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    DestRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.MulticastResetPawn
struct APavlovPawn_MulticastResetPawn_Params
{
};

// Function Pavlov.PavlovPawn.MulticastOnZombieHit
struct APavlovPawn_MulticastOnZombieHit_Params
{
};

// Function Pavlov.PavlovPawn.MulticastOnWearArmour
struct APavlovPawn_MulticastOnWearArmour_Params
{
};

// Function Pavlov.PavlovPawn.MulticastOnRadialDeath
struct APavlovPawn_MulticastOnRadialDeath_Params
{
	struct FVector_NetQuantize                         Origin;                                                   // (Parm)
};

// Function Pavlov.PavlovPawn.MulticastOnMagazineGrabbed
struct APavlovPawn_MulticastOnMagazineGrabbed_Params
{
	bool                                               bDominant;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.MulticastOnImpactDamage
struct APavlovPawn_MulticastOnImpactDamage_Params
{
	struct FImpactDamage                               ImpactDamage;                                             // (Parm)
};

// Function Pavlov.PavlovPawn.MulticastOnHitSlow
struct APavlovPawn_MulticastOnHitSlow_Params
{
};

// Function Pavlov.PavlovPawn.MulticastOnHit
struct APavlovPawn_MulticastOnHit_Params
{
	struct FVector_NetQuantize                         Location;                                                 // (Parm)
	struct FVector_NetQuantizeNormal                   Normal;                                                   // (Parm)
	class APlayerState*                                Shooter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnArmor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.MulticastOnHelmetHit
struct APavlovPawn_MulticastOnHelmetHit_Params
{
	struct FVector_NetQuantize                         Location;                                                 // (Parm)
	struct FVector_NetQuantizeNormal                   Direction;                                                // (Parm)
};

// Function Pavlov.PavlovPawn.MulticastOnHelmetBlownoff
struct APavlovPawn_MulticastOnHelmetBlownoff_Params
{
};

// Function Pavlov.PavlovPawn.MulticastOnHeadshot
struct APavlovPawn_MulticastOnHeadshot_Params
{
	class APlayerState*                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      WoundRate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.MulticastOnFallDamage
struct APavlovPawn_MulticastOnFallDamage_Params
{
};

// Function Pavlov.PavlovPawn.MulticastAdjustAvatarScale
struct APavlovPawn_MulticastAdjustAvatarScale_Params
{
	float                                              PlayerHeight;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.ModKitLeaveVehicle
struct APavlovPawn_ModKitLeaveVehicle_Params
{
};

// Function Pavlov.PavlovPawn.ModkitIsInVehicle
struct APavlovPawn_ModkitIsInVehicle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.LoadEquipment
struct APavlovPawn_LoadEquipment_Params
{
	struct FEquipmentDefinition                        definition;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Pavlov.PavlovPawn.KillByDamageType
struct APavlovPawn_KillByDamageType_Params
{
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 KilledByInstigator;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      KilledBy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.IsSprinting
struct APavlovPawn_IsSprinting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.IsPickupDisabled
struct APavlovPawn_IsPickupDisabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.IsLobbyLeaderModkit
struct APavlovPawn_IsLobbyLeaderModkit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.IsDead
struct APavlovPawn_IsDead_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.IsCarryingBomb
struct APavlovPawn_IsCarryingBomb_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.IsCameraClipping
struct APavlovPawn_IsCameraClipping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.IsArmExploiting
struct APavlovPawn_IsArmExploiting_Params
{
	bool                                               bRight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.HealEffect
struct APavlovPawn_HealEffect_Params
{
	float                                              HealTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          HealMaterial;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.HasItem
struct APavlovPawn_HasItem_Params
{
	struct FName                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GorePawn
struct APavlovPawn_GorePawn_Params
{
	struct FImpactDamage                               Impact;                                                   // (Parm)
};

// Function Pavlov.PavlovPawn.GiveItemInventory
struct APavlovPawn_GiveItemInventory_Params
{
	struct FGiveItemInventoryParams                    Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class AVRItem*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GiveItem
struct APavlovPawn_GiveItem_Params
{
	struct FGiveItemParams                             Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class AVRItem*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GiveBomb
struct APavlovPawn_GiveBomb_Params
{
	class ABomb*                                       Bomb;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.Give
struct APavlovPawn_Give_Params
{
	struct FName                                       EquipmentName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Skin;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWithAmmo;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bByBuyMenu;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetWeaponAttachments
struct APavlovPawn_GetWeaponAttachments_Params
{
	class AActor*                                      Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovPawn.GetWeaponAmmoType
struct APavlovPawn_GetWeaponAmmoType_Params
{
	class AActor*                                      Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetWatch
struct APavlovPawn_GetWatch_Params
{
	class UWatch*                                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetVehicleOccupant
struct APavlovPawn_GetVehicleOccupant_Params
{
	class UVehicleOccupant*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetSkinSkeleton
struct APavlovPawn_GetSkinSkeleton_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetSideWeaponHolster
struct APavlovPawn_GetSideWeaponHolster_Params
{
	class UHolsterComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetNumOfSyringeRevives
struct APavlovPawn_GetNumOfSyringeRevives_Params
{
	class AActor*                                      Syringe;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetNumOfPainkillerPills
struct APavlovPawn_GetNumOfPainkillerPills_Params
{
	class AActor*                                      Painkillers;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetMainWeaponHolster
struct APavlovPawn_GetMainWeaponHolster_Params
{
	class UHolsterComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetLimitedAmmoComponent
struct APavlovPawn_GetLimitedAmmoComponent_Params
{
	class ULimitedAmmoComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetKnifeHolster
struct APavlovPawn_GetKnifeHolster_Params
{
	class UHolsterComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetItemOfClass
struct APavlovPawn_GetItemOfClass_Params
{
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipHands;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSubClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AVRItem*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetInventorySlotsVis
struct APavlovPawn_GetInventorySlotsVis_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetHoldingItemByName
struct APavlovPawn_GetHoldingItemByName_Params
{
	struct FName                                       ItemName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AVRItem*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetHealth
struct APavlovPawn_GetHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetHeadSpaceHitVectors
struct APavlovPawn_GetHeadSpaceHitVectors_Params
{
	struct FVector                                     HitLocation;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     HeadSpaceHitLocation;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HeadSpaceHitDirection;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetGrenadeHolsters
struct APavlovPawn_GetGrenadeHolsters_Params
{
	TArray<class UHolsterComponent*>                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovPawn.GetEquipmentByName
struct APavlovPawn_GetEquipmentByName_Params
{
	struct FName                                       EquipmentName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEquipmentDefinition                        definition;                                               // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetCompatibleSlot
struct APavlovPawn_GetCompatibleSlot_Params
{
	struct FName                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetBombHolster
struct APavlovPawn_GetBombHolster_Params
{
	class UHolsterComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetAvatarSkin
struct APavlovPawn_GetAvatarSkin_Params
{
	class UAvatarSkin*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetAmmoTypeName
struct APavlovPawn_GetAmmoTypeName_Params
{
	EAmmoType                                          AmmoType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetAmmoPocket
struct APavlovPawn_GetAmmoPocket_Params
{
	class UVRPocketComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetAmmoAmount
struct APavlovPawn_GetAmmoAmount_Params
{
	struct FName                                       AmmoId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.FinishExitVehicleServer
struct APavlovPawn_FinishExitVehicleServer_Params
{
};

// Function Pavlov.PavlovPawn.FinishExitVehicleClient
struct APavlovPawn_FinishExitVehicleClient_Params
{
};

// Function Pavlov.PavlovPawn.ExitVehicle
struct APavlovPawn_ExitVehicle_Params
{
	struct FVector                                     ExitLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.EnableVehicleCollisionRecenter
struct APavlovPawn_EnableVehicleCollisionRecenter_Params
{
};

// Function Pavlov.PavlovPawn.EnableVehicleCollision
struct APavlovPawn_EnableVehicleCollision_Params
{
};

// Function Pavlov.PavlovPawn.EnableItemUse
struct APavlovPawn_EnableItemUse_Params
{
	bool                                               bEnableUse;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.DropItem
struct APavlovPawn_DropItem_Params
{
	struct FName                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromHandsOnly;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.DropHeldItems
struct APavlovPawn_DropHeldItems_Params
{
	bool                                               bDominant;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBoth;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyItem;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.DropEquipment
struct APavlovPawn_DropEquipment_Params
{
};

// Function Pavlov.PavlovPawn.DropAllItems
struct APavlovPawn_DropAllItems_Params
{
	bool                                               bDestroyItems;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInventoryOnly;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.DisablePickup
struct APavlovPawn_DisablePickup_Params
{
	bool                                               bDisabled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.ClientSanityCheck
struct APavlovPawn_ClientSanityCheck_Params
{
};

// Function Pavlov.PavlovPawn.ClientOnExplosionDamage
struct APavlovPawn_ClientOnExplosionDamage_Params
{
};

// Function Pavlov.PavlovPawn.CanRevive
struct APavlovPawn_CanRevive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.CanListenToRadio
struct APavlovPawn_CanListenToRadio_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.BlowHelmetOff
struct APavlovPawn_BlowHelmetOff_Params
{
};

// Function Pavlov.PavlovPawn.ApplyDelayedWound
struct APavlovPawn_ApplyDelayedWound_Params
{
};

// Function Pavlov.PavlovPawn.AddWatch
struct APavlovPawn_AddWatch_Params
{
};

// Function Pavlov.PavlovPawn.AddHitSlow
struct APavlovPawn_AddHitSlow_Params
{
};

// Function Pavlov.PavlovPawn.AddAmmo
struct APavlovPawn_AddAmmo_Params
{
	struct FName                                       AmmoId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.ActivateCameraClip
struct APavlovPawn_ActivateCameraClip_Params
{
};

// Function Pavlov.PavlovPlayerController.UnBoardVehicle
struct APavlovPlayerController_UnBoardVehicle_Params
{
};

// Function Pavlov.PavlovPlayerController.TryRestoreEquipmentBySnapshot
struct APavlovPlayerController_TryRestoreEquipmentBySnapshot_Params
{
};

// Function Pavlov.PavlovPlayerController.TestTeamKill
struct APavlovPlayerController_TestTeamKill_Params
{
};

// Function Pavlov.PavlovPlayerController.TestKillfeed
struct APavlovPlayerController_TestKillfeed_Params
{
};

// Function Pavlov.PavlovPlayerController.TakeEquipmentSnapshot
struct APavlovPlayerController_TakeEquipmentSnapshot_Params
{
};

// Function Pavlov.PavlovPlayerController.SwitchToSpectator
struct APavlovPlayerController_SwitchToSpectator_Params
{
};

// Function Pavlov.PavlovPlayerController.SwitchTeam
struct APavlovPlayerController_SwitchTeam_Params
{
};

// Function Pavlov.PavlovPlayerController.SwapControllers
struct APavlovPlayerController_SwapControllers_Params
{
};

// Function Pavlov.PavlovPlayerController.Suicide
struct APavlovPlayerController_Suicide_Params
{
};

// Function Pavlov.PavlovPlayerController.SNDPreGameSpawnTimer
struct APavlovPlayerController_SNDPreGameSpawnTimer_Params
{
};

// Function Pavlov.PavlovPlayerController.SetServerTickRate
struct APavlovPlayerController_SetServerTickRate_Params
{
	int                                                Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.SetHeadMountedDisplayScale
struct APavlovPlayerController_SetHeadMountedDisplayScale_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.SetBuyingEnabled
struct APavlovPlayerController_SetBuyingEnabled_Params
{
	float                                              ForDuration;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BuyZoneMaxDistance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.SetBuyingDisabled
struct APavlovPlayerController_SetBuyingDisabled_Params
{
};

// Function Pavlov.PavlovPlayerController.SetBlackScreen
struct APavlovPlayerController_SetBlackScreen_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ServerVote
struct APavlovPlayerController_ServerVote_Params
{
	class AVote*                                       Vote;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bYes;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ServerUnBoardVehicle
struct APavlovPlayerController_ServerUnBoardVehicle_Params
{
};

// Function Pavlov.PavlovPlayerController.ServerTestTeamKill
struct APavlovPlayerController_ServerTestTeamKill_Params
{
};

// Function Pavlov.PavlovPlayerController.ServerSwitchTeam
struct APavlovPlayerController_ServerSwitchTeam_Params
{
};

// Function Pavlov.PavlovPlayerController.ServerSuicide
struct APavlovPlayerController_ServerSuicide_Params
{
};

// Function Pavlov.PavlovPlayerController.ServerSetServerTickRate
struct APavlovPlayerController_ServerSetServerTickRate_Params
{
	int                                                Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ServerReportZombieBulletHit
struct APavlovPlayerController_ServerReportZombieBulletHit_Params
{
	struct FClientZombieBulletHit                      Hit;                                                      // (Parm)
};

// Function Pavlov.PavlovPlayerController.ServerReportVirtualStockChange
struct APavlovPlayerController_ServerReportVirtualStockChange_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ServerReportTrigger
struct APavlovPlayerController_ServerReportTrigger_Params
{
	class AGun*                                        Gun;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTrigger;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              GunState;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Pavlov.PavlovPlayerController.ServerReportShatter
struct APavlovPlayerController_ServerReportShatter_Params
{
	class ADestructible*                               Destructible;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   Normal;                                                   // (Parm)
	struct FVector_NetQuantize                         Location;                                                 // (Parm)
};

// Function Pavlov.PavlovPlayerController.ServerReportKnifeDamage
struct APavlovPlayerController_ServerReportKnifeDamage_Params
{
	struct FClientKnifeDamage                          Info;                                                     // (Parm)
};

// Function Pavlov.PavlovPlayerController.ServerReportHandenessChange
struct APavlovPlayerController_ServerReportHandenessChange_Params
{
	bool                                               bRightHanded;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ServerReportCorpseHitByClass
struct APavlovPlayerController_ServerReportCorpseHitByClass_Params
{
	class APavlovPawn*                                 PawnCorpse;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GunClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ServerReportCorpseHit
struct APavlovPlayerController_ServerReportCorpseHit_Params
{
	class APavlovPawn*                                 PawnCorpse;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FImpactDamage                               ImpactDamage;                                             // (ConstParm, Parm, ReferenceParm)
};

// Function Pavlov.PavlovPlayerController.ServerReportBulletHit
struct APavlovPlayerController_ServerReportBulletHit_Params
{
	struct FClientBulletHit                            Hit;                                                      // (Parm)
};

// Function Pavlov.PavlovPlayerController.ServerProcessZombieDamage
struct APavlovPlayerController_ServerProcessZombieDamage_Params
{
};

// Function Pavlov.PavlovPlayerController.ServerKnockZombie
struct APavlovPlayerController_ServerKnockZombie_Params
{
	class AZAICharacter*                               Zombie;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EZKnockBackDirection                               Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Flags;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ServerInstigateVote
struct APavlovPlayerController_ServerInstigateVote_Params
{
	class UClass*                                      VoteClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Param1;                                                   // (Parm, ZeroConstructor)
	int                                                Param2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ServerEnterVehicle
struct APavlovPlayerController_ServerEnterVehicle_Params
{
	class APavlovVehicle*                              Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Seat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ServerEnterDigit
struct APavlovPlayerController_ServerEnterDigit_Params
{
	class ABomb*                                       Bomb;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ServerBuy
struct APavlovPlayerController_ServerBuy_Params
{
	struct FName                                       EquipmentName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ServerBoardVehicle
struct APavlovPlayerController_ServerBoardVehicle_Params
{
	class APavlovWheeledVehicle*                       Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Seat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ServerAuthenticate
struct APavlovPlayerController_ServerAuthenticate_Params
{
	struct FString                                     HexTicket;                                                // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovPlayerController.ServerAbstainToVote
struct APavlovPlayerController_ServerAbstainToVote_Params
{
};

// Function Pavlov.PavlovPlayerController.ResetPlayerHeight
struct APavlovPlayerController_ResetPlayerHeight_Params
{
};

// Function Pavlov.PavlovPlayerController.ResetPlayerEffects
struct APavlovPlayerController_ResetPlayerEffects_Params
{
};

// Function Pavlov.PavlovPlayerController.PunishTeamKiller
struct APavlovPlayerController_PunishTeamKiller_Params
{
};

// Function Pavlov.PavlovPlayerController.OnZombieClientKnock
struct APavlovPlayerController_OnZombieClientKnock_Params
{
	class AZAICharacter*                               Zombie;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EZKnockBackDirection                               Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Flags;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.OnMenuUniverseChanged
struct APavlovPlayerController_OnMenuUniverseChanged_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.OnAuthTimedout
struct APavlovPlayerController_OnAuthTimedout_Params
{
};

// Function Pavlov.PavlovPlayerController.OnAuthTicketReceived
struct APavlovPlayerController_OnAuthTicketReceived_Params
{
	bool                                               bSucceed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     HexAuthTicket;                                            // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovPlayerController.MulticastDebugPoint
struct APavlovPlayerController_MulticastDebugPoint_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovPlayerController.LeaveVehicle
struct APavlovPlayerController_LeaveVehicle_Params
{
};

// Function Pavlov.PavlovPlayerController.KilledInVehicle
struct APavlovPlayerController_KilledInVehicle_Params
{
	class APavlovVehicle*                              Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.IsInVehicle
struct APavlovPlayerController_IsInVehicle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.GetHeadMountedDisplayScale
struct APavlovPlayerController_GetHeadMountedDisplayScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ForgiveTeamKiller
struct APavlovPlayerController_ForgiveTeamKiller_Params
{
};

// Function Pavlov.PavlovPlayerController.ExecuteRconCommand
struct APavlovPlayerController_ExecuteRconCommand_Params
{
	struct FRconCommand                                RconCommand;                                              // (Parm)
};

// Function Pavlov.PavlovPlayerController.EnterVehicle
struct APavlovPlayerController_EnterVehicle_Params
{
	class APavlovVehicle*                              Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Seat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ClientSetBuying
struct APavlovPlayerController_ClientSetBuying_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ClientServerConnect
struct APavlovPlayerController_ClientServerConnect_Params
{
	struct FServerConnectParams                        Params;                                                   // (ConstParm, Parm, ReferenceParm)
};

// Function Pavlov.PavlovPlayerController.ClientReportMatchEnd
struct APavlovPlayerController_ClientReportMatchEnd_Params
{
};

// Function Pavlov.PavlovPlayerController.ClientPlayKillPing
struct APavlovPlayerController_ClientPlayKillPing_Params
{
};

// Function Pavlov.PavlovPlayerController.ClientOnTeamKilled
struct APavlovPlayerController_ClientOnTeamKilled_Params
{
	class APavlovPlayerState*                          CulpritTeamKiller;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ClientInstigateFlashVision
struct APavlovPlayerController_ClientInstigateFlashVision_Params
{
	float                                              Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ViewAlpha;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ClientInstigateFlash
struct APavlovPlayerController_ClientInstigateFlash_Params
{
	float                                              Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ViewAlpha;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ClientDisplayMessage
struct APavlovPlayerController_ClientDisplayMessage_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovPlayerController.ClientConnectTo
struct APavlovPlayerController_ClientConnectTo_Params
{
	struct FString                                     ConnectURL;                                               // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovPlayerController.ClientAuthenticate
struct APavlovPlayerController_ClientAuthenticate_Params
{
};

// Function Pavlov.PavlovPlayerController.Buy
struct APavlovPlayerController_Buy_Params
{
	struct FName                                       EquipmentName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.BoardVehicle
struct APavlovPlayerController_BoardVehicle_Params
{
	class APavlovWheeledVehicle*                       Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Seat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ApplySkippedHeadMountedDisplayScale
struct APavlovPlayerController_ApplySkippedHeadMountedDisplayScale_Params
{
};

// Function Pavlov.PavlovPlayerState.SendJoinDataToClient
struct APavlovPlayerState_SendJoinDataToClient_Params
{
	class UJsonUtilsObj*                               JsonObj;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerState.Reset
struct APavlovPlayerState_Reset_Params
{
};

// Function Pavlov.PavlovPlayerState.ReceiveJoinJsonData
struct APavlovPlayerState_ReceiveJoinJsonData_Params
{
	TArray<unsigned char>                              JoinData;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Pavlov.PavlovPlayerState.OnRep_HasPlayerProxy
struct APavlovPlayerState_OnRep_HasPlayerProxy_Params
{
};

// Function Pavlov.PavlovPlayerState.OnRep_Flair
struct APavlovPlayerState_OnRep_Flair_Params
{
};

// Function Pavlov.PavlovPlayerState.OnRep_Cash
struct APavlovPlayerState_OnRep_Cash_Params
{
};

// Function Pavlov.PavlovPlayerState.LoadEquippedSkins
struct APavlovPlayerState_LoadEquippedSkins_Params
{
};

// Function Pavlov.PavlovPlayerState.IsAbleToBuy
struct APavlovPlayerState_IsAbleToBuy_Params
{
	struct FName                                       EquipmentName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerState.HasSkinOverride
struct APavlovPlayerState_HasSkinOverride_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerState.HasSkinEquipped
struct APavlovPlayerState_HasSkinEquipped_Params
{
	struct FName                                       ItemName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerState.GetVRDevice
struct APavlovPlayerState_GetVRDevice_Params
{
	EVRDevice                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerState.GetTeamId
struct APavlovPlayerState_GetTeamId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerState.GetStringId
struct APavlovPlayerState_GetStringId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovPlayerState.GetSkinId
struct APavlovPlayerState_GetSkinId_Params
{
	struct FName                                       ItemName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerState.DisableFallSound
struct APavlovPlayerState_DisableFallSound_Params
{
};

// Function Pavlov.PavlovPlayerState.AddEquippedSkinByFamily
struct APavlovPlayerState_AddEquippedSkinByFamily_Params
{
	struct FName                                       ItemName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ESkinFamily                                        SkinFamily;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerState.AddEquippedSkin
struct APavlovPlayerState_AddEquippedSkin_Params
{
	struct FName                                       ItemName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkinId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovSimpleVehicleMovement.UpdateWheels
struct UPavlovSimpleVehicleMovement_UpdateWheels_Params
{
	bool                                               bRight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FReplicatedWheelState                       WheelUpdate;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Pavlov.PavlovSimpleVehicleMovement.SetWheelInfo
struct UPavlovSimpleVehicleMovement_SetWheelInfo_Params
{
	bool                                               bRight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FReplicatedWheelState                       WheelsState;                                              // (Parm)
};

// Function Pavlov.PavlovSimpleVehicleMovement.SetWheelDriveTorque
struct UPavlovSimpleVehicleMovement_SetWheelDriveTorque_Params
{
	bool                                               bRight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DriveTorque;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovSimpleVehicleMovement.SetWheelDriveAndBrakeTorque
struct UPavlovSimpleVehicleMovement_SetWheelDriveAndBrakeTorque_Params
{
	bool                                               bRight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DriveTorque;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BrakeTorque;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovSimpleVehicleMovement.SetWheelBrakingTorque
struct UPavlovSimpleVehicleMovement_SetWheelBrakingTorque_Params
{
	bool                                               bRight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BrakeTorque;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovSimpleVehicleMovement.SetTurnTorque
struct UPavlovSimpleVehicleMovement_SetTurnTorque_Params
{
	float                                              TurningTorque;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovSimpleVehicleMovement.ServerUpdateWheels
struct UPavlovSimpleVehicleMovement_ServerUpdateWheels_Params
{
	struct FReplicatedWheelState                       LeftWheelInput;                                           // (ConstParm, Parm, ReferenceParm)
	struct FReplicatedWheelState                       RightWheelInput;                                          // (ConstParm, Parm, ReferenceParm)
	float                                              TurnTorque;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovSimpleVehicleMovement.ServerEBrake
struct UPavlovSimpleVehicleMovement_ServerEBrake_Params
{
};

// Function Pavlov.PavlovSpectatorPawn.ScrubToLive
struct APavlovSpectatorPawn_ScrubToLive_Params
{
};

// Function Pavlov.PavlovSpectatorPawn.ScrubRelative
struct APavlovSpectatorPawn_ScrubRelative_Params
{
	float                                              Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovSpectatorPawn.ScrubNormalized
struct APavlovSpectatorPawn_ScrubNormalized_Params
{
	float                                              NormalizedTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovSpectatorPawn.Scrub
struct APavlovSpectatorPawn_Scrub_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovSpectatorPawn.OnScrubChanged
struct APavlovSpectatorPawn_OnScrubChanged_Params
{
	bool                                               bScrubing;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovSpectatorPawn.OnGotoTime
struct APavlovSpectatorPawn_OnGotoTime_Params
{
	bool                                               bWasSuccessful;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovSpectatorPawn.OnDemoPlaybackError
struct APavlovSpectatorPawn_OnDemoPlaybackError_Params
{
	TEnumAsByte<EDemoPlayFailure>                      FailureType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ErrorString;                                              // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovSpectatorPawn.GetNormalizedScrubTime
struct APavlovSpectatorPawn_GetNormalizedScrubTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.SwapHands
struct UPavlovStatics_SwapHands_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.SupportsGripForce
struct UPavlovStatics_SupportsGripForce_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.SpawnLocalSound2DByPawn
struct UPavlovStatics_SpawnLocalSound2DByPawn_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.SpawnLocalSound2D
struct UPavlovStatics_SpawnLocalSound2D_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.SpawnHitFeedbackSound
struct UPavlovStatics_SpawnHitFeedbackSound_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EHitFeedbackType                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.SetPlayerEffectsDisabled
struct UPavlovStatics_SetPlayerEffectsDisabled_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDisabled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.SetPavlovSplash
struct UPavlovStatics_SetPavlovSplash_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    SplashTexture;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.SetActorNetDormancy
struct UPavlovStatics_SetActorNetDormancy_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetDormancy>                          Dormancy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.ResetVoiceCaptureDevice
struct UPavlovStatics_ResetVoiceCaptureDevice_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.PropRadialDamage
struct UPavlovStatics_PropRadialDamage_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinimumDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              DamageInnerRadius;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageOuterRadius;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageFalloff;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              IgnoreActors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedByController;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     DamagePreventionChannel;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.OpenPavlovMapById
struct UPavlovStatics_OpenPavlovMapById_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
	bool                                               bNoDelay;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.IsXmas
struct UPavlovStatics_IsXmas_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.IsReplay
struct UPavlovStatics_IsReplay_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.IsQuestServer
struct UPavlovStatics_IsQuestServer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.IsQuest
struct UPavlovStatics_IsQuest_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.IsPlayingOnlineGame
struct UPavlovStatics_IsPlayingOnlineGame_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.IsOculusTouch
struct UPavlovStatics_IsOculusTouch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.IsInEntry
struct UPavlovStatics_IsInEntry_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.IsHalloween
struct UPavlovStatics_IsHalloween_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.IsEditor
struct UPavlovStatics_IsEditor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.IsCompetitiveMode
struct UPavlovStatics_IsCompetitiveMode_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.IsBombDropped
struct UPavlovStatics_IsBombDropped_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.IsAprilFools
struct UPavlovStatics_IsAprilFools_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.HasGunOptimizations
struct UPavlovStatics_HasGunOptimizations_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GoToStartUpMap
struct UPavlovStatics_GoToStartUpMap_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GoToEntry
struct UPavlovStatics_GoToEntry_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetWorkshop
struct UPavlovStatics_GetWorkshop_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UWorkshop*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetVoiceLevelPeak
struct UPavlovStatics_GetVoiceLevelPeak_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetUserId
struct UPavlovStatics_GetUserId_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovStatics.GetUIManager
struct UPavlovStatics_GetUIManager_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UUIManager*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetTutorial
struct UPavlovStatics_GetTutorial_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UTutorial*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetSpectatorTVCamera
struct UPavlovStatics_GetSpectatorTVCamera_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ASpectatorTVCamera*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetShackQualityLevel
struct UPavlovStatics_GetShackQualityLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetShackDeviceType
struct UPavlovStatics_GetShackDeviceType_Params
{
	EShackDeviceType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetRefPoseBoneTransform
struct UPavlovStatics_GetRefPoseBoneTransform_Params
{
	class USkeletalMeshComponent*                      SkelMesh;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetPlayerUniqueIdAsString
struct UPavlovStatics_GetPlayerUniqueIdAsString_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovStatics.GetPlayerEquipment
struct UPavlovStatics_GetPlayerEquipment_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Primary;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Secondary;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Pavlov.PavlovStatics.GetPlayerEffects
struct UPavlovStatics_GetPlayerEffects_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlobalPlayerEffects*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetPawnByPlayerState
struct UPavlovStatics_GetPawnByPlayerState_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPawn*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetPavlovVersionString
struct UPavlovStatics_GetPavlovVersionString_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovStatics.GetPavlovLobby
struct UPavlovStatics_GetPavlovLobby_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UPavlovLobby*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetPavlovGameUserSettings
struct UPavlovStatics_GetPavlovGameUserSettings_Params
{
	class UPavlovGameUserSettings*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetPavlovGameInstance
struct UPavlovStatics_GetPavlovGameInstance_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UPavlovGameInstance*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetMeshMaterials
struct UPavlovStatics_GetMeshMaterials_Params
{
	class UStaticMesh*                                 StaticMesh;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovStatics.GetMenuUniverseInstance
struct UPavlovStatics_GetMenuUniverseInstance_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AMenuUniverse*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetMatchmaking
struct UPavlovStatics_GetMatchmaking_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UMatchmaking*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetLocalPlayerState
struct UPavlovStatics_GetLocalPlayerState_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPlayerState*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetLocalPlayerCameraTransform
struct UPavlovStatics_GetLocalPlayerCameraTransform_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetHoliday
struct UPavlovStatics_GetHoliday_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EHolidays                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetFriendsUserId
struct UPavlovStatics_GetFriendsUserId_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovStatics.GetDefaultObject
struct UPavlovStatics_GetDefaultObject_Params
{
	class UClass*                                      ObjectClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetControllerByPlayerState
struct UPavlovStatics_GetControllerByPlayerState_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetBoneTransform
struct UPavlovStatics_GetBoneTransform_Params
{
	class USkeletalMeshComponent*                      SkelMesh;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetBombInstance
struct UPavlovStatics_GetBombInstance_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ABomb*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.ForceNoSoundOcclusion
struct UPavlovStatics_ForceNoSoundOcclusion_Params
{
	class UAudioComponent*                             AudioComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.FlushActorNetDormancy
struct UPavlovStatics_FlushActorNetDormancy_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.FindClosestBombPlantSpot
struct UPavlovStatics_FindClosestBombPlantSpot_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RefLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ABombPlantSpot*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.ArePawnsHostile
struct UPavlovStatics_ArePawnsHostile_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.ZombieHit_Multi
struct APavlovVehicle_ZombieHit_Multi_Params
{
	struct FVector_NetQuantize                         HitLocation;                                              // (Parm)
};

// Function Pavlov.PavlovVehicle.VehicleSoundSetup
struct APavlovVehicle_VehicleSoundSetup_Params
{
	bool                                               bEntered;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.VehicleKilled_Multi
struct APavlovVehicle_VehicleKilled_Multi_Params
{
};

// Function Pavlov.PavlovVehicle.TryFlipVehicle
struct APavlovVehicle_TryFlipVehicle_Params
{
};

// Function Pavlov.PavlovVehicle.TakeRadialDamage
struct APavlovVehicle_TakeRadialDamage_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.TakePointDamage
struct APavlovVehicle_TakePointDamage_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ShotFromDirection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.StartVehicleDespawnTimer
struct APavlovVehicle_StartVehicleDespawnTimer_Params
{
};

// Function Pavlov.PavlovVehicle.SetVehicleOccupied
struct APavlovVehicle_SetVehicleOccupied_Params
{
	bool                                               bOccupied;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.SetEngineState
struct APavlovVehicle_SetEngineState_Params
{
	bool                                               bStart;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.SeatVehicleTeamID
struct APavlovVehicle_SeatVehicleTeamID_Params
{
	int                                                NewTeamId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.RepairVehicle
struct APavlovVehicle_RepairVehicle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.PlayRepairSound_Multi
struct APavlovVehicle_PlayRepairSound_Multi_Params
{
	bool                                               bFullyRepaired;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.PlayerEnterExit_Multi
struct APavlovVehicle_PlayerEnterExit_Multi_Params
{
	bool                                               bEntered;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Seat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.OutOfBounds
struct APavlovVehicle_OutOfBounds_Params
{
	bool                                               bOut;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.OnVehicleCritical
struct APavlovVehicle_OnVehicleCritical_Params
{
	bool                                               bCritical;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.OnRep_VehicleDamageState
struct APavlovVehicle_OnRep_VehicleDamageState_Params
{
	EVehicleDamageState                                OldVehicleDamageState;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.OnRep_Occupied
struct APavlovVehicle_OnRep_Occupied_Params
{
};

// Function Pavlov.PavlovVehicle.OnRep_EngineOn
struct APavlovVehicle_OnRep_EngineOn_Params
{
};

// Function Pavlov.PavlovVehicle.OnEngineChanged
struct APavlovVehicle_OnEngineChanged_Params
{
	bool                                               bOn;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDisabled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.IsVehicleEmpty
struct APavlovVehicle_IsVehicleEmpty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.IsVehicleDisabled
struct APavlovVehicle_IsVehicleDisabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.IsSeatEmpty
struct APavlovVehicle_IsSeatEmpty_Params
{
	int                                                Seat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.IsLocalPlayerInVehicle
struct APavlovVehicle_IsLocalPlayerInVehicle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.IsLocalPlayerInSeat
struct APavlovVehicle_IsLocalPlayerInSeat_Params
{
	int                                                Seat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.IsDriver
struct APavlovVehicle_IsDriver_Params
{
	class UVehicleOccupant*                            Occupant;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.HasDriver
struct APavlovVehicle_HasDriver_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.GetVehicleInterior
struct APavlovVehicle_GetVehicleInterior_Params
{
	int                                                Seat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.GetVehicleEngineAudioComponents
struct APavlovVehicle_GetVehicleEngineAudioComponents_Params
{
	TArray<class UAudioComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovVehicle.GetVehicleAudioComponents
struct APavlovVehicle_GetVehicleAudioComponents_Params
{
	TArray<class UAudioComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovVehicle.GetTeamId
struct APavlovVehicle_GetTeamId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.GetSeatExitLocation
struct APavlovVehicle_GetSeatExitLocation_Params
{
	bool                                               bRight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExitLocation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.GetSeat
struct APavlovVehicle_GetSeat_Params
{
	int                                                Seat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UVehicleSeat*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.GetOccupantSeat
struct APavlovVehicle_GetOccupantSeat_Params
{
	class UVehicleOccupant*                            Occupant;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.GetOccupants
struct APavlovVehicle_GetOccupants_Params
{
	TArray<class UVehicleOccupant*>                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovVehicle.GetOccupant
struct APavlovVehicle_GetOccupant_Params
{
	int                                                Seat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UVehicleOccupant*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.GetMovmentVelocity
struct APavlovVehicle_GetMovmentVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.GetExitLocation
struct APavlovVehicle_GetExitLocation_Params
{
	bool                                               bRight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.GetDriverSeat
struct APavlovVehicle_GetDriverSeat_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.GetDriver
struct APavlovVehicle_GetDriver_Params
{
	class UVehicleOccupant*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.FindEmptySeat
struct APavlovVehicle_FindEmptySeat_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.EnteredKillVolume
struct APavlovVehicle_EnteredKillVolume_Params
{
};

// Function Pavlov.PavlovVehicle.DoesSeatExitRight
struct APavlovVehicle_DoesSeatExitRight_Params
{
	int                                                Seat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.DelayEngineOffSound
struct APavlovVehicle_DelayEngineOffSound_Params
{
};

// Function Pavlov.PavlovVehicle.ClearBumpers_Multi
struct APavlovVehicle_ClearBumpers_Multi_Params
{
	float                                              Direction;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.ClearBumpers
struct APavlovVehicle_ClearBumpers_Params
{
	float                                              Direction;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle.CanEnterVehicle
struct APavlovVehicle_CanEnterVehicle_Params
{
	class APavlovPawn*                                 PavlovPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Seat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle_Tank.UpdateSeatWidget
struct APavlovVehicle_Tank_UpdateSeatWidget_Params
{
};

// Function Pavlov.PavlovVehicle_Tank.TurretMoving_Multi
struct APavlovVehicle_Tank_TurretMoving_Multi_Params
{
	bool                                               bIsTurretMoving;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle_Tank.TurretFired_Multi
struct APavlovVehicle_Tank_TurretFired_Multi_Params
{
};

// Function Pavlov.PavlovVehicle_Tank.StopGunnerFire
struct APavlovVehicle_Tank_StopGunnerFire_Params
{
};

// Function Pavlov.PavlovVehicle_Tank.StartGunnerFire
struct APavlovVehicle_Tank_StartGunnerFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle_Tank.SetTurretTurnRate
struct APavlovVehicle_Tank_SetTurretTurnRate_Params
{
	float                                              FOVAlpha;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle_Tank.SetTurretInput
struct APavlovVehicle_Tank_SetTurretInput_Params
{
	struct FVector2D                                   AddRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle_Tank.SetMachineGunRotation
struct APavlovVehicle_Tank_SetMachineGunRotation_Params
{
	struct FRotator                                    MGRot;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle_Tank.OnRep_Overheating
struct APavlovVehicle_Tank_OnRep_Overheating_Params
{
};

// Function Pavlov.PavlovVehicle_Tank.IsTurretPitchLimitReached
struct APavlovVehicle_Tank_IsTurretPitchLimitReached_Params
{
	float                                              TurretPitchInput;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle_Tank.IsTurretMoving
struct APavlovVehicle_Tank_IsTurretMoving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle_Tank.IsGunnerOverheated
struct APavlovVehicle_Tank_IsGunnerOverheated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle_Tank.GunnerFired_Multi
struct APavlovVehicle_Tank_GunnerFired_Multi_Params
{
};

// Function Pavlov.PavlovVehicle_Tank.GunnerFireBullet
struct APavlovVehicle_Tank_GunnerFireBullet_Params
{
};

// Function Pavlov.PavlovVehicle_Tank.GunnerCooldownTick
struct APavlovVehicle_Tank_GunnerCooldownTick_Params
{
};

// Function Pavlov.PavlovVehicle_Tank.GetTurretRotation
struct APavlovVehicle_Tank_GetTurretRotation_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle_Tank.FireTankTurret
struct APavlovVehicle_Tank_FireTankTurret_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle_Tank.DeactivateGunnerFireFX
struct APavlovVehicle_Tank_DeactivateGunnerFireFX_Params
{
};

// Function Pavlov.PavlovVehicle_Tank.CanFireTurret
struct APavlovVehicle_Tank_CanFireTurret_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovVehicle_Tank.AddHeatBuildup
struct APavlovVehicle_Tank_AddHeatBuildup_Params
{
};

// Function Pavlov.PavlovWheeledVehicle.SetSteeringInput
struct APavlovWheeledVehicle_SetSteeringInput_Params
{
	float                                              Input;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PlayerCycler.GetNext
struct UPlayerCycler_GetNext_Params
{
	class APavlovPlayerState*                          PlayerState;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class APavlovPawn*                                 Pawn;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PlayOfflineView.OnMapBrowserCommit
struct APlayOfflineView_OnMapBrowserCommit_Params
{
	struct FModalCommitParams                          Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Pavlov.Pliers.ServerReportCut
struct APliers_ServerReportCut_Params
{
	class ABomb*                                       Bomb;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WireIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Pliers.MulticastOnCut
struct APliers_MulticastOnCut_Params
{
};

// Function Pavlov.PushBomb.SetBombState
struct APushBomb_SetBombState_Params
{
	EBombState                                         State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushBomb.OnRep_BombState
struct APushBomb_OnRep_BombState_Params
{
};

// Function Pavlov.PushBomb.OnBombStateChanged
struct APushBomb_OnBombStateChanged_Params
{
	EBombState                                         State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushBomb.CheckSiteOverlap
struct APushBomb_CheckSiteOverlap_Params
{
};

// Function Pavlov.PushBombObjective.TickBombTimer
struct APushBombObjective_TickBombTimer_Params
{
};

// Function Pavlov.PushBombObjective.SetPushObjectiveProxy
struct APushBombObjective_SetPushObjectiveProxy_Params
{
	class APavlov_PushBombObjective*                   PushBombProxy;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushBombObjective.SetObjectiveState
struct APushBombObjective_SetObjectiveState_Params
{
	EPushObjectiveState                                PushObjectiveState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushBombObjective.SetObjectiveMarker
struct APushBombObjective_SetObjectiveMarker_Params
{
	EObjectiveMarker                                   Marker;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushBombObjective.ResetObjective
struct APushBombObjective_ResetObjective_Params
{
};

// Function Pavlov.PushBombObjective.RemoveBomb
struct APushBombObjective_RemoveBomb_Params
{
};

// Function Pavlov.PushBombObjective.PushObjectiveStateChanged
struct APushBombObjective_PushObjectiveStateChanged_Params
{
	EPushObjectiveState                                CurrentState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushBombObjective.PlantPushBomb
struct APushBombObjective_PlantPushBomb_Params
{
	class APushBomb*                                   PushBomb;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PushBombObjective.OnTeamsSwitched
struct APushBombObjective_OnTeamsSwitched_Params
{
};

// Function Pavlov.PushBombObjective.OnRep_PushObjectiveProxy
struct APushBombObjective_OnRep_PushObjectiveProxy_Params
{
};

// Function Pavlov.PushBombObjective.OnRep_ObjectiveState
struct APushBombObjective_OnRep_ObjectiveState_Params
{
};

// Function Pavlov.PushBombObjective.OnRep_ObjectiveMarker
struct APushBombObjective_OnRep_ObjectiveMarker_Params
{
};

// Function Pavlov.PushBombObjective.OnRep_BombTimerAlpha
struct APushBombObjective_OnRep_BombTimerAlpha_Params
{
};

// DelegateFunction Pavlov.PushBombObjective.OnPushBombObjectiveStateChanged__DelegateSignature
struct APushBombObjective_OnPushBombObjectiveStateChanged__DelegateSignature_Params
{
	class APushBombObjective*                          PushBombObjective;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	EPushObjectiveState                                ObjectiveState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushBombObjective.OnObjectiveMarkerChanged
struct APushBombObjective_OnObjectiveMarkerChanged_Params
{
	EObjectiveMarker                                   Marker;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushBombObjective.OnBombTimerAlphaChanged
struct APushBombObjective_OnBombTimerAlphaChanged_Params
{
};

// Function Pavlov.PushBombObjective.OnBombOverlap
struct APushBombObjective_OnBombOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.PushBombObjective.OnBombExplosion_Server
struct APushBombObjective_OnBombExplosion_Server_Params
{
};

// Function Pavlov.PushBombObjective.IsLowQuality
struct APushBombObjective_IsLowQuality_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PushBombObjective.GetObjectiveState
struct APushBombObjective_GetObjectiveState_Params
{
	EPushObjectiveState                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PushBombObjective.GetBombMarker
struct APushBombObjective_GetBombMarker_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PushBombObjective.GetActiveObjectiveID
struct APushBombObjective_GetActiveObjectiveID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PushBombObjective.CleanupDestroyFX
struct APushBombObjective_CleanupDestroyFX_Params
{
};

// Function Pavlov.PushBombObjective.BombExplosion_Multi
struct APushBombObjective_BombExplosion_Multi_Params
{
};

// Function Pavlov.PushBombObjective.BombExplosion
struct APushBombObjective_BombExplosion_Params
{
};

// Function Pavlov.PushBombObjective.BombDefused
struct APushBombObjective_BombDefused_Params
{
};

// Function Pavlov.PushBombObjective.AttachPushBomb_Multi
struct APushBombObjective_AttachPushBomb_Multi_Params
{
	class APushBomb*                                   PushBomb;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushLoadout.UpdateLoadouts
struct APushLoadout_UpdateLoadouts_Params
{
};

// Function Pavlov.PushLoadout.SpawnLoadoutEquipment
struct APushLoadout_SpawnLoadoutEquipment_Params
{
	struct FName                                       LoadoutSlot;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPawn*                                 PavPawn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushLoadout.SetTeamId
struct APushLoadout_SetTeamId_Params
{
	int                                                LoadoutTeamId;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushLoadout.SetLockerAvailability
struct APushLoadout_SetLockerAvailability_Params
{
	int                                                LoadoutIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumOfLoadoutsAvailable;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxLoadouts;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PushLoadout.PlayerLoadoutTaken
struct APushLoadout_PlayerLoadoutTaken_Params
{
	class APavlovPawn*                                 PavPawn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTPToPlay;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushLoadout.OnRep_Loadouts
struct APushLoadout_OnRep_Loadouts_Params
{
};

// Function Pavlov.PushLoadout.IsAttackersRoom
struct APushLoadout_IsAttackersRoom_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PushLoadout.InitializePushLoadout
struct APushLoadout_InitializePushLoadout_Params
{
	class APavlov_PushLoadoutProxy*                    LoadoutProxy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWW2Items;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushLoadout.GetLootLocker
struct APushLoadout_GetLootLocker_Params
{
	int                                                LootLockerIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class APushLootLocker*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PushLoadout.GetLockerSpawnTransform
struct APushLoadout_GetLockerSpawnTransform_Params
{
	int                                                LockerNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PushLoadout.GetLoadoutSpawnTransform
struct APushLoadout_GetLoadoutSpawnTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PushLoadout.GetLoadoutByName
struct APushLoadout_GetLoadoutByName_Params
{
	struct FName                                       LoadoutId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPushLoadoutEquipment                       LoadoutEquipment;                                         // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PushLoadout.DoesPlayerHaveLoadout
struct APushLoadout_DoesPlayerHaveLoadout_Params
{
	class APavlovPawn*                                 PavPawn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PushLoadout.DeleteUnusedLockers
struct APushLoadout_DeleteUnusedLockers_Params
{
	int                                                CurrentLockers;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushLootLocker.SetupMesh
struct APushLootLocker_SetupMesh_Params
{
	struct FName                                       ItemName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SKComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PushLootLocker.SetNumOfLoadoutsAvailable
struct APushLootLocker_SetNumOfLoadoutsAvailable_Params
{
	int                                                NumAvailable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxLoadouts;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushLootLocker.OnRep_LoadoutCount
struct APushLootLocker_OnRep_LoadoutCount_Params
{
};

// Function Pavlov.PushLootLocker.OnLockerStateChanged
struct APushLootLocker_OnLockerStateChanged_Params
{
	bool                                               bOpen;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushLootLocker.GrabLocker
struct APushLootLocker_GrabLocker_Params
{
	class APavlovPawn*                                 PavPawn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PushLootLocker.GetLoadoutRoom
struct APushLootLocker_GetLoadoutRoom_Params
{
	class APushLoadout*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PushLootLocker.CanGrabLocker
struct APushLootLocker_CanGrabLocker_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PushManagerComponent.UpdateOOBGracePeriod
struct UPushManagerComponent_UpdateOOBGracePeriod_Params
{
};

// Function Pavlov.PushManagerComponent.SwappedSides
struct UPushManagerComponent_SwappedSides_Params
{
};

// Function Pavlov.PushManagerComponent.SetWinCondition
struct UPushManagerComponent_SetWinCondition_Params
{
	EPushWinCondition                                  PushWinCondition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushManagerComponent.SetTickets
struct UPushManagerComponent_SetTickets_Params
{
	bool                                               bAttackers;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Tickets;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PushManagerComponent.SetGracePeriod
struct UPushManagerComponent_SetGracePeriod_Params
{
	float                                              GraceTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushManagerComponent.SetActiveObjectiveId
struct UPushManagerComponent_SetActiveObjectiveId_Params
{
	int                                                ObjectiveId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushManagerComponent.RemoveTicket
struct UPushManagerComponent_RemoveTicket_Params
{
	bool                                               bAttackers;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PushManagerComponent.IsSpawnGracePeriod
struct UPushManagerComponent_IsSpawnGracePeriod_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PushManagerComponent.InitializePush
struct UPushManagerComponent_InitializePush_Params
{
	int                                                ObjectiveId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AttackTickets;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DefendTickets;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxAttackTickets;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WaveTickets;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LockerRefreshTime;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class APushLoadout*                                Team0LoadoutRoom;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class APushLoadout*                                Team1LoadoutRoom;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushManagerComponent.CheckLoadoutAvailability
struct UPushManagerComponent_CheckLoadoutAvailability_Params
{
};

// Function Pavlov.PushManagerComponent.AwardAttackersTicketsPerWave
struct UPushManagerComponent_AwardAttackersTicketsPerWave_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PushPlayerDataComponent.TakePushSnapshot
struct UPushPlayerDataComponent_TakePushSnapshot_Params
{
};

// Function Pavlov.PushPlayerDataComponent.SetHipSlotType
struct UPushPlayerDataComponent_SetHipSlotType_Params
{
	EPushHipSlot                                       HipSlot;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushPlayerDataComponent.SetDialogAsset
struct UPushPlayerDataComponent_SetDialogAsset_Params
{
	class UPushPlayerDialog*                           Dialog;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushPlayerDataComponent.RestorePushSnapshot
struct UPushPlayerDataComponent_RestorePushSnapshot_Params
{
	struct FName                                       FallbackWeapon;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UPushPlayerStateComponent*                   PushPlayerStateComp;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PushPlayerDataComponent.RespawnHipSlot
struct UPushPlayerDataComponent_RespawnHipSlot_Params
{
};

// Function Pavlov.PushPlayerDataComponent.PlayDialogReplicated
struct UPushPlayerDataComponent_PlayDialogReplicated_Params
{
	EPushDialog                                        PushDialog;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushPlayerDataComponent.PlayDialogFromHead
struct UPushPlayerDataComponent_PlayDialogFromHead_Params
{
	class USoundCue*                                   DialogCue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PushPlayerDataComponent.PlayDialog_Multi
struct UPushPlayerDataComponent_PlayDialog_Multi_Params
{
	EPushDialog                                        PushDialog;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushPlayerDataComponent.PlayDialog
struct UPushPlayerDataComponent_PlayDialog_Params
{
	EPushDialog                                        PushDialog;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushPlayerDataComponent.PlayChantResponse_Multi
struct UPushPlayerDataComponent_PlayChantResponse_Multi_Params
{
	int                                                ChantIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushPlayerDataComponent.PlayChantResponse
struct UPushPlayerDataComponent_PlayChantResponse_Params
{
};

// Function Pavlov.PushPlayerDataComponent.PlayChant
struct UPushPlayerDataComponent_PlayChant_Params
{
	int                                                ChantIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushPlayerDataComponent.OwnerKilled
struct UPushPlayerDataComponent_OwnerKilled_Params
{
};

// Function Pavlov.PushPlayerDataComponent.OnRep_HipSlotType
struct UPushPlayerDataComponent_OnRep_HipSlotType_Params
{
};

// Function Pavlov.PushPlayerDataComponent.OnOwnerDamaged
struct UPushPlayerDataComponent_OnOwnerDamaged_Params
{
};

// Function Pavlov.PushPlayerDataComponent.OnLowHealth
struct UPushPlayerDataComponent_OnLowHealth_Params
{
};

// Function Pavlov.PushPlayerDataComponent.OnLowAmmo
struct UPushPlayerDataComponent_OnLowAmmo_Params
{
};

// Function Pavlov.PushPlayerDataComponent.OnGrenadeCooked
struct UPushPlayerDataComponent_OnGrenadeCooked_Params
{
	class AGrenade*                                    Grenade;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushPlayerDataComponent.OnBufferTimeComplete
struct UPushPlayerDataComponent_OnBufferTimeComplete_Params
{
};

// Function Pavlov.PushPlayerDataComponent.LoadDialogAsset
struct UPushPlayerDataComponent_LoadDialogAsset_Params
{
	struct FName                                       PlayerSkin;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushPlayerDataComponent.Init_Client
struct UPushPlayerDataComponent_Init_Client_Params
{
};

// Function Pavlov.PushPlayerDataComponent.HipSlotUsed
struct UPushPlayerDataComponent_HipSlotUsed_Params
{
};

// Function Pavlov.PushPlayerDataComponent.GetPushPlayerData
struct UPushPlayerDataComponent_GetPushPlayerData_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPushPlayerDataComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PushPlayerDataComponent.ClearQueue
struct UPushPlayerDataComponent_ClearQueue_Params
{
	bool                                               bFadeCurrent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bChantInQueue;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PushPlayerDataComponent.AskForMeds
struct UPushPlayerDataComponent_AskForMeds_Params
{
};

// Function Pavlov.PushPlayerDialog.GetRandomChantIndex
struct UPushPlayerDialog_GetRandomChantIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PushPlayerDialog.GetDialogPriority
struct UPushPlayerDialog_GetDialogPriority_Params
{
	EPushDialog                                        DialogType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PushPlayerDialog.GetDialogByType
struct UPushPlayerDialog_GetDialogByType_Params
{
	EPushDialog                                        DialogType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PushPlayerDialog.GetDialogBuffer
struct UPushPlayerDialog_GetDialogBuffer_Params
{
	EPushDialog                                        DialogType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PushPlayerDialog.GetChantByIndex
struct UPushPlayerDialog_GetChantByIndex_Params
{
	int                                                ChantIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPushChant                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Pavlov.PushPlayerStateComponent.PlayerRevived
struct UPushPlayerStateComponent_PlayerRevived_Params
{
	class APavlovPawn*                                 PavPawn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PushPlayerDataClass;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FallbackWeapon;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Rat.OnRevive
struct ARat_OnRevive_Params
{
	class AActor*                                      ActorOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Rat.OnKill
struct ARat_OnKill_Params
{
	class AActor*                                      ActorOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Rat.ApplyImpact
struct ARat_ApplyImpact_Params
{
};

// Function Pavlov.RconPawn.ExitSpectator_Server
struct ARconPawn_ExitSpectator_Server_Params
{
};

// Function Pavlov.RepairTool.RepairVehicle
struct ARepairTool_RepairVehicle_Params
{
	class AActor*                                      Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.RepairTool.CanRepairVehicle
struct ARepairTool_CanRepairVehicle_Params
{
	class AActor*                                      RepairActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNoTeams;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.ReplayManager.PlayReplay
struct UReplayManager_PlayReplay_Params
{
	struct FString                                     ReplayId;                                                 // (Parm, ZeroConstructor)
};

// Function Pavlov.ReplayManager.OnCustomMapDownloaded
struct UReplayManager_OnCustomMapDownloaded_Params
{
	bool                                               bSucceed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Pavlov.ReplayManager.Find
struct UReplayManager_Find_Params
{
	struct FString                                     GameMode;                                                 // (Parm, ZeroConstructor)
	bool                                               bCompetitive;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.ReviveTool.SetNumOfRevives
struct AReviveTool_SetNumOfRevives_Params
{
	int                                                AmountOfRevives;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.ReviveTool.GetNumOfRevives
struct AReviveTool_GetNumOfRevives_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.RevolverGunState.SetCylinder
struct URevolverGunState_SetCylinder_Params
{
	bool                                               bOpen;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.RockerLauncherGunState.SetLauncherState
struct URockerLauncherGunState_SetLauncherState_Params
{
	ELauncherState                                     State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.RockerLauncherGunState.ChamberChanged
struct URockerLauncherGunState_ChamberChanged_Params
{
	int                                                ChamberIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EVRGunChamberState                                 OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EVRGunChamberState                                 NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Rocket.OnDetonation
struct ARocket_OnDetonation_Params
{
	struct FTransform                                  DecalTransform;                                           // (Parm, IsPlainOldData)
};

// Function Pavlov.Scoreboard.OnScriptingReady
struct AScoreboard_OnScriptingReady_Params
{
};

// Function Pavlov.Scoreboard.OnReadyForBindings
struct AScoreboard_OnReadyForBindings_Params
{
};

// Function Pavlov.Scoreboard.OnAvatarUpdated
struct AScoreboard_OnAvatarUpdated_Params
{
	struct FString                                     ProductId;                                                // (Parm, ZeroConstructor)
	struct FString                                     PlatformId;                                               // (Parm, ZeroConstructor)
	class UTexture2D*                                  AvatarTexture;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.ServerBrowser.Update
struct UServerBrowser_Update_Params
{
	bool                                               bUpdatePings;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.ServerBrowser.OrderServerListByPlayerCount
struct UServerBrowser_OrderServerListByPlayerCount_Params
{
	bool                                               bDescending;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.ServerBrowser.GenerateSortedCombinedList
struct UServerBrowser_GenerateSortedCombinedList_Params
{
	TArray<struct FPavlovServerInfo>                   LobbyDetails;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bAddServerList;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDescending;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FCombinedServerList>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.ServerBrowserV2.UpdateRegionFilters
struct UServerBrowserV2_UpdateRegionFilters_Params
{
	EOnlineRegion                                      Region;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAdd;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.ServerBrowserV2.UpdateGMFilters
struct UServerBrowserV2_UpdateGMFilters_Params
{
	struct FString                                     Filter;                                                   // (Parm, ZeroConstructor)
	bool                                               bAdd;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.ServerBrowserV2.UpdateFavoritesOnly
struct UServerBrowserV2_UpdateFavoritesOnly_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.ServerBrowserV2.UpdateFavoriteServer
struct UServerBrowserV2_UpdateFavoriteServer_Params
{
	class UServerContainer*                            ServerContainer;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAdd;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.ServerBrowserV2.SortServerList
struct UServerBrowserV2_SortServerList_Params
{
};

// Function Pavlov.ServerBrowserV2.SetServerSortType
struct UServerBrowserV2_SetServerSortType_Params
{
	EServerSortType                                    SortType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.ServerBrowserV2.SetServerSearchType
struct UServerBrowserV2_SetServerSearchType_Params
{
	EServerSearchType                                  SearchType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.ServerBrowserV2.SetHidePinLockedServers
struct UServerBrowserV2_SetHidePinLockedServers_Params
{
	bool                                               bHide;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.ServerBrowserV2.SetHideFullServers
struct UServerBrowserV2_SetHideFullServers_Params
{
	bool                                               bHide;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.ServerBrowserV2.SetHideEmptyServers
struct UServerBrowserV2_SetHideEmptyServers_Params
{
	bool                                               bHide;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.ServerBrowserV2.RefreshList
struct UServerBrowserV2_RefreshList_Params
{
};

// Function Pavlov.ServerBrowserV2.OnLobbyUpdateComplete
struct UServerBrowserV2_OnLobbyUpdateComplete_Params
{
};

// Function Pavlov.ServerBrowserV2.OnLobbyListUpdate
struct UServerBrowserV2_OnLobbyListUpdate_Params
{
	struct FLobbySearchResult                          SearchResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Pavlov.ServerBrowserV2.OnCommunityServerPingListComplete
struct UServerBrowserV2_OnCommunityServerPingListComplete_Params
{
};

// Function Pavlov.ServerBrowserV2.OnCommunityServerPingComplete
struct UServerBrowserV2_OnCommunityServerPingComplete_Params
{
	struct FServerStatusInfo                           StatusInfo;                                               // (Parm)
	struct FString                                     IPAddress;                                                // (Parm, ZeroConstructor)
};

// Function Pavlov.ServerBrowserV2.JoinServer
struct UServerBrowserV2_JoinServer_Params
{
	class UServerContainer*                            ServerContainer;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Pin;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.ServerBrowserV2.HasRegionFilter
struct UServerBrowserV2_HasRegionFilter_Params
{
	EOnlineRegion                                      Region;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.ServerBrowserV2.GetServerContainerById
struct UServerBrowserV2_GetServerContainerById_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	class UServerContainer*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.ServerConnector.TickServerConnect
struct UServerConnector_TickServerConnect_Params
{
};

// Function Pavlov.ServerConnector.StartConnection
struct UServerConnector_StartConnection_Params
{
};

// Function Pavlov.ServerConnector.OnStatusTimeout
struct UServerConnector_OnStatusTimeout_Params
{
};

// Function Pavlov.ServerConnector.OnStatusReceived
struct UServerConnector_OnStatusReceived_Params
{
	struct FServerStatusInfo                           StatusInfo;                                               // (Parm)
	struct FString                                     IPAddress;                                                // (Parm, ZeroConstructor)
};

// Function Pavlov.ServerConnector.OnServerConnectMapDownloaded
struct UServerConnector_OnServerConnectMapDownloaded_Params
{
	bool                                               bSucceed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Pavlov.ServerConnector.FailedToConnect
struct UServerConnector_FailedToConnect_Params
{
};

// Function Pavlov.ServerContainer.UpdatePing
struct UServerContainer_UpdatePing_Params
{
	int                                                NewPing;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.ServerStatusHelper.Stop
struct UServerStatusHelper_Stop_Params
{
};

// Function Pavlov.ServerStatusHelper.SendStringToAddress
struct UServerStatusHelper_SendStringToAddress_Params
{
	struct FString                                     SendString;                                               // (Parm, ZeroConstructor)
	struct FString                                     Address;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.ServerStatusHelper.SendServerStatusUpdate
struct UServerStatusHelper_SendServerStatusUpdate_Params
{
	struct FString                                     Pin;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Address;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.ServerStatusHelper.SendDataToAddress
struct UServerStatusHelper_SendDataToAddress_Params
{
	struct FServerStatusMsg                            SendMsg;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.ServerStatusHelper.IsConnected
struct UServerStatusHelper_IsConnected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.ServerStatusHelper.GetServerStatusInfo
struct UServerStatusHelper_GetServerStatusInfo_Params
{
	struct FString                                     Pin;                                                      // (Parm, ZeroConstructor)
	struct FServerStatusInfo                           StatusInfo;                                               // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.ServerStatusHelper.GetServerInfo
struct UServerStatusHelper_GetServerInfo_Params
{
	struct FString                                     Address;                                                  // (Parm, ZeroConstructor)
	int                                                Port;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Pin;                                                      // (Parm, ZeroConstructor)
	float                                              AutoCloseTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.ServerStatusHelper.DataToString
struct UServerStatusHelper_DataToString_Params
{
	TArray<unsigned char>                              Data;                                                     // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.Shell.SpawnHitEffect
struct AShell_SpawnHitEffect_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.ShootingRangeTargetComponent.TargetHit
struct UShootingRangeTargetComponent_TargetHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.SkinFamily.SkinIntToSkinFamily
struct USkinFamily_SkinIntToSkinFamily_Params
{
	int                                                SkinFamilyInt;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	ESkinFamily                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.SkinFamily.SkinFamilyToString
struct USkinFamily_SkinFamilyToString_Params
{
	ESkinFamily                                        SkinFamily;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.SkinFamily.SkinFamilyToInt
struct USkinFamily_SkinFamilyToInt_Params
{
	ESkinFamily                                        SkinFamily;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.SkinFamily.SkinFamilyIdToString
struct USkinFamily_SkinFamilyIdToString_Params
{
	int                                                SkinFamilyId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.SoundMixingSettings.SetVolumeByChannelName
struct USoundMixingSettings_SetVolumeByChannelName_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.SoundMixingSettings.SetVolumeByChannelIndex
struct USoundMixingSettings_SetVolumeByChannelIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.SoundMixingSettings.Save
struct USoundMixingSettings_Save_Params
{
};

// Function Pavlov.SoundMixingSettings.RestoreDefaults
struct USoundMixingSettings_RestoreDefaults_Params
{
};

// Function Pavlov.SoundMixingSettings.Load
struct USoundMixingSettings_Load_Params
{
};

// Function Pavlov.SoundMixingSettings.GetVolumeByChannelName
struct USoundMixingSettings_GetVolumeByChannelName_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.SoundMixingSettings.GetVolumeByChannelIndex
struct USoundMixingSettings_GetVolumeByChannelIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.SoundMixingSettings.ApplyAndSave
struct USoundMixingSettings_ApplyAndSave_Params
{
};

// Function Pavlov.SoundMixingSettings.Apply
struct USoundMixingSettings_Apply_Params
{
};

// Function Pavlov.SpectatorTag.OnFadeOut
struct ASpectatorTag_OnFadeOut_Params
{
};

// Function Pavlov.SpectatorTag.GetPlayerState
struct ASpectatorTag_GetPlayerState_Params
{
	class APavlovPlayerState*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.SpectatorTVCamera.OnAttachedToFocusedPawn
struct ASpectatorTVCamera_OnAttachedToFocusedPawn_Params
{
};

// Function Pavlov.SpectatorTVCamera.GetSceneCapture
struct ASpectatorTVCamera_GetSceneCapture_Params
{
	class USceneCaptureComponent2D*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.SpectatorTVCamera.Cycle
struct ASpectatorTVCamera_Cycle_Params
{
};

// Function Pavlov.SpectatorTVCamera.AddYawInput
struct ASpectatorTVCamera_AddYawInput_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.StatsManager.SetStat
struct UStatsManager_SetStat_Params
{
	struct FString                                     UniqueID;                                                 // (Parm, ZeroConstructor)
	EPlayerStats                                       OptionStat;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.StatsManager.PostStats
struct UStatsManager_PostStats_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.StatsManager.HasAuthority
struct UStatsManager_HasAuthority_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.StatsManager.GetXPForStat
struct UStatsManager_GetXPForStat_Params
{
	EPlayerStats                                       StatType;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Amount;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.StatsManager.GetTransformedEloRatings
struct UStatsManager_GetTransformedEloRatings_Params
{
	float                                              Elo;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.StatsManager.GetStatsAsJson
struct UStatsManager_GetStatsAsJson_Params
{
	class UJsonUtilsObj*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.StatsManager.GetProbabilityOfWinning
struct UStatsManager_GetProbabilityOfWinning_Params
{
	float                                              CurrentElo;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              OpponentElo;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.StatsManager.GetPlayerStats
struct UStatsManager_GetPlayerStats_Params
{
	struct FString                                     UniqueID;                                                 // (Parm, ZeroConstructor)
	struct FPlayerStats                                PlayerStatistics;                                         // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.StatsManager.GetPlayersStats
struct UStatsManager_GetPlayersStats_Params
{
	TMap<struct FString, struct FPlayerStats>          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.StatsManager.GetAllPlayersStats
struct UStatsManager_GetAllPlayersStats_Params
{
	TArray<struct FPlayerStats>                        PlayersStatistics;                                        // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.StatsManager.FindOrCreatePlayerStats
struct UStatsManager_FindOrCreatePlayerStats_Params
{
	struct FString                                     UniqueID;                                                 // (Parm, ZeroConstructor)
	struct FPlayerStats                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Pavlov.StatsManager.DumpStatsToLog
struct UStatsManager_DumpStatsToLog_Params
{
};

// Function Pavlov.StatsManager.CalulateTeamElos
struct UStatsManager_CalulateTeamElos_Params
{
	TMap<struct FString, float>                        InTeam0Elos;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TMap<struct FString, float>                        InTeam1Elos;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TMap<struct FString, float>                        OutTeam0Elos;                                             // (Parm, OutParm, ZeroConstructor)
	TMap<struct FString, float>                        OutTeam1Elos;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               bTeam0Won;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.StatsManager.CalculateNewElo
struct UStatsManager_CalculateNewElo_Params
{
	float                                              CurrentElo;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              OpponentElo;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bWin;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.StatsManager.AwardPlayersXP
struct UStatsManager_AwardPlayersXP_Params
{
};

// Function Pavlov.StatsManager.AverageElos
struct UStatsManager_AverageElos_Params
{
	TArray<float>                                      Elos;                                                     // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.StatsManager.AddStatByUniqueId
struct UStatsManager_AddStatByUniqueId_Params
{
	class APavlovPlayerState*                          PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EPlayerStats                                       OptionStat;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.StatsManager.AddStat
struct UStatsManager_AddStat_Params
{
	class APavlovPlayerState*                          PavPlayerState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	EPlayerStats                                       OptionStat;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.StatsManager.AddPlayer
struct UStatsManager_AddPlayer_Params
{
	struct FString                                     UniqueID;                                                 // (Parm, ZeroConstructor)
};

// Function Pavlov.StencilSuppressionComponent.OwnerKilled
struct UStencilSuppressionComponent_OwnerKilled_Params
{
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.StencilSuppressionComponent.OnMenuOpened
struct UStencilSuppressionComponent_OnMenuOpened_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.SurfaceFXAsset.GetVehicleSound
struct USurfaceFXAsset_GetVehicleSound_Params
{
	class USoundCue*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.SurfaceFXAsset.GetVehicleParticleSystem
struct USurfaceFXAsset_GetVehicleParticleSystem_Params
{
	class UParticleSystem*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.SurfaceFXAsset.GetSoundBySurfaceType
struct USurfaceFXAsset_GetSoundBySurfaceType_Params
{
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.SurfaceFXAsset.GetParticleBySurfaceType
struct USurfaceFXAsset_GetParticleBySurfaceType_Params
{
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.TankInteriorAnimInstance.GetMPH
struct UTankInteriorAnimInstance_GetMPH_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.TankVehicleMovement.ServerUpdateTankSteeringWheel
struct UTankVehicleMovement_ServerUpdateTankSteeringWheel_Params
{
	float                                              LeftThrustInput;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RightThrustInput;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              UpdateThrottle;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.TankVehicleMovement.ServerUpdateTankInput
struct UTankVehicleMovement_ServerUpdateTankInput_Params
{
	float                                              LeftTrustInput;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RightTrustInput;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.TankVehicleMovement.DriverLeft
struct UTankVehicleMovement_DriverLeft_Params
{
};

// Function Pavlov.ToolTip.GetFadeScalar
struct AToolTip_GetFadeScalar_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.TTTGameInfo.TTTFlushKarma
struct UTTTGameInfo_TTTFlushKarma_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.TTTGameInfo.TTTAlwaysEnableSkinMenu
struct UTTTGameInfo_TTTAlwaysEnableSkinMenu_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.TTTGameInfo.SetTTTPlayerRole
struct UTTTGameInfo_SetTTTPlayerRole_Params
{
	class APavlovPlayerState*                          PavPlayerState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     TTTRole;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.TTTGameInfo.SetTTTKarma
struct UTTTGameInfo_SetTTTKarma_Params
{
	class APavlovPlayerState*                          PavPlayerState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Karma;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.TTTGameInfo.RetryInit
struct UTTTGameInfo_RetryInit_Params
{
};

// Function Pavlov.TTTGameInfo.PauseTTTTimer
struct UTTTGameInfo_PauseTTTTimer_Params
{
	bool                                               bPaused;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.TTTGameInfo.GetTTTPlayerInfo
struct UTTTGameInfo_GetTTTPlayerInfo_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTTTPlayerInfo                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Pavlov.TTTGameInfo.GetTTTKarma
struct UTTTGameInfo_GetTTTKarma_Params
{
	class APavlovPlayerState*                          PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Karma;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.TTTGameInfo.GetAllTTTPlayersInfo
struct UTTTGameInfo_GetAllTTTPlayersInfo_Params
{
	TArray<struct FTTTPlayerInfo>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.TTTGameInfo.EndTTTRound
struct UTTTGameInfo_EndTTTRound_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Tutorial.TerminateToolTip
struct UTutorial_TerminateToolTip_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Tutorial.ShowToolTip
struct UTutorial_ShowToolTip_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ContextLocation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Tutorial.Reset
struct UTutorial_Reset_Params
{
};

// Function Pavlov.Tutorial.MarkToolTipAsComplete
struct UTutorial_MarkToolTipAsComplete_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Tutorial.IsToolTipCompleted
struct UTutorial_IsToolTipCompleted_Params
{
	struct FName                                       ID;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Tutorial.GetToolTipInstanceCount
struct UTutorial_GetToolTipInstanceCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.UIManager.ShowMenuUniverse
struct UUIManager_ShowMenuUniverse_Params
{
};

// Function Pavlov.UIManager.ShowMatchmaking
struct UUIManager_ShowMatchmaking_Params
{
};

// Function Pavlov.UIManager.SetSideInterface
struct UUIManager_SetSideInterface_Params
{
	EUserInterfaceType                                 PrimaryInterface;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	EUserInterfaceType                                 NewInterface;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.UIManager.SetMenuUniverse
struct UUIManager_SetMenuUniverse_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.UIManager.SetMatchmakingMode
struct UUIManager_SetMatchmakingMode_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.UIManager.SetInterface
struct UUIManager_SetInterface_Params
{
	EUserInterfaceType                                 NewInterface;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.UIManager.OnVotePromptCommit
struct UUIManager_OnVotePromptCommit_Params
{
	struct FModalCommitParams                          Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Pavlov.UIManager.OnPinPromptDestroyed
struct UUIManager_OnPinPromptDestroyed_Params
{
};

// Function Pavlov.UIManager.OnPinPromptCommit
struct UUIManager_OnPinPromptCommit_Params
{
	struct FModalCommitParams                          Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Pavlov.UIManager.OnPartyCreated
struct UUIManager_OnPartyCreated_Params
{
};

// Function Pavlov.UIManager.OnOnlineError
struct UUIManager_OnOnlineError_Params
{
	EOnlineError                                       Error;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ErrorMessage;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Pavlov.UIManager.OnMatchmakingStatusChanged
struct UUIManager_OnMatchmakingStatusChanged_Params
{
	EMatchmakingStatus                                 Status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.UIManager.OnJoinServerStateChanged
struct UUIManager_OnJoinServerStateChanged_Params
{
	EOnlineJoinServerState                             JoinServerState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.UIManager.K2_CreateModalWithParams
struct UUIManager_K2_CreateModalWithParams_Params
{
	struct FUICreateModalParams                        Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UModal*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.UIManager.IsMenuUniverseEnabled
struct UUIManager_IsMenuUniverseEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.UIManager.HideMenuUniverse
struct UUIManager_HideMenuUniverse_Params
{
};

// Function Pavlov.UIManager.HideMatchmaking
struct UUIManager_HideMatchmaking_Params
{
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.UIManager.GetSideInterface
struct UUIManager_GetSideInterface_Params
{
	EUserInterfaceType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.UIManager.GetModalInstance
struct UUIManager_GetModalInstance_Params
{
	class UModal*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.UIManager.GetMenuUniverse
struct UUIManager_GetMenuUniverse_Params
{
	class AMenuUniverse*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.UIManager.DismissMOTD
struct UUIManager_DismissMOTD_Params
{
};

// Function Pavlov.UIManager.CreateModalMessageBox
struct UUIManager_CreateModalMessageBox_Params
{
	struct FText                                       Message;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	EModalMessageBoxType                               Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UModal*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.UIManager.CreateModal
struct UUIManager_CreateModal_Params
{
	class UClass*                                      ModalClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ModalContent;                                             // (Parm, ZeroConstructor)
	bool                                               bCreateView;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UModal*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.UIManager.CreateConnectSpinnerModal
struct UUIManager_CreateConnectSpinnerModal_Params
{
};

// Function Pavlov.UIManager.ClearModalInstance
struct UUIManager_ClearModalInstance_Params
{
};

// Function Pavlov.VehicleBumper.OnBumperOverlap
struct UVehicleBumper_OnBumperOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.VehicleBumper.GetVehicle
struct UVehicleBumper_GetVehicle_Params
{
	class APavlovVehicle*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.VehicleBumper.ClearBumper
struct UVehicleBumper_ClearBumper_Params
{
};

// Function Pavlov.VehicleInterior.ZoomScopeFOV
struct AVehicleInterior_ZoomScopeFOV_Params
{
	float                                              ZoomDirection;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleInterior.SetupVehicleInterior
struct AVehicleInterior_SetupVehicleInterior_Params
{
	class APavlovVehicle*                              Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Seat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UVehicleOccupant*                            VehicleOccupant;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Pavlov.VehicleInterior.SetScopeFOV
struct AVehicleInterior_SetScopeFOV_Params
{
	float                                              ScopeFOV;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleInterior.SetScopeActive
struct AVehicleInterior_SetScopeActive_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleInterior.PlayFireHaptics
struct AVehicleInterior_PlayFireHaptics_Params
{
};

// Function Pavlov.VehicleInterior.OnScopeExploit
struct AVehicleInterior_OnScopeExploit_Params
{
	bool                                               bExploit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleInterior.OnPassengerChanged
struct AVehicleInterior_OnPassengerChanged_Params
{
	bool                                               bEnteredVehicle;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Seat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPawn*                                 PavPawn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleInterior.OnInteriorIntialized
struct AVehicleInterior_OnInteriorIntialized_Params
{
	class APavlovVehicle*                              Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Seat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UVehicleOccupant*                            VehicleOccupant;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Pavlov.VehicleInterior.HideActorInScope
struct AVehicleInterior_HideActorInScope_Params
{
	class AActor*                                      HideInScope;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleInterior.GunnerSocketOverride
struct AVehicleInterior_GunnerSocketOverride_Params
{
	struct FName                                       OverrideSocket;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.VehicleInterior.GetScopeHiddenActors
struct AVehicleInterior_GetScopeHiddenActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.VehicleInterior.GetScopeFOVAlpha
struct AVehicleInterior_GetScopeFOVAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.VehicleInterior.GetScopeFOV
struct AVehicleInterior_GetScopeFOV_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.VehicleInterior.GetSceneCaptureParent
struct AVehicleInterior_GetSceneCaptureParent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant.SetupInput
struct UVehicleOccupant_SetupInput_Params
{
	class UInputComponent*                             InputComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant.RetryHideInventory
struct UVehicleOccupant_RetryHideInventory_Params
{
};

// Function Pavlov.VehicleOccupant.RemoveVehicleInputServer
struct UVehicleOccupant_RemoveVehicleInputServer_Params
{
};

// Function Pavlov.VehicleOccupant.PassengerChanged
struct UVehicleOccupant_PassengerChanged_Params
{
	bool                                               bEnteredVehicle;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Seat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPawn*                                 PavPawn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant.OnLeaveVehicle
struct UVehicleOccupant_OnLeaveVehicle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant.OnEnteredVehicleClient
struct UVehicleOccupant_OnEnteredVehicleClient_Params
{
	class APavlovVehicle*                              Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Seat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant.LeaveVehicleServer
struct UVehicleOccupant_LeaveVehicleServer_Params
{
};

// Function Pavlov.VehicleOccupant.IsDriver
struct UVehicleOccupant_IsDriver_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant.HideInScope
struct UVehicleOccupant_HideInScope_Params
{
	class AActor*                                      HideActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant.GetVehicle
struct UVehicleOccupant_GetVehicle_Params
{
	class APavlovVehicle*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant.GetSeatTransform
struct UVehicleOccupant_GetSeatTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant.GetSeat
struct UVehicleOccupant_GetSeat_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant.GetPawn
struct UVehicleOccupant_GetPawn_Params
{
	class APavlovPawn*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant.ClientEnteredVehicle
struct UVehicleOccupant_ClientEnteredVehicle_Params
{
	class APavlovVehicle*                              InVehicle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Seat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant.CanSendInput
struct UVehicleOccupant_CanSendInput_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant_Prototyping.TriggerAxisRight
struct UVehicleOccupant_Prototyping_TriggerAxisRight_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant_Prototyping.TriggerAxisLeft
struct UVehicleOccupant_Prototyping_TriggerAxisLeft_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant_Prototyping.ThrottleServer
struct UVehicleOccupant_Prototyping_ThrottleServer_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant_Prototyping.SteerServer
struct UVehicleOccupant_Prototyping_SteerServer_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant_Prototyping.MoveX
struct UVehicleOccupant_Prototyping_MoveX_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant_Tank_Driver.UpdateMovementInput
struct UVehicleOccupant_Tank_Driver_UpdateMovementInput_Params
{
};

// Function Pavlov.VehicleOccupant_Tank_Driver.TriggerAxisRight
struct UVehicleOccupant_Tank_Driver_TriggerAxisRight_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant_Tank_Driver.TriggerAxisLeft
struct UVehicleOccupant_Tank_Driver_TriggerAxisLeft_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant_Tank_Driver.GetTankMovementComponent
struct UVehicleOccupant_Tank_Driver_GetTankMovementComponent_Params
{
	class UTankVehicleMovement*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant_Tank_Gunner.SetMachineGunRotation
struct UVehicleOccupant_Tank_Gunner_SetMachineGunRotation_Params
{
	struct FRotator                                    MGRot;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant_Tank_Gunner.ServerSetMGRotation
struct UVehicleOccupant_Tank_Gunner_ServerSetMGRotation_Params
{
	struct FRotator                                    MGRot;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant_Tank_Gunner.RightTriggerReleased
struct UVehicleOccupant_Tank_Gunner_RightTriggerReleased_Params
{
};

// Function Pavlov.VehicleOccupant_Tank_Gunner.RightTriggerPressed
struct UVehicleOccupant_Tank_Gunner_RightTriggerPressed_Params
{
};

// Function Pavlov.VehicleOccupant_Tank_Gunner.RightTrigger
struct UVehicleOccupant_Tank_Gunner_RightTrigger_Params
{
	bool                                               bPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant_Tank_Gunner.LeftTriggerReleased
struct UVehicleOccupant_Tank_Gunner_LeftTriggerReleased_Params
{
};

// Function Pavlov.VehicleOccupant_Tank_Gunner.LeftTriggerPressed
struct UVehicleOccupant_Tank_Gunner_LeftTriggerPressed_Params
{
};

// Function Pavlov.VehicleOccupant_Tank_Gunner.LeftTrigger
struct UVehicleOccupant_Tank_Gunner_LeftTrigger_Params
{
	bool                                               bPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant_Tank_Turret.TurretZoomInput
struct UVehicleOccupant_Tank_Turret_TurretZoomInput_Params
{
	float                                              Input;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant_Tank_Turret.TurretYawInput
struct UVehicleOccupant_Tank_Turret_TurretYawInput_Params
{
	float                                              Input;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant_Tank_Turret.TurretPitchInput
struct UVehicleOccupant_Tank_Turret_TurretPitchInput_Params
{
	float                                              Input;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant_Tank_Turret.ServerSetTurretRotation
struct UVehicleOccupant_Tank_Turret_ServerSetTurretRotation_Params
{
	struct FVector2D                                   TurretRot;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScopeFOV;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant_Tank_Turret.RightTriggerPressed
struct UVehicleOccupant_Tank_Turret_RightTriggerPressed_Params
{
};

// Function Pavlov.VehicleOccupant_Tank_Turret.OnAdvancedVehicleSettingsChanged
struct UVehicleOccupant_Tank_Turret_OnAdvancedVehicleSettingsChanged_Params
{
	bool                                               bUseAdvanced;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant_Tank_Turret.LeftTriggerPressed
struct UVehicleOccupant_Tank_Turret_LeftTriggerPressed_Params
{
};

// Function Pavlov.VehicleOccupant_Tank_Turret.AddTurretYaw
struct UVehicleOccupant_Tank_Turret_AddTurretYaw_Params
{
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleOccupant_Tank_Turret.AddTurretPitch
struct UVehicleOccupant_Tank_Turret_AddTurretPitch_Params
{
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleSpawner.VehicleDestroyed
struct AVehicleSpawner_VehicleDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VehicleSpawner.StopVehicleSpawner
struct AVehicleSpawner_StopVehicleSpawner_Params
{
};

// Function Pavlov.VehicleSpawner.StartVehicleSpawner
struct AVehicleSpawner_StartVehicleSpawner_Params
{
};

// Function Pavlov.VehicleSpawner.OnGetVehicleClass
struct AVehicleSpawner_OnGetVehicleClass_Params
{
	class UClass*                                      VehicleClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VoiceComponent.OnEnvelopeValue
struct UVoiceComponent_OnEnvelopeValue_Params
{
	class USoundWave*                                  PlayingSoundWave;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VoiceRouter.ServerOnVoice
struct AVoiceRouter_ServerOnVoice_Params
{
	struct FPavlovVoicePacket                          VoicePacket;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function Pavlov.VoiceRouter.OnEncodedVoiceData
struct AVoiceRouter_OnEncodedVoiceData_Params
{
	TArray<unsigned char>                              EncodedVoiceData;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Pavlov.VoiceRouter.ClientOnVoiceBunch
struct AVoiceRouter_ClientOnVoiceBunch_Params
{
	struct FVoicePacketBunch                           VoiceBunch;                                               // (ConstParm, Parm, ReferenceParm)
};

// Function Pavlov.VoiceSource.SetCapture
struct UVoiceSource_SetCapture_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.VoiceSource.ResetCaptureDevice
struct UVoiceSource_ResetCaptureDevice_Params
{
	struct FString                                     DeviceName;                                               // (Parm, ZeroConstructor)
};

// Function Pavlov.VoiceSource.IsCapturing
struct UVoiceSource_IsCapturing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.VoiceSource.IsBroadcasting
struct UVoiceSource_IsBroadcasting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Vote.OnVoteEnded
struct AVote_OnVoteEnded_Params
{
	bool                                               bSucceeded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Vote.MulticastOnVoteEnded
struct AVote_MulticastOnVoteEnded_Params
{
	bool                                               bSucceeded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Vote.GetVotePromptMessage
struct AVote_GetVotePromptMessage_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Pavlov.Watch.OnKillfeedEntry
struct UWatch_OnKillfeedEntry_Params
{
	struct FKillfeedEntry                              NewEntry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Pavlov.Watch.OnKillConfirmationPush
struct UWatch_OnKillConfirmationPush_Params
{
	class APavlovPlayerState*                          Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Watch.GetWatchAttachComponent
struct UWatch_GetWatchAttachComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.Waypoint.GetNextWaypointTo
struct AWaypoint_GetNextWaypointTo_Params
{
	class AWaypoint*                                   TargetWaypoint;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AWaypoint*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Waypoint.GetClosestWaypoint
struct AWaypoint_GetClosestWaypoint_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyLeaf;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseNavMesh;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AWaypoint*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.WeaponFilterData.GetRandomRifle
struct UWeaponFilterData_GetRandomRifle_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.WeaponFilterData.GetRandomPistol
struct UWeaponFilterData_GetRandomPistol_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Workshop.Vote
struct UWorkshop_Vote_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUp;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Workshop.Unsubscribe
struct UWorkshop_Unsubscribe_Params
{
	struct FName                                       ID;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.Workshop.SubscribeTo
struct UWorkshop_SubscribeTo_Params
{
	struct FName                                       ID;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.Workshop.RequestUserVote
struct UWorkshop_RequestUserVote_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Workshop.QueryForSpecificCustomMaps
struct UWorkshop_QueryForSpecificCustomMaps_Params
{
	TArray<struct FName>                               UniqueIds;                                                // (Parm, ZeroConstructor)
};

// Function Pavlov.Workshop.QueryForCustomMaps
struct UWorkshop_QueryForCustomMaps_Params
{
	EWorkshopQueryType                                 QueryType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Workshop.QueryDownloadProgress
struct UWorkshop_QueryDownloadProgress_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Workshop.OnCustomMapDownloaded
struct UWorkshop_OnCustomMapDownloaded_Params
{
	bool                                               bSucceed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Pavlov.Workshop.OnAfterMount
struct UWorkshop_OnAfterMount_Params
{
};

// Function Pavlov.Workshop.IsSubscribedTo
struct UWorkshop_IsSubscribedTo_Params
{
	struct FName                                       ID;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Workshop.IsDownloadingMap
struct UWorkshop_IsDownloadingMap_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Workshop.IsCustomMapId
struct UWorkshop_IsCustomMapId_Params
{
	struct FString                                     CustomMapId;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Workshop.GetPreviewTexture
struct UWorkshop_GetPreviewTexture_Params
{
	struct FName                                       ID;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Workshop.GetCurrentDownloadId
struct UWorkshop_GetCurrentDownloadId_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Workshop.DownloadTest
struct UWorkshop_DownloadTest_Params
{
};

// Function Pavlov.Workshop.DownloadCustomMap
struct UWorkshop_DownloadCustomMap_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Pavlov.Workshop.CheckForDownload
struct UWorkshop_CheckForDownload_Params
{
};

// Function Pavlov.WoundAux.GetAvatarSkin
struct AWoundAux_GetAvatarSkin_Params
{
	class UAvatarSkin*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.WoundAux.GetAttachSocket
struct AWoundAux_GetAttachSocket_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.WoundComponent.UpdateBaseMesh
struct UWoundComponent_UpdateBaseMesh_Params
{
	class USkeletalMeshComponent*                      MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMesh*                               UpdateMesh;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.WoundComponent.SetMasterPoseComponent
struct UWoundComponent_SetMasterPoseComponent_Params
{
	class USkeletalMeshComponent*                      MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Pavlov.WoundComponent.ResetWounds
struct UWoundComponent_ResetWounds_Params
{
};

// Function Pavlov.WoundComponent.ReportHit
struct UWoundComponent_ReportHit_Params
{
	struct FWoundInfo                                  WoundInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Pavlov.WoundComponent.GetBoneState
struct UWoundComponent_GetBoneState_Params
{
	struct FName                                       BoneName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FWoundBoneState                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Pavlov.WoundComponent.ApplyInheritedCustomDepthValues
struct UWoundComponent_ApplyInheritedCustomDepthValues_Params
{
	class UMeshComponent*                              MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Pavlov.WoundComponent.AddMesh
struct UWoundComponent_AddMesh_Params
{
	class USkeletalMeshComponent*                      MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Pavlov.Zombie.OnWoundMaterialCreated
struct AZombie_OnWoundMaterialCreated_Params
{
	class UMaterialInstanceDynamic*                    MaterialInstance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Zombie.MulticastOnRadialDeath
struct AZombie_MulticastOnRadialDeath_Params
{
	struct FVector_NetQuantize                         Origin;                                                   // (Parm)
};

// Function Pavlov.Zombie.MulticastOnHit
struct AZombie_MulticastOnHit_Params
{
	struct FZombieHitInfo                              HitInfo;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function Pavlov.Zombie.GetWoundComponent
struct AZombie_GetWoundComponent_Params
{
	class UWoundComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.Zombie.ApplyLastHitEffect
struct AZombie_ApplyLastHitEffect_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
