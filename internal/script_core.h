#pragma once

#include "../types.h"

namespace Teardown { namespace Internal { 
	using lua_State = void;

	struct ScriptCore_LuaStateInfo {
		lua_State* field_0;
		int64_t field_8;
		int64_t field_10;
		small_string field_18;
	};

	struct ScriptCore_LuaState {
		int64_t field_0;
		int64_t field_8;
		int32_t field_10;
		int32_t field_14;
		bool field_18;
		uint8_t pad_19[7];
		int64_t field_20;
		int64_t field_28;
		ScriptCore_LuaStateInfo* field_30;
	};

#pragma pack(push, 1)
	struct ScriptCore
	{
		int64_t vftptr_0; // + 0
		int64_t field_8; // + 8
		small_string field_10; // + 16
		small_string field_20; // + 32
		ScriptCore_LuaState field_30; // + 48
		int32_t field_68; // + 104
		int64_t field_6C; // + 108
		int32_t field_74; // + 116
		int32_t field_78; // + 120
		int32_t field_7C; // + 124
		int64_t field_80; // + 128
		uint8_t field_88[128]; // + 136
		int64_t field_108; // + 264
		int64_t field_110; // + 272
		int64_t field_118; // + 280
		int64_t field_120; // + 288
		int32_t field_128; // + 296
		int64_t field_12C; // + 300
		bool field_134; // + 308
		uint8_t pad_135[3]; // + 309
		int32_t field_138; // + 312
		int32_t field_13C; // + 316
		int64_t field_140; // + 320
		uint8_t field_148[32]; // + 328
		int32_t field_168; // + 360
		int32_t field_16C; // + 364
		int64_t field_170; // + 368
		uint8_t field_178[32]; // + 376
		int64_t field_198; // + 408
		int64_t field_1A0; // + 416
		int64_t field_1A8; // + 424
		int64_t field_1B0; // + 432
		int64_t field_1B8; // + 440
		int64_t field_1C0; // + 448
	};
#pragma pack(pop)
} }