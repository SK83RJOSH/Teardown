#pragma once

#include "entity.h"
#include "../voxels.h"
#include "../convex.h"

namespace Teardown { namespace Entities {
#pragma pack(push, 1)
	struct Shape : Entity {
		Transform m_Transform;
		Vector3_f32 m_MinBounds;
		Vector3_f32 m_MaxBounds;
		uint8_t gap5C[4];
		uint64_t qword60;
		uint64_t qword68;
		uint32_t dword70;
		uint32_t dword74;
		uint64_t qword78;
		uint64_t qword80;
		uint32_t dword88;
		float m_Highlight;
		Teardown::Voxels* m_Voxels;
		Teardown::Convex* m_Convex;
		uint64_t qwordA0;
		float m_Emissive;
		bool m_Broken; uint8_t pad[3];
	};

	static_assert(sizeof(Shape) == 0xB0u, "Shape size is incorrect!");
#pragma pack(pop)
} }