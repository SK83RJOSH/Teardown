#pragma once

#include "windef.h"
#include "types.h"

namespace Teardown { namespace Internal {
	struct Window {
		struct Info {
			HDC m_hDC;
			HGLRC m_hGLRC;
			HWND m_hWnd;
			HINSTANCE m_hInstance;
			bool m_IsActive;
			bool m_IsFullscreen;
			bool m_QuitRequested;
			bool m_HasCapture;
			Vector2_u32 m_MousePosition;
		};

		Vector2_u32 m_Size;
		Info* m_Info;
	};
} }