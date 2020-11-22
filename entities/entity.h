#pragma once

#include "../types.h"

namespace Teardown { namespace Entities {
	struct Entity {
		struct vftable
		{
			void(__fastcall* Destroy)(Entity* entity, bool free);
			Entity* (__fastcall* SetParent)(Entity* entity, Entity* parent);
			__int64* (__fastcall* sub_7FF64AA48260)(Entity*, __int64);
			__int64* (__fastcall* sub_7FF64AA480A0)(__int64, __int64);
		};

		enum class Type : uint8_t {
			Body = 1,
			Shape = 2,
			Light = 3,
			Location = 4,
			Water = 5,
			Enemy = 6,
			Joint = 7,
			Vehicle = 8,
			Wheel = 9,
			Screen = 10,
			Trigger = 11,
			Script = 12
		};

		enum class Flags : uint8_t {
			HasTags		= (1 << 0),
			InheritTags = (1 << 1),
			Unbreakable = (1 << 2),
			NoCull		= (1 << 4),
		};

		vftable* vftptr_0;
		Type m_Type;
		Flags m_Flags;
		uint32_t m_Id;
		Entity* m_Parent;
		Entity* m_Sibling;
		Entity* m_Child;

		inline static function_signature<bool(__fastcall*)(Entity* ptr, const small_string& tag)> HasTag = { "\x48\x89\x5C\x24\x08\x48\x89\x6C\x24\x10\x48\x89\x74\x24\x18\x48\x89\x7C\x24\x20\x41\x56\x48\x83\xEC\x20\xF6\x41\x09\x01" };
		inline static function_signature<void(__fastcall*)(Entity* ptr, const small_string& tag)> RemoveTag = { "\x40\x57\x41\x57" };
		inline static function_signature<void(__fastcall*)(Entity* ptr, const small_string& tag, const small_string& value)> SetTag = { "\x4C\x89\x44\x24\x18\x57\x41\x56" };
		inline static function_signature<void(__fastcall*)(Entity* ptr, small_string& result, const small_string& tag)> GetTagValue = { "\x48\x89\x5C\x24\x08\x48\x89\x6C\x24\x10\x48\x89\x74\x24\x18\x57\x41\x56\x41\x57\x48\x83\xEC\x30\x33\xDB" };
		inline static function_signature<void(__fastcall*)(Entity* ptr, Entity* parent)> SetParent = { "\x4C\x8B\xC1\x48\x8B\x49\x10\x48\x8B\x41\x20" };
		inline static function_signature<Entity*(__fastcall*)(Entity* ptr, Type type)> FindParentOfType = { "\x48\x8B\x41\x10\x48\x85\xC0\x74\x2A\x0F\x1F\x80\x00\x00\x00\x00" };
		inline static function_signature<void(__fastcall*)(Entity* ptr, small_vector<Entity*>& list, uint32_t type, bool recursive)> FindChildrenOfType = { "\x48\x89\x5C\x24\x08\x48\x89\x6C\x24\x10\x48\x89\x74\x24\x18\x57\x48\x83\xEC\x20\x48\x8B\x59\x20" };
	};

	static_assert(sizeof(Entity::vftable) == 0x20u, "Entity::vftable size is incorrect!");
	static_assert(sizeof(Entity::Type) == 0x1u, "Entity::Type size is incorrect!");
	static_assert(sizeof(Entity::Flags) == 0x1u, "Entity::Flags size is incorrect!");
	static_assert(sizeof(Entity) == 0x28u, "Entity size is incorrect!");
} }