#pragma once
#include <windows.h>
#include <iostream>
#include <string>
#include <tlhelp32.h>
#include <string_view>
#include <cmath>

class Vector3
{
public:
	float x;
	float y;
	float z;

	Vector3()
	{
		x = y = z = 0;
	}

	Vector3(float x, float y, float z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	Vector3& operator+(Vector3 arg)
	{
		x += arg.x;
		y += arg.y;
		z += arg.z;
		return *this;
	}

	Vector3& operator-(Vector3 arg)
	{
		x -= arg.x;
		y -= arg.y;
		z -= arg.z;
		return *this;
	}

	Vector3& operator/(Vector3 arg)
	{
		x /= arg.x;
		y /= arg.y;
		z /= arg.z;
		return *this;
	}

	Vector3& operator*(Vector3 arg)
	{
		x *= arg.x;
		y *= arg.y;
		z *= arg.z;
		return *this;
	}

};

namespace offsets
{
	constexpr ::std::ptrdiff_t cs_gamerules_data = 0x0;
	constexpr ::std::ptrdiff_t m_ArmorValue = 0xB378;
	constexpr ::std::ptrdiff_t m_Collision = 0x320;
	constexpr ::std::ptrdiff_t m_CollisionGroup = 0x474;
	constexpr ::std::ptrdiff_t m_Local = 0x2FBC;
	constexpr ::std::ptrdiff_t m_MoveType = 0x25C;
	constexpr ::std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x31C4;
	constexpr ::std::ptrdiff_t m_OriginalOwnerXuidLow = 0x31C0;
	constexpr ::std::ptrdiff_t m_SurvivalGameRuleDecisionTypes = 0x1328;
	constexpr ::std::ptrdiff_t m_SurvivalRules = 0xD00;
	constexpr ::std::ptrdiff_t m_aimPunchAngle = 0x302C;
	constexpr ::std::ptrdiff_t m_aimPunchAngleVel = 0x3038;
	constexpr ::std::ptrdiff_t m_angEyeAnglesX = 0xB37C;
	constexpr ::std::ptrdiff_t m_angEyeAnglesY = 0xB380;
	constexpr ::std::ptrdiff_t m_bBombPlanted = 0x9A5;
	constexpr ::std::ptrdiff_t m_bFreezePeriod = 0x20;
	constexpr ::std::ptrdiff_t m_bGunGameImmunity = 0x3944;
	constexpr ::std::ptrdiff_t m_bHasDefuser = 0xB388;
	constexpr ::std::ptrdiff_t m_bHasHelmet = 0xB36C;
	constexpr ::std::ptrdiff_t m_bInReload = 0x32A5;
	constexpr ::std::ptrdiff_t m_bIsDefusing = 0x3930;
	constexpr ::std::ptrdiff_t m_bIsQueuedMatchmaking = 0x74;
	constexpr ::std::ptrdiff_t m_bIsScoped = 0x3928;
	constexpr ::std::ptrdiff_t m_bIsValveDS = 0x7C;
	constexpr ::std::ptrdiff_t m_bSpotted = 0x93D;
	constexpr ::std::ptrdiff_t m_bSpottedByMask = 0x980;
	constexpr ::std::ptrdiff_t m_bStartedArming = 0x33F0;
	constexpr ::std::ptrdiff_t m_bUseCustomAutoExposureMax = 0x9D9;
	constexpr ::std::ptrdiff_t m_bUseCustomAutoExposureMin = 0x9D8;
	constexpr ::std::ptrdiff_t m_bUseCustomBloomScale = 0x9DA;
	constexpr ::std::ptrdiff_t m_clrRender = 0x70;
	constexpr ::std::ptrdiff_t m_dwBoneMatrix = 0x26A8;
	constexpr ::std::ptrdiff_t m_fAccuracyPenalty = 0x3330;
	constexpr ::std::ptrdiff_t m_fFlags = 0x104;
	constexpr ::std::ptrdiff_t m_flC4Blow = 0x2990;
	constexpr ::std::ptrdiff_t m_flCustomAutoExposureMax = 0x9E0;
	constexpr ::std::ptrdiff_t m_flCustomAutoExposureMin = 0x9DC;
	constexpr ::std::ptrdiff_t m_flCustomBloomScale = 0x9E4;
	constexpr ::std::ptrdiff_t m_flDefuseCountDown = 0x29AC;
	constexpr ::std::ptrdiff_t m_flDefuseLength = 0x29A8;
	constexpr ::std::ptrdiff_t m_flFallbackWear = 0x31D0;
	constexpr ::std::ptrdiff_t m_flFlashDuration = 0xA420;
	constexpr ::std::ptrdiff_t m_flFlashMaxAlpha = 0xA41C;
	constexpr ::std::ptrdiff_t m_flLastBoneSetupTime = 0x2924;
	constexpr ::std::ptrdiff_t m_flLowerBodyYawTarget = 0x3A90;
	constexpr ::std::ptrdiff_t m_flNextAttack = 0x2D70;
	constexpr ::std::ptrdiff_t m_flNextPrimaryAttack = 0x3238;
	constexpr ::std::ptrdiff_t m_flSimulationTime = 0x268;
	constexpr ::std::ptrdiff_t m_flTimerLength = 0x2994;
	constexpr ::std::ptrdiff_t m_hActiveWeapon = 0x2EF8;
	constexpr ::std::ptrdiff_t m_hMyWeapons = 0x2DF8;
	constexpr ::std::ptrdiff_t m_hObserverTarget = 0x338C;
	constexpr ::std::ptrdiff_t m_hOwner = 0x29CC;
	constexpr ::std::ptrdiff_t m_hOwnerEntity = 0x14C;
	constexpr ::std::ptrdiff_t m_iAccountID = 0x2FC8;
	constexpr ::std::ptrdiff_t m_iClip1 = 0x3264;
	constexpr ::std::ptrdiff_t m_iCompetitiveRanking = 0x1A84;
	constexpr ::std::ptrdiff_t m_iCompetitiveWins = 0x1B88;
	constexpr ::std::ptrdiff_t m_iCrosshairId = 0xB3E4;
	constexpr ::std::ptrdiff_t m_iEntityQuality = 0x2FAC;
	constexpr ::std::ptrdiff_t m_iFOV = 0x31E4;
	constexpr ::std::ptrdiff_t m_iFOVStart = 0x31E8;
	constexpr ::std::ptrdiff_t m_iGlowIndex = 0xA438;
	constexpr ::std::ptrdiff_t m_iHealth = 0x100;
	constexpr ::std::ptrdiff_t m_iItemDefinitionIndex = 0x2FAA;
	constexpr ::std::ptrdiff_t m_iItemIDHigh = 0x2FC0;
	constexpr ::std::ptrdiff_t m_iMostRecentModelBoneCounter = 0x2690;
	constexpr ::std::ptrdiff_t m_iObserverMode = 0x3378;
	constexpr ::std::ptrdiff_t m_iShotsFired = 0xA390;
	constexpr ::std::ptrdiff_t m_iState = 0x3258;
	constexpr ::std::ptrdiff_t m_iTeamNum = 0xF4;
	constexpr ::std::ptrdiff_t m_lifeState = 0x25F;
	constexpr ::std::ptrdiff_t m_nFallbackPaintKit = 0x31C8;
	constexpr ::std::ptrdiff_t m_nFallbackSeed = 0x31CC;
	constexpr ::std::ptrdiff_t m_nFallbackStatTrak = 0x31D4;
	constexpr ::std::ptrdiff_t m_nForceBone = 0x268C;
	constexpr ::std::ptrdiff_t m_nTickBase = 0x3430;
	constexpr ::std::ptrdiff_t m_rgflCoordinateFrame = 0x444;
	constexpr ::std::ptrdiff_t m_szCustomName = 0x303C;
	constexpr ::std::ptrdiff_t m_szLastPlaceName = 0x35B4;
	constexpr ::std::ptrdiff_t m_thirdPersonViewAngles = 0x31D8;
	constexpr ::std::ptrdiff_t m_vecOrigin = 0x138;
	constexpr ::std::ptrdiff_t m_vecVelocity = 0x114;
	constexpr ::std::ptrdiff_t m_vecViewOffset = 0x108;
	constexpr ::std::ptrdiff_t m_viewPunchAngle = 0x3020;
	constexpr ::std::ptrdiff_t anim_overlays = 0x2980;
	constexpr ::std::ptrdiff_t clientstate_choked_commands = 0x4D30;
	constexpr ::std::ptrdiff_t clientstate_delta_ticks = 0x174;
	constexpr ::std::ptrdiff_t clientstate_last_outgoing_command = 0x4D2C;
	constexpr ::std::ptrdiff_t clientstate_net_channel = 0x9C;
	constexpr ::std::ptrdiff_t convar_name_hash_table = 0x2F0F8;
	constexpr ::std::ptrdiff_t dwClientState = 0x58EFE4;
	constexpr ::std::ptrdiff_t dwClientState_GetLocalPlayer = 0x180;
	constexpr ::std::ptrdiff_t dwClientState_IsHLTV = 0x4D48;
	constexpr ::std::ptrdiff_t dwClientState_Map = 0x28C;
	constexpr ::std::ptrdiff_t dwClientState_MapDirectory = 0x188;
	constexpr ::std::ptrdiff_t dwClientState_MaxPlayer = 0x388;
	constexpr ::std::ptrdiff_t dwClientState_PlayerInfo = 0x52C0;
	constexpr ::std::ptrdiff_t dwClientState_State = 0x108;
	constexpr ::std::ptrdiff_t dwClientState_ViewAngles = 0x4D90;
	constexpr ::std::ptrdiff_t dwEntityList = 0x4D9FBD4;
	constexpr ::std::ptrdiff_t dwForceAttack = 0x31D1134;
	constexpr ::std::ptrdiff_t dwForceAttack2 = 0x31D1140;
	constexpr ::std::ptrdiff_t dwForceBackward = 0x31D1188;
	constexpr ::std::ptrdiff_t dwForceForward = 0x31D1194;
	constexpr ::std::ptrdiff_t dwForceJump = 0x5249B34;
	constexpr ::std::ptrdiff_t dwForceLeft = 0x31D1110;
	constexpr ::std::ptrdiff_t dwForceRight = 0x31D1104;
	constexpr ::std::ptrdiff_t dwGameDir = 0x62D7F8;
	constexpr ::std::ptrdiff_t dwGameRulesProxy = 0x52BCE2C;
	constexpr ::std::ptrdiff_t dwGetAllClasses = 0xDAFD74;
	constexpr ::std::ptrdiff_t dwGlobalVars = 0x58ECE8;
	constexpr ::std::ptrdiff_t dwGlowObjectManager = 0x52E81B0;
	constexpr ::std::ptrdiff_t dwInput = 0x51F11B8;
	constexpr ::std::ptrdiff_t dwInterfaceLinkList = 0x943C54;
	constexpr ::std::ptrdiff_t dwLocalPlayer = 0xD882BC;
	constexpr ::std::ptrdiff_t dwMouseEnable = 0xD8DE60;
	constexpr ::std::ptrdiff_t dwMouseEnablePtr = 0xD8DE30;
	constexpr ::std::ptrdiff_t dwPlayerResource = 0x31CF490;
	constexpr ::std::ptrdiff_t dwRadarBase = 0x51D494C;
	constexpr ::std::ptrdiff_t dwSensitivity = 0xD8DCFC;
	constexpr ::std::ptrdiff_t dwSensitivityPtr = 0xD8DCD0;
	constexpr ::std::ptrdiff_t dwSetClanTag = 0x8A1A0;
	constexpr ::std::ptrdiff_t dwViewMatrix = 0x4D914D4;
	constexpr ::std::ptrdiff_t dwWeaponTable = 0x51F1C78;
	constexpr ::std::ptrdiff_t dwWeaponTableIndex = 0x325C;
	constexpr ::std::ptrdiff_t dwYawPtr = 0xD8DAC0;
	constexpr ::std::ptrdiff_t dwZoomSensitivityRatioPtr = 0xD92D60;
	constexpr ::std::ptrdiff_t dwbSendPackets = 0xD723A;
	constexpr ::std::ptrdiff_t dwppDirect3DDevice9 = 0xA7050;
	constexpr ::std::ptrdiff_t find_hud_element = 0x2F72EE80;
	constexpr ::std::ptrdiff_t force_update_spectator_glow = 0x3AE1F2;
	constexpr ::std::ptrdiff_t interface_engine_cvar = 0x3E9EC;
	constexpr ::std::ptrdiff_t is_c4_owner = 0x3BACB0;
	constexpr ::std::ptrdiff_t m_bDormant = 0xED;
	constexpr ::std::ptrdiff_t m_flSpawnTime = 0xA370;
	constexpr ::std::ptrdiff_t m_pStudioHdr = 0x294C;
	constexpr ::std::ptrdiff_t m_pitchClassPtr = 0x51D4BE8;
	constexpr ::std::ptrdiff_t m_yawClassPtr = 0xD8DAC0;
	constexpr ::std::ptrdiff_t model_ambient_min = 0x59205C;
	constexpr ::std::ptrdiff_t set_abs_angles = 0x1E05B0;
	constexpr ::std::ptrdiff_t set_abs_origin = 0x1E03F0;
}

namespace szStrings
{
	wchar_t szSteam[] = L"steam.exe";
	wchar_t szCSGO[] = L"csgo.exe";
	wchar_t szClientMod[] = L"client.dll";
	wchar_t szEngineMod[] = L"engine.dll";
}

DWORD FindProcessId(const std::wstring& processName);
uintptr_t GetModuleBaseAddress(DWORD procId, const wchar_t* modName);
Vector3 ClampAngle(Vector3 qaAng);
void runRCS();
DWORD hProcID, mClient, mEngine;
HANDLE hProc;

template <class C>
C read(DWORD_PTR(Address)) {
	C c;
	ReadProcessMemory(hProc, reinterpret_cast<LPCVOID>(Address), &c, sizeof(c), nullptr);
	return c;
}

template <typename TYPE>
void write(DWORD address, TYPE dataToWrite) {
	TYPE buffer = dataToWrite;
	WriteProcessMemory(hProc, (LPVOID)address, &buffer, sizeof(buffer), 0);
}


static Vector3 dwOldPunchAngle;