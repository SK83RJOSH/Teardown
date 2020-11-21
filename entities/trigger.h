#pragma once

#include "entity.h"

namespace Teardown { namespace Entities {
#pragma pack(push, 1)
	struct Trigger : Entity {
        enum class Type : uint32_t
        {
            Sphere = 1,
            Box = 2,
            Polygon = 3,
        };

        Transform m_Transform;
        Type m_TriggerType;
        float m_Radius;
        Vector3_f32 m_Dimensions;
        small_vector<Vector2_f32> m_Vertices;
        uint8_t m_VerticesMemory[16]; // small_vector should support pre-reserved buffers... not going to add that right now.
        int32_t field_78;
        bool field_7C; uint8_t pad_7D[3];
        int32_t field_80;
        uint8_t field_84[100];
        float m_Size;
        uint32_t field_EC;
        small_string m_Sound;
        float m_SoundRamp;
        bool m_Outdoor; uint8_t pad_105[3];
        float field_108;
        uint32_t field_10C;

		inline static function_signature<bool(__fastcall*)(Trigger* ptr, Entity* parent)> Constructor = { "\x48\x89\x4C\x24\x2A\x53\x48\x83\xEC\x30\x48\xC7\x44\x24\x2A\x2A\x2A\x2A\x2A\x48\x8B\xD9\x4C\x8B\xC2\xBA\x2A\x2A\x2A\x2A\xE8\x2A\x2A\x2A\x2A\x90\x48\x8D\x05\x2A\x2A\x2A\x2A\x48\x89\x03\x33\xC0\x48\x89\x43\x28\x48\x89\x43\x30\x48\x89\x43\x38\x48\xC7\x43\x2A\x2A\x2A\x2A\x2A" };
	};

	static_assert(sizeof(Trigger) == 0x110u, "Trigger size is incorrect!");
	static_assert(sizeof(Trigger::Type) == 0x4u, "Trigger::Type size is incorrect!");
#pragma pack(pop)
} }