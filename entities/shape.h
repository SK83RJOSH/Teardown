#pragma once

#include "entity.h"
#include "joint.h"
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
		uint32_t m_Layer;
		uint32_t dword74;
		uint64_t qword78;
		uint64_t qword80;
		uint32_t dword88;
		float m_Highlight;
		Teardown::Voxels* m_Voxels;
		Teardown::Convex* m_Convex;
		Joint* m_Joint;
		float m_Emissive;
		bool m_Broken; uint8_t pad[3];

		inline static function_signature<void(__fastcall*)(Shape* ptr, Entity* parent)> Constructor = { "\x40\x53\x48\x83\xEC\x20\x4C\x8B\xC2\x48\x8B\xD9\xBA\x02\x00\x00\x00" };
		inline static function_signature<void(__fastcall*)(Shape* ptr, Transform& transform)> GetWorldTransform = { "\x40\x53\x48\x83\xEC\x20\x4C\x8D\x41\x28" };
	};

	static_assert(sizeof(Shape) == 0xB0u, "Shape size is incorrect!");
#pragma pack(pop)
} }