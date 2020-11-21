#pragma once

#include "../types.h"

namespace Teardown { namespace Internal { namespace VoxLoader {
#pragma pack(push, 1)
	struct Material
	{
		float m_Reflectivity;
		float m_Roughness;
		float m_Metallic;
		float m_Emission;
	};

	struct Color
	{
		float m_R;
		float m_G;
		float m_B;
		float m_A;
	};

	struct Palette
	{
		Color m_Colors[256];
		Material m_Materials[256];
	};

	struct Voxel
	{
		Vector3_u8 m_Position;
		uint8_t m_Palette;
	};

	struct Model
	{
		small_string m_Name;
		int32_t m_Width;
		int32_t m_Height;
		int32_t m_Depth;
		uint32_t qword1C;
		small_vector<Voxel> m_Voxels;
	};

	struct ChildNode
	{
		int32_t m_Id;
		uint8_t pad4[4];
		int64_t m_Pointer;
	};

	struct Node
	{
		uint8_t gap0[8];
		small_string m_Name;
		Matrix4x4 m_Matrix;
		small_vector<uint32_t> m_Children;
		uint32_t m_LayerId;
		uint32_t m_ModelId;
	};

	struct NodeEntry
	{
		uint32_t m_Index;
		uint8_t pad4[4];
		NodeEntry* m_Next;
		Node* m_Transform;
	};

	struct VoxFile
	{
		Palette m_Palette;
		small_vector<Model*> m_OriginalModels;
		float float2010;
		uint32_t dword2014;
		small_vector<NodeEntry> m_Nodes;
		uint64_t dword202C;
		small_vector<Model*> m_Models;
		small_vector<Transform> m_Transforms;
	};
#pragma pack(pop)
} } }