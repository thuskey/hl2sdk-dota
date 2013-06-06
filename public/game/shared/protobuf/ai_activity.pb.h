// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ai_activity.proto

#ifndef PROTOBUF_ai_5factivity_2eproto__INCLUDED
#define PROTOBUF_ai_5factivity_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ai_5factivity_2eproto();
void protobuf_AssignDesc_ai_5factivity_2eproto();
void protobuf_ShutdownFile_ai_5factivity_2eproto();


enum Activity {
  ACT_INVALID = -1,
  ACT_RESET = 0,
  ACT_IDLE = 1,
  ACT_TRANSITION = 2,
  ACT_COVER = 3,
  ACT_COVER_MED = 4,
  ACT_COVER_LOW = 5,
  ACT_WALK = 6,
  ACT_WALK_AIM = 7,
  ACT_WALK_CROUCH = 8,
  ACT_WALK_CROUCH_AIM = 9,
  ACT_RUN = 10,
  ACT_RUN_AIM = 11,
  ACT_RUN_CROUCH = 12,
  ACT_RUN_CROUCH_AIM = 13,
  ACT_RUN_PROTECTED = 14,
  ACT_SCRIPT_CUSTOM_MOVE = 15,
  ACT_RANGE_ATTACK1 = 16,
  ACT_RANGE_ATTACK2 = 17,
  ACT_RANGE_ATTACK1_LOW = 18,
  ACT_RANGE_ATTACK2_LOW = 19,
  ACT_DIESIMPLE = 20,
  ACT_DIEBACKWARD = 21,
  ACT_DIEFORWARD = 22,
  ACT_DIEVIOLENT = 23,
  ACT_DIERAGDOLL = 24,
  ACT_FLY = 25,
  ACT_HOVER = 26,
  ACT_GLIDE = 27,
  ACT_SWIM = 28,
  ACT_JUMP = 29,
  ACT_HOP = 30,
  ACT_LEAP = 31,
  ACT_LAND = 32,
  ACT_CLIMB_UP = 33,
  ACT_CLIMB_DOWN = 34,
  ACT_CLIMB_DISMOUNT = 35,
  ACT_SHIPLADDER_UP = 36,
  ACT_SHIPLADDER_DOWN = 37,
  ACT_STRAFE_LEFT = 38,
  ACT_STRAFE_RIGHT = 39,
  ACT_ROLL_LEFT = 40,
  ACT_ROLL_RIGHT = 41,
  ACT_TURN_LEFT = 42,
  ACT_TURN_RIGHT = 43,
  ACT_CROUCH = 44,
  ACT_CROUCHIDLE = 45,
  ACT_STAND = 46,
  ACT_USE = 47,
  ACT_ALIEN_BURROW_IDLE = 48,
  ACT_ALIEN_BURROW_OUT = 49,
  ACT_SIGNAL1 = 50,
  ACT_SIGNAL2 = 51,
  ACT_SIGNAL3 = 52,
  ACT_SIGNAL_ADVANCE = 53,
  ACT_SIGNAL_FORWARD = 54,
  ACT_SIGNAL_GROUP = 55,
  ACT_SIGNAL_HALT = 56,
  ACT_SIGNAL_LEFT = 57,
  ACT_SIGNAL_RIGHT = 58,
  ACT_SIGNAL_TAKECOVER = 59,
  ACT_LOOKBACK_RIGHT = 60,
  ACT_LOOKBACK_LEFT = 61,
  ACT_COWER = 62,
  ACT_SMALL_FLINCH = 63,
  ACT_BIG_FLINCH = 64,
  ACT_MELEE_ATTACK1 = 65,
  ACT_MELEE_ATTACK2 = 66,
  ACT_RELOAD = 67,
  ACT_RELOAD_START = 68,
  ACT_RELOAD_FINISH = 69,
  ACT_RELOAD_LOW = 70,
  ACT_ARM = 71,
  ACT_DISARM = 72,
  ACT_DROP_WEAPON = 73,
  ACT_DROP_WEAPON_SHOTGUN = 74,
  ACT_PICKUP_GROUND = 75,
  ACT_PICKUP_RACK = 76,
  ACT_IDLE_ANGRY = 77,
  ACT_IDLE_RELAXED = 78,
  ACT_IDLE_STIMULATED = 79,
  ACT_IDLE_AGITATED = 80,
  ACT_IDLE_STEALTH = 81,
  ACT_IDLE_HURT = 82,
  ACT_WALK_RELAXED = 83,
  ACT_WALK_STIMULATED = 84,
  ACT_WALK_AGITATED = 85,
  ACT_WALK_STEALTH = 86,
  ACT_RUN_RELAXED = 87,
  ACT_RUN_STIMULATED = 88,
  ACT_RUN_AGITATED = 89,
  ACT_RUN_STEALTH = 90,
  ACT_IDLE_AIM_RELAXED = 91,
  ACT_IDLE_AIM_STIMULATED = 92,
  ACT_IDLE_AIM_AGITATED = 93,
  ACT_IDLE_AIM_STEALTH = 94,
  ACT_WALK_AIM_RELAXED = 95,
  ACT_WALK_AIM_STIMULATED = 96,
  ACT_WALK_AIM_AGITATED = 97,
  ACT_WALK_AIM_STEALTH = 98,
  ACT_RUN_AIM_RELAXED = 99,
  ACT_RUN_AIM_STIMULATED = 100,
  ACT_RUN_AIM_AGITATED = 101,
  ACT_RUN_AIM_STEALTH = 102,
  ACT_CROUCHIDLE_STIMULATED = 103,
  ACT_CROUCHIDLE_AIM_STIMULATED = 104,
  ACT_CROUCHIDLE_AGITATED = 105,
  ACT_WALK_HURT = 106,
  ACT_RUN_HURT = 107,
  ACT_SPECIAL_ATTACK1 = 108,
  ACT_SPECIAL_ATTACK2 = 109,
  ACT_COMBAT_IDLE = 110,
  ACT_WALK_SCARED = 111,
  ACT_RUN_SCARED = 112,
  ACT_VICTORY_DANCE = 113,
  ACT_DIE_HEADSHOT = 114,
  ACT_DIE_CHESTSHOT = 115,
  ACT_DIE_GUTSHOT = 116,
  ACT_DIE_BACKSHOT = 117,
  ACT_FLINCH_HEAD = 118,
  ACT_FLINCH_CHEST = 119,
  ACT_FLINCH_STOMACH = 120,
  ACT_FLINCH_LEFTARM = 121,
  ACT_FLINCH_RIGHTARM = 122,
  ACT_FLINCH_LEFTLEG = 123,
  ACT_FLINCH_RIGHTLEG = 124,
  ACT_FLINCH_PHYSICS = 125,
  ACT_FLINCH_HEAD_BACK = 126,
  ACT_FLINCH_CHEST_BACK = 127,
  ACT_FLINCH_STOMACH_BACK = 128,
  ACT_FLINCH_CROUCH_FRONT = 129,
  ACT_FLINCH_CROUCH_BACK = 130,
  ACT_FLINCH_CROUCH_LEFT = 131,
  ACT_FLINCH_CROUCH_RIGHT = 132,
  ACT_IDLE_ON_FIRE = 133,
  ACT_WALK_ON_FIRE = 134,
  ACT_RUN_ON_FIRE = 135,
  ACT_RAPPEL_LOOP = 136,
  ACT_180_LEFT = 137,
  ACT_180_RIGHT = 138,
  ACT_90_LEFT = 139,
  ACT_90_RIGHT = 140,
  ACT_STEP_LEFT = 141,
  ACT_STEP_RIGHT = 142,
  ACT_STEP_BACK = 143,
  ACT_STEP_FORE = 144,
  ACT_GESTURE_RANGE_ATTACK1 = 145,
  ACT_GESTURE_RANGE_ATTACK2 = 146,
  ACT_GESTURE_MELEE_ATTACK1 = 147,
  ACT_GESTURE_MELEE_ATTACK2 = 148,
  ACT_GESTURE_RANGE_ATTACK1_LOW = 149,
  ACT_GESTURE_RANGE_ATTACK2_LOW = 150,
  ACT_MELEE_ATTACK_SWING_GESTURE = 151,
  ACT_GESTURE_SMALL_FLINCH = 152,
  ACT_GESTURE_BIG_FLINCH = 153,
  ACT_GESTURE_FLINCH_BLAST = 154,
  ACT_GESTURE_FLINCH_BLAST_SHOTGUN = 155,
  ACT_GESTURE_FLINCH_BLAST_DAMAGED = 156,
  ACT_GESTURE_FLINCH_BLAST_DAMAGED_SHOTGUN = 157,
  ACT_GESTURE_FLINCH_HEAD = 158,
  ACT_GESTURE_FLINCH_CHEST = 159,
  ACT_GESTURE_FLINCH_STOMACH = 160,
  ACT_GESTURE_FLINCH_LEFTARM = 161,
  ACT_GESTURE_FLINCH_RIGHTARM = 162,
  ACT_GESTURE_FLINCH_LEFTLEG = 163,
  ACT_GESTURE_FLINCH_RIGHTLEG = 164,
  ACT_GESTURE_TURN_LEFT = 165,
  ACT_GESTURE_TURN_RIGHT = 166,
  ACT_GESTURE_TURN_LEFT45 = 167,
  ACT_GESTURE_TURN_RIGHT45 = 168,
  ACT_GESTURE_TURN_LEFT90 = 169,
  ACT_GESTURE_TURN_RIGHT90 = 170,
  ACT_GESTURE_TURN_LEFT45_FLAT = 171,
  ACT_GESTURE_TURN_RIGHT45_FLAT = 172,
  ACT_GESTURE_TURN_LEFT90_FLAT = 173,
  ACT_GESTURE_TURN_RIGHT90_FLAT = 174,
  ACT_BARNACLE_HIT = 175,
  ACT_BARNACLE_PULL = 176,
  ACT_BARNACLE_CHOMP = 177,
  ACT_BARNACLE_CHEW = 178,
  ACT_DO_NOT_DISTURB = 179,
  ACT_SPECIFIC_SEQUENCE = 180,
  ACT_VM_DRAW = 181,
  ACT_VM_HOLSTER = 182,
  ACT_VM_IDLE = 183,
  ACT_VM_FIDGET = 184,
  ACT_VM_PULLBACK = 185,
  ACT_VM_PULLBACK_HIGH = 186,
  ACT_VM_PULLBACK_LOW = 187,
  ACT_VM_THROW = 188,
  ACT_VM_PULLPIN = 189,
  ACT_VM_PRIMARYATTACK = 190,
  ACT_VM_SECONDARYATTACK = 191,
  ACT_VM_RELOAD = 192,
  ACT_VM_DRYFIRE = 193,
  ACT_VM_HITLEFT = 194,
  ACT_VM_HITLEFT2 = 195,
  ACT_VM_HITRIGHT = 196,
  ACT_VM_HITRIGHT2 = 197,
  ACT_VM_HITCENTER = 198,
  ACT_VM_HITCENTER2 = 199,
  ACT_VM_MISSLEFT = 200,
  ACT_VM_MISSLEFT2 = 201,
  ACT_VM_MISSRIGHT = 202,
  ACT_VM_MISSRIGHT2 = 203,
  ACT_VM_MISSCENTER = 204,
  ACT_VM_MISSCENTER2 = 205,
  ACT_VM_HAULBACK = 206,
  ACT_VM_SWINGHARD = 207,
  ACT_VM_SWINGMISS = 208,
  ACT_VM_SWINGHIT = 209,
  ACT_VM_IDLE_TO_LOWERED = 210,
  ACT_VM_IDLE_LOWERED = 211,
  ACT_VM_LOWERED_TO_IDLE = 212,
  ACT_VM_RECOIL1 = 213,
  ACT_VM_RECOIL2 = 214,
  ACT_VM_RECOIL3 = 215,
  ACT_VM_PICKUP = 216,
  ACT_VM_RELEASE = 217,
  ACT_VM_ATTACH_SILENCER = 218,
  ACT_VM_DETACH_SILENCER = 219,
  ACT_SLAM_STICKWALL_IDLE = 220,
  ACT_SLAM_STICKWALL_ND_IDLE = 221,
  ACT_SLAM_STICKWALL_ATTACH = 222,
  ACT_SLAM_STICKWALL_ATTACH2 = 223,
  ACT_SLAM_STICKWALL_ND_ATTACH = 224,
  ACT_SLAM_STICKWALL_ND_ATTACH2 = 225,
  ACT_SLAM_STICKWALL_DETONATE = 226,
  ACT_SLAM_STICKWALL_DETONATOR_HOLSTER = 227,
  ACT_SLAM_STICKWALL_DRAW = 228,
  ACT_SLAM_STICKWALL_ND_DRAW = 229,
  ACT_SLAM_STICKWALL_TO_THROW = 230,
  ACT_SLAM_STICKWALL_TO_THROW_ND = 231,
  ACT_SLAM_STICKWALL_TO_TRIPMINE_ND = 232,
  ACT_SLAM_THROW_IDLE = 233,
  ACT_SLAM_THROW_ND_IDLE = 234,
  ACT_SLAM_THROW_THROW = 235,
  ACT_SLAM_THROW_THROW2 = 236,
  ACT_SLAM_THROW_THROW_ND = 237,
  ACT_SLAM_THROW_THROW_ND2 = 238,
  ACT_SLAM_THROW_DRAW = 239,
  ACT_SLAM_THROW_ND_DRAW = 240,
  ACT_SLAM_THROW_TO_STICKWALL = 241,
  ACT_SLAM_THROW_TO_STICKWALL_ND = 242,
  ACT_SLAM_THROW_DETONATE = 243,
  ACT_SLAM_THROW_DETONATOR_HOLSTER = 244,
  ACT_SLAM_THROW_TO_TRIPMINE_ND = 245,
  ACT_SLAM_TRIPMINE_IDLE = 246,
  ACT_SLAM_TRIPMINE_DRAW = 247,
  ACT_SLAM_TRIPMINE_ATTACH = 248,
  ACT_SLAM_TRIPMINE_ATTACH2 = 249,
  ACT_SLAM_TRIPMINE_TO_STICKWALL_ND = 250,
  ACT_SLAM_TRIPMINE_TO_THROW_ND = 251,
  ACT_SLAM_DETONATOR_IDLE = 252,
  ACT_SLAM_DETONATOR_DRAW = 253,
  ACT_SLAM_DETONATOR_DETONATE = 254,
  ACT_SLAM_DETONATOR_HOLSTER = 255,
  ACT_SLAM_DETONATOR_STICKWALL_DRAW = 256,
  ACT_SLAM_DETONATOR_THROW_DRAW = 257,
  ACT_SHOTGUN_RELOAD_START = 258,
  ACT_SHOTGUN_RELOAD_FINISH = 259,
  ACT_SHOTGUN_PUMP = 260,
  ACT_SMG2_IDLE2 = 261,
  ACT_SMG2_FIRE2 = 262,
  ACT_SMG2_DRAW2 = 263,
  ACT_SMG2_RELOAD2 = 264,
  ACT_SMG2_DRYFIRE2 = 265,
  ACT_SMG2_TOAUTO = 266,
  ACT_SMG2_TOBURST = 267,
  ACT_PHYSCANNON_UPGRADE = 268,
  ACT_RANGE_ATTACK_AR1 = 269,
  ACT_RANGE_ATTACK_AR2 = 270,
  ACT_RANGE_ATTACK_AR2_LOW = 271,
  ACT_RANGE_ATTACK_AR2_GRENADE = 272,
  ACT_RANGE_ATTACK_HMG1 = 273,
  ACT_RANGE_ATTACK_ML = 274,
  ACT_RANGE_ATTACK_SMG1 = 275,
  ACT_RANGE_ATTACK_SMG1_LOW = 276,
  ACT_RANGE_ATTACK_SMG2 = 277,
  ACT_RANGE_ATTACK_SHOTGUN = 278,
  ACT_RANGE_ATTACK_SHOTGUN_LOW = 279,
  ACT_RANGE_ATTACK_PISTOL = 280,
  ACT_RANGE_ATTACK_PISTOL_LOW = 281,
  ACT_RANGE_ATTACK_SLAM = 282,
  ACT_RANGE_ATTACK_TRIPWIRE = 283,
  ACT_RANGE_ATTACK_THROW = 284,
  ACT_RANGE_ATTACK_SNIPER_RIFLE = 285,
  ACT_RANGE_ATTACK_RPG = 286,
  ACT_MELEE_ATTACK_SWING = 287,
  ACT_RANGE_AIM_LOW = 288,
  ACT_RANGE_AIM_SMG1_LOW = 289,
  ACT_RANGE_AIM_PISTOL_LOW = 290,
  ACT_RANGE_AIM_AR2_LOW = 291,
  ACT_COVER_PISTOL_LOW = 292,
  ACT_COVER_SMG1_LOW = 293,
  ACT_GESTURE_RANGE_ATTACK_AR1 = 294,
  ACT_GESTURE_RANGE_ATTACK_AR2 = 295,
  ACT_GESTURE_RANGE_ATTACK_AR2_GRENADE = 296,
  ACT_GESTURE_RANGE_ATTACK_HMG1 = 297,
  ACT_GESTURE_RANGE_ATTACK_ML = 298,
  ACT_GESTURE_RANGE_ATTACK_SMG1 = 299,
  ACT_GESTURE_RANGE_ATTACK_SMG1_LOW = 300,
  ACT_GESTURE_RANGE_ATTACK_SMG2 = 301,
  ACT_GESTURE_RANGE_ATTACK_SHOTGUN = 302,
  ACT_GESTURE_RANGE_ATTACK_PISTOL = 303,
  ACT_GESTURE_RANGE_ATTACK_PISTOL_LOW = 304,
  ACT_GESTURE_RANGE_ATTACK_SLAM = 305,
  ACT_GESTURE_RANGE_ATTACK_TRIPWIRE = 306,
  ACT_GESTURE_RANGE_ATTACK_THROW = 307,
  ACT_GESTURE_RANGE_ATTACK_SNIPER_RIFLE = 308,
  ACT_GESTURE_MELEE_ATTACK_SWING = 309,
  ACT_IDLE_RIFLE = 310,
  ACT_IDLE_SMG1 = 311,
  ACT_IDLE_ANGRY_SMG1 = 312,
  ACT_IDLE_PISTOL = 313,
  ACT_IDLE_ANGRY_PISTOL = 314,
  ACT_IDLE_ANGRY_SHOTGUN = 315,
  ACT_IDLE_STEALTH_PISTOL = 316,
  ACT_IDLE_PACKAGE = 317,
  ACT_WALK_PACKAGE = 318,
  ACT_IDLE_SUITCASE = 319,
  ACT_WALK_SUITCASE = 320,
  ACT_IDLE_SMG1_RELAXED = 321,
  ACT_IDLE_SMG1_STIMULATED = 322,
  ACT_WALK_RIFLE_RELAXED = 323,
  ACT_RUN_RIFLE_RELAXED = 324,
  ACT_WALK_RIFLE_STIMULATED = 325,
  ACT_RUN_RIFLE_STIMULATED = 326,
  ACT_IDLE_AIM_RIFLE_STIMULATED = 327,
  ACT_WALK_AIM_RIFLE_STIMULATED = 328,
  ACT_RUN_AIM_RIFLE_STIMULATED = 329,
  ACT_IDLE_SHOTGUN_RELAXED = 330,
  ACT_IDLE_SHOTGUN_STIMULATED = 331,
  ACT_IDLE_SHOTGUN_AGITATED = 332,
  ACT_WALK_ANGRY = 333,
  ACT_POLICE_HARASS1 = 334,
  ACT_POLICE_HARASS2 = 335,
  ACT_IDLE_MANNEDGUN = 336,
  ACT_IDLE_MELEE = 337,
  ACT_IDLE_ANGRY_MELEE = 338,
  ACT_IDLE_RPG_RELAXED = 339,
  ACT_IDLE_RPG = 340,
  ACT_IDLE_ANGRY_RPG = 341,
  ACT_COVER_LOW_RPG = 342,
  ACT_WALK_RPG = 343,
  ACT_RUN_RPG = 344,
  ACT_WALK_CROUCH_RPG = 345,
  ACT_RUN_CROUCH_RPG = 346,
  ACT_WALK_RPG_RELAXED = 347,
  ACT_RUN_RPG_RELAXED = 348,
  ACT_WALK_RIFLE = 349,
  ACT_WALK_AIM_RIFLE = 350,
  ACT_WALK_CROUCH_RIFLE = 351,
  ACT_WALK_CROUCH_AIM_RIFLE = 352,
  ACT_RUN_RIFLE = 353,
  ACT_RUN_AIM_RIFLE = 354,
  ACT_RUN_CROUCH_RIFLE = 355,
  ACT_RUN_CROUCH_AIM_RIFLE = 356,
  ACT_RUN_STEALTH_PISTOL = 357,
  ACT_WALK_AIM_SHOTGUN = 358,
  ACT_RUN_AIM_SHOTGUN = 359,
  ACT_WALK_PISTOL = 360,
  ACT_RUN_PISTOL = 361,
  ACT_WALK_AIM_PISTOL = 362,
  ACT_RUN_AIM_PISTOL = 363,
  ACT_WALK_STEALTH_PISTOL = 364,
  ACT_WALK_AIM_STEALTH_PISTOL = 365,
  ACT_RUN_AIM_STEALTH_PISTOL = 366,
  ACT_RELOAD_PISTOL = 367,
  ACT_RELOAD_PISTOL_LOW = 368,
  ACT_RELOAD_SMG1 = 369,
  ACT_RELOAD_SMG1_LOW = 370,
  ACT_RELOAD_SHOTGUN = 371,
  ACT_RELOAD_SHOTGUN_LOW = 372,
  ACT_GESTURE_RELOAD = 373,
  ACT_GESTURE_RELOAD_PISTOL = 374,
  ACT_GESTURE_RELOAD_SMG1 = 375,
  ACT_GESTURE_RELOAD_SHOTGUN = 376,
  ACT_BUSY_LEAN_LEFT = 377,
  ACT_BUSY_LEAN_LEFT_ENTRY = 378,
  ACT_BUSY_LEAN_LEFT_EXIT = 379,
  ACT_BUSY_LEAN_BACK = 380,
  ACT_BUSY_LEAN_BACK_ENTRY = 381,
  ACT_BUSY_LEAN_BACK_EXIT = 382,
  ACT_BUSY_SIT_GROUND = 383,
  ACT_BUSY_SIT_GROUND_ENTRY = 384,
  ACT_BUSY_SIT_GROUND_EXIT = 385,
  ACT_BUSY_SIT_CHAIR = 386,
  ACT_BUSY_SIT_CHAIR_ENTRY = 387,
  ACT_BUSY_SIT_CHAIR_EXIT = 388,
  ACT_BUSY_STAND = 389,
  ACT_BUSY_QUEUE = 390,
  ACT_DUCK_DODGE = 391,
  ACT_DIE_BARNACLE_SWALLOW = 392,
  ACT_GESTURE_BARNACLE_STRANGLE = 393,
  ACT_PHYSCANNON_DETACH = 394,
  ACT_PHYSCANNON_ANIMATE = 395,
  ACT_PHYSCANNON_ANIMATE_PRE = 396,
  ACT_PHYSCANNON_ANIMATE_POST = 397,
  ACT_DIE_FRONTSIDE = 398,
  ACT_DIE_RIGHTSIDE = 399,
  ACT_DIE_BACKSIDE = 400,
  ACT_DIE_LEFTSIDE = 401,
  ACT_OPEN_DOOR = 402,
  ACT_DI_ALYX_ZOMBIE_MELEE = 403,
  ACT_DI_ALYX_ZOMBIE_TORSO_MELEE = 404,
  ACT_DI_ALYX_HEADCRAB_MELEE = 405,
  ACT_DI_ALYX_ANTLION = 406,
  ACT_DI_ALYX_ZOMBIE_SHOTGUN64 = 407,
  ACT_DI_ALYX_ZOMBIE_SHOTGUN26 = 408,
  ACT_READINESS_RELAXED_TO_STIMULATED = 409,
  ACT_READINESS_RELAXED_TO_STIMULATED_WALK = 410,
  ACT_READINESS_AGITATED_TO_STIMULATED = 411,
  ACT_READINESS_STIMULATED_TO_RELAXED = 412,
  ACT_READINESS_PISTOL_RELAXED_TO_STIMULATED = 413,
  ACT_READINESS_PISTOL_RELAXED_TO_STIMULATED_WALK = 414,
  ACT_READINESS_PISTOL_AGITATED_TO_STIMULATED = 415,
  ACT_READINESS_PISTOL_STIMULATED_TO_RELAXED = 416,
  ACT_IDLE_CARRY = 417,
  ACT_WALK_CARRY = 418,
  ACT_DOTA_IDLE = 419,
  ACT_DOTA_IDLE_RARE = 421,
  ACT_DOTA_RUN = 422,
  ACT_DOTA_ATTACK = 424,
  ACT_DOTA_ATTACK2 = 425,
  ACT_DOTA_ATTACK_EVENT = 426,
  ACT_DOTA_DIE = 427,
  ACT_DOTA_FLINCH = 428,
  ACT_DOTA_FLAIL = 429,
  ACT_DOTA_DISABLED = 430,
  ACT_DOTA_CAST_ABILITY_1 = 431,
  ACT_DOTA_CAST_ABILITY_2 = 432,
  ACT_DOTA_CAST_ABILITY_3 = 433,
  ACT_DOTA_CAST_ABILITY_4 = 434,
  ACT_DOTA_CAST_ABILITY_5 = 435,
  ACT_DOTA_CAST_ABILITY_6 = 436,
  ACT_DOTA_OVERRIDE_ABILITY_1 = 437,
  ACT_DOTA_OVERRIDE_ABILITY_2 = 438,
  ACT_DOTA_OVERRIDE_ABILITY_3 = 439,
  ACT_DOTA_OVERRIDE_ABILITY_4 = 440,
  ACT_DOTA_CHANNEL_ABILITY_1 = 441,
  ACT_DOTA_CHANNEL_ABILITY_2 = 442,
  ACT_DOTA_CHANNEL_ABILITY_3 = 443,
  ACT_DOTA_CHANNEL_ABILITY_4 = 444,
  ACT_DOTA_CHANNEL_ABILITY_5 = 445,
  ACT_DOTA_CHANNEL_ABILITY_6 = 446,
  ACT_DOTA_CHANNEL_END_ABILITY_1 = 447,
  ACT_DOTA_CHANNEL_END_ABILITY_2 = 448,
  ACT_DOTA_CHANNEL_END_ABILITY_3 = 449,
  ACT_DOTA_CHANNEL_END_ABILITY_4 = 450,
  ACT_DOTA_CHANNEL_END_ABILITY_5 = 451,
  ACT_DOTA_CHANNEL_END_ABILITY_6 = 452,
  ACT_DOTA_CONSTANT_LAYER = 453,
  ACT_DOTA_CAPTURE = 454,
  ACT_DOTA_SPAWN = 455,
  ACT_DOTA_KILLTAUNT = 456,
  ACT_DOTA_TAUNT = 457,
  ACT_DOTA_THIRST = 458,
  ACT_DOTA_CAST_DRAGONBREATH = 459,
  ACT_DOTA_ECHO_SLAM = 460,
  ACT_DOTA_CAST_ABILITY_1_END = 461,
  ACT_DOTA_CAST_ABILITY_2_END = 462,
  ACT_DOTA_CAST_ABILITY_3_END = 463,
  ACT_DOTA_CAST_ABILITY_4_END = 464,
  ACT_MIRANA_LEAP_END = 465,
  ACT_WAVEFORM_START = 466,
  ACT_WAVEFORM_END = 467,
  ACT_DOTA_CAST_ABILITY_ROT = 468,
  ACT_DOTA_DIE_SPECIAL = 469,
  ACT_DOTA_RATTLETRAP_BATTERYASSAULT = 470,
  ACT_DOTA_RATTLETRAP_POWERCOGS = 471,
  ACT_DOTA_RATTLETRAP_HOOKSHOT_START = 472,
  ACT_DOTA_RATTLETRAP_HOOKSHOT_LOOP = 473,
  ACT_DOTA_RATTLETRAP_HOOKSHOT_END = 474,
  ACT_STORM_SPIRIT_OVERLOAD_RUN_OVERRIDE = 475,
  ACT_DOTA_TINKER_REARM1 = 476,
  ACT_DOTA_TINKER_REARM2 = 477,
  ACT_DOTA_TINKER_REARM3 = 478,
  ACT_TINY_AVALANCHE = 479,
  ACT_TINY_TOSS = 480,
  ACT_TINY_GROWL = 481,
  ACT_DOTA_WEAVERBUG_ATTACH = 482,
  ACT_DOTA_CAST_WILD_AXES_END = 483,
  ACT_DOTA_CAST_LIFE_BREAK_START = 484,
  ACT_DOTA_CAST_LIFE_BREAK_END = 485,
  ACT_DOTA_NIGHTSTALKER_TRANSITION = 486,
  ACT_DOTA_LIFESTEALER_RAGE = 487,
  ACT_DOTA_LIFESTEALER_OPEN_WOUNDS = 488,
  ACT_DOTA_SAND_KING_BURROW_IN = 489,
  ACT_DOTA_SAND_KING_BURROW_OUT = 490,
  ACT_DOTA_EARTHSHAKER_TOTEM_ATTACK = 491,
  ACT_DOTA_WHEEL_LAYER = 492,
  ACT_DOTA_ALCHEMIST_CHEMICAL_RAGE_START = 493,
  ACT_DOTA_ALCHEMIST_CONCOCTION = 494,
  ACT_DOTA_JAKIRO_LIQUIDFIRE_START = 495,
  ACT_DOTA_JAKIRO_LIQUIDFIRE_LOOP = 496,
  ACT_DOTA_LIFESTEALER_INFEST = 497,
  ACT_DOTA_LIFESTEALER_INFEST_END = 498,
  ACT_DOTA_LASSO_LOOP = 499,
  ACT_DOTA_ALCHEMIST_CONCOCTION_THROW = 500,
  ACT_DOTA_ALCHEMIST_CHEMICAL_RAGE_END = 501,
  ACT_DOTA_CAST_COLD_SNAP = 502,
  ACT_DOTA_CAST_GHOST_WALK = 503,
  ACT_DOTA_CAST_TORNADO = 504,
  ACT_DOTA_CAST_EMP = 505,
  ACT_DOTA_CAST_ALACRITY = 506,
  ACT_DOTA_CAST_CHAOS_METEOR = 507,
  ACT_DOTA_CAST_SUN_STRIKE = 508,
  ACT_DOTA_CAST_FORGE_SPIRIT = 509,
  ACT_DOTA_CAST_ICE_WALL = 510,
  ACT_DOTA_CAST_DEAFENING_BLAST = 511,
  ACT_DOTA_VICTORY = 512,
  ACT_DOTA_DEFEAT = 513,
  ACT_DOTA_SPIRIT_BREAKER_CHARGE_POSE = 514,
  ACT_DOTA_SPIRIT_BREAKER_CHARGE_END = 515,
  ACT_DOTA_TELEPORT = 516,
  ACT_DOTA_TELEPORT_END = 517,
  ACT_DOTA_CAST_REFRACTION = 518,
  ACT_DOTA_CAST_ABILITY_7 = 519,
  ACT_DOTA_CANCEL_SIREN_SONG = 520,
  ACT_DOTA_CHANNEL_ABILITY_7 = 521,
  ACT_DOTA_LOADOUT = 522,
  ACT_DOTA_FORCESTAFF_END = 523,
  ACT_DOTA_POOF_END = 524,
  ACT_DOTA_SLARK_POUNCE = 525,
  ACT_DOTA_MAGNUS_SKEWER_START = 526,
  ACT_DOTA_MAGNUS_SKEWER_END = 527,
  ACT_DOTA_MEDUSA_STONE_GAZE = 528,
  ACT_DOTA_RELAX_START = 529,
  ACT_DOTA_RELAX_LOOP = 530,
  ACT_DOTA_RELAX_END = 531,
  ACT_DOTA_CENTAUR_STAMPEDE = 532,
  ACT_DOTA_BELLYACHE_START = 533,
  ACT_DOTA_BELLYACHE_LOOP = 534,
  ACT_DOTA_BELLYACHE_END = 535,
  ACT_DOTA_ROQUELAIRE_LAND = 536,
  ACT_DOTA_ROQUELAIRE_LAND_IDLE = 537,
  ACT_DOTA_GREEVIL_CAST = 538,
  ACT_DOTA_GREEVIL_OVERRIDE_ABILITY = 539,
  ACT_DOTA_GREEVIL_HOOK_START = 540,
  ACT_DOTA_GREEVIL_HOOK_END = 541,
  ACT_DOTA_GREEVIL_BLINK_BONE = 542,
  ACT_DOTA_IDLE_SLEEPING = 543,
  ACT_DOTA_INTRO = 544,
  ACT_DOTA_GESTURE_POINT = 545,
  ACT_DOTA_GESTURE_ACCENT = 546,
  ACT_DOTA_SLEEPING_END = 547,
  ACT_DOTA_AMBUSH = 548,
  ACT_DOTA_ITEM_LOOK = 549,
  ACT_DOTA_STARTLE = 550,
  ACT_DOTA_FRUSTRATION = 551,
  ACT_DOTA_TELEPORT_REACT = 552,
  ACT_DOTA_TELEPORT_END_REACT = 553,
  ACT_DOTA_SHRUG = 554,
  ACT_DOTA_RELAX_LOOP_END = 555,
  ACT_DOTA_PRESENT_ITEM = 556,
  ACT_DOTA_IDLE_IMPATIENT = 557,
  ACT_DOTA_SHARPEN_WEAPON = 558,
  ACT_DOTA_SHARPEN_WEAPON_OUT = 559,
  ACT_DOTA_IDLE_SLEEPING_END = 560,
  ACT_DOTA_BRIDGE_DESTROY = 561,
  ACT_DOTA_TAUNT_SNIPER = 562,
  ACT_DOTA_DEATH_BY_SNIPER = 563,
  ACT_DOTA_LOOK_AROUND = 564,
  ACT_DOTA_CAGED_CREEP_RAGE = 565,
  ACT_DOTA_CAGED_CREEP_RAGE_OUT = 566,
  ACT_DOTA_CAGED_CREEP_SMASH = 567,
  ACT_DOTA_CAGED_CREEP_SMASH_OUT = 568,
  ACT_DOTA_IDLE_IMPATIENT_SWORD_TAP = 569,
  ACT_DOTA_INTRO_LOOP = 570
};
bool Activity_IsValid(int value);
const Activity Activity_MIN = ACT_INVALID;
const Activity Activity_MAX = ACT_DOTA_INTRO_LOOP;
const int Activity_ARRAYSIZE = Activity_MAX + 1;

const ::google::protobuf::EnumDescriptor* Activity_descriptor();
inline const ::std::string& Activity_Name(Activity value) {
  return ::google::protobuf::internal::NameOfEnum(
    Activity_descriptor(), value);
}
inline bool Activity_Parse(
    const ::std::string& name, Activity* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Activity>(
    Activity_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< Activity>() {
  return Activity_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ai_5factivity_2eproto__INCLUDED
