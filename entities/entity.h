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
	};
} }