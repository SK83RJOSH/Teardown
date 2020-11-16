#pragma once

#include "entity.h"

namespace Teardown { namespace Entities {
#pragma pack(push, 1)
	struct Wheel : Entity {
        uint64_t qword28;
        uint64_t qword30;
        uint64_t qword38;
        uint64_t qword40;
        Transform m_Transform;
        uint32_t qword64;
        uint64_t qword68;
        uint64_t qword70;
        uint32_t dword78;
        uint32_t dword7C;
        float m_Steer;
        float m_Drive;
        Vector2_f32 m_Travel; // Spring length
        uint32_t dword90;
        uint64_t qword94;
        uint64_t qword9C;
        bool byteA4; uint8_t padA5[3];
        uint64_t qwordA8;
        uint64_t qwordB0;
        uint64_t qwordB8;
        uint64_t qwordC0;
        uint32_t dwordC8;
        uint64_t qwordCC;
        uint64_t qwordD4;
        uint64_t qwordDC;
        uint64_t qwordE4;
        uint32_t dwordEC;
	};

	static_assert(sizeof(Wheel) == 0xF0u, "Wheel size is incorrect!");
#pragma pack(pop)
} }