#pragma once

#include <types.h>

namespace Teardown { namespace Editor {
	enum class EntityType : uint32_t
	{
		INVALID = 0x0,
		ENTITY = 0x1,
		SCENE = 0x2,
		ENVIRONMENT = 0x3,
		GROUP = 0x4,
		COMPOUND = 0x5,
		INSTANCE = 0x6,
		BODY = 0x7,
		SHAPE = 0x8,
		VOX = 0x9,
		LIGHT = 0xA,
		SPAWN_POINT = 0xB,
		LOCATION = 0xC,
		ENEMY = 0xD,
		VOX_SCRIPT = 0xE,
		JOINT = 0xF,
		WATER = 0x10,
		VOX_BOX = 0x11,
		VOXAGON = 0x12,
		ROPE = 0x13,
		BOUNDARY = 0x14,
		VEHICLE = 0x15,
		WHEEL = 0x16,
		SCREEN = 0x17,
		TRIGGER = 0x18,
		SCRIPT = 0x19,
		COUNT = 0x1A,
	};
} }