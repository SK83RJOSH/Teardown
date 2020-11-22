#pragma once


#include "player.h"
#include "fire_system.h"

#include "entities/tag.h"
#include "entities/entity.h"
#include "entities/joint.h"
#include "entities/light.h"
#include "entities/screen.h"
#include "entities/shape.h"
#include "entities/trigger.h"
#include "entities/vehicle.h"
#include "entities/water.h"
#include "entities/wheel.h"

namespace Teardown {
	#pragma pack(push, 1)
	struct Scene {
		struct RaycastFilter
		{
			int32_t m_Mask;
			int32_t m_Allowed;
			int32_t m_Ignored;
			bool m_RejectTransparent;
			uint8_t m_Pad[3];
			small_vector<Entities::Body*> m_IgnoredBodies;
			Entities::Body* m_IgnoredBodiesMemory[4]; // small_vector should support pre-reserved buffers... not going to add that right now.
			small_vector<Entities::Shape*> m_IgnoredShapes;
		};

		int64_t vftptr_0;
		uint64_t qword_8;
		uint64_t qword_10;
		uint32_t dword_18;
		uint32_t dword_1C;
		uint64_t qword_20;
		uint8_t gap_28[64];
		uint64_t qword_68;
		uint64_t qword_70;
		uint64_t qword_78;
		uint64_t qword_80;
		uint64_t qword_88;
		uint64_t qword_90;
		uint64_t qword_98;
		Player* m_Player;
		FireSystem* m_FireSystem;
		uint64_t qword_B0;
		uint64_t qword_B8;
		uint64_t qword_C0;
		Transform m_PlayerTransform;
		uint8_t gap_E4[12];
		uint64_t qword_F0;
		uint8_t byte_F8; uint8_t pad_F9[7];
		uint64_t qword_100;
		uint64_t qword_108;
		uint64_t qword_110;
		uint64_t qword_118;
		Entities::Vehicle* m_ActiveVehicle;
		uint64_t m_ActiveScreen;
		uint64_t qword_130;
		uint32_t dword_138;
		uint32_t dword_13C;
		uint64_t qword_140;
		uint8_t byte_148; uint8_t pad_149[3];
		uint32_t dword_14C;
		uint64_t dword_150;
		uint64_t qword_158;
		small_vector<Entities::Entity*> m_EntityLists[12];
		small_vector<Entities::Entity*> m_RootEntities;
		small_vector<Entities::Body*>* m_Bodies;
		small_vector<Entities::Shape*>* m_Shapes;
		small_vector<Entities::Light*>* m_Lights;
		small_vector<Entities::Entity*>* m_Locations;
		small_vector<Entities::Water*>* m_Waters;
		small_vector<Entities::Entity*>* m_Enemies;
		small_vector<Entities::Joint*>* m_Joints;
		small_vector<Entities::Vehicle*>* m_Vehicles;
		small_vector<Entities::Wheel*>* m_Wheels;
		small_vector<Entities::Screen*>* m_Screens;
		small_vector<Entities::Trigger*>* m_Triggers;
		small_vector<Entities::Entity*>* m_Scripts;
		uint64_t qword_290;
		uint64_t qword_298;
		uint64_t qword_2A0;
		uint64_t qword_2A8;
		small_vector<Entities::Tag> m_EntityTags;
		uint32_t m_NextEntityId;
		uint32_t dword_2C8;
		uint8_t gap_2CC[1144];
		uint32_t dword_740;
		bool m_CanQuickLoad;
		uint8_t gap_745[3];
		uint64_t qword_748;
		uint64_t qword_750;
		uint64_t qword_758;
		uint64_t qword_760;
		uint64_t qword_768;
		uint64_t qword_770;
		uint64_t qword_778;
		uint32_t dword_780;
		uint32_t dword_784;
		uint64_t qword_788;
		uint8_t gap_790[128];

		inline static function_signature<bool(__fastcall*)(Scene* ptr, Vector3_f32* pos, Vector3_f32* dir, float dist, RaycastFilter* f, float* out_dist, Vector3_f32* out_pos, Entities::Shape** out_shape, VoxelsPaletteInfo* out_palette)> Raycast = { "\x48\x8B\xC4\x4C\x89\x40\x18\x48\x89\x50\x10\x55\x56\x57\x41\x54\x41\x55\x41\x56\x41\x57\x48\x8D\xA8\x38\xFC\xFF\xFF" };
		inline static function_signature<bool(__fastcall*)(Scene* ptr, small_vector<Entities::Shape*>* out_hit, Vector3_f32* pos, Vector3_f32* dir, RaycastFilter* f)> RaycastIntersect = { "\x4C\x8B\xDC\x57\x41\x56\x41\x57\x48\x81\xEC\x50\x0C\x00\x00\x48\xC7\x44\x24\x20\xFE\xFF\xFF\xFF\x49\x89\x5B\x08\x49\x89\x6B\x10\x49\x89\x73\x18\x49\x8B\xF1" };
		inline static function_signature<bool(__fastcall*)(Scene* ptr, Vector3_f32* pos, float* out_depth, Entities::Water** out_water)> IsPointInWater = { "\x48\x89\x5C\x24\x18\x48\x89\x54\x24\x10\x55\x56\x57\x41\x54\x41\x55\x41\x56\x41\x57\x48\x83\xEC\x40\x48\x8B\x81\x50\x02\x00\x00" };
		inline static function_signature<bool(__fastcall*)(Scene* ptr, Vector3_f32* pos, float radius)> CreateExplosion = { "\x48\x8B\xC4\xF3\x0F\x11\x50\x18\x55" };
		inline static function_signature<bool(__fastcall*)(Scene* ptr, Vector3_f32* pos, Vector3_f32* dir, __int32 type)> CreateProjectile = { "\x48\x89\x5C\x24\x08\x57\x48\x81\xEC\x80\x00\x00\x00" };
	};

	static_assert(sizeof(Scene::RaycastFilter) == 0x50u, "Scene::RaycastFilter size is incorrect!");
	static_assert(sizeof(Scene) == 0x810u, "Scene size is incorrect!");
#pragma pack(pop)
}