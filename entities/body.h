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
		uint32_t dword78;
		Vector3_f32 m_Velocity;
		uint64_t qword88;
		uint64_t qword90;
		uint32_t qword98;
		uint32_t qword9C;
		float m_Density;
		uint64_t qwordA4;
		uint64_t qwordAC;
		uint64_t qwordB4;
		uint64_t qwordBC;
		uint64_t qwordC4;
		uint32_t dwordCC;
		Vector3_f32 m_MinBounds;
		Vector3_f32 m_MaxBounds;
		bool byteE8; uint8_t padE9[3];
		uint32_t dwordEC;
		uint32_t dwordF0;
		uint8_t m_IsDynamic; uint8_t padF5[3];
		uint64_t qwordF8;

		inline static function_signature<void(__fastcall*)(Body* ptr, Entity* parent)> Constructor = { "\x40\x53\x48\x83\xEC\x20\x4C\x8B\xC2\x48\x8B\xD9\xBA\x01\x00\x00\x00" };
		inline static function_signature<void(__fastcall*)(Body* ptr, Transform* transform)> IsDebris = { "\x80\xB9\xF4\x00\x00\x00\x00\x75\x2A\x32\xC0" };
		inline static function_signature<void(__fastcall*)(Body* ptr, Transform* transform)> SetTransform = { "\x48\x89\x5C\x24\x10\x57\x48\x83\xEC\x20\x80\xB9\xFC\x00\x00\x00\x00" };
		inline static function_signature<void(__fastcall*)(Body* ptr, bool dynamic)> SetDynamic = { "\x88\x91\x2A\x2A\x2A\x2A\x4C\x8B\xC1\x84\xD2\x74\x29\x0F\xB6\x81\x2A\x2A\x2A\x2A\xC6\x81\x2A\x2A\x2A\x2A\x2A\x84\xC0\x75\x17\x48\x8B\x05\x2A\x2A\x2A\x2A\x49\x8B\xD0\x48\x8B\x48\x40\x48\x8B\x49\x08\xE9\x2A\x2A\x2A\x2A\xC3" };
		inline static function_signature<void(__fastcall*)(Body* ptr)> UpdateShapes = { "\x48\x89\x4C\x24\x2A\x55\x56\x57\x41\x54\x41\x55\x41\x56\x41\x57\x48\x8D\xAC\x24\x2A\x2A\x2A\x2A\xB8\x2A\x2A\x2A\x2A\xE8\x2A\x2A\x2A\x2A\x48\x2B\xE0\x48\xC7\x85\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x48\x89\x9C\x24\x2A\x2A\x2A\x2A\x0F\x29\xB4\x24\x2A\x2A\x2A\x2A\x0F\x29\xBC\x24\x2A\x2A\x2A\x2A\x44\x0F\x29\x84\x24\x2A\x2A\x2A\x2A\x44\x0F\x29\x8C\x24\x2A\x2A\x2A\x2A\x44\x0F\x29\x94\x24\x2A\x2A\x2A\x2A\x44\x0F\x29\x9C\x24\x2A\x2A\x2A\x2A\x44\x0F\x29\xA4\x24\x2A\x2A\x2A\x2A\x44\x0F\x29\xAC\x24\x2A\x2A\x2A\x2A\x44\x0F\x29\xB4\x24" };
		inline static function_signature<void(__fastcall*)(Body* ptr, small_vector<struct Shape*>& list)> GetShapes = { "\x45\x33\xC9\x45\x8D\x41\x02\xE9\x2A\x2A\x2A\x2A" };
	};

	static_assert(sizeof(Body) == 0x100u, "Body size is incorrect!");
#pragma pack(pop)
} }