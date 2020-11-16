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

	// Voxel buffers can be indexed via m_Buffer[voxel_x_pos + m_BuffersSize.m_X * (voxel_y_pos + m_BuffersSize.m_Z * voxel_z_pos)]
	struct Voxels
	{
		Vector3_u32 m_BufferSize; // Size of both the physics / material buffer
		uint8_t padC[4];
		uint8_t* m_MaterialBuffer; // Pointer to the rendering material "type" of each voxel, as defined in the scene Magica Voxel palette
		uint8_t* m_PhysicsBuffer; // Pointer to the physics "type" of each voxel, it's in the same order as the group names in the Magica Voxel palette
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
	};

	static_assert(sizeof(VoxelMaterial) == 0x10u, "VoxelMaterial size is incorrect!");
	static_assert(sizeof(VoxelColor) == 0x10u, "VoxelColor size is incorrect!");
	static_assert(sizeof(VoxelsPaletteInfo) == 0x28u, "VoxelsPaletteInfo size is incorrect!");
	static_assert(sizeof(VoxelsPalette) == 0x3004u, "VoxelsPalette size is incorrect!");
	static_assert(sizeof(Voxels) == 0x60u, "Voxels size is incorrect!");
#pragma pack(pop)
}