#pragma once

#include "types.h"

namespace Teardown {
#pragma pack(push, 1)
	struct VoxelMaterial
	{
		float m_Reflectivity;
		float m_Roughness;
		float m_Metallic;
		float m_Emission;
	};

	struct VoxelColor
	{
		float m_R;
		float m_G;
		float m_B;
		float m_A;
	};

	struct VoxelsPaletteInfo
	{
		uint32_t m_Type;
		VoxelColor m_Color;
		VoxelMaterial m_Material;
		uint32_t m_Pad20;
	};

	struct VoxelsPalette
	{
		int32_t m_Id;
		VoxelsPaletteInfo m_Palettes[256];
		uint8_t m_Padding[2048];
	};

	// Voxel buffers can be indexed via m_Buffer[voxel_x_pos + m_BuffersSize.m_X * (voxel_y_pos + m_BuffersSize.m_Y * voxel_z_pos)]
	struct Voxels
	{
		Vector3_u32 m_BufferSize; // Size of both the physics / material buffer
		uint8_t padC[4];
		uint8_t* m_MaterialBuffer; // Pointer to the rendering material index of each voxel, as defined in the scene Magica Voxel palette
		uint8_t* m_PhysicsBuffer; // Pointer to the physics data for each voxel, each voxel encodes it's "normal" using a single bit per direction
		float m_Scale; // Rendering and physics scale, breaks lighting if used
		Vector3_u16 m_TextureSize; // Size of the OpenGL texture
		uint64_t qword2A;
		uint8_t gap32[6];
		uint64_t m_BindlessTexture; // OpenGL ARB handle
		uint32_t m_Texture; // OpenGL Texture handle
		Vector3_f32 m_Unk; // Copy of m_TextureSize, but casted to float
		uint32_t m_Palette; // Palette index, can be queried
		uint8_t byte54;
		uint8_t pad55[3];
		uint32_t m_VoxelCount; // Amount of "solid" voxels in the physics object; used for mass calculations
		uint8_t pad5C[4];

		inline static function_signature<Voxels*(__fastcall*)(small_string& filename, float scale)> LoadFile = { "\x4C\x8B\xDC\x57\x48\x81\xEC\x2A\x2A\x2A\x2A\x48\xC7\x44\x24\x2A\x2A\x2A\x2A\x2A\x49\x89\x5B\x08\x33\xFF\x89\x7C\x24\x30\x48\x8D\x44\x24\x2A\x48\x89\x44\x24\x2A\xC7\x44\x24\x2A\x2A\x2A\x2A\x2A\x89\x7C\x24\x70\x49\x8D\x43\x88\x49\x89\x43\x80\xC7\x44\x24\x2A\x2A\x2A\x2A\x2A\xF3\x0F\x11\x4C\x24\x2A\x45\x33\xC9\x4C\x8D\x44\x24\x2A\x48\x8D\x54\x24\x2A\xE8\x2A\x2A\x2A\x2A\x48\x8B\x4C\x24\x2A\x84\xC0\x74\x0B\x39\x7C\x24\x30\x74\x05\x48\x8B\x19\xEB\x03\x48\x8B\xDF\x89\x7C\x24\x70\x48\x8D\x94\x24" };
		inline static function_signature<Voxels*(__fastcall*)(Voxels* ptr, uint32_t width, uint32_t height, uint32_t depth)> CreateBuffer = { "\x48\x89\x5C\x24\x08\x57\x48\x83\xEC\x20\x48\x8B\xF9\x89\x11" };
		inline static function_signature<Voxels*(__fastcall*)(Voxels* ptr)> CreatePhysics = { "\x40\x53\x56\x57\x41\x55" };
		inline static function_signature<Voxels*(__fastcall*)(Voxels* ptr)> CreateTexture = { "\x48\x89\x4C\x24\x08\x57\x41\x54\x41\x55\x41\x57" };
		inline static function_signature<Voxels*(__fastcall*)(Voxels* ptr, Vector3_f32* pos, float radius, int type, float probability)> Paint = { "\x48\x8B\xC4\x48\x89\x50\x10\x55\x56\x57\x41\x54\x41\x55\x41\x56\x41\x57\x48\x81\xEC\x40\x01\x00\x00" };
		inline static function_signature<Voxels*(__fastcall*)(Vector3_u32* size)> New = { "\x48\x89\x5C\x24\x08\x48\x89\x74\x24\x10\x57\x48\x83\xEC\x20\x48\x8B\xF1\xB9\x60\x00\x00\x00" };
	};

	constexpr float VoxelSize = 1.f / 10.f;

	static_assert(sizeof(VoxelMaterial) == 0x10u, "VoxelMaterial size is incorrect!");
	static_assert(sizeof(VoxelColor) == 0x10u, "VoxelColor size is incorrect!");
	static_assert(sizeof(VoxelsPaletteInfo) == 0x28u, "VoxelsPaletteInfo size is incorrect!");
	static_assert(sizeof(VoxelsPalette) == 0x3004u, "VoxelsPalette size is incorrect!");
	static_assert(sizeof(Voxels) == 0x60u, "Voxels size is incorrect!");
#pragma pack(pop)
}