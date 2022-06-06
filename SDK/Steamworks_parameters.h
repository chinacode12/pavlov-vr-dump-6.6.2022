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

// Function Steamworks.SteamworksManager.Tick
struct USteamworksManager_Tick_Params
{
};

// Function Steamworks.SteamworksManager.RequestServerList
struct USteamworksManager_RequestServerList_Params
{
	TArray<struct FSteamServerListKeyValue>            Filter;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Steamworks.SteamworksManager.RequestLobbyList
struct USteamworksManager_RequestLobbyList_Params
{
	bool                                               bWithData;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.RefreshServerList
struct USteamworksManager_RefreshServerList_Params
{
};

// Function Steamworks.SteamworksManager.OnPublicIpAddressResolved
struct USteamworksManager_OnPublicIpAddressResolved_Params
{
	struct FString                                     IPAddress;                                                // (Parm, ZeroConstructor)
};

// Function Steamworks.SteamworksManager.LeaveLobby
struct USteamworksManager_LeaveLobby_Params
{
};

// Function Steamworks.SteamworksManager.JoinLobby
struct USteamworksManager_JoinLobby_Params
{
	struct FSteamLobbyInfo                             LobbyInfo;                                                // (Parm)
};

// Function Steamworks.SteamworksManager.IsServerListActive
struct USteamworksManager_IsServerListActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.IsRefreshingServerList
struct USteamworksManager_IsRefreshingServerList_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.GetServerInfo
struct USteamworksManager_GetServerInfo_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSteamServerInfo                            ServerInfo;                                               // (Parm, OutParm)
	bool                                               bSuccessful;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.GetServerCount
struct USteamworksManager_GetServerCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.GetPlayerNameByStringId
struct USteamworksManager_GetPlayerNameByStringId_Params
{
	struct FString                                     StringId;                                                 // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Steamworks.SteamworksManager.GetAuthSessionTicket
struct USteamworksManager_GetAuthSessionTicket_Params
{
};

// Function Steamworks.SteamworksManager.Get
struct USteamworksManager_Get_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USteamworksManager*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.CreateLobby
struct USteamworksManager_CreateLobby_Params
{
	int                                                LobbyMemberLimit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPublic;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.CancelAuthTicket
struct USteamworksManager_CancelAuthTicket_Params
{
};

// Function Steamworks.SteamworksManager.AddRequestLobbyListStringFilter
struct USteamworksManager_AddRequestLobbyListStringFilter_Params
{
	struct FString                                     KeyToMatch;                                               // (Parm, ZeroConstructor)
	struct FString                                     ValueToMatch;                                             // (Parm, ZeroConstructor)
	ESteamLobbyComparison                              ComparisonType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.AddRequestLobbyListResultCountFilter
struct USteamworksManager_AddRequestLobbyListResultCountFilter_Params
{
	int                                                MaxResults;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.AddRequestLobbyListNumericalFilter
struct USteamworksManager_AddRequestLobbyListNumericalFilter_Params
{
	struct FString                                     KeyToMatch;                                               // (Parm, ZeroConstructor)
	int                                                ValueToMatch;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	ESteamLobbyComparison                              ComparisonType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.AddRequestLobbyListNearValueFilter
struct USteamworksManager_AddRequestLobbyListNearValueFilter_Params
{
	struct FString                                     KeyToMatch;                                               // (Parm, ZeroConstructor)
	int                                                ValueToBeCloseTo;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.AddRequestLobbyListFilterSlotsAvailable
struct USteamworksManager_AddRequestLobbyListFilterSlotsAvailable_Params
{
	int                                                SlotsAvailable;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.AddRequestLobbyListDistanceFilter
struct USteamworksManager_AddRequestLobbyListDistanceFilter_Params
{
	ESteamLobbyDistanceFilter                          DistanceFilter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steamworks.SteamworksStatics.GetSteamPersonaName
struct USteamworksStatics_GetSteamPersonaName_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Steamworks.SteamworksStatics.GetLocalSteamId
struct USteamworksStatics_GetLocalSteamId_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
