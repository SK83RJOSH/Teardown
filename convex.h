#pragma once

#include "types.h"

namespace Teardown {
#pragma pack(push, 1)
	struct ShaderVariable
	{
		small_string m_Name;
		int32_t m_Type;
		int32_t m_Size;
		int32_t m_Hash;
		int32_t m_Unk1;
	};

	struct ShaderBinding
	{
		ShaderVariable m_Variables[16];
		int32_t m_Size;
		int32_t m_TotalSize;
	};

	struct Buffer
	{
		ShaderBinding* m_Binding;
		uint64_t m_Data;
		uint64_t m_Data2;
		uint64_t qword18;
		uint32_t m_Size;
		uint32_t m_Capacity;
		uint32_t m_Stride;
		uint32_t dword2C;
		uint32_t m_Buffer;
		uint32_t dword34;
	};

	struct AnotherBuffer
	{
		void* m_Data;
		uint32_t m_Buffer;
		uint32_t dwordC;
		uint32_t m_Size;
		uint32_t dword14;
		uint32_t dword18;
	};

	struct Convex
	{
		void* vftable;
		uint32_t dword8;
		Vector4_f32 m_Rotation;
		float dword14;
		float dword18;
		uint32_t dword1C;
		uint64_t qword20;
		uint32_t dword28;
		uint8_t byte2C;
		uint8_t gap2D[3];
		uint32_t m_ArrayBufferHandle;
		uint32_t dword34;
		small_vector<Vector3_f32> m_Vertices;
		small_vector<uint32_t> m_Indices;
		ShaderBinding m_Binding;
		Buffer m_BufferInfo;
		AnotherBuffer m_AnotherBuffer;
		uint8_t pad2B4[4];
	};
#pragma pack(pop)
}