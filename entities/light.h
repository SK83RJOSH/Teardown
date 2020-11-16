#pragma once

#include "entity.h"

namespace Teardown { namespace Entities {
#pragma pack(push, 1)
	struct Light : Entity {
		enum class Type : uint8_t {
			Sphere = 1,
			Cone = 2,
			Area = 3,
		};

		bool m_Enabled; uint8_t pad29[3];
		Type m_LightType; uint8_t pad2D[3];
		Transform m_Transform;
		Vector3_f32 m_Color;
		float dword58;
		float m_Reach;
		float m_Size;
		float m_ShadowDistance;
		float m_InnerAngle;
		float m_OuterAngle;
		float m_Fogiter;
		float m_FogScale;
		Vector2_f32 m_AreaSize;
		float m_Glare;
		uint64_t qword84;
		uint64_t qword8C;
		bool byte94; uint8_t pad95[3];
		uint32_t dword98;
		uint16_t word9C; uint8_t pad9D[2];
		uint8_t gap9f[520]; // This is a ShaderBinding instance
		uint8_t qword2A8[56]; // This is a Buffer instance
		uint8_t gap2E0[32]; // This is AnotherBuffer instance
		uint32_t dword300;
		uint32_t dword304;
		uint64_t qword308;
		uint8_t gap310[3072];
		uint32_t dwordF10;
		uint32_t dwordF14;
		uint64_t qwordF18;
		uint8_t gapF20[1024];
		uint64_t qword1320;
		uint64_t qword1328;
		uint64_t qword1330;
		small_string m_Sound;
		uint64_t qword1348;
		uint32_t dword1350;
		uint32_t dword1354;
	};

	static_assert(sizeof(Light::Type) == 0x1u, "Light::Type size is incorrect!");
	static_assert(sizeof(Light) == 0x1358u, "Light size is incorrect!");
#pragma pack(pop)
} }