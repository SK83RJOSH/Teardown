#pragma once

#include "entity.h"

namespace Teardown { namespace Entities {
	struct Tag {
		Entity* m_Entity;
		small_string m_Name;
		small_string m_Value;
	};
} }