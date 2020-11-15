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
	};
#pragma pack(pop)
}