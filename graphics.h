#pragma once

#include "types.h"

namespace Teardown { namespace Graphics {
#pragma pack(push, 1)
	struct DisplayMode {
		uint32_t m_Width;
		uint32_t m_Height;
		uint32_t m_DisplayFrequency;
	};

	struct Buffers {
		int32_t m_FrameBuffer;
		int32_t m_RenderBuffers[2];
		int32_t m_Textures[8];
		int32_t m_Width;
		int32_t m_Height;
		int32_t m_TextureCount;
		bool m_HasBuffers; uint8_t pad_3D[3];
	};

	struct Options {
		int32_t m_RenderScale;
		int32_t m_Quality;
		int32_t m_Gamma;
		int32_t m_FOV;
		int32_t m_MotionBlur;
		int32_t m_Barrel;
		int32_t m_DOF;
		int32_t m_VSync;
		int32_t m_SoundVolume;
		int32_t m_AmbienceVolume;
		int32_t m_MusicVolume;
		int32_t m_Smooth;
		int32_t m_Sensitvity;
		int32_t m_Invert;
		int32_t m_HeadBob;
	};
#pragma pack(pop)
} }