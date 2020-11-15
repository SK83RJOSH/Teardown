#pragma once

#include "entity.h"

namespace Teardown { namespace Entities {
#pragma pack(push, 1)
	struct Body : Entity {
		Transform m_Transform;
		uint32_t qword44;
		uint64_t qword48;
		uint64_t qword50;
		uint32_t dword58;
		uint64_t qword5C;
		uint64_t qword64;
		uint64_t qword6C;
		uint32_t dword74;
		Vector3_f32 m_Velocity;
		uint32_t qword84;
		uint64_t qword88;
		uint64_t qword90;
		float m_Density;
		uint32_t qword9C;
		uint8_t gapA0[4];
		uint64_t qwordA4;
		uint64_t qwordAC;
		uint64_t qwordB4;
		uint64_t qwordBC;
		uint64_t qwordC4;
		uint32_t dwordCC;
		Vector3_f32 m_MinBounds;
		Vector3_f32 m_MaxBounds;
		bool m_IsDynamic;
		uint8_t padE2[3];
		uint64_t qwordE8;
		uint32_t dwordF0;
		uint8_t byteF4;
		uint64_t qwordF8;
	};
#pragma pack(pop)
} }