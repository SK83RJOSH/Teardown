#pragma once

#include "entity.h"

namespace Teardown { namespace Entities {
#pragma pack(push, 1)
	struct Water : Entity {
		Transform m_Transform;
		uint32_t m_Depth;
		small_vector<Vector2_f32> m_Vertices;
		bool char58;
		uint8_t gap59[127];
		Vector3_f32 m_MinBounds;
		Vector3_f32 m_MaxBounds;
		bool charF0;
		uint8_t gapF1[511];
		uint64_t qword2F0;
		uint8_t field_2F8[56]; // This is a Buffer instance
		uint8_t field_330[32]; // This is AnotherBuffer instance
		uint64_t qword350;
		uint64_t qword358;
		float m_Wave;
		float m_Ripple;
		float m_Motion;
		float m_Foam;	

		inline static function_signature<bool(__fastcall*)(Water* ptr, Entity* parent)> Constructor = { "\x48\x89\x4C\x24\x2A\x53\x56\x57\x48\x83\xEC\x40\x48\xC7\x44\x24\x2A\x2A\x2A\x2A\x2A\x48\x8B\xF9\x4C\x8B\xC2\xBA\x2A\x2A\x2A\x2A\xE8\x2A\x2A\x2A\x2A\x90\x48\x8D\x05\x2A\x2A\x2A\x2A\x48\x89\x07\x33\xF6\x48\x89\x77\x28\x48\x89\x77\x30\x48\x89\x77\x38\xC7\x47\x2A\x2A\x2A\x2A\x2A\x48\xC7\x47\x2A\x2A\x2A\x2A\x2A\x48\x8D\x47\x58\x48\x89\x47\x50\xC7\x47\x2A\x2A\x2A\x2A\x2A\x48\x89\xB7\x2A\x2A\x2A\x2A\x48\x89\xB7" };
		inline static function_signature<bool(__fastcall*)(Water* ptr)> CreateBuffers = { "\x48\x8B\xC4\x55\x41\x54\x41\x55\x41\x56\x41\x57\x48\x8D\xA8\xF8\xFE\xFF\xFF\x48\x81\xEC\xE0\x01\x00\x00\x48\xC7\x45\x80\xFE\xFF\xFF\xFF" };
		inline static function_signature<bool(__fastcall*)(Water* ptr, Vector3_f32* pos, float* out_depth)> IsPointInside = { "\x48\x89\x5C\x24\x10\x57\x48\x83\xEC\x40\xF3\x0F\x10\x12" };
	};

	static_assert(sizeof(Water) == 0x370u, "Water size is incorrect!");
#pragma pack(pop)
} }