#pragma once

#include "entities/shape.h"

namespace Teardown {
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
}