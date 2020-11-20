#pragma once

#include "entities/body.h"
#include "entities/shape.h"

namespace Teardown {
#pragma pack(push, 1)
	struct Player
	{
		struct alignas(8) ToolInfo
		{
			small_string m_ModelName;
			Vector2_f32 field_10;
			Transform m_Transform;
		};

		Transform m_TargetTransform;
		Transform m_DeltaTransform;
		Vector3_f32 m_CurrentVelocity;
		Vector3_f32 m_AngularVelocity;
		Vector3_f32 m_PreviousVelocity;
		Vector3_f32 m_DeltaVelocity;
		float m_MapOriginDistance;
		Vector4_f32 m_CameraRotation;
		Transform m_CameraTransform[2];
		Vector2_f32 m_DeltaMovement;
		float m_TotalDistanceTraveled;
		float m_FootstepDistance;
		Vector2_f32 m_CameraPitchYaw[2];
		Vector2_f32 m_MovementInput;
		Vector2_f32 m_MouseInput;
		bool m_Jump;
		bool m_Crouch;
		bool m_GrabClicked;
		bool m_GrabPressed;
		bool m_UseToolClicked;
		bool m_UseToolPressed; uint8_t padEA[2];
		float gapEC[11];
		Entities::Body* m_GrabbedBody;
		uint8_t gap120[44];
		float m_GrabDistance;
		uint8_t gap150[12];
		float m_Health;
		int field_160;
		uint8_t gap164[52];
		ToolInfo m_Tools[10];
		int field_3C8;
		int field_3CC;
		int64_t field_3D0;
		int64_t field_3D8;
		int64_t field_3E0;
		int64_t field_3E8;
		int64_t field_3F0;
		int64_t field_3F8;
		int64_t field_400;
		int field_408;
		int64_t field_40C;
		char field_414; uint8_t pad_415[3];
		int64_t field_418;
		int64_t field_420;
		int64_t field_428;
		int64_t field_430;
		int64_t field_438;
		int64_t field_440;
		int field_448;
		int field_44C;
		int64_t field_450;
		int field_458;
		int field_45C;
		int field_460;
		int field_464;
		int64_t field_468;
		int64_t field_470;
		int field_478;
		char field_47C; uint8_t pad_47D[3];
		int field_480;
		int64_t field_484;
		int64_t field_48C;
		int64_t field_494;
		int field_49C;
		Entities::Shape* m_Target;
		float m_TargetDistance;
		Vector3_f32 m_TargetPosition;
		int64_t field_4B8;
		int field_4C0;
		bool m_CanDragTarget; uint8_t pad_4C5[3];
		Entities::Shape* m_Grabbed;
		Entities::Shape* m_Interactable;
		bool m_InteractableParent; uint8_t pad_4D9[3];
		uint32_t field_4DC;
		int64_t field_4E0;
		int64_t field_4E8;
		int field_4F0; uint8_t pad_4F4[4];
		int64_t field_4F8;
		int64_t field_500;
		int32_t field_508;
		int32_t field_50C;
		int64_t field_510;
		int64_t field_518;
		int field_520;
		char field_524; uint8_t pad_525[3];
		int field_528;
		int64_t field_52C;
		int field_534;
		__int16 field_538; uint8_t pad539[2];
		int field_53A;
		int field_540;
		int field_544;
		int64_t field_548;
		int field_550;
		uint8_t gap554[12284];
		int64_t field_3550;
		int64_t field_3558;
		int field_3560;
		int field_3564;
		int field_3568;
		int64_t field_356C;
		int field_3574;

		inline static function_signature<void(__fastcall*)(Player* ptr, float unk1, float unk2)> UpdateInput = { "\x48\x8B\xC4\x55\x41\x56\x41\x57\x48\x8D\x68\xC8" };
		inline static function_signature<void(__fastcall*)(Player* ptr, Transform* transform)> SetTransform = { "\x40\x53\x48\x83\xEC\x30\x33\xDB" };
		inline static function_signature<void(__fastcall*)(Player* ptr, float amount)> Damage = { "\xF3\x0F\x10\x91\x5C\x01\x00\x00" };
	};

	static_assert(sizeof(Player) == 0x3578u, "Player size is incorrect!");
	static_assert(sizeof(Player::ToolInfo) == 0x38u, "Player::ToolInfo size is incorrect!");
#pragma pack(pop)
}