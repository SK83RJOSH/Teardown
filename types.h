#pragma once

#include <assert.h>
#include <stdint.h>
#include <iterator>

namespace Teardown {
	namespace {
		template <typename T>
		struct Vector2 {
			T m_X; T m_Y;
		};

		template <typename T>
		struct Vector3 {
			T m_X; T m_Y; T m_Z;
		};

		template <typename T>
		struct Vector4 {
			T m_X; T m_Y; T m_Z; T m_W;
		};
	}

	using Vector3_u8 = Vector3<uint8_t>;
	using Vector3_u16 = Vector3<uint16_t>;

	using Vector2_i32 = Vector2<int32_t>;
	using Vector3_i32 = Vector3<int32_t>;
	using Vector4_i32 = Vector4<int32_t>;

	using Vector2_u32 = Vector2<uint32_t>;
	using Vector3_u32 = Vector3<uint32_t>;

	using Vector2_f32 = Vector2<float>;
	using Vector3_f32 = Vector3<float>;
	using Vector4_f32 = Vector4<float>;

	struct Matrix4x4 {
		float m[4][4];
	};

	struct Transform
	{
		Vector3_f32 m_Position;
		Vector4_f32 m_Rotation;
	};

	class small_string
	{
	public:
		const char* c_str() const { return m_StackBuffer[15] ? m_HeapBuffer : &m_StackBuffer[0]; }

	private:
		union {
			char* m_HeapBuffer;
			char m_StackBuffer[16];
		};
	};

	template<typename T>
	struct small_vector {
	public:
		T** data() { return m_Data; }
		uint32_t size() const { return m_Size; }
		uint32_t capacity() const { return m_Capacity; }

	private:
		uint32_t m_Size;
		uint32_t m_Capacity;
		T** m_Data;
	};

	static_assert(sizeof(small_string) == 16, "small_string size is incorrect!");
	static_assert(sizeof(small_vector<void>) == 16, "small_vector size is incorrect!");
};