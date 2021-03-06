#pragma once

#include "entity.h"
#include "body.h"

namespace Teardown { namespace Entities {
#pragma pack(push, 1)
	struct Vehicle : Entity {
		Body* m_Body;
		Transform m_Transform;
		uint32_t qword4C;
		uint64_t qword50;
		uint64_t qword58;
		uint32_t dword60;
		uint64_t qword64;
		uint32_t dword6C;
		uint64_t qword70;
		uint8_t gap78[64];
		uint32_t dwordB8;
		float m_TopSpeed;
		uint32_t dwordC0;
		float m_Spring;
		float m_Damping;
		float m_Acceleration;
		float m_Strength;
		float m_Friction;
		uint32_t dwordD8;
		bool m_Driven;
		uint8_t gapDD[3];
		float m_AntiSpin;
		float m_SteerAssist;
		uint32_t gapDF;
		float m_AntiRoll;
		float m_DiffLock;
		uint8_t gapF4[4];
		small_string m_Sound;
		uint64_t qword108;
		uint64_t qword110;
		Vector3_f32 m_PlayerOffset;
		uint32_t dword124;
		uint64_t qword128;
		uint64_t qword130;
		uint64_t qword138;
		uint64_t qword140;
		uint64_t qword148;
		uint8_t byte150;
		uint8_t gap151[3];
		uint64_t qword154;
		uint32_t dword15C;
		uint64_t qword160;
		uint32_t dword168;
		float m_Health;
		uint32_t dword170;
		uint32_t dword174;
		uint32_t dword178;
		uint8_t gap17C[4];
		uint32_t dword180;
		uint32_t dword184;
		uint64_t qword188;
		uint8_t gap190[16];
		uint32_t dword1A0;
		uint32_t dword1A4;
		uint64_t qword1A8;
		uint8_t gap1B0[32];
		uint32_t dword1D0;
		uint32_t dword1D4;
		uint64_t qword1D8;
		uint8_t gap1E0[56];
		uint32_t dword218;
		uint32_t dword21C;
		uint64_t qword220;
		uint8_t gap228[64];
		uint64_t qword268;
		uint64_t qword270;
		uint8_t gap278[8];
		uint32_t dword280;
		uint8_t byte284;
		uint8_t gap285[3];
	};

	static_assert(sizeof(Vehicle) == 0x288u, "Vehicle size is incorrect!");
#pragma pack(pop)
} }