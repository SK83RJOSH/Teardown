#pragma once

#include "scene.h"
#include "entities/body.h"
#include "entities/shape.h"

namespace Teardown {
	struct Scene;

#pragma pack(push, 1)
	struct PhysicsSystem {
		Scene* m_Scene;
		uint8_t gap4[16];
		int32_t field_18;
		uint8_t gap1C[4];
		int32_t field_20;
		uint8_t gap24[28];
		float m_UpdateInterval;
		uint8_t gap44[4];
		int32_t field_48;
		uint8_t gap4C[10652];
		int32_t field_29E8;
		uint8_t gap29EC[76];
		small_vector<Entities::Body*> m_ActiveBodies;
		bool field_2A48;
		uint8_t gap2A49[39];
		int32_t field_2A70;
		uint8_t gap2A74[92];
		int32_t field_2AD0;
		uint8_t gap2AD4[76];
	};

	static_assert(sizeof(PhysicsSystem) == 0x2B20u, "PhysicsSystem size is incorrect!");
#pragma pack(pop)
}