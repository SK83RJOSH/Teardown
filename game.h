#pragma once

#include "scene.h"
#include "graphics.h"

namespace Teardown
{
#pragma pack(push, 1)
	struct Game
	{
		struct Timer {
			int64_t field_0;
			int64_t field_8;
		};

		enum class State : uint32_t
		{
			Splash = 1,
			Menu = 2,
			About = 3,
			Load = 4,
			Play = 5,
			Edit = 6,
			Quit = 7,
		};

		int32_t m_Width;
		int32_t m_Height;
		int32_t field_8;
		State m_State;
		int32_t field_10;
		bool field_14; char pad_15[3];
		int32_t field_18;
		bool m_MapEnabled; char pad_1D[3];
		int64_t field_20;
		int64_t field_28;
		int64_t field_30;
		int64_t field_38;
		Scene* m_Scene; // Scene instance -- holds game objects
		int64_t field_48;
		int64_t field_50;
		int64_t field_58;
		int64_t field_60;
		int64_t field_68; // Editor instance
		int64_t field_70; // Lua state instance
		int64_t field_78; // Lua state instance
		int64_t field_80; // Lua state instance
		int64_t field_88; // Lua state instance
		int64_t field_90;
		int64_t field_98;
		Player* m_Player;
		small_string* field_A8;
		int64_t field_B0;
		int64_t field_B8;
		int64_t field_C0;
		int64_t m_ThreadPool;
		int64_t field_D0;
		small_string field_D8;
		small_string field_E8;
		small_string m_LevelPath;
		small_string m_LevelID;
		small_string field_118;
		bool field_128; uint8_t pad_129[3];
		int64_t field_12C;
		int32_t field_134;
		bool m_Paused; uint8_t pad_139[3];
		int64_t field_13C;
		float m_PhysicsStep;
		float m_DeltaTime;
		float m_Time;
		int32_t field_150;
		int32_t field_154;
		Timer m_Timer;
		bool field_168; uint8_t pad_169[3];
		int64_t field_16C;
		Matrix4x4 field_174;
		Matrix4x4 field_1B4;
		Matrix4x4 field_1F4;
		Matrix4x4 field_234;
		bool m_QuickLoad;
		bool m_QuickSave;
		bool m_Restart;
		bool m_ApplyGraphics;
		int64_t field_278;
		int64_t field_280;
		int64_t field_288;
		int32_t field_290;
		float field_294;
		Graphics::Options m_Options;
		int16_t field_2D4;
		bool field_2D6;
		char gap_2D7;
		Graphics::Buffers m_Buffers;
		uint8_t gap_318[8];
		char field_320[16];
		char field_330[16];
		char field_340[16];
		int field_350;
		int64_t field_354;
		int64_t field_35C;
		int64_t field_364;
		int field_36C;
		int field_370;
		int field_374;
		int field_378;
		int field_37C;
		int field_380;
		int field_384;
		int field_388;
		int field_38C;
		int field_390;
		int field_394;
		int field_398;
		int64_t field_39C;
		int64_t field_3A4;
		int field_3AC;
		__int16 field_3B0;
		char field_3B2;
		uint8_t gap_3B3[1];
		int field_3B4;
		uint8_t gap_3B8[56];
		char field_3F0;

		inline static function_signature<void(__fastcall*)(Game* ptr)> LoadQuickSave = { "\x40\x57\x48\x81\xEC\xB0\x00\x00\x00\x48\xC7\x44\x24\x30\xFE\xFF\xFF\xFF" };
		inline static function_signature<void(__fastcall*)(Game* ptr, __int64 unk1)> Update = { "\x48\x8B\xC4\x55\x41\x56\x41\x57\x48\x8D\xA8\x18\xF7\xFF\xFF" };
		inline static function_signature<void(__fastcall*)(Game* ptr, State state)> SetState = { "\x39\x51\x0C\x74\x2A\x8D\x42\xFF" };
	};

	inline static function_signature<void*(__cdecl*)(size_t size)> Malloc = { "\x40\x53\x48\x83\xEC\x20\x48\x8B\xD9\x48\x83\xF9\xE0\x77\x3C\x48\x85\xC9\xB8\x2A\x2A\x2A\x2A\x48\x0F\x44\xD8\xEB\x15\xE8\x2A\x2A\x2A\x2A\x85\xC0\x74\x25\x48\x8B\xCB\xE8\x2A\x2A\x2A\x2A\x85\xC0\x74\x19\x48\x8B\x0D\x2A\x2A\x2A\x2A\x4C\x8B\xC3\x33\xD2\xFF\x15\x2A\x2A\x2A\x2A\x48\x85\xC0\x74\xD4\xEB\x0D\xE8\x2A\x2A\x2A\x2A\xC7\x00\x2A\x2A\x2A\x2A\x33\xC0\x48\x83\xC4\x20\x5B\xC3" };
	inline static function_signature<void(__fastcall*)(void* mem)> Free = { "\x48\x85\xC9\x74\x37\x53\x48\x83\xEC\x20\x4C\x8B\xC1\x33\xD2\x48\x8B\x0D\x2A\x2A\x2A\x2A\xFF\x15\x2A\x2A\x2A\x2A\x85\xC0\x75\x17\xE8\x2A\x2A\x2A\x2A\x48\x8B\xD8\xFF\x15\x2A\x2A\x2A\x2A\x8B\xC8\xE8\x2A\x2A\x2A\x2A" };
	inline static function_signature<void(__fastcall*)(small_string* string)> DebugLog = { "\x80\x79\x0F\x00\x74\x03\x48\x8B\x09\x48\x8B\xD1\x48\x8D\x0D\x2A\x2A\x2A\x2A\xE9\x2A\x2A\x2A\x2A" };
	
	
	inline static function_signature<void(__fastcall*)(uint64_t renderer, Entities::Shape* shape, const Vector4_f32& color)> DrawOutline = { "\x40\x53\x48\x83\xEC\x40\x0F\x28\x05\x2A\x2A\x2A\x2A\x49\x8B\xD8\x48\x89\x54\x24\x2A\x4C\x8D\x44\x24\x2A\x48\x8D\x54\x24\x2A\x48\x81\xC1" };
	inline static function_signature<void(__fastcall*)(uint64_t renderer, Entities::Shape* shape, float unk)> DrawHighlight = { "\x48\x83\xEC\x48\x48\x89\x54\x24\x2A\x4C\x8D\x44\x24\x2A\x48\x8D\x54\x24\x2A\x0F\x29\x74\x24\x2A\x48\x81\xC1\x2A\x2A\x2A\x2A\x0F\x28\xF2\xE8" };
	inline static function_signature<void(__fastcall*)(uint64_t renderer, const Vector3_f32& position_0, const Vector3_f32& position_1, const Vector4_f32& color_0, const Vector4_f32& color_1, bool use_depth)> DrawLine = { "\x48\x89\x5C\x24\x2A\x48\x89\x6C\x24\x2A\x48\x89\x74\x24\x2A\x57\x41\x56\x41\x57\x48\x83\xEC\x20\x80\x7C\x24\x2A\x2A" };

	static_assert(sizeof(Game) == 0x3EDu, "Game size is incorrect!");
	static_assert(sizeof(Game::Timer) == 0x10u, "Game::Timer size is incorrect!");
	static_assert(sizeof(Game::State) == 0x4u, "Game::State size is incorrect!");
#pragma pack(pop)
}