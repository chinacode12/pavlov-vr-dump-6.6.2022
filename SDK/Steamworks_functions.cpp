
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

// Function Steamworks.SteamworksManager.Tick
// (Native, Public)

void USteamworksManager::Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.Tick");

	USteamworksManager_Tick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.RequestServerList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSteamServerListKeyValue> Filter                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USteamworksManager::RequestServerList(TArray<struct FSteamServerListKeyValue> Filter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.RequestServerList");

	USteamworksManager_RequestServerList_Params params;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.RequestLobbyList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bWithData                      (Parm, ZeroConstructor, IsPlainOldData)

void USteamworksManager::RequestLobbyList(bool bWithData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.RequestLobbyList");

	USteamworksManager_RequestLobbyList_Params params;
	params.bWithData = bWithData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.RefreshServerList
// (Final, Native, Public, BlueprintCallable)

void USteamworksManager::RefreshServerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.RefreshServerList");

	USteamworksManager_RefreshServerList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.OnPublicIpAddressResolved
// (Final, Native, Public)
// Parameters:
// struct FString                 IPAddress                      (Parm, ZeroConstructor)

void USteamworksManager::OnPublicIpAddressResolved(const struct FString& IPAddress)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.OnPublicIpAddressResolved");

	USteamworksManager_OnPublicIpAddressResolved_Params params;
	params.IPAddress = IPAddress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.LeaveLobby
// (Final, Native, Public, BlueprintCallable)

void USteamworksManager::LeaveLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.LeaveLobby");

	USteamworksManager_LeaveLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.JoinLobby
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamLobbyInfo         LobbyInfo                      (Parm)

void USteamworksManager::JoinLobby(const struct FSteamLobbyInfo& LobbyInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.JoinLobby");

	USteamworksManager_JoinLobby_Params params;
	params.LobbyInfo = LobbyInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.IsServerListActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamworksManager::IsServerListActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.IsServerListActive");

	USteamworksManager_IsServerListActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Steamworks.SteamworksManager.IsRefreshingServerList
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamworksManager::IsRefreshingServerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.IsRefreshingServerList");

	USteamworksManager_IsRefreshingServerList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Steamworks.SteamworksManager.GetServerInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FSteamServerInfo        ServerInfo                     (Parm, OutParm)
// bool                           bSuccessful                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USteamworksManager::GetServerInfo(int Index, struct FSteamServerInfo* ServerInfo, bool* bSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.GetServerInfo");

	USteamworksManager_GetServerInfo_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServerInfo != nullptr)
		*ServerInfo = params.ServerInfo;
	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;
}


// Function Steamworks.SteamworksManager.GetServerCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USteamworksManager::GetServerCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.GetServerCount");

	USteamworksManager_GetServerCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Steamworks.SteamworksManager.GetPlayerNameByStringId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 StringId                       (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USteamworksManager::GetPlayerNameByStringId(const struct FString& StringId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.GetPlayerNameByStringId");

	USteamworksManager_GetPlayerNameByStringId_Params params;
	params.StringId = StringId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Steamworks.SteamworksManager.GetAuthSessionTicket
// (Final, Native, Public, BlueprintCallable)

void USteamworksManager::GetAuthSessionTicket()
{
	static auto fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.GetAuthSessionTicket");

	USteamworksManager_GetAuthSessionTicket_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class USteamworksManager*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USteamworksManager* USteamworksManager::STATIC_Get(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.Get");

	USteamworksManager_Get_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Steamworks.SteamworksManager.CreateLobby
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            LobbyMemberLimit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPublic                        (Parm, ZeroConstructor, IsPlainOldData)

void USteamworksManager::CreateLobby(int LobbyMemberLimit, bool bPublic)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.CreateLobby");

	USteamworksManager_CreateLobby_Params params;
	params.LobbyMemberLimit = LobbyMemberLimit;
	params.bPublic = bPublic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.CancelAuthTicket
// (Final, Native, Public, BlueprintCallable)

void USteamworksManager::CancelAuthTicket()
{
	static auto fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.CancelAuthTicket");

	USteamworksManager_CancelAuthTicket_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.AddRequestLobbyListStringFilter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 KeyToMatch                     (Parm, ZeroConstructor)
// struct FString                 ValueToMatch                   (Parm, ZeroConstructor)
// ESteamLobbyComparison          ComparisonType                 (Parm, ZeroConstructor, IsPlainOldData)

void USteamworksManager::AddRequestLobbyListStringFilter(const struct FString& KeyToMatch, const struct FString& ValueToMatch, ESteamLobbyComparison ComparisonType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.AddRequestLobbyListStringFilter");

	USteamworksManager_AddRequestLobbyListStringFilter_Params params;
	params.KeyToMatch = KeyToMatch;
	params.ValueToMatch = ValueToMatch;
	params.ComparisonType = ComparisonType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.AddRequestLobbyListResultCountFilter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData)

void USteamworksManager::AddRequestLobbyListResultCountFilter(int MaxResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.AddRequestLobbyListResultCountFilter");

	USteamworksManager_AddRequestLobbyListResultCountFilter_Params params;
	params.MaxResults = MaxResults;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.AddRequestLobbyListNumericalFilter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 KeyToMatch                     (Parm, ZeroConstructor)
// int                            ValueToMatch                   (Parm, ZeroConstructor, IsPlainOldData)
// ESteamLobbyComparison          ComparisonType                 (Parm, ZeroConstructor, IsPlainOldData)

void USteamworksManager::AddRequestLobbyListNumericalFilter(const struct FString& KeyToMatch, int ValueToMatch, ESteamLobbyComparison ComparisonType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.AddRequestLobbyListNumericalFilter");

	USteamworksManager_AddRequestLobbyListNumericalFilter_Params params;
	params.KeyToMatch = KeyToMatch;
	params.ValueToMatch = ValueToMatch;
	params.ComparisonType = ComparisonType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.AddRequestLobbyListNearValueFilter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 KeyToMatch                     (Parm, ZeroConstructor)
// int                            ValueToBeCloseTo               (Parm, ZeroConstructor, IsPlainOldData)

void USteamworksManager::AddRequestLobbyListNearValueFilter(const struct FString& KeyToMatch, int ValueToBeCloseTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.AddRequestLobbyListNearValueFilter");

	USteamworksManager_AddRequestLobbyListNearValueFilter_Params params;
	params.KeyToMatch = KeyToMatch;
	params.ValueToBeCloseTo = ValueToBeCloseTo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.AddRequestLobbyListFilterSlotsAvailable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SlotsAvailable                 (Parm, ZeroConstructor, IsPlainOldData)

void USteamworksManager::AddRequestLobbyListFilterSlotsAvailable(int SlotsAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.AddRequestLobbyListFilterSlotsAvailable");

	USteamworksManager_AddRequestLobbyListFilterSlotsAvailable_Params params;
	params.SlotsAvailable = SlotsAvailable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.AddRequestLobbyListDistanceFilter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ESteamLobbyDistanceFilter      DistanceFilter                 (Parm, ZeroConstructor, IsPlainOldData)

void USteamworksManager::AddRequestLobbyListDistanceFilter(ESteamLobbyDistanceFilter DistanceFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.AddRequestLobbyListDistanceFilter");

	USteamworksManager_AddRequestLobbyListDistanceFilter_Params params;
	params.DistanceFilter = DistanceFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksStatics.GetSteamPersonaName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USteamworksStatics::STATIC_GetSteamPersonaName(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksStatics.GetSteamPersonaName");

	USteamworksStatics_GetSteamPersonaName_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Steamworks.SteamworksStatics.GetLocalSteamId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USteamworksStatics::STATIC_GetLocalSteamId(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksStatics.GetLocalSteamId");

	USteamworksStatics_GetLocalSteamId_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
