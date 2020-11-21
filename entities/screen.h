#pragma once

#include "entity.h"

namespace Teardown { namespace Entities {
#pragma pack(push, 1)
	struct Screen : Entity {
		Transform m_Transform;
		Vector2_f32 m_Size;
		float m_Bulge;
		Vector2_u32 m_Resolution;
		small_string m_Script;
		bool m_Enabled;
		bool m_Interactive; uint8_t pad_68[2];
		float m_Emissive;
		float m_FxRaster;
		float m_FxChromaticAbberation;
		float m_FxNoise;
		float m_FxGlitch;
		int32_t field_80;
		uint8_t gap84[2228];
		int32_t field_938;
		uint8_t gap93C[60];
		int32_t field_978;
		uint8_t gap97C[508];
		int64_t field_B78;
		uint8_t field_B80[56]; // This is a Buffer instance
		uint8_t field_BB8[32]; // This is AnotherBuffer instance
		Matrix4x4 m_Matrix;
		uint8_t gapBFC[64];
		int64_t field_C58;
		int64_t field_C60;
		int64_t field_C68;
		uint8_t gapC70[4];
		int32_t field_C74;
	};

	static_assert(sizeof(Screen) == 0xC78u, "Screen size is incorrect!");
#pragma pack(pop)
} }