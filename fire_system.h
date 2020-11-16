#pragma once

#include "entities/shape.h"

namespace Teardown {
#pragma pack(push, 1)
	struct FireSystem {
		struct Fire {
			Entities::Shape* m_Parent;
			Vector3_f32 m_Position;
			float m_TimeRemaining;
			float m_TotalLifetime;
		};

		void* vftptr_0;
		small_vector<Fire> m_Instances;
	};

	static_assert(sizeof(FireSystem) == 0x18u, "FireSystem size is incorrect!");
	static_assert(sizeof(FireSystem::Fire) == 0x1Cu, "FireSystem::Fire size is incorrect!");
#pragma pack(pop)
}