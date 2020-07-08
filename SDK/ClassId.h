#pragma once

enum class ClassId {
    BaseCSGrenadeProjectile = 9,
    BreachChargeProjectile = 29,
    BumpMineProjectile = 33,
    C4,
    Chicken = 36,
    CSPlayer = 40,
    CSRagdoll = 42,
    Deagle = 46,
    DecoyProjectile = 48,
    Drone,
    Dronegun,
    EconEntity = 53,
    EconWearable,
    Hostage = 97,
    Healthshot  = 104,
    Cash,
    Knife = 107,
    KnifeGG,
    MolotovProjectile = 113,
    AmmoBox = 124,
    LootCrate,
    RadarJammer,
    WeaponUpgrade,
    PlantedC4,
    PropDoorRotating = 142,
    SensorGrenadeProjectile = 152,
    SmokeGrenadeProjectile = 156,
    SnowballProjectile = 160,
    Tablet = 171,
    Aug = 231,
    Awp,
    Elite = 238,
    FiveSeven = 240,
    G3sg1,
    Glock = 244,
    P2000,
    P250 = 257,
    Scar20 = 260,
    Sg553 = 264,
    Ssg08 = 266,
    Tec9 = 268
};

enum class HitGroups : int
{
	HITGROUP_GENERIC = 0,
	HITGROUP_HEAD,
	HITGROUP_CHEST,
	HITGROUP_STOMACH,
	HITGROUP_LEFTARM,
	HITGROUP_RIGHTARM,
	HITGROUP_LEFTLEG,
	HITGROUP_RIGHTLEG,
	HITGROUP_GEAR
};
