#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPalBossType : uint8
{
	None                           = 0,
	GrassBoss                      = 1,
	ElectricBoss                   = 2,
	ForestBoss                     = 3,
	SnowBoss                       = 4,
	DesertBoss                     = 5,
	EPalBossType_MAX               = 6,
};

enum class EPalBossBattleState : uint8
{
	Open                           = 0,
	PreBattle                      = 1,
	InBattle                       = 2,
	AfterBattle                    = 3,
	EPalBossBattleState_MAX        = 4,
};

enum class EPalSizeType : uint8
{
	None                           = 0,
	XS                             = 1,
	S                              = 2,
	M                              = 3,
	L                              = 4,
	XL                             = 5,
	EPalSizeType_MAX               = 6,
};

enum class EPalPlayerDamageCameraShakeCategory : uint8
{
	None                           = 0,
	Waza_S                         = 1,
	Waza_M                         = 2,
	Waza_L                         = 3,
	Gun_S                          = 4,
	Gun_M                          = 5,
	Gun_L                          = 6,
	Melee                          = 7,
	EPalPlayerDamageCameraShakeCategory_MAX = 8,
};

enum class EPalDamageAnimationReactionType : uint8
{
	None                           = 0,
	Small                          = 1,
	Big                            = 2,
	EPalDamageAnimationReactionType_MAX = 3,
};

enum class EPalSpecialAttackRateType : uint8
{
	None                           = 0,
	VsWood                         = 1,
	VsStone                        = 2,
	EPalSpecialAttackRateType_MAX  = 3,
};

enum class EPalAdditionalEffectType : uint8
{
	None                           = 0,
	Stun                           = 1,
	Sleep                          = 2,
	Poison                         = 3,
	Burn                           = 4,
	Wetness                        = 5,
	Freeze                         = 6,
	Electrical                     = 7,
	Muddy                          = 8,
	IvyCling                       = 9,
	Darkness                       = 10,
	AttackUp                       = 11,
	DefenseUp                      = 12,
	Recovery                       = 13,
	Trap_LegHold                   = 14,
	EPalAdditionalEffectType_MAX   = 15,
};

enum class EPalAttackType : uint8
{
	Waza                           = 0,
	Weapon                         = 1,
	Turret                         = 2,
	SlipDamage                     = 3,
	Mine                           = 4,
	EPalAttackType_MAX             = 5,
};

enum class EPalElementType : uint8
{
	None                           = 0,
	Normal                         = 1,
	Fire                           = 2,
	Water                          = 3,
	Leaf                           = 4,
	Electricity                    = 5,
	Ice                            = 6,
	Earth                          = 7,
	Dark                           = 8,
	Dragon                         = 9,
	MAX                            = 10,
};

enum class EPalBodyPartsType : uint8
{
	Weak                           = 0,
	Normal                         = 1,
	Strong                         = 2,
	Invincible                     = 3,
	EPalBodyPartsType_MAX          = 4,
};

enum class EPalWazaCategory : uint8
{
	Melee                          = 0,
	Shot                           = 1,
	Support                        = 2,
	EPalWazaCategory_MAX           = 3,
};

enum class EPalHUDDisplayType : uint8
{
	Undefined                      = 0,
	DamegeReact                    = 1,
	InteractOn                     = 2,
	InteractOff                    = 3,
	EPalHUDDisplayType_MAX         = 4,
};

enum class EPalMapObjectGetModelOutPinType : uint8
{
	Success                        = 0,
	Failed                         = 1,
	EPalMapObjectGetModelOutPinType_MAX = 2,
};

enum class EPalMapObjectChangeMeshFXType : uint8
{
	None                           = 0,
	RockDestroyProgress            = 1,
	EPalMapObjectChangeMeshFXType_MAX = 2,
};

enum class EPalMapObjectDamagableType : uint8
{
	AllRecieve                     = 0,
	OtherGroup                     = 1,
	NoDamage                       = 2,
	EPalMapObjectDamagableType_MAX = 3,
};

enum class EPalMapObjectDestroyFXType : uint8
{
	None                           = 0,
	Normal                         = 1,
	NormalWood                     = 2,
	NormalRock                     = 3,
	NormalMetal                    = 4,
	FoliageTree                    = 5,
	Pickup                         = 6,
	Pickup_Wood                    = 7,
	Pickup_Stone                   = 8,
	Pickup_Berry                   = 9,
	LowTree                        = 10,
	Rock                           = 11,
	EPalMapObjectDestroyFXType_MAX = 12,
};

enum class EPalBuildObjectState : uint8
{
	Init                           = 0,
	Simulation                     = 1,
	Building                       = 2,
	Available                      = 3,
	NotAvailable                   = 4,
	EPalBuildObjectState_MAX       = 5,
};

enum class EPalInteractiveObjectIndicatorType : uint8
{
	None                           = 0,
	Build                          = 1,
	BuildCancel                    = 2,
	Work                           = 3,
	Open                           = 4,
	OpenCraftMenu                  = 5,
	OpenConverterMenu              = 6,
	OpenBaseCampMenu               = 7,
	OpenBaseCampTaskMenu           = 8,
	OpenPalBoxMenu                 = 9,
	OpenPalRankUp                  = 10,
	Collect                        = 11,
	Pickup                         = 12,
	SelectCrop                     = 13,
	Seeding                        = 14,
	Watering                       = 15,
	Harvest                        = 16,
	OpenPalMedicalBedMenu          = 17,
	SleepPlayerBed                 = 18,
	GetupPlayerBed                 = 19,
	OpenDetailMenu                 = 20,
	SelectRecipe                   = 21,
	PickupProduct                  = 22,
	Mining                         = 23,
	UnlockFastTravel               = 24,
	FastTravel                     = 25,
	UnuseFastTravel                = 26,
	Obtain                         = 27,
	SetEgg                         = 28,
	StoreAll                       = 29,
	ObtainAll                      = 30,
	RecoveryAllOtomo               = 31,
	Liftup                         = 32,
	MoveToWorker                   = 33,
	MoveToPalBox                   = 34,
	OpenWorkerMenu                 = 35,
	CoopAction                     = 36,
	Talk                           = 37,
	EnterDungeon                   = 38,
	ExitDungeon                    = 39,
	EntryBossBattle                = 40,
	EntryBossBattleFullMember      = 41,
	StartBossBattle                = 42,
	Resuscitation                  = 43,
	Repair                         = 44,
	StatusOperator_Player          = 45,
	StatusOperator_Pal             = 46,
	Ignition                       = 47,
	OpenDoor                       = 48,
	CloseDoor                      = 49,
	OpenMenu_SecuritySetting       = 50,
	InputPassword                  = 51,
	InputPassword_CannotTry        = 52,
	SelectRepairTarget             = 53,
	CancelWork                     = 54,
	WaitForReplication             = 55,
	RequestJoinGuild               = 56,
	Signboard                      = 57,
	OpenCaptureCage                = 58,
	ChangeBaseCampBattleType_AttackToEnemyInBaseCamp = 59,
	ChangeBaseCampBattleType_NoBattle = 60,
	Uninteractable                 = 61,
	Test_Warp                      = 62,
	DevTest_1                      = 63,
	DevTest_2                      = 64,
	DevTest_3                      = 65,
	DevTest_4                      = 66,
	EPalInteractiveObjectIndicatorType_MAX = 67,
};

enum class EPalBuildObjectInstallStrategy : uint8
{
	Normal                         = 0,
	WallV2                         = 1,
	SinkableNormal                 = 2,
	Foundation                     = 3,
	Roof                           = 4,
	Stairs                         = 5,
	GroundWall                     = 6,
	BaseCampPoint                  = 7,
	AttachToWall                   = 8,
	AttachToCeil                   = 9,
	PalStorage                     = 10,
	Floor                          = 11,
	Wall                           = 12,
	Undefined                      = 13,
	EPalBuildObjectInstallStrategy_MAX = 14,
};

enum class EPalPassiveSkillEffectType : uint8
{
	No                             = 0,
	MaxHP                          = 1,
	MeleeAttack                    = 2,
	ShotAttack                     = 3,
	Defense                        = 4,
	Support                        = 5,
	CraftSpeed                     = 6,
	MoveSpeed                      = 7,
	Homing                         = 8,
	Explosive                      = 9,
	BulletSpeed                    = 10,
	BulletAccuracy                 = 11,
	Recoil                         = 12,
	ElementFire                    = 13,
	ElementWater                   = 14,
	ElementLeaf                    = 15,
	ElementElectricity             = 16,
	ElementIce                     = 17,
	ElementEarth                   = 18,
	ElementDark                    = 19,
	ElementDragon                  = 20,
	ElementResist_Normal           = 21,
	ElementResist_Fire             = 22,
	ElementResist_Water            = 23,
	ElementResist_Leaf             = 24,
	ElementResist_Electricity      = 25,
	ElementResist_Ice              = 26,
	ElementResist_Earth            = 27,
	ElementResist_Dark             = 28,
	ElementResist_Dragon           = 29,
	ElementBoost_Normal            = 30,
	ElementBoost_Fire              = 31,
	ElementBoost_Water             = 32,
	ElementBoost_Leaf              = 33,
	ElementBoost_Electricity       = 34,
	ElementBoost_Ice               = 35,
	ElementBoost_Earth             = 36,
	ElementBoost_Dark              = 37,
	ElementBoost_Dragon            = 38,
	ElementAddItemDrop_Normal      = 39,
	ElementAddItemDrop_Fire        = 40,
	ElementAddItemDrop_Water       = 41,
	ElementAddItemDrop_Leaf        = 42,
	ElementAddItemDrop_Electricity = 43,
	ElementAddItemDrop_Ice         = 44,
	ElementAddItemDrop_Earth       = 45,
	ElementAddItemDrop_Dark        = 46,
	ElementAddItemDrop_Dragon      = 47,
	CollectItem                    = 48,
	Mute                           = 49,
	Logging                        = 50,
	Mining                         = 51,
	GainItemDrop                   = 52,
	LifeSteal                      = 53,
	TemperatureResist_Heat         = 54,
	TemperatureResist_Cold         = 55,
	TemperatureInvalid_Heat        = 56,
	TemperatureInvalid_Cold        = 57,
	MaxInventoryWeight             = 58,
	FullStomatch_Decrease          = 59,
	Sanity_Decrease                = 60,
	BodyPartsWeakDamage            = 61,
	EPalPassiveSkillEffectType_MAX = 62,
};

enum class EPalCharacterCompleteDelegatePriority : uint8
{
	SetTrainer                     = 0,
	Default                        = 1,
	PostDefault                    = 2,
	EPalCharacterCompleteDelegatePriority_MAX = 3,
};

enum class EPalCharacterImportanceType : uint8
{
	Undefined                      = 0,
	AllUpdate                      = 1,
	Nearest                        = 2,
	Near                           = 3,
	MidInSight                     = 4,
	FarInSight                     = 5,
	MidOutSight                    = 6,
	FarOutSight                    = 7,
	Farthest                       = 8,
	EPalCharacterImportanceType_MAX = 9,
};

enum class EPalDungeonEnemySpawnerRankType : uint8
{
	None                           = 0,
	Normal                         = 1,
	Boss                           = 2,
	EPalDungeonEnemySpawnerRankType_MAX = 3,
};

enum class EPalChatCategory : uint8
{
	None                           = 0,
	Global                         = 1,
	Guild                          = 2,
	Say                            = 3,
	EPalChatCategory_MAX           = 4,
};

enum class EPalCheckSpawnResultType : uint8
{
	Ignore                         = 0,
	Spawn                          = 1,
	Despawn                        = 2,
	EPalCheckSpawnResultType_MAX   = 3,
};

enum class EPalWeatherConditionType : uint8
{
	Undefined                      = 0,
	Sun                            = 1,
	Cloud                          = 2,
	Rain                           = 3,
	Thunder                        = 4,
	Snow                           = 5,
	Fog                            = 6,
	Storm                          = 7,
	Snowstorm                      = 8,
	EPalWeatherConditionType_MAX   = 9,
};

enum class EPalOneDayTimeType : uint8
{
	Undefined                      = 0,
	Day                            = 1,
	Night                          = 2,
	EPalOneDayTimeType_MAX         = 3,
};

enum class EPalSpwnerImportanceType : uint8
{
	Undefined                      = 0,
	AllUpdate                      = 1,
	Near                           = 2,
	Mid                            = 3,
	Far                            = 4,
	EPalSpwnerImportanceType_MAX   = 5,
};

enum class EPalSpawnRadiusType : uint8
{
	S                              = 0,
	M                              = 1,
	L                              = 2,
	NPC                            = 3,
	Override                       = 4,
	EPalSpawnRadiusType_MAX        = 5,
};

enum class EPalBattleBGMType : uint8
{
	None                           = 0,
	Cute                           = 1,
	Cool                           = 2,
	Strong                         = 3,
	Human_Common                   = 4,
	Human_Villain                  = 5,
	FieldBoss                      = 6,
	Legend                         = 7,
	TowerBoss                      = 8,
	EPalBattleBGMType_MAX          = 9,
};

enum class EPalCharacterMovementCustomMode : uint8
{
	None                           = 0,
	Fatigue                        = 1,
	Sprint                         = 2,
	Sliding                        = 3,
	Glider                         = 4,
	Climbing                       = 5,
	Riding                         = 6,
	Rolling                        = 7,
	EPalCharacterMovementCustomMode_MAX = 8,
};

enum class EPalPlayerBattleFinishType : uint8
{
	Undefined                      = 0,
	Escape                         = 1,
	Victory                        = 2,
	Capture                        = 3,
	EPalPlayerBattleFinishType_MAX = 4,
};

enum class EPalStepAxisType : uint8
{
	Forward                        = 0,
	Back                           = 1,
	Right                          = 2,
	Left                           = 3,
	ForwardRight                   = 4,
	ForwardLeft                    = 5,
	BackRight                      = 6,
	BackLeft                       = 7,
	EPalStepAxisType_MAX           = 8,
};

enum class EWeaponNotifyType : uint8
{
	None                           = 0,
	Shoot                          = 1,
	ThrowRequest                   = 2,
	RequestReload                  = 3,
	ShootComplated                 = 4,
	EWeaponNotifyType_MAX          = 5,
};

enum class EPalLiftupRequestResult : uint8
{
	Success                        = 0,
	FailedNotExistsTargetCharacter = 1,
	FailedNotExistsLiftupComponent = 2,
	FailedInvalidPlayerIdInController = 3,
	FailedInvalidDefaultCharacterInController = 4,
	FailedDisabledLiftup           = 5,
	FailedInvalidRequestPlayerId   = 6,
	FailedAlreadyLiftingActor      = 7,
	FailedCharacterParameter       = 8,
	FailedIndividualCharacterParameter = 9,
	FailedAlreadyLocked            = 10,
	FailedSleeping                 = 11,
	EPalLiftupRequestResult_MAX    = 12,
};

enum class EPalLogContentToneType : uint8
{
	Normal                         = 0,
	Negative                       = 1,
	Positive                       = 2,
	EPalLogContentToneType_MAX     = 3,
};

enum class EPalLogPriority : uint8
{
	None                           = 0,
	Normal                         = 1,
	Important                      = 2,
	VeryImportant                  = 3,
	EPalLogPriority_MAX            = 4,
};

enum class EPalWazaID : uint8
{
	None                           = 0,
	Human_Punch                    = 1,
	WorkAttack                     = 2,
	Throw                          = 3,
	Scratch                        = 4,
	EnergyShot                     = 5,
	Unique_Anubis_LowRoundKick     = 6,
	Unique_Anubis_GroundPunch      = 7,
	Unique_Anubis_Tackle           = 8,
	Unique_Deer_PushupHorn         = 9,
	HyperBeam                      = 10,
	PowerShot                      = 11,
	PowerBall                      = 12,
	Unique_Garm_Bite               = 13,
	Intimidate                     = 14,
	Unique_Boar_Tackle             = 15,
	Unique_PinkCat_CatPunch        = 16,
	Unique_FlowerDinosaur_Whip     = 17,
	Unique_SheepBall_Roll          = 18,
	Unique_ChickenPal_ChickenPeck  = 19,
	Unique_Gorilla_GroundPunch     = 20,
	Unique_Grassmammoth_Earthquake = 21,
	AirCanon                       = 22,
	Unique_GrassPanda_MusclePunch  = 23,
	Unique_RobinHood_BowSnipe      = 24,
	Unique_Alpaca_Tackle           = 25,
	Unique_KingAlpaca_BodyPress    = 26,
	Unique_Werewolf_Scratch        = 27,
	Unique_FengyunDeeper_CloudTempest = 28,
	Unique_Baphomet_SwallowKite    = 29,
	Unique_HerculesBeetle_BeetleTackle = 30,
	Unique_HawkBird_Storm          = 31,
	Unique_Eagle_GlidingNail       = 32,
	SelfDestruct                   = 33,
	SelfDestruct_Bee               = 34,
	SelfExplosion                  = 35,
	FireBlast                      = 36,
	Flamethrower                   = 37,
	FireBall                       = 38,
	FlareArrow                     = 39,
	FireSeed                       = 40,
	Unique_Horus_FlareBird         = 41,
	FlareTornado                   = 42,
	Inferno                        = 43,
	Unique_FireKirin_Tackle        = 44,
	Unique_AmaterasuWolf_FireCharge = 45,
	Unique_VolcanicMonster_MagmaAttack = 46,
	Unique_FlameBuffalo_FlameHorn  = 47,
	WaterGun                       = 48,
	WaterWave                      = 49,
	HydroPump                      = 50,
	WaterBall                      = 51,
	TidalWave                      = 52,
	AquaJet                        = 53,
	BubbleShot                     = 54,
	AcidRain                       = 55,
	Unique_BluePlatypus_Toboggan   = 56,
	WindCutter                     = 57,
	GrassTornado                   = 58,
	SolarBeam                      = 59,
	SeedMachinegun                 = 60,
	SeedMine                       = 61,
	RootAttack                     = 62,
	SpecialCutter                  = 63,
	Unique_QueenBee_SpinLance      = 64,
	ThunderRain                    = 65,
	ThunderBall                    = 66,
	LineThunder                    = 67,
	CrossThunder                   = 68,
	ThreeThunder                   = 69,
	ElecWave                       = 70,
	Thunderbolt                    = 71,
	ThunderFunnel                  = 72,
	SpreadPulse                    = 73,
	LockonLaser                    = 74,
	LightningStrike                = 75,
	Unique_ElecPanda_ElecScratch   = 76,
	Unique_Kirin_LightningTackle   = 77,
	IceMissile                     = 78,
	BlizzardLance                  = 79,
	SnowStorm                      = 80,
	IcicleThrow                    = 81,
	Unique_IceHorse_IceBladeAttack = 82,
	IceBlade                       = 83,
	SandTornado                    = 84,
	ThrowRock                      = 85,
	RockLance                      = 86,
	MudShot                        = 87,
	StoneShotgun                   = 88,
	Unique_DrillGame_ShellAttack   = 89,
	DarkLaser                      = 90,
	DarkWave                       = 91,
	ShadowBall                     = 92,
	Psychokinesis                  = 93,
	PoisonShot                     = 94,
	GhostFlame                     = 95,
	Unique_DarkCrow_TelePoke       = 96,
	DragonMeteor                   = 97,
	DragonBreath                   = 98,
	DragonWave                     = 99,
	DragonCanon                    = 100,
	Unique_FairyDragon_FairyTornado = 101,
	Funnel_DreamDemon              = 102,
	Funnel_RaijinDaughter          = 103,
	StardustArrow                  = 104,
	Tremor                         = 105,
	FrostBreath                    = 106,
	DiamondFall                    = 107,
	BeamSlicer                     = 108,
	Commet                         = 109,
	DarkBall                       = 110,
	DarkFog                        = 111,
	PoisonFog                      = 112,
	DarkLegion                     = 113,
	Unique_BirdDragon_FireBreath   = 114,
	Unique_BlackMetalDragon_FirePunch = 115,
	Unique_DarkScorpion_Pierce     = 116,
	Unique_GhostBeast_Tossin       = 117,
	Unique_JetDragon_JumpBeam      = 118,
	Unique_ThunderBird_ThunderStorm = 119,
	Unique_Yeti_SnowBall           = 120,
	Unique_NaughtyCat_CatPress     = 121,
	Unique_IceDeer_IceHorn         = 122,
	Unique_KingBahamut_AirCrash    = 123,
	Unique_Manticore_InfernoStrike = 124,
	Unique_SoldierBee_NeedleLance  = 125,
	Unique_ThunderDog_InazumaShorai = 126,
	Unique_BlackCentaur_TwoSpearRushes = 127,
	Unique_BlackGriffon_TackleLaser = 128,
	Unique_SakuraSaurus_SideTackle = 129,
	Unique_ThunderDragonMan_ThunderSwordAttack = 130,
	Unique_RedArmorBird_TriplePeck = 131,
	Unique_CaptainPenguin_BodySlide = 132,
	Unique_Ronin_Iai               = 133,
	Unique_GrassRabbitMan_GrassRoundKick = 134,
	Unique_SaintCentaur_OneSpearRushes = 135,
	Unique_Umihebi_WindingTackle   = 136,
	Unique_WeaselDragon_FlyingTackle = 137,
	Unique_WhiteTiger_IceScratch   = 138,
	Unique_Baphomet_Dark_DarkKite  = 139,
	Unique_BirdDragon_Ice_IceBreath = 140,
	Unique_FireKirin_Dark_DarkTossin = 141,
	Unique_VolcanicMonster_Ice_IceAttack = 142,
	Unique_IceHorse_Dark_DarkBladeAttack = 143,
	Unique_Yeti_Grass_GrassBall    = 144,
	Unique_GrassPanda_Electric_ElectricPunch = 145,
	Reserve_52                     = 146,
	Reserve_53                     = 147,
	Reserve_54                     = 148,
	Reserve_55                     = 149,
	Reserve_56                     = 150,
	Reserve_57                     = 151,
	Reserve_58                     = 152,
	Reserve_59                     = 153,
	Reserve_60                     = 154,
	Reserve_61                     = 155,
	Reserve_62                     = 156,
	Reserve_63                     = 157,
	Reserve_64                     = 158,
	Reserve_65                     = 159,
	Reserve_66                     = 160,
	Reserve_67                     = 161,
	Reserve_68                     = 162,
	Reserve_69                     = 163,
	Reserve_70                     = 164,
	Reserve_71                     = 165,
	Reserve_72                     = 166,
	Reserve_73                     = 167,
	Reserve_74                     = 168,
	Reserve_75                     = 169,
	Reserve_76                     = 170,
	Reserve_77                     = 171,
	Reserve_78                     = 172,
	Reserve_79                     = 173,
	Reserve_80                     = 174,
	Reserve_81                     = 175,
	Reserve_82                     = 176,
	Reserve_83                     = 177,
	Reserve_84                     = 178,
	Reserve_85                     = 179,
	Reserve_86                     = 180,
	Reserve_87                     = 181,
	Reserve_88                     = 182,
	Reserve_89                     = 183,
	Reserve_90                     = 184,
	Reserve_91                     = 185,
	Reserve_92                     = 186,
	Reserve_93                     = 187,
	Reserve_94                     = 188,
	Reserve_95                     = 189,
	Reserve_96                     = 190,
	Reserve_97                     = 191,
	Reserve_98                     = 192,
	Reserve_99                     = 193,
	MAX                            = 194,
};

enum class EPalPlayerJoinResult : uint8
{
	Success                        = 0,
	FailedInvalidLoginPlayerId     = 1,
	FailedInvalidLoginPlayerCharacterHandle = 2,
	FailedDuplicateAccountCreation = 3,
	EPalPlayerJoinResult_MAX       = 4,
};

enum class EPalGuildJoinRequestResult : uint8
{
	Failed_RefuseByRespondent      = 0,
	Failed_CancelByApplicant       = 1,
	Failed_OverBaseCampNum_Applicant = 2,
	Failed_OverBaseCampNum_Respondent = 3,
	Continuation_CheckLoseAuthority = 4,
	Succcess_MergePalBox_Applicant = 5,
	Succcess_MergePalBox_Respondent = 6,
	Succcess_NoMerge_Applicant     = 7,
	Succcess_NoMerge_Respondent    = 8,
	EPalGuildJoinRequestResult_MAX = 9,
};

enum class EPalGuildPlayerStatus : uint8
{
	Logout                         = 0,
	Online                         = 1,
	EPalGuildPlayerStatus_MAX      = 2,
};

enum class EPalInvaderType : uint8
{
	None                           = 0,
	InvaderEnemy                   = 1,
	VisitorNPC                     = 2,
	EPalInvaderType_MAX            = 3,
};

enum class EPalWorkSuitability : uint8
{
	None                           = 0,
	EmitFlame                      = 1,
	Watering                       = 2,
	Seeding                        = 3,
	GenerateElectricity            = 4,
	Handcraft                      = 5,
	Collection                     = 6,
	Deforest                       = 7,
	Mining                         = 8,
	OilExtraction                  = 9,
	ProductMedicine                = 10,
	Cool                           = 11,
	Transport                      = 12,
	MonsterFarm                    = 13,
	Anyone                         = 14,
	MAX                            = 15,
};

enum class EPalBaseCampWorkerEventType : uint8
{
	None                           = 0,
	Escape                         = 1,
	OverworkDeath                  = 2,
	Sick                           = 3,
	DodgeWork                      = 4,
	DodgeWork_Short                = 5,
	DodgeWork_Sleep                = 6,
	EatTooMuch                     = 7,
	Trantrum                       = 8,
	FightWithFriend                = 9,
	TurnFoodBox                    = 10,
	DestroyBuilding                = 11,
	EPalBaseCampWorkerEventType_MAX = 12,
};

enum class EPalStatusHungerType : uint8
{
	Default                        = 0,
	Hunger                         = 1,
	Starvation                     = 2,
	EPalStatusHungerType_MAX       = 3,
};

enum class EPalBaseCampWorkerSickType : uint8
{
	None                           = 0,
	Cold                           = 1,
	Sprain                         = 2,
	Bulimia                        = 3,
	GastricUlcer                   = 4,
	Fracture                       = 5,
	Weakness                       = 6,
	DepressionSprain               = 7,
	DisturbingElement              = 8,
	EPalBaseCampWorkerSickType_MAX = 9,
};

enum class EPalStatusPhysicalHealthType : uint8
{
	Healthful                      = 0,
	MinorInjury                    = 1,
	Severe                         = 2,
	Dying                          = 3,
	DeadBody                       = 4,
	CloudCemetery                  = 5,
	EPalStatusPhysicalHealthType_MAX = 6,
};

enum class EPalGenderType : uint8
{
	None                           = 0,
	Male                           = 1,
	Female                         = 2,
	EPalGenderType_MAX             = 3,
};

enum class EPalShooterFlagContainerPriority : uint8
{
	Weapon                         = 0,
	Ball                           = 1,
	EPalShooterFlagContainerPriority_MAX = 2,
};

enum class EWeaponPlaySoundType : uint8
{
	None                           = 0,
	OnStartAim                     = 1,
	OnEndAim                       = 2,
	OnAttach                       = 3,
	OnDetach                       = 4,
	OnThrow                        = 5,
	EWeaponPlaySoundType_MAX       = 6,
};

enum class EPalWeaponType : uint8
{
	None                           = 0,
	ThrowObject                    = 1,
	Handgun                        = 2,
	AssaultRifle                   = 3,
	Shotgun                        = 4,
	SniperRifle                    = 5,
	RocketLauncher                 = 6,
	MeleeWeapon                    = 7,
	Bow                            = 8,
	BowGun                         = 9,
	FlameThrower                   = 10,
	GatlingGun                     = 11,
	Liftup                         = 12,
	LaserRifle                     = 13,
	MAX                            = 14,
};

enum class EWeaponCoopType : uint8
{
	None                           = 0,
	RapidFireWeapon                = 1,
	NearRangeWeapon                = 2,
	FarRangeWeapon                 = 3,
	SupportWeapon                  = 4,
	EWeaponCoopType_MAX            = 5,
};

enum class EPalCharacterStatusOperationResult : uint8
{
	Success                        = 0,
	FailedNotValidIndividualHandle = 1,
	FailedNotValidIndividualParameter = 2,
	FailedNotValidPlayerState      = 3,
	FailedNotValidPlayerRecordData = 4,
	FailedNotValidPlayerInventoryData = 5,
	FailedNotValidOtomoHolder      = 6,
	FailedGetPlayerRankMasterData  = 7,
	FailedGetCharacterUpgradeMasterData = 8,
	FailedNotFoundOtomo            = 9,
	FailedAlreadyMaxRank           = 10,
	FailedAlreadyResetStatus       = 11,
	FailedCalcRequiredRelicNum     = 12,
	FailedLackRelicNum             = 13,
	FailedCalcRequiredUpgradeItemNum = 14,
	FailedLackUpgradeItemNum       = 15,
	FailedLackMoneyNum             = 16,
	FailedItemOperation            = 17,
	EPalCharacterStatusOperationResult_MAX = 18,
};

enum class EPalDeadType : uint8
{
	Undefined                      = 0,
	Attack                         = 1,
	SelfDestruction                = 2,
	BodyTemperature                = 3,
	Falling                        = 4,
	Poison                         = 5,
	Burn                           = 6,
	Drown                          = 7,
	TowerBossBattle                = 8,
	Ground                         = 9,
	EPalDeadType_MAX               = 10,
};

enum class EPalGroupOperationResult : uint8
{
	Success                        = 0,
	FailedNotFoundNetworkTransmitter = 1,
	FailedCreateNewGroup           = 2,
	FailedNotFoundGroup            = 3,
	FailedNotFoundGuild            = 4,
	FailedNotFoundOrganization     = 5,
	FailedNotFoundCharacterHandle  = 6,
	FailedNotFoundCharacterParameter = 7,
	FailedNotFoundPlayerCharacterHandle = 8,
	FailedAlreadyBelongToGroup     = 9,
	FailedNotImplementExitNoPlayerCharacter = 10,
	FailedAlreadyExist             = 11,
	FailedPlayerAlreadyBelongingToGuild = 12,
	FailedBaseCampAlreadyBelongingToGuild = 13,
	FailedPlayerNotBelongingToGuild = 14,
	FailedGuildMaxPlayerNum        = 15,
	FailedBelongingToIndependentGuildOtherPlayer = 16,
	FailedPermissionDeniedByNotAdmin = 17,
	FailedAdminCannotExitGuild     = 18,
	FailedDisposeStaticOrganization = 19,
	FailedOverBaseCamp             = 20,
	FailedBaseCampNotBelongingToGuild = 21,
	FailedNotFoundBaseCamp         = 22,
	FailedBaseCampOperation        = 23,
	FailedNotImplement             = 24,
	EPalGroupOperationResult_MAX   = 25,
};

enum class EPalMapObjectRankUpCharacterResult : uint8
{
	Success                        = 0,
	FailedNotValidIndividualHandle = 1,
	FailedNotValidIndividualParameter = 2,
	FailedNotValidPlayerState      = 3,
	FailedNotValidPlayerPalStorage = 4,
	FailedNotExistsResourceCharacterInPalStorage = 5,
	EPalMapObjectRankUpCharacterResult_MAX = 6,
};

enum class EPalUISelectNumResult : uint8
{
	Canceled                       = 0,
	Complate                       = 1,
	EPalUISelectNumResult_MAX      = 2,
};

enum class EPalBodyLocationType : uint8
{
	None                           = 0,
	Head                           = 1,
	Mouth                          = 2,
	BulletMuzzle                   = 3,
	BodyCenter                     = 4,
	JumpEffect                     = 5,
	EPalBodyLocationType_MAX       = 6,
};

enum class EPalWorkType : uint8
{
	None                           = 0,
	CommonTemp                     = 1,
	ReviveCharacter                = 2,
	Architecture                   = 3,
	RepairBuildObject              = 4,
	FarmHarvest                    = 5,
	HarvestLevelObject             = 6,
	TransportFoodItemInBaseCamp    = 7,
	Seeding                        = 8,
	Watering                       = 9,
	Cooking                        = 10,
	TransportDisposableItemInBaseCamp = 11,
	ConvertItem                    = 12,
	ProductItem                    = 13,
	Smelting                       = 14,
	ProductMedicine                = 15,
	TransportItemInBaseCamp        = 16,
	CollectResourcePickable        = 17,
	ProductResource_Deforest       = 18,
	ProductResource_Mining         = 19,
	ProductResource_Deforest_OnFacility = 20,
	ProductResource_Mining_OnFacility = 21,
	GenerateEnergy                 = 22,
	Ignition                       = 23,
	Defense                        = 24,
	BreedFarm                      = 25,
	MonsterFarm                    = 26,
	ExtinguishBurn                 = 27,
	Cool                           = 28,
	Attack                         = 29,
	CollectItemToStorage           = 30,
	TransportItem                  = 31,
	CollectResource                = 32,
	GrowupPromotion                = 33,
	EPalWorkType_MAX               = 34,
};

enum class EPalPassiveTriggerType : int32
{
	None                           = 0,
	ActiveOtomo                    = 1,
	Worker                         = 2,
	Ride                           = 4,
	Reserve                        = 8,
	InOtomo                        = 16,
	Always                         = 32,
	EPalPassiveTriggerType_MAX     = 33,
};

enum class EPalPassiveAbilitySkillState : uint8
{
	None                           = 0,
	Active                         = 1,
	ActivateDelay                  = 2,
	Inactive                       = 3,
	ActivateLocked                 = 4,
	EPalPassiveAbilitySkillState_MAX = 5,
};

enum class EPalActionType : uint8
{
	None                           = 0,
	Sleep                          = 1,
	WakeUp                         = 2,
	Death                          = 3,
	Revive                         = 4,
	Menace                         = 5,
	Eat                            = 6,
	Stan                           = 7,
	KnockBack                      = 8,
	BlowAway                       = 9,
	GeneralAttack                  = 10,
	MeleeSkill                     = 11,
	ShootSkill                     = 12,
	JumpAction                     = 13,
	RollingAction                  = 14,
	FullRideAction                 = 15,
	Turn90R                        = 16,
	Turn90L                        = 17,
	Turn180R                       = 18,
	Turn180L                       = 19,
	TurnToTarget                   = 20,
	DiscoverySomething             = 21,
	ForwardWalk                    = 22,
	BackwardWalk                   = 23,
	Provocation                    = 24,
	CommonWork                     = 25,
	Architecture                   = 26,
	Deforest                       = 27,
	Mining                         = 28,
	Feeding                        = 29,
	GrowupPromotion                = 30,
	Watering                       = 31,
	WateringOneshot                = 32,
	Harvest                        = 33,
	GenerateEnergy                 = 34,
	GenerateEnergyFire             = 35,
	GenerateEnergyElectric         = 36,
	Cooking                        = 37,
	Happy                          = 38,
	IdleInSpa                      = 39,
	Ignition                       = 40,
	TransportItem                  = 41,
	Cool                           = 42,
	SpawnItem                      = 43,
	Resuscitation                  = 44,
	Liftup                         = 45,
	BeLiftup                       = 46,
	Throw                          = 47,
	BeThrown                       = 48,
	HumanFeeding                   = 49,
	HumanFeeding_DoMotion          = 50,
	GetupUtubuse_orRight           = 51,
	GetupAomuke_orRight            = 52,
	WaitLoadingAction              = 53,
	HumanPetting                   = 54,
	PalPetting                     = 55,
	Talk                           = 56,
	Listen_A                       = 57,
	Listen_B                       = 58,
	ChairSit                       = 59,
	ChairSitMeal                   = 60,
	ChairSitDrink                  = 61,
	ChairSitMeat                   = 62,
	GroundSit                      = 63,
	SpawnOtomoPal                  = 64,
	PartnerSkill                   = 65,
	CommandPal                     = 66,
	ReturnOtomoPal                 = 67,
	Step_Forward                   = 68,
	Step_Back                      = 69,
	Step_Left                      = 70,
	Step_Right                     = 71,
	ElectricShock                  = 72,
	UnlockCagePalLock              = 73,
	CutPalMeat                     = 74,
	Grappling                      = 75,
	PalRandomRest                  = 76,
	EPalActionType_MAX             = 77,
};

enum class EPalMovementSpeedType : uint8
{
	SlowWalk                       = 0,
	Walk                           = 1,
	Run                            = 2,
	TransportMove                  = 3,
	EPalMovementSpeedType_MAX      = 4,
};

enum class EPalAIActionCategory : uint8
{
	Undefined                      = 0,
	Call                           = 1,
	Coop                           = 2,
	NullAction                     = 3,
	EPalAIActionCategory_MAX       = 4,
};

enum class EPalBiologicalGradeComparedResult : uint8
{
	Greater                        = 0,
	Equal                          = 1,
	Smaller                        = 2,
	EPalBiologicalGradeComparedResult_MAX = 3,
};

enum class EPalAIResponseType : uint8
{
	Ignore                         = 0,
	Escape                         = 1,
	Battle                         = 2,
	Special                        = 3,
	EPalAIResponseType_MAX         = 4,
};

enum class EPalAISightJudgementType : uint8
{
	None                           = 0,
	AimedByPlayer                  = 1,
	EPalAISightJudgementType_MAX   = 2,
};

enum class EPalFootType : uint8
{
	None                           = 0,
	ForeFootLeft                   = 1,
	ForeFootRight                  = 2,
	HindFootLeft                   = 3,
	HindFootRight                  = 4,
	MAX                            = 5,
};

enum class EPalGeneralBlendSpaceType : uint8
{
	None                           = 0,
	GeneralMove                    = 1,
	RidingMove                     = 2,
	FlyingMove                     = 3,
	FlyingRidingMove               = 4,
	TransportingObjectMove         = 5,
	EPalGeneralBlendSpaceType_MAX  = 6,
};

enum class EPalGeneralAnimSequenceType : uint8
{
	None                           = 0,
	JumpStart                      = 1,
	JumpLoop                       = 2,
	JumpEnd                        = 3,
	EPalGeneralAnimSequenceType_MAX = 4,
};

enum class EPalBlowVelocityOwner : uint8
{
	None                           = 0,
	AttackCharacter                = 1,
	HitComponent                   = 2,
	HitLocation                    = 3,
	EPalBlowVelocityOwner_MAX      = 4,
};

enum class EPalBaseCampState : uint8
{
	NotAvailable                   = 0,
	Normal                         = 1,
	EPalBaseCampState_MAX          = 2,
};

enum class EPalBaseCampModuleEnergyState : uint8
{
	Providable                     = 0,
	Waiting                        = 1,
	EPalBaseCampModuleEnergyState_MAX = 2,
};

enum class EPalBaseCampItemContainerType : uint8
{
	HomeChest                      = 0,
	Chest                          = 1,
	Other                          = 2,
	EPalBaseCampItemContainerType_MAX = 3,
};

enum class EPalBaseCampPassiveEffectWorkHardType : uint8
{
	Normal                         = 0,
	Hard                           = 1,
	VeryHard                       = 2,
	EPalBaseCampPassiveEffectWorkHardType_MAX = 3,
};

enum class EPalOptionWorldDeathPenalty : uint8
{
	None                           = 0,
	Item                           = 1,
	ItemAndEquipment               = 2,
	All                            = 3,
	EPalOptionWorldDeathPenalty_MAX = 4,
};

enum class EPalOptionWorldDifficulty : uint8
{
	None                           = 0,
	Easy                           = 1,
	Normal                         = 2,
	Hard                           = 3,
	Custom                         = 4,
	EPalOptionWorldDifficulty_MAX  = 5,
};

enum class EPalMapBaseCampWorkerOrderType : uint8
{
	Work                           = 0,
	BattleFighter                  = 1,
	BattleAllWorker                = 2,
	EPalMapBaseCampWorkerOrderType_MAX = 3,
};

enum class EPalBaseCampWorkerDirectorState : uint8
{
	Init                           = 0,
	WaitForLoadingAround           = 1,
	Active                         = 2,
	EPalBaseCampWorkerDirectorState_MAX = 3,
};

enum class EPalBaseCampWorkerDirectionBattleType : uint8
{
	AttackToEnemyInBaseCamp        = 0,
	NoBattle                       = 1,
	Num                            = 2,
	FirstValue                     = 0,
	EPalBaseCampWorkerDirectionBattleType_MAX = 3,
};

enum class EPalBodyTemperatureState : uint8
{
	Default                        = 0,
	Cold                           = 1,
	Heat                           = 2,
	EPalBodyTemperatureState_MAX   = 3,
};

enum class EPalPlayerEquipItemSlotType : uint8
{
	Head                           = 0,
	Body                           = 1,
	Accessory1                     = 2,
	Accessory2                     = 3,
	Shield                         = 4,
	Glider                         = 5,
	Max                            = 6,
};

enum class EPalBossBattleCombatResult : uint8
{
	None                           = 0,
	Won                            = 1,
	TimeUp                         = 2,
	AllDead                        = 3,
	EPalBossBattleCombatResult_MAX = 4,
};

enum class EPalBossBattleSequenceType : uint8
{
	None                           = 0,
	Opening                        = 1,
	Combat                         = 2,
	Ending                         = 3,
	Completed                      = 4,
	EPalBossBattleSequenceType_MAX = 5,
};

enum class EPalMapObjectOperationResult : uint8
{
	None                           = 0,
	Canceled                       = 1,
	FailedInLimitVolume            = 2,
	FailedInDungeon                = 3,
	FailedOverflowBaseCampNumInGuild = 4,
	FailedOverflowBaseCampNumInWorld = 5,
	FailedTooNearOtherBaseCampArea = 6,
	FailedOtherGuildBaseCampArea   = 7,
	FailedExceedMaxZ               = 8,
	FailedCannotInstallNotInDoor   = 9,
	FailedCannotInstallNotOnBase   = 10,
	FailNotFoundBaseCampWorkerDirectorBelongTo = 11,
	FailedNotEnoughMaterials       = 12,
	FailedInValidWeakSelf          = 13,
	FailedInValidRequestHandler    = 14,
	FailedNotReady                 = 15,
	FailNotFoundClass              = 16,
	FailLackSupportedLevel         = 17,
	FailNotConnectToOther          = 18,
	FailedNotInstallOnBackground   = 19,
	FailOverlap                    = 20,
	FailedIntersectOtherObject     = 21,
	FailNotAttachToWall            = 22,
	FailNotAttachToCeil            = 23,
	FailNotFoundBuildObjectData    = 24,
	FailNotFoundBaseCampBelongTo   = 25,
	FailSpawnNotFoundBaseCampBelongTo = 26,
	FailedNotFoundModel            = 27,
	FailedNotBuildObject           = 28,
	FailedNotFoundBuildProcess     = 29,
	FailedNotBuildingState         = 30,
	FailNotFoundRequestPlayerPalStorage = 31,
	FailNotEnoughPalBoxEmptySlot   = 32,
	FailedNotInstallBySurface      = 33,
	FailedTooSteepSlopeAngle       = 34,
	FailedAccessPointCannotGrounded = 35,
	FailedChestCannotGrounded      = 36,
	FailedNotCanDismantleState     = 37,
	FailedNotExistRequestPlayer    = 38,
	Success                        = 39,
	EPalMapObjectOperationResult_MAX = 40,
};

enum class EPalEnergyType : uint8
{
	None                           = 0,
	Electric                       = 1,
	EPalEnergyType_MAX             = 2,
};

enum class EPalBuildObjectTypeB : uint8
{
	Prod_Craft                     = 0,
	Prod_Resource                  = 1,
	Prod_Furnace                   = 2,
	Prod_Medicine                  = 3,
	Pal_Capture                    = 4,
	Pal_Breed                      = 5,
	Pal_Modify                     = 6,
	Infra_Medical                  = 7,
	Infra_Storage                  = 8,
	Infra_Trade                    = 9,
	Infra_GeneratePower            = 10,
	Infra_Defense                  = 11,
	Infra_Environment              = 12,
	Food_Basic                     = 13,
	Food_Agriculture               = 14,
	Food_Cooking                   = 15,
	Food_Livestock                 = 16,
	Found_Basic                    = 17,
	Found_House                    = 18,
	Other                          = 19,
	EPalBuildObjectTypeB_MAX       = 20,
};

enum class EPalBuildObjectTypeA : uint8
{
	Product                        = 0,
	Pal                            = 1,
	Storage                        = 2,
	Food                           = 3,
	Infrastructure                 = 4,
	Light                          = 5,
	Foundation                     = 6,
	Defense                        = 7,
	Other                          = 8,
	Furniture                      = 9,
	Dismantle                      = 10,
	EPalBuildObjectTypeA_MAX       = 11,
};

enum class EPalBuildProcessState : uint8
{
	Building                       = 0,
	Completed                      = 1,
	EPalBuildProcessState_MAX      = 2,
};

enum class EPalWalkableFloorAnglePriority : uint8
{
	None                           = 0,
	Default                        = 1,
	Ride                           = 2,
	Action                         = 3,
	EPalWalkableFloorAnglePriority_MAX = 4,
};

enum class EEnterWaterFlag : uint8
{
	None                           = 0,
	OverlapWaterVolume             = 1,
	RaycastWaterPlane              = 2,
	EEnterWaterFlag_MAX            = 3,
};

enum class EPalWorkAssignType : uint8
{
	None                           = 0,
	Work                           = 1,
	WorkAttack                     = 2,
	Defense                        = 3,
	EPalWorkAssignType_MAX         = 4,
};

enum class EPalContainerOperationRestrictType : uint8
{
	None                           = 0,
	CannotInject                   = 1,
	EPalContainerOperationRestrictType_MAX = 2,
};

enum class EHumanBone : uint8
{
	Pelvis                         = 0,
	Spine1                         = 1,
	Spine2                         = 2,
	Spine3                         = 3,
	Neck                           = 4,
	Head                           = 5,
	LeftThigh                      = 6,
	LeftCalf                       = 7,
	LeftFoot                       = 8,
	RightThigh                     = 9,
	RightCalf                      = 10,
	RightFoot                      = 11,
	LeftClavicle                   = 12,
	LeftUpperArm                   = 13,
	LeftLowerArm                   = 14,
	LeftHand                       = 15,
	RightClavicle                  = 16,
	RightUpperArm                  = 17,
	RightLowerArm                  = 18,
	RightHand                      = 19,
	EnumCount                      = 20,
	EHumanBone_MAX                 = 21,
};

enum class EPalBiomeType : uint8
{
	Undefined                      = 0,
	Meadow                         = 1,
	Desert                         = 2,
	Coast                          = 3,
	IceSnow                        = 4,
	Volcano                        = 5,
	CentralCity                    = 6,
	SkyCityCity                    = 7,
	WorldTree                      = 8,
	EPalBiomeType_MAX              = 9,
};

enum class EPalAudioBus : uint8
{
	None                           = 0,
	Master                         = 1,
	BGM                            = 2,
	JINGLE                         = 3,
	SE                             = 4,
	Ambient                        = 5,
	PalVoice                       = 6,
	HumanVoice                     = 7,
	UI                             = 8,
	MAX                            = 9,
};

enum class EPalStatusID : uint8
{
	None                           = 0,
	ControlSP                      = 1,
	GainHP                         = 2,
	StepCooldown                   = 3,
	DrownCheck                     = 4,
	Poison                         = 5,
	UNKOTimer                      = 6,
	Stan                           = 7,
	Coma                           = 8,
	Sleep                          = 9,
	Overwork                       = 10,
	Happiness                      = 11,
	Resistance                     = 12,
	Moratorium                     = 13,
	Drown                          = 14,
	Dying                          = 15,
	ShieldRecovery                 = 16,
	FallDamage                     = 17,
	LavaDamage                     = 18,
	Burn                           = 19,
	Wetness                        = 20,
	Freeze                         = 21,
	Electrical                     = 22,
	Muddy                          = 23,
	IvyCling                       = 24,
	Darkness                       = 25,
	AttackUp                       = 26,
	DefenseUp                      = 27,
	CollectItem                    = 28,
	LifeSteal                      = 29,
	EPalStatusID_MAX               = 30,
};

enum class EPalLanguageType : uint8
{
	JP                             = 0,
	EN                             = 1,
	ZH_HANS                        = 2,
	ZH_HANT                        = 3,
	FR                             = 4,
	IT                             = 5,
	DE                             = 6,
	ES                             = 7,
	KO                             = 8,
	PT_BR                          = 9,
	RU                             = 10,
	EPalLanguageType_MAX           = 11,
};

enum class EPalDungeonInstanceBossState : uint8
{
	Spawned                        = 0,
	Dead                           = 1,
	EPalDungeonInstanceBossState_MAX = 2,
};

enum class EPalMapObjectConcreteModelModuleType : uint8
{
	None                           = 0,
	ItemContainer                  = 1,
	CharacterContainer             = 2,
	Workee                         = 3,
	Energy                         = 4,
	StatusObserver                 = 5,
	ItemStack                      = 6,
	Switch                         = 7,
	PlayerRecord                   = 8,
	BaseCampPassiveEffect          = 9,
	PasswordLock                   = 10,
	EPalMapObjectConcreteModelModuleType_MAX = 11,
};

enum class EPalOrganizationType : uint8
{
	None                           = 0,
	Guild                          = 1,
	Police                         = 2,
	City                           = 3,
	Brigade                        = 4,
	TeamBlackHunter                = 5,
	TeamFireCult                   = 6,
	TeamWelfareGroup               = 7,
	MAX                            = 8,
};

enum class EPalFadeWidgetType : uint8
{
	Invalid                        = 0,
	SimpleColor                    = 1,
	Loading                        = 2,
	EPalFadeWidgetType_MAX         = 3,
};

enum class EPalHUDWidgetPriority : uint8
{
	Default                        = 0,
	EnemyMark                      = 1,
	DamagePopUp                    = 2,
	PlayerInputGuard               = 3,
	PlayerUI                       = 4,
	CaptureingLoupe                = 5,
	CaptureReticle                 = 6,
	InteractIndicator              = 7,
	BuildingUI                     = 8,
	RadialMenu                     = 9,
	GameOverUI                     = 10,
	DebugInfo                      = 11,
	EPalHUDWidgetPriority_MAX      = 12,
};

enum class EPalWorldHUDWidgetBlueprintType : uint8
{
	Undefined                      = 0,
	ConvertItem                    = 1,
	ProductItem                    = 2,
	FarmCrop                       = 3,
	FarmBlockV2                    = 4,
	BuildProgress                  = 5,
	LackElectricity                = 6,
	RecoverPal                     = 7,
	HatchingPalEgg                 = 8,
	GenerateEnergy                 = 9,
	HeadupWantFood                 = 10,
	HeadupPossessItem              = 11,
	HeadupInvader                  = 12,
	BossEntryWait                  = 13,
	BreedFarm                      = 14,
	MapObjectHP                    = 15,
	CommonWorkRequirement          = 16,
	EPalWorldHUDWidgetBlueprintType_MAX = 17,
};

enum class EPalUIRewardDisplayType : uint8
{
	Default                        = 0,
	GetItem                        = 1,
	HatchedPal                     = 2,
	FastTravel                     = 3,
	DefeatBoss                     = 4,
	EPalUIRewardDisplayType_MAX    = 5,
};

enum class EPalWidgetBlueprintType : uint8
{
	Undefined                      = 0,
	Dialog                         = 1,
	MonsterDetail                  = 2,
	WorldMap                       = 3,
	ConvertItemDetail              = 4,
	CharacterRankUp                = 5,
	RecoverOtomo                   = 6,
	ItemChest                      = 7,
	WorkerRadialMenu               = 8,
	FoodBox                        = 9,
	SelectItem_PlayerInventory     = 10,
	PlayerStatusOperation          = 11,
	PalStatusOperation             = 12,
	CommonReward                   = 13,
	MapObjectSecuritySetting       = 14,
	PasswordSetting                = 15,
	BaseCampWorkHard               = 16,
	CutsceneOverlay                = 17,
	EPalWidgetBlueprintType_MAX    = 18,
};

enum class EPalFadeWidgetLayerType : uint8
{
	Invalid                        = 0,
	Common_Lowest                  = 1,
	Common_Mid                     = 2,
	Common_Highest                 = 3,
	Loading                        = 4,
	Loading_WorldPartition         = 5,
	Loading_SucceedRequestEnterExitStageInClient = 6,
	EPalFadeWidgetLayerType_MAX    = 7,
};

enum class EPalIncidentState : uint8
{
	None                           = 0,
	Initialized                    = 1,
	Executing                      = 2,
	Completed                      = 3,
	Canceled                       = 4,
	InstanceCreateFailed           = 255,
};

enum class EPalFoodStatusEffectType : uint8
{
	None                           = 0,
	Attack                         = 1,
	Defense                        = 2,
	HungerResist                   = 3,
	SANResist                      = 4,
	WorkSpeed                      = 5,
	EPalFoodStatusEffectType_MAX   = 6,
};

enum class EPalTribeID : uint8
{
	None                           = 0,
	Anubis                         = 1,
	Baphomet                       = 2,
	Baphomet_Dark                  = 3,
	Bastet                         = 4,
	Bastet_Ice                     = 5,
	Boar                           = 6,
	Carbunclo                      = 7,
	ColorfulBird                   = 8,
	Deer                           = 9,
	DrillGame                      = 10,
	Eagle                          = 11,
	ElecPanda                      = 12,
	Ganesha                        = 13,
	Garm                           = 14,
	Gorilla                        = 15,
	Hedgehog                       = 16,
	Hedgehog_Ice                   = 17,
	Kirin                          = 18,
	Kitsunebi                      = 19,
	LittleBriarRose                = 20,
	Mutant                         = 21,
	Owl                            = 22,
	Penguin                        = 23,
	RaijinDaughter                 = 24,
	SharkKid                       = 25,
	SheepBall                      = 26,
	Umihebi                        = 27,
	Werewolf                       = 28,
	WindChimes                     = 29,
	Suzaku                         = 30,
	Suzaku_Water                   = 31,
	FireKirin                      = 32,
	FairyDragon                    = 33,
	FairyDragon_Water              = 34,
	SweetsSheep                    = 35,
	WhiteTiger                     = 36,
	Alpaca                         = 37,
	Serpent                        = 38,
	Serpent_Ground                 = 39,
	DarkCrow                       = 40,
	BlueDragon                     = 41,
	PinkCat                        = 42,
	NegativeKoala                  = 43,
	FengyunDeeper                  = 44,
	VolcanicMonster                = 45,
	VolcanicMonster_Ice            = 46,
	GhostBeast                     = 47,
	RobinHood                      = 48,
	LazyDragon                     = 49,
	LazyDragon_Electric            = 50,
	AmaterasuWolf                  = 51,
	LizardMan                      = 52,
	Blueplatypus                   = 53,
	BlackFurDragon                 = 54,
	BeardedDragon                  = 55,
	BirdDragon                     = 56,
	BirdDragon_Ice                 = 57,
	PinkKangaroo                   = 58,
	ChickenPal                     = 59,
	FlowerDinosaur                 = 60,
	FlowerDinosaur_Electric        = 61,
	ElecCat                        = 62,
	IceHorse                       = 63,
	IceHorse_Dark                  = 64,
	GrassMammoth                   = 65,
	CatVampire                     = 66,
	SakuraSaurus                   = 67,
	SakuraSaurus_Water             = 68,
	Horus                          = 69,
	KingBahamut                    = 70,
	BerryGoat                      = 71,
	IceDeer                        = 72,
	BlackGriffon                   = 73,
	WhiteMoth                      = 74,
	CuteFox                        = 75,
	FoxMage                        = 76,
	PinkLizard                     = 77,
	WaterLizard                    = 78,
	ElecLion                       = 79,
	GuardianDog                    = 80,
	GrassDragon                    = 81,
	WizardOwl                      = 82,
	Kelpie                         = 83,
	NegativeOctopus                = 84,
	CowPal                         = 85,
	Yeti                           = 86,
	Yeti_Grass                     = 87,
	VioletFairy                    = 88,
	HawkBird                       = 89,
	FlowerRabbit                   = 90,
	LilyQueen                      = 91,
	LilyQueen_Dark                 = 92,
	QueenBee                       = 93,
	SoldierBee                     = 94,
	CatBat                         = 95,
	GrassPanda                     = 96,
	GrassPanda_Electric            = 97,
	FlameBuffalo                   = 98,
	ThunderDog                     = 99,
	CuteMole                       = 100,
	BlackMetalDragon               = 101,
	GrassRabbitMan                 = 102,
	IceFox                         = 103,
	JetDragon                      = 104,
	DreamDemon                     = 105,
	Monkey                         = 106,
	Manticore                      = 107,
	Manticore_Dark                 = 108,
	KingAlpaca                     = 109,
	PlantSlime                     = 110,
	DarkMutant                     = 111,
	MopBaby                        = 112,
	MopKing                        = 113,
	CatMage                        = 114,
	PinkRabbit                     = 115,
	ThunderBird                    = 116,
	HerculesBeetle                 = 117,
	SaintCentaur                   = 118,
	NightFox                       = 119,
	CaptainPenguin                 = 120,
	WeaselDragon                   = 121,
	SkyDragon                      = 122,
	HadesBird                      = 123,
	RedArmorBird                   = 124,
	Ronin                          = 125,
	FlyingManta                    = 126,
	BlackCentaur                   = 127,
	FlowerDoll                     = 128,
	NaughtyCat                     = 129,
	CuteButterfly                  = 130,
	DarkScorpion                   = 131,
	ThunderDragonMan               = 132,
	WoolFox                        = 133,
	SifuDog                        = 134,
	TentacleTurtle                 = 135,
	GoldenHorse                    = 136,
	BadCatgirl                     = 137,
	BrownRabbit                    = 138,
	FeatherOstrich                 = 139,
	WingGolem                      = 140,
	ScorpionMan                    = 141,
	BlueberryFairy                 = 142,
	LazyCatfish                    = 143,
	Deer_Ground                    = 144,
	FireKirin_Dark                 = 145,
	KingAlpaca_Ice                 = 146,
	RobinHood_Ground               = 147,
	GrassMammoth_Ice               = 148,
	Kelpie_Fire                    = 149,
	SharkKid_Fire                  = 150,
	LizardMan_Fire                 = 151,
	LavaGirl                       = 152,
	FlameBambi                     = 153,
	Umihebi_Fire                   = 154,
	WindChimes_Ice                 = 155,
	Human                          = 156,
	EPalTribeID_MAX                = 157,
};

enum class EPalGenusCategoryType : uint8
{
	None                           = 0,
	Humanoid                       = 1,
	FourLegged                     = 2,
	Dragon                         = 3,
	Fish                           = 4,
	Bird                           = 5,
	Monster                        = 6,
	Other                          = 7,
	EPalGenusCategoryType_MAX      = 8,
};

enum class EPalCharacterNaturalUpdateType : uint8
{
	Player                         = 0,
	OtomoPal                       = 1,
	BaseCampPal                    = 2,
	EPalCharacterNaturalUpdateType_MAX = 3,
};

enum class EPalInteractiveObjectActionType : uint8
{
	None                           = 0,
	Interact1                      = 1,
	Interact2                      = 2,
	Interact3                      = 3,
	Interact4                      = 4,
	EPalInteractiveObjectActionType_MAX = 5,
};

enum class EPalLogType : uint8
{
	None                           = 0,
	CaptureSuccess                 = 1,
	CaptureFailed_LowBallLevel     = 2,
	CaptureFailed_HighHP           = 3,
	CaptureFailed_BounceBall       = 4,
	CaptureFailed_OutOfBall        = 5,
	CaptureFailed_TowerBoss        = 6,
	CaptureFailed_PlayerPal        = 7,
	StartInvaderMarch              = 8,
	EndInvaderMarch_Win            = 9,
	EndInvaderMarch_Timeout        = 10,
	DropPal                        = 11,
	OtomoLowHealth_Phase1          = 12,
	OtomoLowHealth_Phase2          = 13,
	OtomoLowHealth_Phase3          = 14,
	OtomoEatFood                   = 15,
	OtomoPalDown                   = 16,
	OtomoPalDeath                  = 17,
	OtomoPalEffectiveAttack        = 18,
	OtomoPalDefeatEnemy            = 19,
	GetItem                        = 20,
	ShippingItem                   = 21,
	FullInventoryNotice            = 22,
	StartWorldDataAutoSave         = 23,
	SuccessedWorldDataAutoSave     = 24,
	FailedWorldDataAutoSave        = 25,
	StartPlayerDataAutoSave        = 26,
	SuccessedPlayerDataAutoSave    = 27,
	FailedPlayerDataAutoSave       = 28,
	WorkerPalSanityLowWarning      = 29,
	WorkerPalComplateItemConvert   = 30,
	WorkerPalComplateBuild         = 31,
	WorkerPalStartBuild            = 32,
	WorkerPalStartRepair           = 33,
	WorkerPalStartWork             = 34,
	WorkerPalStartWork_CollectResource = 35,
	WorkerPalStartWork_ProductResource_Deforest = 36,
	WorkerPalStartWork_ProductResource_Mining = 37,
	WorkerEvent_DestroyBuilding    = 38,
	WorkerEvent_DodgeWork          = 39,
	WorkerEvent_DodgeWork_Short    = 40,
	WorkerEvent_DodgeWork_Sleep    = 41,
	WorkerEvent_EatTooMuch         = 42,
	WorkerEvent_Escape             = 43,
	WorkerEvent_FightWithFriend    = 44,
	WorkerEvent_OverworkDeath      = 45,
	WorkerEvent_Sick               = 46,
	WorkerEvent_Trantrum           = 47,
	WorkerEvent_TurnFoodBox        = 48,
	BaseCampTask_Progress_BuildObject = 49,
	BaseCampTask_Complete          = 50,
	VisitorSpawn                   = 51,
	VisitorArrived                 = 52,
	VisitorReturn                  = 53,
	OverWeightInventory            = 54,
	SkillTargetNotFound            = 55,
	SkillNotAvailable              = 56,
	SkillExecute                   = 57,
	SkillExecuteInBaseCamp         = 58,
	SkillExecuteHealing            = 59,
	SurvivorExp                    = 60,
	PartnerSkillExecute_Berserk    = 61,
	PartnerSkillExecute_NightRunner = 62,
	ObtainNote                     = 63,
	OutdoorBedNortice              = 64,
	EPalLogType_MAX                = 65,
};

enum class EPalItemTypeB : uint8
{
	None                           = 0,
	WeaponMelee                    = 1,
	WeaponBow                      = 2,
	WeaponCrossbow                 = 3,
	WeaponHandgun                  = 4,
	WeaponAssaultRifle             = 5,
	WeaponSniperRifle              = 6,
	WeaponRocketLauncher           = 7,
	WeaponShotgun                  = 8,
	WeaponFlameThrower             = 9,
	WeaponGatlingGun               = 10,
	WeaponCollectionTool           = 11,
	WeaponThrowObject              = 12,
	SPWeaponCaptureBall            = 13,
	SPWeaponDamageTrap             = 14,
	SPWeaponCaptureTrap            = 15,
	SPWeaponCaptureRope            = 16,
	ArmorHead                      = 17,
	ArmorBody                      = 18,
	Accessory                      = 19,
	MaterialOre                    = 20,
	MaterialJewelry                = 21,
	MaterialIngot                  = 22,
	MaterialWood                   = 23,
	MaterialStone                  = 24,
	MaterialProccessing            = 25,
	MaterialMonster                = 26,
	MaterialPalEgg                 = 27,
	ConsumeBandage                 = 28,
	ConsumeSeed                    = 29,
	ConsumeBullet                  = 30,
	ConsumeWazaMachine             = 31,
	ConsumeTechnologyBook          = 32,
	ConsumeOther                   = 33,
	FoodMeat                       = 34,
	FoodVegetable                  = 35,
	FoodFish                       = 36,
	FoodDishMeat                   = 37,
	FoodDishVegetable              = 38,
	FoodDishFish                   = 39,
	FoodProcessed                  = 40,
	Essential                      = 41,
	Essential_UnlockPlayerFuture   = 42,
	Glider                         = 43,
	Shield                         = 44,
	Money                          = 45,
	Medicine                       = 46,
	Drug                           = 47,
	MonsterEquipWeapon             = 48,
	Blueprint                      = 49,
	EPalItemTypeB_MAX              = 50,
};

enum class EPalItemTypeA : uint8
{
	None                           = 0,
	Weapon                         = 1,
	SpecialWeapon                  = 2,
	Armor                          = 3,
	Accessory                      = 4,
	Material                       = 5,
	Consume                        = 6,
	Ammo                           = 7,
	Food                           = 8,
	Essential                      = 9,
	Glider                         = 10,
	MonsterEquipWeapon             = 11,
	Blueprint                      = 12,
	EPalItemTypeA_MAX              = 13,
};

enum class EPalPlayerInventoryType : uint8
{
	Common                         = 0,
	DropSlot                       = 1,
	Essential                      = 2,
	WeaponLoadout                  = 3,
	PlayerEquipArmor               = 4,
	FoodEquip                      = 5,
	None                           = 6,
	EPalPlayerInventoryType_MAX    = 7,
};

enum class EPalLocationType : uint8
{
	Undefined                      = 0,
	Point                          = 1,
	PointStatic                    = 2,
	PointFastTravel                = 3,
	PointBaseCamp                  = 4,
	PointPlayer                    = 5,
	PointMapObject                 = 6,
	PointCharacter                 = 7,
	PointDungeonPortal             = 8,
	PointStaticRespawn             = 9,
	PointBossTower                 = 10,
	DroppedCharacter               = 11,
	DroppedChest                   = 12,
	Area                           = 13,
	CustomMarker                   = 14,
	FieldBoss                      = 15,
	EPalLocationType_MAX           = 16,
};

enum class EPalItemOperationResult : uint8
{
	Success                        = 0,
	SuccessNoOperation             = 1,
	FailedTerminatedManager        = 2,
	FailedNotExistsInventoryData   = 3,
	FailedContainerOverflowSlotNum = 4,
	FailedContainerItemInfoOverSlotNum = 5,
	FailedContainerOverflowItemsInSlot = 6,
	FailedContainerNotFoundContainer = 7,
	FailedContainerNotFoundSlot    = 8,
	FailedContainerIsLocalOnly     = 9,
	FailedContainerNotEqualsId     = 10,
	FailedCreateDynamicItemData    = 11,
	FailedNoDynamicItemIds         = 12,
	FailedNotFoundContainer        = 13,
	FailedNotFoundSlot             = 14,
	FailedNotFoundStaticItemData   = 15,
	FailedNotEnoughSlotSpace       = 16,
	FailedSameSlotUseProduceAndConsume = 17,
	FailedNotEnoughConsumes        = 18,
	FailedInValidItemInSlot        = 19,
	FailedNotEnoughNumInSlot       = 20,
	FailedNotEqualRequiredItemInSlot = 21,
	FailedGetLocalSlotInServer     = 22,
	FailedEmptyConsumeItemInfo     = 23,
	FailedSlotCountIsZero          = 24,
	FailedCannotAggregateSlotItem  = 25,
	FailedInvalidPermission        = 26,
	FailedRestrictedOperation      = 27,
	FailedRecievedItemNotEqual     = 28,
	FailedTransactionLockedOperation = 29,
	FailedNotFoundRowNameOrHash    = 30,
	FailedUnknown                  = 31,
	FailedUnknownLogOutput         = 32,
	EPalItemOperationResult_MAX    = 33,
};

enum class EPalMapObjectConvertItemModelRequestResult : uint8
{
	Success                        = 0,
	FailedInvalidRecipeId          = 1,
	EPalMapObjectConvertItemModelRequestResult_MAX = 2,
};

enum class EPalMapObjectEnergyModuleStatusType : uint8
{
	Providable                     = 0,
	Waiting                        = 1,
	EPalMapObjectEnergyModuleStatusType_MAX = 2,
};

enum class EPalFarmCropState : uint8
{
	None                           = 0,
	NoSelect                       = 1,
	Watered                        = 2,
	Growup                         = 3,
	Harvestable                    = 4,
	Seeding                        = 5,
	EPalFarmCropState_MAX          = 6,
};

enum class EPalFoliagePresetType : uint8
{
	None                           = 0,
	NormalTree_L                   = 1,
	LowTree                        = 2,
	EPalFoliagePresetType_MAX      = 3,
};

enum class EPalContainerUsageType : uint8
{
	None                           = 0,
	ItemStorage                    = 1,
	EPalContainerUsageType_MAX     = 2,
};

enum class EPalMapObjectItemContainerSlotAttribute : uint8
{
	Undefined                      = 0,
	Input                          = 1,
	PublicOutput                   = 2,
	FoodProvidable                 = 3,
	CannotTransport                = 4,
	EPalMapObjectItemContainerSlotAttribute_MAX = 5,
};

enum class EPalMapObjectTreasureGradeType : uint8
{
	Grade1                         = 0,
	Grade2                         = 1,
	Grade3                         = 2,
	Grade4                         = 3,
	Grade5                         = 4,
	Grade6                         = 5,
	EPalMapObjectTreasureGradeType_MAX = 6,
};

enum class EPalMapObjectVisualEffectType : uint8
{
	Burn                           = 0,
	EPalMapObjectVisualEffectType_MAX = 1,
};

enum class EPalMapObjectPasswordLockState : uint8
{
	Lock                           = 0,
	Unlock                         = 1,
	EPalMapObjectPasswordLockState_MAX = 2,
};

enum class EPalMapObjectSwitchState : uint8
{
	On                             = 0,
	Off                            = 1,
	EPalMapObjectSwitchState_MAX   = 2,
};

enum class EPalNPCTalkUIType : uint8
{
	None                           = 0,
	FreeTalk                       = 1,
	NormalShop                     = 2,
	WeaponShop                     = 3,
	PalShop                        = 4,
	QuestOrder                     = 5,
	RandomEventShop                = 6,
	EPalNPCTalkUIType_MAX          = 7,
};

enum class EPalOptionGraphicsLevel : uint8
{
	None                           = 0,
	VeryLow                        = 1,
	Low                            = 2,
	Medium                         = 3,
	High                           = 4,
	VeryHigh                       = 5,
	EPalOptionGraphicsLevel_MAX    = 6,
};

enum class EPalKeyConfigAxisFilterType : uint8
{
	All                            = 0,
	Plus                           = 1,
	Minus                          = 2,
	EPalKeyConfigAxisFilterType_MAX = 3,
};

enum class EPalOtomoPalOrderType : uint8
{
	Default                        = 0,
	Warlike                        = 1,
	NotCombat                      = 2,
	EPalOtomoPalOrderType_MAX      = 3,
};

enum class EPalPassivePartnerSkillState : uint8
{
	None                           = 0,
	Active                         = 1,
	ActivateDelay                  = 2,
	Inactive                       = 3,
	ActivateLocked                 = 4,
	EPalPassivePartnerSkillState_MAX = 5,
};

enum class EPalKeyConfigCategory : uint8
{
	MouseAndKeyboard               = 0,
	GamePad                        = 1,
	EPalKeyConfigCategory_MAX      = 2,
};

enum class EPalRandomIncidentActionNotifyType : uint8
{
	None                           = 0,
	RestartExcludedSpawner         = 1,
	EPalRandomIncidentActionNotifyType_MAX = 2,
};

enum class EPalRandomIncidentSpawnerAreaType : uint8
{
	Unknown                        = 0,
	Spawn                          = 1,
	Exclusion                      = 2,
	Action                         = 3,
	End                            = 4,
	EPalRandomIncidentSpawnerAreaType_MAX = 5,
};

enum class EPalRidePositionType : uint8
{
	None                           = 0,
	HorseRide                      = 1,
	BiggerHorseRide                = 2,
	SitRide                        = 3,
	BackRide                       = 4,
	EPalRidePositionType_MAX       = 5,
};

enum class EPalAsyncSaveProcessState : uint8
{
	Saving                         = 0,
	Completed                      = 1,
	Failed                         = 2,
	EPalAsyncSaveProcessState_MAX  = 3,
};

enum class EWeaponAnimationType : uint8
{
	None                           = 0,
	PullTrigger                    = 1,
	Aiming                         = 2,
	Shoot                          = 3,
	EWeaponAnimationType_MAX       = 4,
};

enum class EWeaponAnimationPoseType : uint8
{
	None                           = 0,
	Stand                          = 1,
	Crouch                         = 2,
	Riding                         = 3,
	EWeaponAnimationPoseType_MAX   = 4,
};

enum class EPalShopBuyResultType : uint8
{
	Successed                      = 0,
	Failed_InvalidBuyNum           = 1,
	Failed_NotEnoughStock          = 2,
	Failed_NotEnoughMoney          = 3,
	Failed_NotEnoughItemSlot       = 4,
	Failed_NotEnoughCharacterSlot  = 5,
	Failed_ExistReservedProcess    = 6,
	Failed_NotFoundItemContainer   = 7,
	Failed_NotFoundPlayerInventoryData = 8,
	Failed_NotFoundPlayerMoneyData = 9,
	Failed_NotFoundProduct         = 10,
	Failed_NotFoundShop            = 11,
	Failed_NotFoundStoredPal       = 12,
	Unknown                        = 13,
	EPalShopBuyResultType_MAX      = 14,
};

enum class EPalSkeletalTickLayer : uint8
{
	Default                        = 0,
	Ragdoll                        = 1,
	EPalSkeletalTickLayer_MAX      = 2,
};

enum class EPalSkeletalMeshType : uint8
{
	Normal                         = 0,
	Head                           = 1,
	Hair                           = 2,
	Body                           = 3,
	HairAttachAccessory            = 4,
	EPalSkeletalMeshType_MAX       = 5,
};

enum class EPalTutorialTriggerConditionType : uint8
{
	None                           = 0,
	GetItem                        = 1,
	MeetBuildRequirement           = 2,
	NewPal                         = 3,
	SamePal                        = 4,
	PalCount                       = 5,
	HighLevel                      = 6,
	RarePal                        = 7,
	CaptureFail                    = 8,
	OverWeight                     = 9,
	Night                          = 10,
	PalDeath                       = 11,
	BuildAppointment               = 12,
	SummonCampPal                  = 13,
	LearnSkill                     = 14,
	AttackNoWeapon                 = 15,
	ObtainNote                     = 16,
	LevelUp                        = 17,
	Hunger                         = 18,
	PalHunger                      = 19,
	SAN                            = 20,
	Sick                           = 21,
	SkipWork                       = 22,
	EPalTutorialTriggerConditionType_MAX = 23,
};

enum class EPalItemSlotPressType : uint8
{
	Normal                         = 0,
	LiftHalf                       = 1,
	LiftOne                        = 2,
	EPalItemSlotPressType_MAX      = 3,
};

enum class EPalWidgetInputMode : uint8
{
	Default                        = 0,
	GameAndMenu                    = 1,
	Game                           = 2,
	Menu                           = 3,
	EPalWidgetInputMode_MAX        = 4,
};

enum class EPalDamageTextSeq : uint8
{
	WaitStart                      = 0,
	Displaying                     = 1,
	WaitClose                      = 2,
	EPalDamageTextSeq_MAX          = 3,
};

enum class EPalUIPalCharacterRankUpRequestResult : uint8
{
	Success                        = 0,
	FailedNotValidMapObject        = 1,
	FailedNotSetTarget             = 2,
	FailedCannotRankUp             = 3,
	FailedNotEnoughResources       = 4,
	EPalUIPalCharacterRankUpRequestResult_MAX = 5,
};

enum class EPalUIPalCharacterRankUpSelectResourceType : uint8
{
	Newer                          = 0,
	Older                          = 1,
	EPalUIPalCharacterRankUpSelectResourceType_MAX = 2,
};

enum class EPalUIPalCharacterRankUpSelectMode : uint8
{
	SelectReferenceSlot            = 0,
	SelectIndividualSlot           = 1,
	EPalUIPalCharacterRankUpSelectMode_MAX = 2,
};

enum class EPalPalStorageManageRightType : uint8
{
	BaseCamp                       = 0,
	Party                          = 1,
	EPalPalStorageManageRightType_MAX = 2,
};

enum class EPalLimitVolumeFlag : int32
{
	Build                          = 1,
	EnemySpawn                     = 2,
	MapObjectSpawn                 = 4,
	BaseCampArea                   = 8,
	EPalLimitVolumeFlag_MAX        = 9,
};

enum class EPalObjectTypeQuery : uint8
{
	Water                          = 0,
	Attack                         = 1,
	PlayerPawn                     = 2,
	Temperature                    = 3,
	SystemVolume                   = 4,
	LiftedupPawn                   = 5,
	AroundInfoCollect              = 6,
	AttackHitOnly                  = 7,
	EPalObjectTypeQuery_MAX        = 8,
};

enum class EPalPhysicalSurface : uint8
{
	Default                        = 0,
	Ground                         = 1,
	Wood                           = 2,
	Grass                          = 3,
	Stone                          = 4,
	Water                          = 5,
	Snow                           = 6,
	Lava                           = 7,
	EPalPhysicalSurface_MAX        = 8,
};

enum class EPalTraceTypeQuery : uint8
{
	FluidTrace                     = 0,
	ReticleRayCast                 = 1,
	AISightRayCast                 = 2,
	VsGroundRayCast                = 3,
	WaterPlaneRayCast              = 4,
	ClimbRayCast                   = 5,
	RollingRayCast                 = 6,
	EPalTraceTypeQuery_MAX         = 7,
};

enum class EPalDialogType : uint8
{
	Alert                          = 0,
	YesNo                          = 1,
	OkCancel                       = 2,
	EPalDialogType_MAX             = 3,
};

enum class EPalLocalizeTextCategory : uint8
{
	None                           = 0,
	UICommon                       = 1,
	NpcTalk                        = 2,
	BaseCampWorkerEvent            = 3,
	PalMonsterName                 = 4,
	PalHumanName                   = 5,
	UniqueNPCName                  = 6,
	PrefixName                     = 7,
	PalShortDescription            = 8,
	PalLongDescription             = 9,
	PalFirstActivatedInfo          = 10,
	ItemName                       = 11,
	ItemDescription                = 12,
	MapObjectName                  = 13,
	BuildObjectDescription         = 14,
	BuildObjectCategory            = 15,
	SkillName                      = 16,
	SkillDesc                      = 17,
	TechnologyName                 = 18,
	TechnologyDescription          = 19,
	WorldMapRegionAndPlace         = 20,
	DungeonName                    = 21,
	NoteDescription                = 22,
	TutorialMessage                = 23,
	HelpGuide                      = 24,
	MapRespawnPoint                = 25,
	EPalLocalizeTextCategory_MAX   = 26,
};

enum class EPalPhysicsBoneType : uint8
{
	None                           = 0,
	AttachRope                     = 1,
	AttachRopeTrapLeg              = 2,
	EPalPhysicsBoneType_MAX        = 3,
};

enum class EPalSupportedPlatformType : uint8
{
	Unknown                        = 0,
	Windows                        = 1,
	WinGDK                         = 2,
	XB1                            = 3,
	XSX                            = 4,
	Linux                          = 5,
	EPalSupportedPlatformType_MAX  = 6,
};

enum class EPalShopLotteryBiomeType : uint8
{
	None                           = 0,
	Plain                          = 1,
	EPalShopLotteryBiomeType_MAX   = 2,
};

enum class EPalShopLotteryType : uint8
{
	None                           = 0,
	SimpleLottery                  = 1,
	BiomeLottery                   = 2,
	EPalShopLotteryType_MAX        = 3,
};

enum class EPalVisualEffectID : uint8
{
	None                           = 0,
	CaptureEmissive                = 1,
	SpawnFromBallEmissive          = 2,
	ReturnToBallEmissive           = 3,
	FadeOut                        = 4,
	FadeIn                         = 5,
	PalOutlineFadeIn               = 6,
	PalOutlineFadeOut              = 7,
	PalBattleOutline               = 8,
	Poison                         = 9,
	PowerUp                        = 10,
	DeadEffect                     = 11,
	FireCondition                  = 12,
	WaterCondition                 = 13,
	IceCondition                   = 14,
	ElectricityCondition           = 15,
	EarthCondition                 = 16,
	LeafCondition                  = 17,
	DarkCondition                  = 18,
	Swimming                       = 19,
	CameraVignette                 = 20,
	PalEffectFadeIn                = 21,
	PalEffectFadeOut               = 22,
	RarePal                        = 23,
	FunnelStartEmissive            = 24,
	FunnelEndEmissive              = 25,
	SelfDestructEmissive           = 26,
	Mosaic                         = 27,
	DebugRefresh                   = 28,
	EPalVisualEffectID_MAX         = 29,
};

enum class EPalWorkAssignableFixedType : uint8
{
	Both                           = 0,
	FreeOnly                       = 1,
	FixedOnly                      = 2,
	Cannot                         = 3,
	EPalWorkAssignableFixedType_MAX = 4,
};

enum class EPalWorkProgressState : uint8
{
	Init                           = 0,
	Workable                       = 1,
	NotWorkable                    = 2,
	Finish                         = 3,
	Dispose                        = 4,
	EPalWorkProgressState_MAX      = 5,
};

enum class EPalWorkBehaviourType : uint8
{
	Undefined                      = 0,
	StackAmount                    = 1,
	Participate                    = 2,
	EPalWorkBehaviourType_MAX      = 3,
};

enum class EPalAIActionBaseCampRecoverHungryEatState : uint8
{
	TurnToFood                     = 0,
	Eat                            = 1,
	EPalAIActionBaseCampRecoverHungryEatState_MAX = 2,
};

enum class EPalAIActionBaseCampSleepActivelyMode : uint8
{
	ApproachToBed                  = 0,
	WalkAround                     = 1,
	EPalAIActionBaseCampSleepActivelyMode_MAX = 2,
};

enum class EPalRequestSoftScriptPriorityAdd : uint8
{
	SoftScript                     = 0,
	SoftScriptInterrupt            = 1,
	SoftScript_2                   = 2,
	SoftScript_3                   = 3,
	SoftScript_4                   = 4,
	SoftScript_5                   = 5,
	SoftScript_6                   = 6,
	SoftScript_7                   = 7,
	SoftScript_8                   = 8,
	SoftScript_9                   = 9,
	EPalRequestSoftScriptPriorityAdd_MAX = 10,
};

enum class EPalAISensorSearchQueryPlayer : uint8
{
	IncludePlayer                  = 0,
	IgnorePlayer                   = 1,
	PlayerOnly                     = 2,
	EPalAISensorSearchQueryPlayer_MAX = 3,
};

enum class EPalAudioStateGroup : uint8
{
	InRaid                         = 0,
	InExplore                      = 1,
	InSpot                         = 2,
	InField                        = 3,
	InBattle                       = 4,
	Battle_Cute                    = 5,
	Battle_Cool                    = 6,
	Battle_Strong                  = 7,
	Battle_Human_Common            = 8,
	Battle_Human_Villain           = 9,
	Battle_FieldBoss               = 10,
	Battle_Legend                  = 11,
	Battle_TowerBoss               = 12,
	SpotName                       = 13,
	Biome                          = 14,
	RaidState                      = 15,
	Player_MainState               = 16,
	Player_BattleState             = 17,
	Player_Life                    = 18,
	EPalAudioStateGroup_MAX        = 19,
};

enum class EPalAudioState : uint8
{
	None                           = 0,
	VillageA                       = 1,
	VillageB                       = 2,
	BaseCamp                       = 3,
	InDoor                         = 4,
	BossRoom                       = 5,
	Grassland                      = 6,
	Forest                         = 7,
	Desert                         = 8,
	Mountain                       = 9,
	Caution                        = 10,
	Fight                          = 11,
	End                            = 12,
	Explore                        = 13,
	Battle                         = 14,
	Alive                          = 15,
	Dead                           = 16,
	EPalAudioState_MAX             = 17,
};

enum class EPalAudioRTPC : uint8
{
	Field_Time                     = 0,
	Sliding_Speed                  = 1,
	EPalAudioRTPC_MAX              = 2,
};

enum class EPalAudioTrigger : uint8
{
	None                           = 0,
	BattleWin                      = 1,
	RaidEnd                        = 2,
	Captured                       = 3,
	GameOver                       = 4,
	EPalAudioTrigger_MAX           = 5,
};

enum class EPalAudioFadeType : uint8
{
	None                           = 0,
	FadeIn                         = 1,
	FadeOut                        = 2,
	EPalAudioFadeType_MAX          = 3,
};

enum class EPalBaseCampAssignType : uint8
{
	None                           = 0,
	Work                           = 1,
	WorkAttack                     = 2,
	Defense                        = 3,
	EPalBaseCampAssignType_MAX     = 4,
};

enum class EPalBaseCampOperationResult : uint8
{
	Success                        = 0,
	FailedNotFoundNetworkTransmitter = 1,
	FailedNotFoundBaseCamp         = 2,
	FailedNotRequestedFromBaseCampPoint = 3,
	FailedNotFoundOwnerMapObjectModel = 4,
	FailedDismantleMapObject       = 5,
	EPalBaseCampOperationResult_MAX = 6,
};

enum class EPalBaseCampWorkerAssignResult : uint8
{
	Success                        = 0,
	FailedNotFoundBaseCamp         = 1,
	FailedNotFoundWork             = 2,
	FailedOverflowAssignCount      = 3,
	FailedCharacterHandleMissing   = 4,
	EPalBaseCampWorkerAssignResult_MAX = 5,
};

enum class EPalBaseCampWorkResult : uint8
{
	Success                        = 0,
	FailedNotFoundBaseCamp         = 1,
	FailedNotFoundWork             = 2,
	FailedNotMatchWorkType         = 3,
	EPalBaseCampWorkResult_MAX     = 4,
};

enum class EPalBaseCampModuleType : uint8
{
	None                           = 0,
	Energy                         = 1,
	Medical                        = 2,
	TransportItemDirector          = 3,
	ResourceCollector              = 4,
	ItemStorages                   = 5,
	FacilityReservation            = 6,
	ObjectMaintenance              = 7,
	PassiveEffect                  = 8,
	EPalBaseCampModuleType_MAX     = 9,
};

enum class EPalBaseCampWorkerTaskType : uint8
{
	Undefined                      = 0,
	IgnitionTorchAtNight           = 1,
	EPalBaseCampWorkerTaskType_MAX = 2,
};

enum class EPalBaseCampWorkerTaskCheck : uint8
{
	None                           = 0,
	SleepAtNight                   = 1,
	EPalBaseCampWorkerTaskCheck_MAX = 2,
};

enum class EPalBaseCampWorkerTaskCheckResponse : uint8
{
	ExistsTask                     = 0,
	EPalBaseCampWorkerTaskCheckResponse_MAX = 1,
};

enum class EPalBaseCampWorkerEventPriority : uint8
{
	Top                            = 0,
	Default                        = 1,
	EPalBaseCampWorkerEventPriority_MAX = 2,
};

enum class EPalBaseCampPassiveEffectType : uint8
{
	None                           = 0,
	WorkSuitability                = 1,
	WorkHard                       = 2,
	EPalBaseCampPassiveEffectType_MAX = 3,
};

enum class EPalBaseCampModuleTransportItemTransportPriority : uint8
{
	None                           = 0,
	BaseCampChest                  = 1,
	BaseCampChestHigh              = 2,
	Requirement                    = 3,
	FoodBox                        = 4,
	EPalBaseCampModuleTransportItemTransportPriority_MAX = 5,
};

enum class EPalBaseCampModuleTransportItemTransportableItemExtraType : uint8
{
	None                           = 0,
	OnlyCorruptible                = 1,
	EPalBaseCampModuleTransportItemTransportableItemExtraType_MAX = 2,
};

enum class EPalBaseCampFacilityRequestResult : uint8
{
	FailedNotExistsAnyFacilities   = 0,
	FailedNotExistsTheFacility     = 1,
	FailedAlreadyUsing             = 2,
	Success                        = 3,
	EPalBaseCampFacilityRequestResult_MAX = 4,
};

enum class EPalBuildInstallCheckModeType : uint8
{
	Normal                         = 0,
	InstallAtReticle               = 1,
	EPalBuildInstallCheckModeType_MAX = 2,
};

enum class EPalBuildObjectVisualType : uint8
{
	Invisible                      = 0,
	Normal                         = 1,
	Simulation                     = 2,
	CannotInstall                  = 3,
	Building                       = 4,
	BuildComplete                  = 5,
	DismantleTarget                = 6,
	Damage                         = 7,
	Repair                         = 8,
	EPalBuildObjectVisualType_MAX  = 9,
};

enum class EFailedCaptureType : uint8
{
	None                           = 0,
	NoMPZero                       = 1,
	TestFailed                     = 2,
	EFailedCaptureType_MAX         = 3,
};

enum class EPalCharacterContainerOperationResult : uint8
{
	Success                        = 0,
	FailedTerminatedManager        = 1,
	FailedIssueContainerId         = 2,
	FailedOverflowSlotNum          = 3,
	FailedNotFoundContainer        = 4,
	FailedNotFoundSlot             = 5,
	FailedNotFoundCharacter        = 6,
	FailedNotFoundCharacterParameter = 7,
	FailedIsLocalOnlyContainer     = 8,
	FailedNoContainerInfoInResponse = 9,
	FailedNotEnoughSlotSpace       = 10,
	FailedCannotGetSlotInfo        = 11,
	FailedChangedSlotInfoRequestedOne = 12,
	FailedCannotSetTargetHandle    = 13,
	FailedAlreadyLocked            = 14,
	FailedNotJoinedPlayer          = 15,
	FailedTransactionLocked        = 16,
	FailedSimple                   = 17,
	FailedServerCode               = 18,
	EPalCharacterContainerOperationResult_MAX = 19,
};

enum class EPalCharacterContainerSortType : uint8
{
	PaldexNo_Asc                   = 0,
	Level_Desc                     = 1,
	ElementType                    = 2,
	BossFlag                       = 3,
	EPalCharacterContainerSortType_MAX = 4,
};

enum class EPalCharacterStatusOperationName : uint8
{
	Undefined                      = 0,
	Attack                         = 1,
	Defence                        = 2,
	HP                             = 3,
	WorkSpeed                      = 4,
	EPalCharacterStatusOperationName_MAX = 5,
};

enum class EPalCoopSkillSearchType : uint8
{
	Undefined                      = 0,
	MapObject                      = 1,
	Character                      = 2,
	DungeonPortal                  = 3,
	EPalCoopSkillSearchType_MAX    = 4,
};

enum class EPalDungeonType : uint8
{
	Normal                         = 0,
	Fixed                          = 1,
	EPalDungeonType_MAX            = 2,
};

enum class EPalDungeonItemSpawnerType : uint8
{
	Normal                         = 0,
	Special                        = 1,
	EPalDungeonItemSpawnerType_MAX = 2,
};

enum class EPalFlyHeightType : uint8
{
	Stop                           = 0,
	ToFly                          = 1,
	ToLand                         = 2,
	EPalFlyHeightType_MAX          = 3,
};

enum class EPalGameModeType : uint8
{
	Title                          = 0,
	InGame                         = 1,
	EPalGameModeType_MAX           = 2,
};

enum class EPalGameSystemInitState : uint8
{
	Init                           = 0,
	InProgress                     = 1,
	Complete                       = 2,
	Failed                         = 3,
	EPalGameSystemInitState_MAX    = 4,
};

enum class EPalGameSystemInitFailedReason : uint8
{
	None                           = 0,
	WatchLog                       = 1,
	EPalGameSystemInitFailedReason_MAX = 2,
};

enum class EPalGameSystemInitProcessType : uint8
{
	Init                           = 0,
	WaitForInitSystems             = 1,
	ApplyWorldSaveData             = 2,
	ApplyPlayerSaveData            = 3,
	EPalGameSystemInitProcessType_MAX = 4,
};

enum class EPalGroupType : uint8
{
	Undefined                      = 0,
	Neutral                        = 1,
	Organization                   = 2,
	IndependentGuild               = 3,
	Guild                          = 4,
	EPalGroupType_MAX              = 5,
};

enum class EPalWorkerRadialMenuResult : uint8
{
	Cancel                         = 0,
	Feed                           = 1,
	ShowDetail                     = 2,
	MoveToBox                      = 3,
	MoveToOtomo                    = 4,
	Pet                            = 5,
	EPalWorkerRadialMenuResult_MAX = 6,
};

enum class EPalIncidentTalkType : uint8
{
	None                           = 0,
	OneTalk                        = 1,
	MultiTalk                      = 2,
	CharacterTalk                  = 3,
	EPalIncidentTalkType_MAX       = 4,
};

enum class EPalInteractiveObjectButtonType : uint8
{
	OnePush                        = 0,
	LongPush_WithGauge             = 1,
	LongPush_WithoutGauge          = 2,
	LongPush_Infinity              = 3,
	EPalInteractiveObjectButtonType_MAX = 4,
};

enum class EPalIVisitorNPCAction : uint8
{
	None                           = 0,
	ReturnToSpawnedPoint           = 1,
	Raid                           = 2,
	EPalIVisitorNPCAction_MAX      = 3,
};

enum class EPalDropItemType : uint8
{
	None                           = 0,
	UNKO                           = 1,
	Max                            = 2,
};

enum class EPalItemOperationType : uint8
{
	Undefined                      = 0,
	Product                        = 1,
	Move                           = 2,
	Dispose                        = 3,
	EPalItemOperationType_MAX      = 4,
};

enum class EPalCharacterLocationType : uint8
{
	None                           = 0,
	Normal                         = 1,
	Warning                        = 2,
	EPalCharacterLocationType_MAX  = 3,
};

enum class EPalMonsterControllerBaseCampLogType : uint8
{
	SuccessFixedAssign             = 0,
	FailedFixedAssignSimple        = 1,
	FailedFixedAssignWithTargetWork = 2,
	FailedFixedAssignOverflowWorkers = 3,
	FailedFixedAssignNoWorkInRange = 4,
	FailedFixedAssignNotAssignableOtomo = 5,
	FailedFixedAssignNoSuitability = 6,
	FailedFixedAssignNotWantToDo   = 7,
	EPalMonsterControllerBaseCampLogType_MAX = 8,
};

enum class EPalLogWidgetState : uint8
{
	In                             = 0,
	Wait                           = 1,
	Out                            = 2,
	End                            = 3,
	EPalLogWidgetState_MAX         = 4,
};

enum class EPalMapObjectType : uint8
{
	OnlyExist                      = 0,
	Foliage                        = 1,
	EPalMapObjectType_MAX          = 2,
};

enum class EPalMapObjectSpawnRequestType : uint8
{
	MapObject                      = 0,
	PlayerBuild                    = 1,
	EPalMapObjectSpawnRequestType_MAX = 2,
};

enum class EPalMapObjectConcreteModelAccessResult : uint8
{
	Success                        = 0,
	FailedMissing                  = 1,
	FailedInBuilding               = 2,
	EPalMapObjectConcreteModelAccessResult_MAX = 3,
};

enum class EPalMapObjectDefenseType : uint8
{
	Wait                           = 0,
	StationaryLauncher             = 1,
	EPalMapObjectDefenseType_MAX   = 2,
};

enum class EPalMapObjectMaterialType : uint8
{
	None                           = 0,
	Wood                           = 1,
	Stone                          = 2,
	EPalMapObjectMaterialType_MAX  = 3,
};

enum class EPalMapObjectDisposeOptionType : uint8
{
	NoDropItems                    = 0,
	NotAutoPickup                  = 1,
	OpenTreasureBox                = 2,
	Immediately                    = 3,
	NotNotifyOwnerSpawnerLevelObject = 4,
	ByUnloadStage                  = 5,
	DropBuildMaterials             = 6,
	EPalMapObjectDisposeOptionType_MAX = 7,
};

enum class EPalMapObjectItemCollectableType : uint8
{
	Pickup                         = 0,
	Work                           = 1,
	EPalMapObjectItemCollectableType_MAX = 2,
};

enum class EPalMapObjectInteractRestrictType : uint8
{
	SameGuildOnly                  = 0,
	Anyone                         = 1,
	EPalMapObjectInteractRestrictType_MAX = 2,
};

enum class EPalMapObjectFoodProviderPriority : uint8
{
	Normal                         = 0,
	Farm                           = 1,
	EPalMapObjectFoodProviderPriority_MAX = 2,
};

enum class EPalMapObjectWorkerAvailableFacilityType : uint8
{
	PalBed                         = 0,
	Amusement                      = 1,
	Undefined                      = 2,
	EPalMapObjectWorkerAvailableFacilityType_MAX = 3,
};

enum class EPalBaseCampFacilityUsageState : uint8
{
	Vacant                         = 0,
	Reserved                       = 1,
	Using                          = 2,
	EPalBaseCampFacilityUsageState_MAX = 3,
};

enum class EPalMapObjectModelConnectIndex : uint8
{
	Up                             = 0,
	Down                           = 1,
	Left                           = 2,
	Right                          = 3,
	Back                           = 4,
	Front                          = 5,
	AnyPlace                       = 254,
	None                           = 255,
};

enum class EPalMapObjectModelInitializeExtraParameterType : uint8
{
	Undefined                      = 0,
	Build                          = 1,
	SpawnedBy                      = 2,
	Spawner                        = 3,
	Item                           = 4,
	TreasureBox                    = 5,
	DropItem                       = 6,
	ItemDropObject                 = 7,
	Location                       = 8,
	InitialItem                    = 9,
	InitialCharacter               = 10,
	PalEgg                         = 11,
	Note                           = 12,
	Interact                       = 13,
	ItemContainerAttribute         = 14,
	ByPlayerUId                    = 15,
	InstanceId                     = 16,
	EPalMapObjectModelInitializeExtraParameterType_MAX = 17,
};

enum class EPalMasterDataExecPinType : uint8
{
	Success                        = 0,
	RowNotFound                    = 1,
	EPalMasterDataExecPinType_MAX  = 2,
};

enum class EPalNiagaraDataIterfaceSoundPlayerCommand : uint8
{
	None                           = 0,
	PlaySoundOneShot               = 1,
	EPalNiagaraDataIterfaceSoundPlayerCommand_MAX = 2,
};

enum class EPalNPCTalkProceedResult : uint8
{
	Failed                         = 0,
	CommandExecuted                = 1,
	AllCommandComplete             = 2,
	CommandExecutedAndContinueProcess = 3,
	EPalNPCTalkProceedResult_MAX   = 4,
};

enum class EPalNPCTalkCustomFunctionResult : uint8
{
	None                           = 0,
	ContinueProcess                = 1,
	BreakProcess                   = 2,
	EPalNPCTalkCustomFunctionResult_MAX = 3,
};

enum class EPalNPCTalkSelectedChoiceResult : uint8
{
	ExecutedBySystem               = 0,
	RequestClose                   = 1,
	EPalNPCTalkSelectedChoiceResult_MAX = 2,
};

enum class EPalNPCTalkCommand : uint8
{
	SimpleMessages                 = 0,
	ChoiceYesNo                    = 1,
	CustomChoice                   = 2,
	TalkerNameChange               = 3,
	CustomFunc                     = 4,
	CustomFuncBranch               = 5,
	EPalNPCTalkCommand_MAX         = 6,
};

enum class EPalNPCTalkSelectedChoiceCommand : uint8
{
	EndTalk                        = 0,
	ChangeSeqence                  = 1,
	CustomFunc                     = 2,
	EPalNPCTalkSelectedChoiceCommand_MAX = 3,
};

enum class EPalNPCSkinColor : uint8
{
	None                           = 0,
	White                          = 1,
	ReddishLight                   = 2,
	Light                          = 3,
	Default                        = 4,
	YellowishBrown                 = 5,
	Brown                          = 6,
	DarkBrown                      = 7,
	EPalNPCSkinColor_MAX           = 8,
};

enum class EPalNPCFaceType : uint8
{
	None                           = 0,
	Mobu_A                         = 1,
	Mobu_B                         = 2,
	Mobu_C                         = 3,
	Pocile                         = 4,
	Hunter                         = 5,
	Shop                           = 6,
	EPalNPCFaceType_MAX            = 7,
};

enum class EPalNPCHairStyleType : uint8
{
	None                           = 0,
	Mobu_A                         = 1,
	Mobu_B                         = 2,
	Mobu_C                         = 3,
	Mobu_D                         = 4,
	Mobu_E                         = 5,
	Pocile                         = 6,
	Hunter                         = 7,
	Shop                           = 8,
	EPalNPCHairStyleType_MAX       = 9,
};

enum class EPalNPCHairColorType : uint8
{
	None                           = 0,
	Black                          = 1,
	Silver                         = 2,
	LightBrown                     = 3,
	DarkBrown                      = 4,
	Beige                          = 5,
	Gold                           = 6,
	Ash                            = 7,
	Pink                           = 8,
	Red                            = 9,
	Violet                         = 10,
	EPalNPCHairColorType_MAX       = 11,
};

enum class EPalNPCClothesType : uint8
{
	None                           = 0,
	Mobu_A                         = 1,
	Mobu_B                         = 2,
	Mobu_C                         = 3,
	Mobu_D                         = 4,
	Mobu_E                         = 5,
	Pocile                         = 6,
	Hunter                         = 7,
	Shop                           = 8,
	EPalNPCClothesType_MAX         = 9,
};

enum class EPalNPCScaleType : uint8
{
	None                           = 0,
	S2                             = 1,
	S1                             = 2,
	M                              = 3,
	L1                             = 4,
	L2                             = 5,
	EPalNPCScaleType_MAX           = 6,
};

enum class EPalPlatformType : uint8
{
	Undefined                      = 0,
	XboxOne                        = 1,
	PS4                            = 2,
	XboxSeries                     = 3,
	PS5                            = 4,
	PC                             = 5,
	DedicatedServer                = 6,
	CoopHost                       = 7,
	EPalPlatformType_MAX           = 8,
};

enum class EPalOptionWorldMode : uint8
{
	None                           = 0,
	Single                         = 1,
	ListenMulti                    = 2,
	Dedicated_PvE                  = 3,
	Dedicated_PvP                  = 4,
	EPalOptionWorldMode_MAX        = 5,
};

enum class EPalPartnerSkillParameterQueryTag : uint8
{
	MainDamage                     = 0,
	EPalPartnerSkillParameterQueryTag_MAX = 1,
};

enum class EPalPassiveSkillEffectTargetType : uint8
{
	None                           = 0,
	ToSelf                         = 1,
	ToTrainer                      = 2,
	ToSelfAndTrainer               = 3,
	EPalPassiveSkillEffectTargetType_MAX = 4,
};

enum class EPalPlayerAccountState : uint8
{
	Uninitialized                  = 0,
	Initialized                    = 1,
	InNewCreation                  = 2,
	Login                          = 3,
	Logout                         = 4,
	EPalPlayerAccountState_MAX     = 5,
};

enum class EPalRadarChartDrawType : uint8
{
	Polygon                        = 0,
	Polygon_Bordered               = 1,
	OnlyBorder                     = 2,
	EPalRadarChartDrawType_MAX     = 3,
};

enum class EPalRandomIncidentSpawnerStatus : uint8
{
	Unknown                        = 0,
	Idle                           = 1,
	CoolDown                       = 2,
	Executing                      = 3,
	WaitPlayerOutside              = 4,
	EPalRandomIncidentSpawnerStatus_MAX = 5,
};

enum class EClassRepNodeMapping : uint8
{
	NotRouted                      = 0,
	RelevantAllConnections         = 1,
	Spatialize_Static              = 2,
	Spatialize_Dynamic             = 3,
	Spatialize_Dormancy            = 4,
	EClassRepNodeMapping_MAX       = 5,
};

enum class EPalApplySaveDataOrder : uint8
{
	Early                          = 0,
	Normal                         = 1,
	Late                           = 2,
	Num                            = 3,
	EPalApplySaveDataOrder_MAX     = 4,
};

enum class EPalSaveError : uint8
{
	Success                        = 0,
	NotFound                       = 1,
	Unknown                        = 2,
	EPalSaveError_MAX              = 3,
};

enum class EPalShopSellResultType : uint8
{
	Successed                      = 0,
	Failed                         = 1,
	EPalShopSellResultType_MAX     = 2,
};

enum class EPalStageType : uint8
{
	Undefined                      = 0,
	Dungeon                        = 1,
	BossBattle                     = 2,
	EPalStageType_MAX              = 3,
};

enum class EPalStageRequestResult : uint8
{
	FailedNotValidStage            = 0,
	FailedNotValidPlayerUId        = 1,
	FailedNotValidPlayerState      = 2,
	FailedNotValidPlayerController = 3,
	FailedNotValidPlayerCharacter  = 4,
	FailedNotValidLoginPlayer      = 5,
	FailedNotValidNetworkPlayerComponent = 6,
	FailedPlayerIsDead             = 7,
	FailedNotValidStageWorldSubsystem = 8,
	FailedGetStartPointTransform   = 9,
	FailedGetReturnToFieldPointTransform = 10,
	Success                        = 11,
	EPalStageRequestResult_MAX     = 12,
};

enum class EPalStagePlayerState : uint8
{
	Init                           = 0,
	WaitingStageLoad               = 1,
	Login                          = 2,
	InExiting                      = 3,
	EPalStagePlayerState_MAX       = 4,
};

enum class EPalTutorialTriggerType : uint8
{
	None                           = 0,
	AddItem                        = 1,
	IndividualParam                = 2,
	PlayerDeath                    = 3,
	Capture                        = 4,
	Common                         = 5,
	EPalTutorialTriggerType_MAX    = 6,
};

enum class EPalAIActionType : uint8
{
	None                           = 0,
	Action1                        = 1,
	Leave                          = 2,
	Cooperation                    = 3,
	Warning                        = 4,
	SideMove                       = 5,
	EPalAIActionType_MAX           = 6,
};

enum class EPalGeneralMontageType : uint8
{
	None                           = 0,
	GeneralAttackReady_Near        = 1,
	GeneralAttackReadyLoop_Near    = 2,
	GeneralAttackProcess_Near      = 3,
	GeneralAttackProcessLoop_Near  = 4,
	GeneralAttackAfter_Near        = 5,
	GeneralAttackReady_Far         = 6,
	GeneralAttackReadyLoop_Far     = 7,
	GeneralAttackProcess_Far       = 8,
	GeneralAttackProcessLoop_Far   = 9,
	GeneralAttackAfter_Far         = 10,
	Rolling                        = 11,
	Step_Forward                   = 12,
	Step_Back                      = 13,
	Step_Right                     = 14,
	Step_Left                      = 15,
	JumpPreliminary                = 16,
	JumpStart                      = 17,
	SleepStart                     = 18,
	SleepLoop                      = 19,
	SleepEnd                       = 20,
	BeLiftupStart                  = 21,
	BeLiftupLoop                   = 22,
	DamageAdditive                 = 23,
	HumanPetting_Standby_S         = 24,
	HumanPetting_Standby_L         = 25,
	HumanPetting_DoStroke_S        = 26,
	HumanPetting_DoStroke_SM       = 27,
	HumanPetting_DoStroke_M        = 28,
	HumanPetting_DoStroke_L        = 29,
	Climbing_ClimbUpAtTop          = 30,
	Grappling                      = 31,
	EatUpper                       = 32,
	Defense_Wait                   = 33,
	Ragdoll                        = 34,
	EPalGeneralMontageType_MAX     = 35,
};

enum class EPalRagdollPresetType : uint8
{
	None                           = 0,
	BeLiftup                       = 1,
	EPalRagdollPresetType_MAX      = 2,
};

enum class EPalCurrentActionNotifyType : uint8
{
	Attack                         = 0,
	Spawn                          = 1,
	Other                          = 2,
	EPalCurrentActionNotifyType_MAX = 3,
};

enum class EPalMonsterMovementType : uint8
{
	GroundOnly                     = 0,
	Fly                            = 1,
	FlyAndLanding                  = 2,
	Swim                           = 3,
	SwimGroundDamage               = 4,
	EPalMonsterMovementType_MAX    = 5,
};

enum class EPalEnemySpawnActorType : uint8
{
	Rifle                          = 0,
	ShotGun                        = 1,
	Bat                            = 2,
	RPG                            = 3,
	EPalEnemySpawnActorType_MAX    = 4,
};

enum class EPalEnemySpawnDefaultAction : uint8
{
	None                           = 0,
	StopStand                      = 1,
	Turn90                         = 2,
	Turn180                        = 3,
	PointPathWalk                  = 4,
	EPalEnemySpawnDefaultAction_MAX = 5,
};

enum class EPalFacialEyeType : uint8
{
	None                           = 0,
	Default                        = 1,
	Close                          = 2,
	HalfClose                      = 3,
	Pain                           = 4,
	Smile                          = 5,
	Anger                          = 6,
	Trouble                        = 7,
	GuruGuru                       = 8,
	EPalFacialEyeType_MAX          = 9,
};

enum class EPalFacialMouthType : uint8
{
	None                           = 0,
	Default                        = 1,
	Pain                           = 2,
	Smile                          = 3,
	Anger                          = 4,
	EPalFacialMouthType_MAX        = 5,
};

enum class EPalPettingSizeType : uint8
{
	Small                          = 0,
	SmallMiddle                    = 1,
	Medium                         = 2,
	Large                          = 3,
	EPalPettingSizeType_MAX        = 4,
};

enum class EPalLandingType : uint8
{
	None                           = 0,
	FootStep                       = 1,
	FootStep_S                     = 2,
	JumpLanding                    = 3,
	RollStep_Fwd                   = 4,
	RollStep_L                     = 5,
	RollStep_R                     = 6,
	RollStep_Bwd                   = 7,
	FootStep_Index_Begin           = 1,
	FootStep_Index_End             = 2,
	JumpLanding_Index_Begin        = 3,
	JumpLanding_Index_End          = 3,
	RollStep_Index_Begin           = 4,
	RollStep_Index_End             = 7,
	EPalLandingType_MAX            = 8,
};

enum class EPalAIMoveResultFailedType : uint8
{
	Undefined                      = 0,
	PartialNavMesh                 = 1,
	EPalAIMoveResultFailedType_MAX = 2,
};

enum class EPalActiveSkillSlotId : uint8
{
	Default                        = 0,
	PartnerSkill                   = 100,
	EPalActiveSkillSlotId_MAX      = 101,
};

enum class EPalSpawnedCharacterType : uint8
{
	Common                         = 0,
	Rare                           = 1,
	FieldBoss                      = 2,
	RandomDungeonBoss              = 3,
	ImprisonmentBoss               = 4,
	TowerBoss                      = 5,
	EPalSpawnedCharacterType_MAX   = 6,
};

enum class EPalMonsterEquipWeaponSocketType : uint8
{
	None                           = 0,
	Socket_EquipWeapon_1           = 1,
	Socket_EquipWeapon_2           = 2,
	Socket_EquipWeapon_3           = 3,
	EPalMonsterEquipWeaponSocketType_MAX = 4,
};

enum class EPalCaptureSphereLevelType : uint8
{
	Undefined                      = 0,
	Normal                         = 1,
	Mega                           = 2,
	Giga                           = 3,
	Master                         = 4,
	Tera                           = 5,
	Legend                         = 6,
	EPalCaptureSphereLevelType_MAX = 7,
};

enum class EPalPlayerSprintStaminaDecreaseType : uint8
{
	Ignore                         = 0,
	OnlyBattleMode                 = 1,
	Always                         = 2,
	EPalPlayerSprintStaminaDecreaseType_MAX = 3,
};

enum class EPalUIConvertItemRequestStartResponse : uint8
{
	Enable                         = 0,
	FailedNotSelectedRecipe        = 1,
	FailedNotExistConcreteModel    = 2,
	FailedNotExistEnergyModule     = 3,
	FailedNotEnoughItems           = 4,
	FailedNotEnoughEnergy          = 5,
	EPalUIConvertItemRequestStartResponse_MAX = 6,
};

enum class EPalDamageTextType : uint8
{
	DoubleRegist                   = 0,
	SingleRegist                   = 1,
	Normal                         = 2,
	SignelWeak                     = 3,
	DoubleWeak                     = 4,
	EPalDamageTextType_MAX         = 5,
};

enum class EPalUIConditionType : uint8
{
	None                           = 0,
	Happy                          = 1,
	Unhappy                        = 2,
	MinorInjury                    = 3,
	Severe                         = 4,
	Dying                          = 5,
	Hunger                         = 6,
	Starvation                     = 7,
	Cold                           = 8,
	Sprain                         = 9,
	Bulimia                        = 10,
	GastricUlcer                   = 11,
	Fracture                       = 12,
	Weakness                       = 13,
	DepressionSprain               = 14,
	DisturbingElement              = 15,
	EPalUIConditionType_MAX        = 16,
};

enum class EPalUIWorkerCommentType : uint8
{
	None                           = 0,
	Normal                         = 1,
	Normal_Craftsman               = 2,
	Normal_Sabotage                = 3,
	Dying                          = 4,
	Hungry_Half                    = 5,
	Hungry_Low                     = 6,
	Hungry_Starvation              = 7,
	LowSanity_Half                 = 8,
	LowSanity_Warning              = 9,
	LowSanity_Emergency            = 10,
	Illnesses                      = 11,
	Injuries                       = 12,
	Bulimia                        = 13,
	Weakness                       = 14,
	DisturbingElement              = 15,
	DodgeWork                      = 16,
	DodgeWork_Short                = 17,
	DodgeWork_Sleep                = 18,
	EatTooMuch                     = 19,
	Trantrum                       = 20,
	EPalUIWorkerCommentType_MAX    = 21,
};

enum class EPalUIServerListSortType : uint8
{
	PlayerNum                      = 0,
	Day                            = 1,
	EPalUIServerListSortType_MAX   = 2,
};

enum class EPalUIServerListFilterType : uint8
{
	Official                       = 0,
	Community                      = 1,
	History                        = 2,
	EPalUIServerListFilterType_MAX = 3,
};

enum class EPalUIJoinGameInputCodeType : uint8
{
	Password                       = 0,
	InviteCode                     = 1,
	EPalUIJoinGameInputCodeType_MAX = 2,
};

enum class EPalUILiftSlotType : uint8
{
	None                           = 0,
	Item                           = 1,
	CharacterHandle                = 2,
	EPalUILiftSlotType_MAX         = 3,
};

enum class EPalUIPaldexPanelDetailType : uint8
{
	None                           = 0,
	NotEncount                     = 1,
	Encounted                      = 2,
	Captured                       = 3,
	EPalUIPaldexPanelDetailType_MAX = 4,
};

enum class EPalWorldMapType : uint8
{
	Normal                         = 0,
	RealtimeCapture                = 1,
	EPalWorldMapType_MAX           = 2,
};

enum class EPalWorkRequestResult : uint8
{
	Success                        = 0,
	FailedNotFoundBaseCamp         = 1,
	FailedNotFoundOwnerMapObject   = 2,
	FailedNotFoundWork             = 3,
	FailedNotFoundWorkAssign       = 4,
	FailedNotFoundWorkAssignLocation = 5,
	FailedDisableToAssignForAssignInfo = 6,
	FailedOverflowAssignCount      = 7,
	FailedCharacterHandleMissing   = 8,
	FailedCharacterParameterMissing = 9,
	FailedNotFoundCharacter        = 10,
	FailedNotFoundCharacterAIController = 11,
	FailedNotMatchWorkType         = 12,
	FailedNotWorkBase              = 13,
	FailedNotSameWorker            = 14,
	FailedNotFoundNetworkTransmitter = 15,
	FailedInvokeingInClientForServerInternalFunction = 16,
	FailedTransportNotExistDirector = 17,
	FailedTransportNotExistPathToMoveFor = 18,
	EPalWorkRequestResult_MAX      = 19,
};

enum class EPalWorkTransformType : uint8
{
	Undefined                      = 0,
	Static                         = 1,
	MapObject                      = 2,
	Character                      = 3,
	EPalWorkTransformType_MAX      = 4,
};

enum class EPalWorkTickResult : uint8
{
	Continue                       = 0,
	WaitForWorkable                = 1,
	Terminate                      = 2,
	EPalWorkTickResult_MAX         = 3,
};

enum class EPalWorkAssignableCheckResult : uint8
{
	WorkerEvent                    = 0,
	Dead                           = 1,
	Sleeping                       = 2,
	RecoverHungry                  = 3,
	NotSuitable                    = 4,
	NotAssignableOtomo             = 5,
	NotValidIndividualCharacterParameter = 6,
	CannotReviveSelf               = 7,
	NotExistsMapObject             = 8,
	MapObjectEffect                = 9,
	Enable                         = 10,
	EPalWorkAssignableCheckResult_MAX = 11,
};

enum class EPalWorkTransportItemType : uint8
{
	TakeOut                        = 0,
	PutIn                          = 1,
	EPalWorkTransportItemType_MAX  = 2,
};

enum class EPalWorkDefenseCombatType : uint8
{
	None                           = 0,
	Wait                           = 1,
	Gunner                         = 2,
	EPalWorkDefenseCombatType_MAX  = 3,
};

enum class EPalWorkAssignOptionType : uint8
{
	HigherPriorityThanSleep        = 0,
	EPalWorkAssignOptionType_MAX   = 1,
};

enum class EPalWorkWorkerState : uint8
{
	None                           = 0,
	Reserve                        = 1,
	Working                        = 2,
	Leave                          = 3,
	EPalWorkWorkerState_MAX        = 4,
};

enum class EPalWorkWorkerWorkingState : uint8
{
	Wait                           = 0,
	ApproachTo                     = 1,
	Working                        = 2,
	WaitForWorkable                = 3,
	EPalWorkWorkerWorkingState_MAX = 4,
};

enum class EPalWorkableType : uint8
{
	Illegal                        = 0,
	Progress                       = 1,
	CollectItem                    = 2,
	TransportItem                  = 3,
	TransportItemInBaseCamp        = 4,
	ReviveCharacter                = 5,
	CollectResource                = 6,
	LevelObject                    = 7,
	Repair                         = 8,
	Defense                        = 9,
	BootUp                         = 10,
	OnlyJoin                       = 11,
	OnlyJoinAndWalkAround          = 12,
	RemoveMapObjectEffect          = 13,
	MonsterFarm                    = 14,
	DeforestFoliage                = 15,
	EPalWorkableType_MAX           = 16,
};

enum class EPalWorkAssignRequirementWorkerFilter : uint8
{
	InSameMapObject                = 0,
	EPalWorkAssignRequirementWorkerFilter_MAX = 1,
};

enum class EPalWorkAssignRequirementWorkerPriority : uint8
{
	Normal                         = 0,
	WorkSpeedASC                   = 1,
	WorkSpeedDESC                  = 2,
	EPalWorkAssignRequirementWorkerPriority_MAX = 3,
};

enum class EPalWorkRepairState : uint8
{
	None                           = 0,
	PathFindByOwner                = 1,
	PathFindByConnector            = 2,
	ApproachToChest                = 3,
	ApproachToOwner                = 4,
	ApproachToConnectOwner         = 5,
	InProgress                     = 6,
	EPalWorkRepairState_MAX        = 7,
};

enum class EPalMapObjectMaterialSubType : uint8
{
	None                           = 0,
	Wood                           = 1,
	Stone                          = 2,
	Copper                         = 3,
	Iron                           = 4,
	Platinum                       = 5,
	EPalMapObjectMaterialSubType_MAX = 6,
};

enum class EPalWorldSecurityLawTriggerType : uint8
{
	Undefined                      = 0,
	Item_Move                      = 1,
	Character_Damaged              = 2,
	Character_Dead                 = 3,
	Area_Invasion                  = 4,
	EPalWorldSecurityLawTriggerType_MAX = 5,
};

enum class EPalDescendantScrollDestination : uint8
{
	IntoView                       = 0,
	TopOrLeft                      = 1,
	Center                         = 2,
	EPalDescendantScrollDestination_MAX = 3,
};

enum class EPalScrollWhenFocusChanges : uint8
{
	NoScroll                       = 0,
	InstantScroll                  = 1,
	AnimatedScroll                 = 2,
	EPalScrollWhenFocusChanges_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalFoliageInstanceId
struct FPalFoliageInstanceId
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalSpecialAttackRateInfo
struct FPalSpecialAttackRateInfo
{
public:
	enum class EPalSpecialAttackRateType         Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A5C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Rate;                                              // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct Pal.PalDamageInfo
struct FPalDamageInfo
{
public:
	int32                                        NativeDamageValue;                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalWazaCategory                  Category;                                          // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsBlowAttack;                                      // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsLeanBack;                                        // 0x6(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A5D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               BlowVelocity;                                      // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalBodyPartsType                 BodyPartsType;                                     // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A5E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AttackerLevel;                                     // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalElementType                   AttackElementType;                                 // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A5F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 AttackerGroupID;                                   // 0x2C(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A60[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Attacker;                                          // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OverrideNetworkOwner;                              // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalAttackType                    AttackType;                                        // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A62[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HitLocation;                                       // 0x58(0x18)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FoliageModelId;                                    // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPalFoliageInstanceId>         FoliageInstanceIds;                                // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	enum class EPalAdditionalEffectType          EffectType1;                                       // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A63[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EffectValue1;                                      // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectValueEx1;                                    // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalAdditionalEffectType          EffectType2;                                       // 0x94(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A64[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EffectValue2;                                      // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectValueEx2;                                    // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SneakAttackRate;                                   // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PlaySneakAttackEffect;                             // 0xA4(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A65[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DamageRatePerCollision;                            // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A66[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPalSpecialAttackRateInfo>     SpecialAttackRateInfos;                            // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	enum class EPalDamageAnimationReactionType   DamageReactionAnimationType;                       // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttackableToFriend;                               // 0xC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NoDamage;                                          // 0xC2(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IgnoreShield;                                      // 0xC3(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UIDamageTextOverride_DoubleRegist;                 // 0xC4(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalPlayerDamageCameraShakeCategory CameraShake;                                       // 0xC5(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalSizeType                      ForceRagdollSize;                                  // 0xC6(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyNativeDamageValue;                           // 0xC7(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IgnorePlayerEquipItemDamage;                       // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A67[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalMapObjectDisposeOptions
struct FPalMapObjectDisposeOptions
{
public:
	uint8                                        Pad_3A68[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Pal.PalMapObjectMeshVisibleData
struct FPalMapObjectMeshVisibleData
{
public:
	struct FComponentReference                   MeshComponentRef;                                  // 0x0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        VisibleHpPercentageThreshold;                      // 0x28(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A69[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalBuildObjectMeshDefaultSetting
struct FPalBuildObjectMeshDefaultSetting
{
public:
	class FName                                  ProfileName;                                       // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Pal.PalInstanceID
struct FPalInstanceID
{
public:
	struct FGuid                                 PlayerUId;                                         // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 InstanceId;                                        // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DebugName;                                         // 0x20(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalPassiveSkillEffect
struct FPalPassiveSkillEffect
{
public:
	enum class EPalPassiveSkillEffectType        Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A6A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          Flags;                                             // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Pal.BulletHoleDecalInfo
struct FBulletHoleDecalInfo
{
public:
	TArray<class UMaterialInterface*>            BulletHoleDecals;                                  // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FVector                               Decal_Size;                                        // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Decal_Size_RandomMin;                              // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Decal_Size_RandomMax;                              // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Pal.FixedPoint
struct FFixedPoint
{
public:
	int32                                        Value;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Pal.FlagContainer
struct FFlagContainer
{
public:
	TMap<class FName, bool>                      Flags;                                             // 0x0(0x50)(Edit, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPrivate)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Pal.PalChatMessage
struct FPalChatMessage
{
public:
	enum class EPalChatCategory                  Category;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A6B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Sender;                                            // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 SenderPlayerUId;                                   // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Message;                                           // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ReceiverPlayerUId;                                 // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.GameDateTime
struct FGameDateTime
{
public:
	int64                                        Ticks;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalDataTableRowName_PalMonsterData
struct FPalDataTableRowName_PalMonsterData
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalDataTableRowName_PalHumanData
struct FPalDataTableRowName_PalHumanData
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Pal.PalSpawnerOneTribeInfo
struct FPalSpawnerOneTribeInfo
{
public:
	struct FPalDataTableRowName_PalMonsterData   PalID;                                             // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalDataTableRowName_PalHumanData     NPCID;                                             // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level_Max;                                         // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Num;                                               // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Num_Max;                                           // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalSpawnerGroupInfo
struct FPalSpawnerGroupInfo
{
public:
	int32                                        Weight;                                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalOneDayTimeType                OnlyTime;                                          // 0x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalWeatherConditionType          OnlyWeather;                                       // 0x5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A6C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPalSpawnerOneTribeInfo>       PalList;                                           // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x94 (0x94 - 0x0)
// ScriptStruct Pal.PalPlayerDataCharacterMakeInfo
struct FPalPlayerDataCharacterMakeInfo
{
public:
	class FName                                  BodyMeshName;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HeadMeshName;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HairMeshName;                                      // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EquipmentBodyMeshName;                             // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EquipmentHeadMeshName;                             // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DisableEquipmentHeadFlag;                          // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A6D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ArmVolume;                                         // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TorsoVolume;                                       // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LegVolume;                                         // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          HairColor;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BrowColor;                                         // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BodyColor;                                         // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BodySubsurfaceColor;                               // 0x68(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          EyeColor;                                          // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EyeMaterialName;                                   // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VoiceID;                                           // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Pal.PalDamageResult
struct FPalDamageResult
{
public:
	int32                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A6E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Attacker;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Defender;                                          // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BlowVelocity;                                      // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalDamageAnimationReactionType   DamageReactionAnimationType;                       // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IgnoreShield;                                      // 0x49(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPlayedLeanBack;                                  // 0x4A(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalPlayerDamageCameraShakeCategory CameraShake;                                       // 0x4B(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IgnorePlayerEquipItemDamage;                       // 0x4C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A6F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalOptionKeyboardSettings
struct FPalOptionKeyboardSettings
{
public:
	bool                                         bIsDashHold;                                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A70[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MouseSensitivity;                                  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MouseAimSensitivity;                               // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsReverseYaw;                                     // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsReversePitch;                                   // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableAimAssist;                                  // 0xE(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowChat;                                         // 0xF(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalOptionPadSettings
struct FPalOptionPadSettings
{
public:
	bool                                         bIsDashHold;                                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A71[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LeftStickThreshold;                                // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RightStickSensitivity;                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RightStickAimSensitivity;                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RightStickThreshold;                               // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRightStickReverseYaw;                           // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRightStickReversePitch;                         // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableVibration;                                  // 0x16(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableAimAssist;                                  // 0x17(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Pal.PalStaticItemIdAndNum
struct FPalStaticItemIdAndNum
{
public:
	class FName                                  StaticItemId;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Num;                                               // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Pal.PalLogAdditionalData
struct FPalLogAdditionalData
{
public:
	TArray<TSoftObjectPtr<class UTexture2D>>     SoftTextures;                                      // 0x0(0x10)(BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	enum class EPalLogContentToneType            LogToneType;                                       // 0x10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A72[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DefaultFontStyleName;                              // 0x14(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A73[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UPalLogWidgetBase>         OverrideWidgetClass;                               // 0x20(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalStaticItemIdAndNum                ItemIDAndNum;                                      // 0x28(0xC)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A74[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct Pal.DelegateTickFunction
struct FDelegateTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_3A75[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Pal.PalUIPalCaptureInfo
struct FPalUIPalCaptureInfo
{
public:
	class FName                                  CharacterID;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CaptureCount;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          PassiveSkillNameList;                              // 0x10(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         IsRarePal;                                         // 0x20(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsUnlockedPaldeck;                                 // 0x21(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A76[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalDataTableRowName_PassiveSkillData
struct FPalDataTableRowName_PassiveSkillData
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Pal.PalDebugOtomoPalInfo
struct FPalDebugOtomoPalInfo
{
public:
	struct FPalDataTableRowName_PalMonsterData   PalName;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Rank;                                              // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EPalWazaID>                WazaList;                                          // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPalDataTableRowName_PassiveSkillData> PassiveSkill;                                      // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalLogInfo_DropPal
struct FPalLogInfo_DropPal
{
public:
	class FString                                NickName;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CharacterID;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Pal.PalPlayerInfoForMap
struct FPalPlayerInfoForMap
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Pal.PalGuildPlayerInfo
struct FPalGuildPlayerInfo
{
public:
	enum class EPalGuildPlayerStatus             Status;                                            // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A77[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             LastOnlineRealTime;                                // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerName;                                        // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.FixedPoint64
struct FFixedPoint64
{
public:
	int64                                        Value;                                             // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xC (0xC - 0x0)
// ScriptStruct Pal.FloatContainer_FloatPair
struct FFloatContainer_FloatPair
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.FloatContainer
struct FFloatContainer
{
public:
	TArray<struct FFloatContainer_FloatPair>     Values;                                            // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPrivate)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalWorkSuitabilityInfo
struct FPalWorkSuitabilityInfo
{
public:
	enum class EPalWorkSuitability               WorkSuitability;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A78[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Rank;                                              // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalContainerId
struct FPalContainerId
{
public:
	struct FGuid                                 ID;                                                // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Pal.PalCharacterSlotId
struct FPalCharacterSlotId
{
public:
	struct FPalContainerId                       ContainerId;                                       // 0x0(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlotIndex;                                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Pal.PalGotStatusPoint
struct FPalGotStatusPoint
{
public:
	class FName                                  StatusName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StatusPoint;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct Pal.PalIndividualCharacterCacheParameter
struct FPalIndividualCharacterCacheParameter
{
public:
	struct FGuid                                 GroupID;                                           // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSleeping;                                         // 0x10(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A79[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 InvaderTargetBaseCampId;                           // 0x18(0x10)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalInvaderType                   InvaderType;                                       // 0x28(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A7A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x218 (0x218 - 0x0)
// ScriptStruct Pal.PalIndividualCharacterSaveParameter
struct FPalIndividualCharacterSaveParameter
{
public:
	class FName                                  CharacterID;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  UniqueNPCID;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalGenderType                    Gender;                                            // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A7B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class APalCharacter>             CharacterClass;                                    // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Rank;                                              // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Rank_HP;                                           // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Rank_Attack;                                       // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Rank_Defence;                                      // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Rank_CraftSpeed;                                   // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Exp;                                               // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A7C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NickName;                                          // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsRarePal;                                         // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A7D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EPalWazaID>                EquipWaza;                                         // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EPalWazaID>                MasteredWaza;                                      // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFixedPoint64                         HP;                                                // 0x78(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Talent_HP;                                         // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Talent_Melee;                                      // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Talent_Shot;                                       // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Talent_Defense;                                    // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FullStomach;                                       // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalStatusPhysicalHealthType      PhysicalHealth;                                    // 0x94(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalBaseCampWorkerSickType        WorkerSick;                                        // 0x95(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A7E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          PassiveSkillList;                                  // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        DyingTimer;                                        // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A7F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFixedPoint64                         MP;                                                // 0xB0(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         IsPlayer;                                          // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A80[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             OwnedTime;                                         // 0xC0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 OwnerPlayerUId;                                    // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                         OldOwnerPlayerUIds;                                // 0xD8(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	struct FFixedPoint64                         MaxHP;                                             // 0xE8(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Support;                                           // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CraftSpeed;                                        // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPalWorkSuitabilityInfo>       CraftSpeeds;                                       // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFixedPoint64                         ShieldHP;                                          // 0x108(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFixedPoint64                         ShieldMaxHP;                                       // 0x110(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFixedPoint64                         MaxMP;                                             // 0x118(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFixedPoint64                         MaxSP;                                             // 0x120(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EPalStatusHungerType              HungerType;                                        // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A81[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SanityValue;                                       // 0x12C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalBaseCampWorkerEventType       BaseCampWorkerEventType;                           // 0x130(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A82[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BaseCampWorkerEventProgressTime;                   // 0x134(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalContainerId                       ItemContainerId;                                   // 0x138(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalContainerId                       EquipItemContainerId;                              // 0x148(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalCharacterSlotId                   SlotID;                                            // 0x158(0x14)(Edit, DisableEditOnTemplate, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MaxFullStomach;                                    // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FullStomachDecreaseRate_Tribe;                     // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UnusedStatusPoint;                                 // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPalGotStatusPoint>            GotStatusPointList;                                // 0x178(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFloatContainer                       DecreaseFullStomachRates;                          // 0x188(0x10)(NativeAccessSpecifierPublic)
	struct FFloatContainer                       AffectSanityRates;                                 // 0x198(0x10)(NativeAccessSpecifierPublic)
	struct FFloatContainer                       CraftSpeedRates;                                   // 0x1A8(0x10)(NativeAccessSpecifierPublic)
	struct FVector                               LastJumpedLocation;                                // 0x1B8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FoodWithStatusEffect;                              // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Tiemr_FoodWithStatusEffect;                        // 0x1D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalWorkSuitability               CurrentWorkSuitability;                            // 0x1DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAppliedDeathPenarty;                              // 0x1DD(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A83[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PalReviveTimer;                                    // 0x1E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VoiceID;                                           // 0x1E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalIndividualCharacterCacheParameter Dynamic;                                           // 0x1E8(0x2C)(Edit, BlueprintVisible, Transient, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A84[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x218 (0x218 - 0x0)
// ScriptStruct Pal.PalPlayerInitializeParameter
struct FPalPlayerInitializeParameter
{
public:
	struct FPalIndividualCharacterSaveParameter  InitParam;                                         // 0x0(0x218)(NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct Pal.PalPlayerAccountInitData
struct FPalPlayerAccountInitData
{
public:
	class FString                                CharacterName;                                     // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalPlayerDataCharacterMakeInfo       CharacterMakeData;                                 // 0x10(0x94)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A85[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x48 - 0x8)
// ScriptStruct Pal.PalRandomIncidentSpawnMonsterData
struct FPalRandomIncidentSpawnMonsterData : public FTableRowBase
{
public:
	struct FPalDataTableRowName_PalMonsterData   CharacterID;                                       // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Group;                                             // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsSquad;                                           // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A86[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             SpawnLocation;                                     // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpawnRadius;                                       // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotZ_Degree;                                       // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class APalAIController>          ControllerClass;                                   // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UPalActionBase>            DefaultActionClass;                                // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalDataTableRowName_NPCUniqueData
struct FPalDataTableRowName_NPCUniqueData
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct Pal.PalRandomIncidentSpawnNPCData
struct FPalRandomIncidentSpawnNPCData : public FTableRowBase
{
public:
	struct FPalDataTableRowName_PalHumanData     CharacterID;                                       // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalDataTableRowName_NPCUniqueData    UniqueNPCID;                                       // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Group;                                             // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsSquad;                                           // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A87[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             SpawnLocation;                                     // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpawnRadius;                                       // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotZ_Degree;                                       // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  WalkPathName;                                      // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WalkRadius;                                        // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A88[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class APalAIController>          ControllerClass;                                   // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UPalAIActionBase>          DefaultAIActionClass;                              // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Pal.PalDynamicItemId
struct FPalDynamicItemId
{
public:
	struct FGuid                                 CreatedWorldId;                                    // 0x0(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 LocalIdInCreatedWorld;                             // 0x10(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Pal.PalItemId
struct FPalItemId
{
public:
	class FName                                  StaticId;                                          // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalDynamicItemId                     DynamicId;                                         // 0x8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalDataTableRowName_SoundID
struct FPalDataTableRowName_SoundID
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Pal.PalSoundOptions
struct FPalSoundOptions
{
public:
	int32                                        FadeInTime;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalItemData
struct FPalItemData
{
public:
	class UPalStaticItemDataBase*                StaticData;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPalDynamicItemDataBase*               DynamicData;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Pal.PalDeadInfo
struct FPalDeadInfo
{
public:
	int32                                        LastDamage;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A89[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                LastAttacker;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                SelfActor;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BlowVelocity;                                      // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalWazaID                        SelfDestructWaza;                                  // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalDeadType                      DeadType;                                          // 0x49(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A8A[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Pal.PalItemSlotId
struct FPalItemSlotId
{
public:
	struct FPalContainerId                       ContainerId;                                       // 0x0(0x10)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlotIndex;                                         // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Pal.PalItemOperationInfo_Move
struct FPalItemOperationInfo_Move
{
public:
	struct FPalInstanceID                        ExecutorIndividualId;                              // 0x0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPalItemId>                    ItemIds;                                           // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FPalItemSlotId>                FromSlotIds;                                       // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	struct FPalContainerId                       ToContainerId;                                     // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPalItemSlotId>                ToSlotIds;                                         // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Pal.SkillEffectSpawnParameter
struct FSkillEffectSpawnParameter
{
public:
	float                                        TimeOffset;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A8B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class APalSkillEffectBase>       SkillEffectClass;                                  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SpawnOffset;                                       // 0x10(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttachToOwner;                                    // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A8C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AttachSocketName;                                  // 0x2C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalBodyLocationType              AttachLocationType;                                // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A8D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalDataTableRowName_MapObjectData
struct FPalDataTableRowName_MapObjectData
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalDataTableRowName_ItemData
struct FPalDataTableRowName_ItemData
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Pal.PalPassiveAbilitySkillParameters
struct FPalPassiveAbilitySkillParameters
{
public:
	float                                        DelayTime;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalWorkType                      WorkType;                                          // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A8E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPalDataTableRowName_MapObjectData> MapObjectId;                                       // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPalDataTableRowName_ItemData> ItemId;                                            // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         AssignOthers;                                      // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalElementType                   TargetElementType;                                 // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A8F[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalPassiveAbilitySkills
struct FPalPassiveAbilitySkills
{
public:
	TArray<struct FPalPassiveAbilitySkillParameters> AllAbilityPassiveSkills;                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Pal.PalPassiveAbilitySkillStatus
struct FPalPassiveAbilitySkillStatus
{
public:
	enum class EPalPassiveAbilitySkillState      State;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A90[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ElapsedTime;                                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          Flags;                                             // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EPalPassiveTriggerType            TriggerType;                                       // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A91[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalNetArchive
struct FPalNetArchive
{
public:
	TArray<uint8>                                Bytes;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct Pal.ActionDynamicParameter
struct FActionDynamicParameter
{
public:
	class AActor*                                ActionTarget;                                      // 0x0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A92[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            StartTransform;                                    // 0x10(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ActionVelocity;                                    // 0x70(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GeneralPurposeIndex;                               // 0x88(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A93[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               DummyTargetLocation;                               // 0x90(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ActionID;                                          // 0xA8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAdjustTransform;                                // 0xB8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A94[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalNetArchive                        Blackboard;                                        // 0xC0(0x10)(NativeAccessSpecifierPublic)
	int32                                        NetRandSeed;                                       // 0xD0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A95[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Pal.PalAIActionDynamicParameter
struct FPalAIActionDynamicParameter
{
public:
	class AActor*                                GeneralActor1;                                     // 0x0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               GeneralVector1;                                    // 0x8(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               GeneralVector2;                                    // 0x20(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GeneralIndex1;                                     // 0x38(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GeneralBool1;                                      // 0x3C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A96[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GeneralInteger1;                                   // 0x40(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GeneralInteger2;                                   // 0x44(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalWazaID                        SelfDestructWaza;                                  // 0x48(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A97[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.ReserveMontage
struct FReserveMontage
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x168 (0x168 - 0x0)
// ScriptStruct Pal.GeneralAnimationParameter
struct FGeneralAnimationParameter
{
public:
	float                                        MoveSpeed;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoveSpeedXY;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InputVelocity;                                     // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ClimbingVelocity;                                  // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInAir;                                          // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSliding;                                        // 0x51(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSwimming;                                       // 0x52(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A98[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RangeForGround;                                    // 0x54(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsNearGround;                                     // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A99[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EPalGeneralAnimSequenceType, class UAnimSequence*> GeneralAnimSequenceMap;                            // 0x60(0x50)(BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	TMap<enum class EPalGeneralBlendSpaceType, class UBlendSpace*> GeneralBlendSpaceMap;                              // 0xB0(0x50)(BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	float                                        FootIKRootOffset;                                  // 0x100(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A9A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EPalFootType, float>         FootIKOffset;                                      // 0x108(0x50)(BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	float                                        MoveSpeedPlusByRotateYaw;                          // 0x158(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YawSpeed;                                          // 0x15C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AdditiveAnimationRate;                             // 0x160(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DisableUpperOverrideFlag;                          // 0x164(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTransportingObject;                               // 0x165(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A9B[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalBaseCampSignificanceInfo
struct FPalBaseCampSignificanceInfo
{
public:
	float                                        DistanceInRangeFromPlayer;                         // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TickInterval;                                      // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Pal.PalBaseCampItemExistsInfo
struct FPalBaseCampItemExistsInfo
{
public:
	struct FGuid                                 MapObjectModelInstanceId;                          // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemNum;                                           // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Pal.PalBaseCampItemContainerInfo
struct FPalBaseCampItemContainerInfo
{
public:
	struct FPalContainerId                       ContainerId;                                       // 0x0(0x10)(Edit, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalBaseCampItemContainerType     Type;                                              // 0x10(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A9C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalBaseCampPassiveEffectMapObjectInfo
struct FPalBaseCampPassiveEffectMapObjectInfo
{
public:
	TArray<struct FGuid>                         ConcreteModelInstanceIds;                          // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalWorkAssignRequirementParameter
struct FPalWorkAssignRequirementParameter
{
public:
	uint8                                        Pad_3A9D[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalBaseCampWorkCollectionStashInfo
struct FPalBaseCampWorkCollectionStashInfo
{
public:
	struct FGameDateTime                         StashAtTime;                                       // 0x0(0x8)(Edit, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x128 - 0x0)
// ScriptStruct Pal.PalOptionWorldSettings
struct FPalOptionWorldSettings
{
public:
	enum class EPalOptionWorldDifficulty         Difficulty;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A9E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DayTimeSpeedRate;                                  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NightTimeSpeedRate;                                // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExpRate;                                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PalCaptureRate;                                    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PalSpawnNumRate;                                   // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PalDamageRateAttack;                               // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PalDamageRateDefense;                              // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerDamageRateAttack;                            // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerDamageRateDefense;                           // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerStomachDecreaceRate;                         // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerStaminaDecreaceRate;                         // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerAutoHPRegeneRate;                            // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerAutoHpRegeneRateInSleep;                     // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PalStomachDecreaceRate;                            // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PalStaminaDecreaceRate;                            // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PalAutoHPRegeneRate;                               // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PalAutoHpRegeneRateInSleep;                        // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BuildObjectDamageRate;                             // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BuildObjectDeteriorationDamageRate;                // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollectionDropRate;                                // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollectionObjectHpRate;                            // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollectionObjectRespawnSpeedRate;                  // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EnemyDropItemRate;                                 // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalOptionWorldDeathPenalty       DeathPenalty;                                      // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnablePlayerToPlayerDamage;                       // 0x61(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableFriendlyFire;                               // 0x62(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableInvaderEnemy;                               // 0x63(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActiveUNKO;                                       // 0x64(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableAimAssistPad;                               // 0x65(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableAimAssistKeyboard;                          // 0x66(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A9F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DropItemMaxNum;                                    // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DropItemMaxNum_UNKO;                               // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BaseCampMaxNum;                                    // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BaseCampWorkerMaxNum;                              // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DropItemAliveMaxHours;                             // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoResetGuildNoOnlinePlayers;                    // 0x7C(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AA0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AutoResetGuildTimeNoOnlinePlayers;                 // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GuildPlayerMaxNum;                                 // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PalEggDefaultHatchingTime;                         // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorkSpeedRate;                                     // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMultiplay;                                      // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPvP;                                            // 0x91(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanPickupOtherGuildDeathPenaltyDrop;              // 0x92(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableNonLoginPenalty;                            // 0x93(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableFastTravel;                                 // 0x94(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsStartLocationSelectByMap;                       // 0x95(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExistPlayerAfterLogout;                           // 0x96(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDefenseOtherGuildPlayer;                    // 0x97(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CoopPlayerMaxNum;                                  // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ServerPlayerMaxNum;                                // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerName;                                        // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerDescription;                                 // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AdminPassword;                                     // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, RepSkip, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerPassword;                                    // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, RepSkip, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PublicPort;                                        // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AA1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PublicIP;                                          // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RCONEnabled;                                       // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AA2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RCONPort;                                          // 0xFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Region;                                            // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAuth;                                          // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AA3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                BanListURL;                                        // 0x118(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Pal.PalBaseCampWorkAssignRequest
struct FPalBaseCampWorkAssignRequest
{
public:
	uint8                                        Pad_3AA4[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.ActorArray
struct FActorArray
{
public:
	TArray<class AActor*>                        Actors;                                            // 0x0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalHeatSourceInfo
struct FPalHeatSourceInfo
{
public:
	int32                                        HeatLevel_DayTime;                                 // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HeatLevel_NightTime;                               // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Pal.PalStageInstanceId
struct FPalStageInstanceId
{
public:
	struct FGuid                                 InternalId;                                        // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValid;                                            // 0x10(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AA5[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Pal.PalBossBattleStaticInfo
struct FPalBossBattleStaticInfo
{
public:
	TSoftClassPtr<class APalCutsceneActor>       IntroCutscene;                                     // 0x0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataLayerAsset*                       DataLayerAsset;                                    // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalDataTableRowName_PalMonsterData   PalID;                                             // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AA6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UAkAudioEvent>          BGMAudioEvent;                                     // 0x48(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x78 - 0x8)
// ScriptStruct Pal.PalBuildObjectData
struct FPalBuildObjectData : public FTableRowBase
{
public:
	class FName                                  MapObjectId;                                       // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalBuildObjectTypeA              TypeA;                                             // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AA7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RedialIndex;                                       // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalBuildObjectTypeB              TypeB;                                             // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AA8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Rank;                                              // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BuildCapacity;                                     // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RequiredBuildWorkAmount;                           // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AssetValue;                                        // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalEnergyType                    RequiredEnergyType;                                // 0x2C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AA9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ConsumeEnergySpeed;                                // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Material1_Id;                                      // 0x34(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Material1_Count;                                   // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Material2_Id;                                      // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Material2_Count;                                   // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Material3_Id;                                      // 0x4C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Material3_Count;                                   // 0x54(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Material4_Id;                                      // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Material4_Count;                                   // 0x60(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OverrideDescMsgID;                                 // 0x64(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInstallAtReticle;                                 // 0x6C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AAA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InstallNeighborThreshold;                          // 0x70(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInstallOnlyOnBase;                              // 0x74(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInstallOnlyInDoor;                              // 0x75(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInstallOnlyHubAround;                           // 0x76(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInstallableNoObstacleFromCamera;                  // 0x77(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Pal.PalBuildRequestDebugParameter
struct FPalBuildRequestDebugParameter
{
public:
	bool                                         bNotConsumeMaterials;                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Pal.BuildingSurfaceMaterialSet
struct FBuildingSurfaceMaterialSet
{
public:
	class UMaterialInstance*                     Highlight;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                     Error;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                     Building;                                          // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                     BuildComplete;                                     // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                     Dismantle;                                         // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                     Damage;                                            // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           BuildCompleteAnimationCurve;                       // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Pal.NetworkActorSpawnParameters
struct FNetworkActorSpawnParameters
{
public:
	class AActor*                                NetworkOwner;                                      // 0x0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Owner;                                             // 0x10(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SpawnLocation;                                     // 0x18(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              SpawnRotation;                                     // 0x30(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               SpawnScale;                                        // 0x48(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AController>               ControllerClass;                                   // 0x60(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingOverride;                    // 0x68(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysRelevant;                                   // 0x69(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AAB[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalMapObjectAppearanceData
struct FPalMapObjectAppearanceData
{
public:
	struct FGameDateTime                         DateTime;                                          // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalMapObjectAppearanceDataWithId
struct FPalMapObjectAppearanceDataWithId
{
public:
	struct FGuid                                 InstanceId;                                        // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalMapObjectAppearanceData           AppearanceData;                                    // 0x10(0x8)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalWorkAssignHandleId
struct FPalWorkAssignHandleId
{
public:
	struct FGuid                                 WorkId;                                            // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        LocationIndex;                                     // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EPalWorkAssignType                AssignType;                                        // 0x14(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3AAC[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Pal.PalCharacterParameter_Work
struct FPalCharacterParameter_Work
{
public:
	struct FGuid                                 MapObjectInstanceIdApproachTo;                     // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bApproachToAssignedLocation;                       // 0x10(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3AAD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RepairRequiredWorkAmount;                          // 0x14(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3AAE[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFlagContainer                        NotWorkableFlag;                                   // 0x28(0x50)(Edit, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalStatusAccumulate
struct FPalStatusAccumulate
{
public:
	uint8                                        Pad_3AAF[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalCharacterStoredParameterId
struct FPalCharacterStoredParameterId
{
public:
	struct FGuid                                 ID;                                                // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x230 (0x230 - 0x0)
// ScriptStruct Pal.PalCharacterStoredParameterInfo
struct FPalCharacterStoredParameterInfo
{
public:
	struct FPalIndividualCharacterSaveParameter  SaveParameter;                                     // 0x0(0x218)(Edit, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	struct FGameDateTime                         StoredAt;                                          // 0x218(0x8)(Edit, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 LostPlayerUId;                                     // 0x220(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Pal.PalDamageRactionInfo
struct FPalDamageRactionInfo
{
public:
	bool                                         IsBlow;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AB0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               BlowVelocity;                                      // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsLeanBackAnime;                                   // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsStan;                                            // 0x21(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AB1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HitLocation;                                       // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalEachDamageRactionInfo
struct FPalEachDamageRactionInfo
{
public:
	class AActor*                                Attacker;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsBlow;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsLeanBackAnime;                                   // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsStan;                                            // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalWazaCategory                  WazaCategory;                                      // 0xB(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AB2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalDebugAttachPassiveSkillInfo
struct FPalDebugAttachPassiveSkillInfo
{
public:
	TArray<struct FPalDataTableRowName_PassiveSkillData> Skill;                                             // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Pal.PalArrowSettings
struct FPalArrowSettings
{
public:
	struct FColor                                Color;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Size;                                              // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Pal.PalDebugItemCreateInfo
struct FPalDebugItemCreateInfo
{
public:
	struct FPalDataTableRowName_ItemData         ItemRowName;                                       // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemNum;                                           // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Pal.PalDebugPalCaptureInfo
struct FPalDebugPalCaptureInfo
{
public:
	struct FPalDataTableRowName_PalMonsterData   PalName;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Num;                                               // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalDataTableRowName_GameProgressPreset
struct FPalDataTableRowName_GameProgressPreset
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalBinaryMemory
struct FPalBinaryMemory
{
public:
	TArray<uint8>                                RawData;                                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Pal.PalMapObjectConcreteModelModuleSaveData
struct FPalMapObjectConcreteModelModuleSaveData : public FPalBinaryMemory
{
public:
};

// 0x50 (0x60 - 0x10)
// ScriptStruct Pal.PalMapObjectConcreteModelSaveData
struct FPalMapObjectConcreteModelSaveData : public FPalBinaryMemory
{
public:
	TMap<enum class EPalMapObjectConcreteModelModuleType, struct FPalMapObjectConcreteModelModuleSaveData> ModuleMap;                                         // 0x10(0x50)(NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Pal.PalMapObjectBuildProcessSaveData
struct FPalMapObjectBuildProcessSaveData : public FPalBinaryMemory
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Pal.PalMapObjectConnectorSaveData
struct FPalMapObjectConnectorSaveData : public FPalBinaryMemory
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Pal.PalMapObjectEffectSaveData
struct FPalMapObjectEffectSaveData : public FPalBinaryMemory
{
public:
};

// 0x70 (0x80 - 0x10)
// ScriptStruct Pal.PalMapObjectModelSaveData
struct FPalMapObjectModelSaveData : public FPalBinaryMemory
{
public:
	struct FPalMapObjectBuildProcessSaveData     BuildProcess;                                      // 0x10(0x10)(NativeAccessSpecifierPublic)
	struct FPalMapObjectConnectorSaveData        Connector;                                         // 0x20(0x10)(NativeAccessSpecifierPublic)
	TMap<enum class EPalStatusID, struct FPalMapObjectEffectSaveData> EffectMap;                                         // 0x30(0x50)(NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// ScriptStruct Pal.PalMapObjectSaveData
struct FPalMapObjectSaveData
{
public:
	struct FVector                               WorldLocation;                                     // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AB3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 WorldRotation;                                     // 0x20(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WorldScale3D;                                      // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MapObjectId;                                       // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 MapObjectInstanceId;                               // 0x60(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 MapObjectConcreteModelInstanceId;                  // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalMapObjectModelSaveData            Model;                                             // 0x80(0x80)(NativeAccessSpecifierPublic)
	struct FPalMapObjectConcreteModelSaveData    ConcreteModel;                                     // 0x100(0x60)(NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Pal.PalDynamicItemDisposeWaitNotifyInfo
struct FPalDynamicItemDisposeWaitNotifyInfo
{
public:
	TArray<struct FPalDynamicItemId>             DynamicItemIds;                                    // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                WaitPlayerIds;                                     // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalPassiveSkillAssignInfo
struct FPalPassiveSkillAssignInfo
{
public:
	bool                                         IsDoNotSetSkills;                                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AB4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ForceSetSkillList;                                 // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Pal.PalItemCreateParameter
struct FPalItemCreateParameter
{
public:
	struct FPalPassiveSkillAssignInfo            PassiveSkillAssignInfo;                            // 0x0(0x18)(NativeAccessSpecifierPublic)
	class FName                                  CharacterID;                                       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Pal.PalFoliageGridInstanceMap
struct FPalFoliageGridInstanceMap
{
public:
	TMap<struct FPalFoliageInstanceId, class UPalFoliageInstance*> InstanceMap;                                       // 0x0(0x50)(Edit, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Pal.PalFoliageInstanceTransform
struct FPalFoliageInstanceTransform
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotator;                                           // 0x18(0x18)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ScaleX;                                            // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AB5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalGliderPalInfo
struct FPalGliderPalInfo
{
public:
	struct FPalDataTableRowName_PalMonsterData   PalName;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftClassPtr<class APalGliderObject>> GliderPalArray;                                    // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Pal.PalWorldHUDParameter
struct FPalWorldHUDParameter
{
public:
	TWeakObjectPtr<class AActor>                 TargetActor;                                       // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetLocation;                                    // 0x8(0x18)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UPalUserWidgetWorldHUD>    WorldHUDClass;                                     // 0x20(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalWorldHUDWidgetBlueprintType   WorldHUDType;                                      // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AB6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalHUDDispatchParameterBase*          HUDParameter;                                      // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DisplayOffset;                                     // 0x38(0x18)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             DisplayOffsetScreenPos;                            // 0x50(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DisplayRange;                                      // 0x60(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableShow;                                       // 0x64(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AB7[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Pal.PalUICommonItemInfoDisplayData
struct FPalUICommonItemInfoDisplayData
{
public:
	class UPalItemSlot*                          TargetItemSlot;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RecipeID;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               RelativeWidget;                                    // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             AnchorPosition;                                    // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsUsableSlot;                                      // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsEnableQuickEquip;                                // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsEnableQuickMove;                                 // 0x2A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsEnableSpreadLift;                                // 0x2B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsShowPrice;                                       // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AB8[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Pal.PalUICommonRewardDisplayData
struct FPalUICommonRewardDisplayData
{
public:
	class FText                                  Message;                                           // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UTexture2D*                            Texture;                                           // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             SoftTexture;                                       // 0x20(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalUIRewardDisplayType           DisplayType;                                       // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AB9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Pal.UITransientData
struct FUITransientData
{
public:
	int32                                        RadialMenuLastTab;                                 // 0x0(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsCampTaskUIOpen;                                  // 0x4(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ABA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  LastOpenedPaldexCharacter;                         // 0x8(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NewsOpened;                                        // 0x10(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsOpenedSurvivalGuide;                             // 0x11(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ServerLobbyDialogOpened;                           // 0x12(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ABB[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Pal.PalIncidentNotifyParameter
struct FPalIncidentNotifyParameter
{
public:
	class FName                                  IncidentId;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  IncidentType;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               OccuredObject;                                     // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               OwnerObject;                                       // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPalIncidentBase*                      IncidentObject;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Pal.PalIncidentInitializeParameter
struct FPalIncidentInitializeParameter
{
public:
	uint8                                        Pad_3ABC[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalIndividualCharacterEquipItemContainerHandler
struct FPalIndividualCharacterEquipItemContainerHandler
{
public:
	uint8                                        Pad_3ABD[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalItemSlotIdAndNum
struct FPalItemSlotIdAndNum
{
public:
	struct FPalItemSlotId                        SlotID;                                            // 0x0(0x14)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Num;                                               // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalPhantomReplicateInfo
struct FPalPhantomReplicateInfo
{
public:
	int32                                        ID;                                                // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ABE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         Character;                                         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct Pal.PalInvaderDatabaseRow
struct FPalInvaderDatabaseRow : public FTableRowBase
{
public:
	class FName                                  GroupName;                                         // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalBiomeType                     BiomeID;                                           // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ABF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InvadeGradeMin;                                    // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InvadeGradeMax;                                    // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CharactorID_A;                                     // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelMin_A;                                        // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelMax_A;                                        // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Number_A;                                          // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CharactorID_B;                                     // 0x34(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelMin_B;                                        // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelMax_B;                                        // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Number_B;                                          // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CharactorID_C;                                     // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelMin_C;                                        // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelMax_C;                                        // 0x54(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Number_C;                                          // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CharactorID_D;                                     // 0x5C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelMin_D;                                        // 0x64(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelMax_D;                                        // 0x68(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Number_D;                                          // 0x6C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Pal.PalIncidentBroadcastParameter
struct FPalIncidentBroadcastParameter
{
public:
	enum class EPalInvaderType                   InvaderType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AC0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalBaseCampModel*                     TargetBaseCamp;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalInvaderDatabaseRow                ChosenInvaderData;                                 // 0x10(0x70)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGuid                                 GroupGuid;                                         // 0x80(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Pal.PalInvaderStartPointInfo
struct FPalInvaderStartPointInfo
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalBiomeType                     BiomeType;                                         // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AC1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Pal.PalItemPermission
struct FPalItemPermission
{
public:
	TArray<enum class EPalItemTypeA>             PermissionTypeA;                                   // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	TArray<enum class EPalItemTypeB>             PermissionTypeB;                                   // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	TArray<class FName>                          PermissionItemStaticIds;                           // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalBelongInfo
struct FPalBelongInfo
{
public:
	uint8                                        Pad_3AC2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x8 - 0x8)
// ScriptStruct Pal.PalContainerBelongInfo
struct FPalContainerBelongInfo : public FPalBelongInfo
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Pal.PalItemContainerBelongInfo
struct FPalItemContainerBelongInfo : public FPalContainerBelongInfo
{
public:
	struct FGuid                                 GroupID;                                           // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalPlayerInventorySelectData
struct FPalPlayerInventorySelectData
{
public:
	int32                                        NowSelectedContainerIndex;                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AC3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalItemContainer*                     TargetItemContainer;                               // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Pal.PalLoadoutSynchronalizedData
struct FPalLoadoutSynchronalizedData
{
public:
	TSoftClassPtr<class AActor>                  ActorClass;                                        // 0x0(0x30)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalItemId                            ItemId;                                            // 0x30(0x28)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Pal.PalLogDataSet
struct FPalLogDataSet
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FPalLogAdditionalData                 AdditionalData;                                    // 0x18(0x38)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xC (0x18 - 0xC)
// ScriptStruct Pal.PalMapObjectModuleRepInfo
struct FPalMapObjectModuleRepInfo : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_3AC4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalMapObjectConcreteModelModuleBase*  Module;                                            // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x148 - 0x108)
// ScriptStruct Pal.PalFastMapObjectModuleRepInfoArray
struct FPalFastMapObjectModuleRepInfoArray : public FFastArraySerializer
{
public:
	TArray<struct FPalMapObjectModuleRepInfo>    Items;                                             // 0x108(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AC5[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x70 - 0x8)
// ScriptStruct Pal.PalItemRecipe
struct FPalItemRecipe : public FTableRowBase
{
public:
	class FName                                  Product_Id;                                        // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Product_Count;                                     // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorkAmount;                                        // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WorkableAttribute;                                 // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  UnlockItemID;                                      // 0x1C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Material1_Id;                                      // 0x24(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Material1_Count;                                   // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Material2_Id;                                      // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Material2_Count;                                   // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Material3_Id;                                      // 0x3C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Material3_Count;                                   // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Material4_Id;                                      // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Material4_Count;                                   // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Material5_Id;                                      // 0x54(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Material5_Count;                                   // 0x5C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalEnergyType                    EnergyType;                                        // 0x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AC6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EnergyAmount;                                      // 0x64(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Editor_RowNameHash;                                // 0x68(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AC7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.ReactivePropertyFloat
struct FReactivePropertyFloat
{
public:
	uint8                                        Pad_3AC8[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalCellCoord
struct FPalCellCoord
{
public:
	int64                                        X;                                                 // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        Y;                                                 // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        Z;                                                 // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Pal.PalEggRankInfo
struct FPalEggRankInfo
{
public:
	int32                                        PalRarity;                                         // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EggScale;                                          // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HatchingSpeedDivisionRate;                         // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalMapObjectItemContainerModuleSlotIndexes
struct FPalMapObjectItemContainerModuleSlotIndexes
{
public:
	enum class EPalMapObjectItemContainerSlotAttribute Attribute;                                         // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AC9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                Indexes;                                           // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Pal.PalMapObjectVisualEffectAssets
struct FPalMapObjectVisualEffectAssets
{
public:
	TMap<enum class EPalMapObjectVisualEffectType, TSoftObjectPtr<class UNiagaraSystem>> AssetMap;                                          // 0x0(0x50)(Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Pal.PalMapObjectStaticData
struct FPalMapObjectStaticData
{
public:
	class FName                                  DummyFoliageMapObjectId;                           // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DropItemMapObjectId;                               // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DropItem3DMapObjectId;                             // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BuildObjectId_PalStorage;                          // 0x18(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MapObjectId_ItemChest;                             // 0x20(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MapObjectId_DeathPenalty;                          // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MapObjectId_DroppedCharacter;                      // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MapObjectId_TreasureBox_VisibleContent;            // 0x38(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MapObjectId_SkillFruit_VisibleContent;             // 0x40(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Pal.PalBoundsTransform
struct FPalBoundsTransform
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ACA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Rotation;                                          // 0x20(0x20)(Edit, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoxSphereBounds                      Bounds;                                            // 0x40(0x38)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ACB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct Pal.PalMapObjectModelStaticData
struct FPalMapObjectModelStaticData
{
public:
	struct FPalBoundsTransform                   WorkableBounds;                                    // 0x0(0x80)(Edit, DisableEditOnTemplate, Transient, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FBox                                  MeshBoxBounds;                                     // 0x80(0x38)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EPalMapObjectDamagableType        DamagableType;                                     // 0xB8(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ACC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BuildObjectId;                                     // 0xBC(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ACD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class APalMapObject>             BlueprintClass;                                    // 0xC8(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0x18 - 0xC)
// ScriptStruct Pal.PalMapObjectModelEffectRepInfo
struct FPalMapObjectModelEffectRepInfo : public FFastArraySerializerItem
{
public:
	enum class EPalStatusID                      StatusId;                                          // 0xC(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ACE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalMapObjectModelEffectBase*          Effect;                                            // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x148 - 0x108)
// ScriptStruct Pal.PalFastMapObjectModelEffectRepInfoArray
struct FPalFastMapObjectModelEffectRepInfoArray : public FFastArraySerializer
{
public:
	TArray<struct FPalMapObjectModelEffectRepInfo> Items;                                             // 0x108(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ACF[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalMapObjectPasswordLockPlayerInfo
struct FPalMapObjectPasswordLockPlayerInfo
{
public:
	struct FGuid                                 PlayerUId;                                         // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TryFailedCount;                                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TrySuccessCache;                                   // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Pal.PalNPCWeaponCombatInfo
struct FPalNPCWeaponCombatInfo
{
public:
	TSubclassOf<class UPalAIActionBase>          CombatAIActionClass;                               // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NPCWeaponRange_Near_cm;                            // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NPCWeaponRange_Far_cm;                             // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShootInterval;                                     // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxShootCount;                                     // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReloadTime;                                        // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RandomMoveTime_Min;                                // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AimOffset_Height;                                  // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseSideDashMovement;                               // 0x24(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseReloadMotion;                                   // 0x25(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MeleeAttackWithGun;                                // 0x26(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AimRotateSpeed;                                    // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UPalStateMachineStateBase> FireStateClass;                                    // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Pal.PalEnemyCampStatus
struct FPalEnemyCampStatus
{
public:
	bool                                         bIsSpawned;                                        // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEnemyAllDead;                                   // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsClear;                                          // 0x2(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRewardReceived;                                   // 0x3(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RewardPalId;                                       // 0x4(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RewardPalLevel;                                    // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             ClearDate;                                         // 0x10(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ElapsedTime;                                       // 0x18(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             LastCalcDate;                                      // 0x20(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Pal.PalNPCSpawnInfo
struct FPalNPCSpawnInfo
{
public:
	TSubclassOf<class APalAIController>          ControllerClass;                                   // 0x0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CharacterID;                                       // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location;                                          // 0x18(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Yaw;                                               // 0x30(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalSquad*                             Squad;                                             // 0x38(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x54 (0x54 - 0x0)
// ScriptStruct Pal.PalOptionGraphicsSettings
struct FPalOptionGraphicsSettings
{
public:
	enum class EPalOptionGraphicsLevel           GraphicsLevel;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWindowMode                       WindowMode;                                        // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             ScreenResolution;                                  // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableVSync;                                      // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableMotionBlur;                                 // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAntiAliasingMethod               AntiAliasingType;                                  // 0xE(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableCameraShake;                                // 0xF(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableCameraRecoil;                               // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FOV;                                               // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PalRideCameraLengthRate;                           // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LODBias;                                           // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DrawDistance;                                      // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GrassDrawDistance;                                 // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableShadow;                                     // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ShadowResolution;                                  // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CommonQuality;                                     // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ViewDistanceQuality;                               // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FoliageQuality;                                    // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ShadowQuality;                                     // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Brightness;                                        // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableAutoContrast;                               // 0x44(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TextureQuality;                                    // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUDLSSMode                        DLSSMode;                                          // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ADA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxFPS;                                            // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Pal.PalOptionAudioSettings
struct FPalOptionAudioSettings
{
public:
	float                                        Master;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BGM;                                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SE;                                                // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PalVoice;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HumanVoice;                                        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ambient;                                           // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UI;                                                // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Pal.PalOptionCommonSettings
struct FPalOptionCommonSettings
{
public:
	float                                        PalRideCameraLengthRate;                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FOV;                                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableMotionBlur;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableCameraShake;                                // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ADB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        HistoryServerWorldGUID;                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Pal.PalKeyConfigKeys
struct FPalKeyConfigKeys
{
public:
	struct FKey                                  MainKey;                                           // 0x0(0x18)(BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  SecondaryKey;                                      // 0x18(0x18)(BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x40 - 0x30)
// ScriptStruct Pal.PalAxisKeyConfigKeys
struct FPalAxisKeyConfigKeys : public FPalKeyConfigKeys
{
public:
	class FName                                  AxisName;                                          // 0x30(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalKeyConfigAxisFilterType       FilterType;                                        // 0x38(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ADC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct Pal.PalKeyConfigSettings
struct FPalKeyConfigSettings
{
public:
	TMap<class FName, struct FPalKeyConfigKeys>  MouseAndKeyboardActionMappings;                    // 0x0(0x50)(BlueprintVisible, Config, NativeAccessSpecifierPublic)
	TArray<struct FPalAxisKeyConfigKeys>         MouseAndKeyboardAxisMappings;                      // 0x50(0x10)(BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TMap<class FName, struct FPalKeyConfigKeys>  GamePadActionMappings;                             // 0x60(0x50)(BlueprintVisible, Config, NativeAccessSpecifierPublic)
	TArray<struct FPalAxisKeyConfigKeys>         GamePadAxisMappings;                               // 0xB0(0x10)(BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalOptionValueFloat
struct FPalOptionValueFloat
{
public:
	float                                        Min;                                               // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Pal.PalOptionLocalStaticSettings
struct FPalOptionLocalStaticSettings
{
public:
	struct FPalOptionValueFloat                  MouseSensitivity;                                  // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  MouseAimSensitivity;                               // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  LeftStickThreshold;                                // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  RightStickSensitivity;                             // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  RightStickAimSensitivity;                          // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  RightStickThreshold;                               // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  PalRideCameraLengthRate;                           // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  FOV;                                               // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalOptionValueInt
struct FPalOptionValueInt
{
public:
	int32                                        Min;                                               // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Max;                                               // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct Pal.PalOptionWorldStaticSettings
struct FPalOptionWorldStaticSettings
{
public:
	struct FPalOptionValueFloat                  DayTimeSpeedRate;                                  // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  NightTimeSpeedRate;                                // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  ExpRate;                                           // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  PalCaptureRate;                                    // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  PalSpawnNumRate;                                   // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  PalDamageRateAttack;                               // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  PalDamageRateDefense;                              // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  PlayerDamageRateAttack;                            // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  PlayerDamageRateDefense;                           // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  PlayerStomachDecreaceRate;                         // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  PlayerStaminaDecreaceRate;                         // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  PlayerAutoHPRegeneRate;                            // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  PlayerAutoHpRegeneRateInSleep;                     // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  PalStomachDecreaceRate;                            // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  PalStaminaDecreaceRate;                            // 0x70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  PalAutoHPRegeneRate;                               // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  PalAutoHpRegeneRateInSleep;                        // 0x80(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  BuildObjectDamageRate;                             // 0x88(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  BuildObjectDeteriorationDamageRate;                // 0x90(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  CollectionDropRate;                                // 0x98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  CollectionObjectHpRate;                            // 0xA0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  CollectionObjectRespawnSpeedRate;                  // 0xA8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  EnemyDropItemRate;                                 // 0xB0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueInt                    DropItemMaxNum;                                    // 0xB8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueInt                    DropItemMaxNum_UNKO;                               // 0xC0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueFloat                  WorkSpeedRate;                                     // 0xC8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueInt                    AutoResetGuildTimeNoOnlinePlayers;                 // 0xD0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueInt                    GuildPlayerMaxNum;                                 // 0xD8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueInt                    PalEggDefaultHatchingTime;                         // 0xE0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionValueInt                    BaseCampWorkerMaxNum;                              // 0xE8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Pal.PalCoopSkillSearchEffectParameter
struct FPalCoopSkillSearchEffectParameter
{
public:
	struct FVector                               Origin;                                            // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RadiusFrom;                                        // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RadiusTo;                                          // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtRadiusPerSec;                                   // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ADD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalPartnerSkillParameterRide
struct FPalPartnerSkillParameterRide
{
public:
	float                                        JumpZVelocityScale;                                // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GravityScale;                                      // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Pal.PalPassivePartnerSkillParameters
struct FPalPassivePartnerSkillParameters
{
public:
	float                                        DelayTime;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriggerTypeFlags;                                  // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalWorkType                      WorkType;                                          // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ADE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPalDataTableRowName_MapObjectData> MapObjectId;                                       // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPalDataTableRowName_ItemData> ItemId;                                            // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         AssignOthers;                                      // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalElementType                   TargetElementType;                                 // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ADF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPalDataTableRowName_PalMonsterData> PalIds;                                            // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bNotAssignSelf;                                    // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AE0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Pal.PalPassivePartnerSkillIdAndParameters
struct FPalPassivePartnerSkillIdAndParameters
{
public:
	TMap<struct FPalDataTableRowName_PassiveSkillData, struct FPalPassivePartnerSkillParameters> SkillAndParameters;                                // 0x0(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalPassivePartnerSkillStatus
struct FPalPassivePartnerSkillStatus
{
public:
	enum class EPalPassivePartnerSkillState      State;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AE1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ElapsedTime;                                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          Flags;                                             // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalPassiveSkillEffectInfos
struct FPalPassiveSkillEffectInfos
{
public:
	TArray<struct FPalPassiveSkillEffect>        SkillEffectArray;                                  // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Pal.PalPlayerBattleEnemyInfo
struct FPalPlayerBattleEnemyInfo
{
public:
	enum class EPalBattleBGMType                 Rank;                                              // 0x0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AE2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class AActor>                 WeakActor;                                         // 0x4(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct Pal.PalItemAndNum
struct FPalItemAndNum
{
public:
	struct FPalItemId                            ItemId;                                            // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Num;                                               // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Pal.PalPlayerDataInventoryInfo
struct FPalPlayerDataInventoryInfo
{
public:
	struct FPalContainerId                       CommonContainerId;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalContainerId                       DropSlotContainerId;                               // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalContainerId                       EssentialContainerId;                              // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalContainerId                       WeaponLoadOutContainerId;                          // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalContainerId                       PlayerEquipArmorContainerId;                       // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalContainerId                       FoodEquipContainerId;                              // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Pal.PalPlayerClassStructSet
struct FPalPlayerClassStructSet
{
public:
	TSubclassOf<class UPalPlayerDataCharacterMake> CharacterMakeDataClass;                            // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UPalPlayerRecordData>      RecordDataClass;                                   // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UPalWorldMapUIData>        WorldMapUIDataClass;                               // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UPalQuestManager>          LocalQuestManagerClass;                            // 0x18(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UPalPlayerInventoryData>   InventoryDataClass;                                // 0x20(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0x18 - 0xC)
// ScriptStruct Pal.PalPlayerRecordDataRepInfo_BoolVal
struct FPalPlayerRecordDataRepInfo_BoolVal : public FFastArraySerializerItem
{
public:
	class FName                                  Key;                                               // 0xC(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0x14(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AE3[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x178 - 0x108)
// ScriptStruct Pal.PalPlayerRecordDataRepInfoArray_BoolVal
struct FPalPlayerRecordDataRepInfoArray_BoolVal : public FFastArraySerializer
{
public:
	uint8                                        Pad_3AE4[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPalPlayerRecordDataRepInfo_BoolVal> Items;                                             // 0x118(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AE5[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0x18 - 0xC)
// ScriptStruct Pal.PalPlayerRecordDataRepInfo_IntVal
struct FPalPlayerRecordDataRepInfo_IntVal : public FFastArraySerializerItem
{
public:
	class FName                                  Key;                                               // 0xC(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x14(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x178 - 0x108)
// ScriptStruct Pal.PalPlayerRecordDataRepInfoArray_IntVal
struct FPalPlayerRecordDataRepInfoArray_IntVal : public FFastArraySerializer
{
public:
	uint8                                        Pad_3AE6[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPalPlayerRecordDataRepInfo_IntVal> Items;                                             // 0x118(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AE7[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Pal.PalCommonQuestRewardData
struct FPalCommonQuestRewardData
{
public:
	int32                                        Exp;                                               // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TechnologyPoint;                                   // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FPalDataTableRowName_ItemData, int32> Items;                                             // 0x8(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct Pal.PalIncidentSystemFunctionAccessor
struct FPalIncidentSystemFunctionAccessor
{
public:
	uint8                                        Pad_3AE8[0xC0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Pal.PalIncidentIdParameter
struct FPalIncidentIdParameter
{
public:
	class FName                                  IncidentId;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  IncidentType;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Option;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          Args;                                              // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          Options;                                           // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Pal.PalIncidentExecutionSettings
struct FPalIncidentExecutionSettings
{
public:
	bool                                         bCanExecuteMultiple;                               // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.RiderActionInfo
struct FRiderActionInfo
{
public:
	TSubclassOf<class UPalActionBase>            RideAction;                                        // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UPalActionBase>            GetOffAction;                                      // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Pal.PalWorldBaseInfoSaveData
struct FPalWorldBaseInfoSaveData
{
public:
	class FString                                WorldName;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                HostPlayerName;                                    // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HostPlayerLevel;                                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InGameDay;                                         // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Pal.PalWorldBaseInfoData
struct FPalWorldBaseInfoData
{
public:
	struct FPalWorldBaseInfoSaveData             BaseInfoSaveData;                                  // 0x0(0x28)(NativeAccessSpecifierPublic)
	struct FDateTime                             Timestamp;                                         // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DirectoryPath;                                     // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalAsyncSaveProcess
struct FPalAsyncSaveProcess
{
public:
	enum class EPalAsyncSaveProcessState         State;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AE9[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Pal.PalAsyncSaveProcessParallel
struct FPalAsyncSaveProcessParallel
{
public:
	TMap<class FString, struct FPalAsyncSaveProcess> ProcessMap;                                        // 0x0(0x50)(NativeAccessSpecifierPublic)
	uint8                                        Pad_3AEA[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Pal.RidingAnimationInfo
struct FRidingAnimationInfo
{
public:
	class UAnimSequence*                         RidingAnimation;                                   // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          RidingShakingMontage;                              // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         RideShootingAnimation;                             // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAimOffsetBlendSpace*                  RideShootingAO;                                    // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Pal.WeaponNotifyAnimationInfo
struct FWeaponNotifyAnimationInfo
{
public:
	TMap<enum class EWeaponAnimationPoseType, class UAnimMontage*> PoseMap;                                           // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         IsAutoStop;                                        // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AEB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x258 (0x258 - 0x0)
// ScriptStruct Pal.WeaponAnimationInfo
struct FWeaponAnimationInfo
{
public:
	class UBlendSpace1D*                         NormalMoveBlendSpace;                              // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace1D*                         CrouchMoveBlendSpace;                              // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                           AimingMoveBlendSpace;                              // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                           HipShootingMoveBlendSpace;                         // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                           CrouchAimingMoveBlendSpace;                        // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          JumpPreliminary;                                   // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         JumpStart;                                         // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         JumpLoopUp;                                        // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         JumpLoopDown;                                      // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         JumpEnd;                                           // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Sliding;                                           // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         SlidingEnd;                                        // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Sprint;                                            // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          ReloadMontage;                                     // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          WeaponChangeMontage;                               // 0x70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EWeaponAnimationPoseType, class UAnimSequence*> IdlePoseMap;                                       // 0x78(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<enum class EWeaponAnimationPoseType, class UAnimSequence*> JogPoseMap;                                        // 0xC8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<enum class EWeaponAnimationPoseType, class UAnimSequence*> AimBaseMap;                                        // 0x118(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<enum class EWeaponAnimationPoseType, class UAimOffsetBlendSpace*> AimOffsetMap;                                      // 0x168(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<enum class EWeaponAnimationType, struct FWeaponNotifyAnimationInfo> AnimationMap;                                      // 0x1B8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<enum class EPalRidePositionType, struct FRidingAnimationInfo> RidingAnimationMap;                                // 0x208(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Pal.ElementOfLayeredFlagContainer
struct FElementOfLayeredFlagContainer
{
public:
	int32                                        Priority;                                          // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AEC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFlagContainer                        Container;                                         // 0x8(0x50)(Edit, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.LayeredFlagContainer
struct FLayeredFlagContainer
{
public:
	TArray<struct FElementOfLayeredFlagContainer> ContainerList;                                     // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPrivate)
};

// 0x228 (0x228 - 0x0)
// ScriptStruct Pal.PalDroppedPalProductDataForShop
struct FPalDroppedPalProductDataForShop
{
public:
	struct FPalCharacterStoredParameterId        StoredParameterId;                                 // 0x0(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalIndividualCharacterSaveParameter  SaveParameter;                                     // 0x10(0x218)(NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Pal.StatusDynamicParameter
struct FStatusDynamicParameter
{
public:
	int32                                        GeneralIndex;                                      // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  GeneralName;                                       // 0x4(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Pal.PalSyncTeleportRequestParameter
struct FPalSyncTeleportRequestParameter
{
public:
	class FString                                SyncTeleportStartSE;                               // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x10(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AED[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Rotation;                                          // 0x30(0x20)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFadeOutSkip;                                    // 0x50(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AEE[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct Pal.PalTechnologyDataTableRowBase
struct FPalTechnologyDataTableRowBase : public FTableRowBase
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Description;                                       // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  IconName;                                          // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequireBossDefeatNum;                              // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RequireTechnology;                                 // 0x24(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsBossTechnology;                                  // 0x2C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AEF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LevelCap;                                          // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Tier;                                              // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Cost;                                              // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AF0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x60 - 0x40)
// ScriptStruct Pal.PalTechnologyRecipeUnlockDataTableRow
struct FPalTechnologyRecipeUnlockDataTableRow : public FPalTechnologyDataTableRowBase
{
public:
	TArray<class FName>                          UnlockBuildObjects;                                // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class FName>                          UnlockItemRecipes;                                 // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalTechnologyDataSet
struct FPalTechnologyDataSet
{
public:
	class UDataTable*                            RecipeUnlockDataTable;                             // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            TechnologyNameTable;                               // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            TechnologyDescTable;                               // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalTimerHandle
struct FPalTimerHandle
{
public:
	uint8                                        Pad_3AF1[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalUIActionBindData
struct FPalUIActionBindData
{
public:
	uint8                                        Pad_3AF2[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Pal.PalBaseCampTaskCheckedData
struct FPalBaseCampTaskCheckedData
{
public:
	int32                                        CompletedTaskNum;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AF3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, int32>                     buildObjectNumMap;                                 // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        WorkerNum;                                         // 0x58(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AF4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Pal.PalBaseCampTaskData_BuildObject
struct FPalBaseCampTaskData_BuildObject
{
public:
	class FName                                  IncompleteMsgID;                                   // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CompleteMsgID;                                     // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalDataTableRowName_MapObjectData    MapObjectRowName;                                  // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequireNum;                                        // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Pal.PalBaseCampTaskData_WorkerNum
struct FPalBaseCampTaskData_WorkerNum
{
public:
	class FName                                  IncompleteMsgID;                                   // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CompleteMsgID;                                     // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequireNum;                                        // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Pal.PalBaseCampTaskDataSet
struct FPalBaseCampTaskDataSet
{
public:
	TArray<struct FPalBaseCampTaskData_BuildObject> RequireBuildObjects;                               // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FPalBaseCampTaskData_WorkerNum        RequirePalNum;                                     // 0x10(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AF5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Pal.PalInsideBaseCampUI_DisplayItemInfo
struct FPalInsideBaseCampUI_DisplayItemInfo
{
public:
	bool                                         IsShowWhenNothingItem;                             // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Pal.PalCalcCharacterDamageInfo
struct FPalCalcCharacterDamageInfo
{
public:
	float                                        OtomoRate;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DefenderLevel;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DefenderDefence;                                   // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalElementType                   DefenderElementType1;                              // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalElementType                   DefenderElementType2;                              // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AF6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ElementStatusMultiplay;                            // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalDropCharacterExtraParameter
struct FPalDropCharacterExtraParameter
{
public:
	struct FGuid                                 DropPlayerUId;                                     // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Pal.PalKeyAction
struct FPalKeyAction
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalKeyConfigAxisFilterType       FilterType;                                        // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AF7[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x190 (0x190 - 0x0)
// ScriptStruct Pal.PalMakeDamageInfo
struct FPalMakeDamageInfo
{
public:
	class AActor*                                Attacker;                                          // 0x0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Defender;                                          // 0x8(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       HitComponent;                                      // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Power;                                             // 0x18(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalWazaCategory                  Category;                                          // 0x1C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalElementType                   Element;                                           // 0x1D(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalAttackType                    AttackType;                                        // 0x1E(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalWeaponType                    WeaponType;                                        // 0x1F(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsLeanBack;                                        // 0x38(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsBlow;                                            // 0x39(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AF8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               BlowVelocity;                                      // 0x40(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            HitInfo;                                           // 0x58(0xE8)(BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class EPalAdditionalEffectType          EffectType1;                                       // 0x140(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AF9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EffectValue1;                                      // 0x144(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectValueEx1;                                    // 0x148(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalAdditionalEffectType          EffectType2;                                       // 0x14C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AFA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EffectValue2;                                      // 0x150(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectValueEx2;                                    // 0x154(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                HitFoliageIndex;                                   // 0x158(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        SneakAttackRate;                                   // 0x168(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageRatePerCollision;                            // 0x16C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPalSpecialAttackRateInfo>     SpecialAttackRateInfos;                            // 0x170(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EPalDamageAnimationReactionType   DamageReactionAnimationType;                       // 0x180(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttackableToFriend;                               // 0x181(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NoDamage;                                          // 0x182(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IgnoreShield;                                      // 0x183(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UIDamageTextOverride_DoubleRegist;                 // 0x184(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalPlayerDamageCameraShakeCategory CameraShake;                                       // 0x185(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalSizeType                      ForceRagdollSize;                                  // 0x186(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AFB[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                OverrideNetworkOwner;                              // 0x188(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Pal.PalTimerGaugeWidgetCreateInfo
struct FPalTimerGaugeWidgetCreateInfo
{
public:
	uint8                                        Pad_3AFC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                TargetActor;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetLocation;                                    // 0x10(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UPalUserWidgetTimerGaugeBase> TimerGaugeWidgetClass;                             // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DisplayOffset;                                     // 0x30(0x18)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DisplayRange;                                      // 0x48(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AFD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                FunctionName;                                      // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLooping;                                          // 0x64(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AFE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InitialStartDelay;                                 // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InitialStartDelayVariance;                         // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsHide;                                            // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AFF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalDataTableRowName_PalShopCreateData
struct FPalDataTableRowName_PalShopCreateData
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalDataTableRowName_ItemShopLotteryData
struct FPalDataTableRowName_ItemShopLotteryData
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Pal.PalVisualEffectDynamicParameterFloat
struct FPalVisualEffectDynamicParameterFloat
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalVisualEffectDynamicParameter
struct FPalVisualEffectDynamicParameter
{
public:
	TArray<struct FPalVisualEffectDynamicParameterFloat> FloatValues;                                       // 0x0(0x10)(BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalWorkAssignInfo
struct FPalWorkAssignInfo
{
public:
	int32                                        LocationIndex;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B00[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalWorkAssign*                        WorkAssign;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0x18 - 0xC)
// ScriptStruct Pal.PalWorkAssignRepInfo
struct FPalWorkAssignRepInfo : public FFastArraySerializerItem
{
public:
	int32                                        LocationIndex;                                     // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPalWorkAssign*                        WorkAssign;                                        // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x148 - 0x108)
// ScriptStruct Pal.PalFastWorkAssignRepInfoArray
struct FPalFastWorkAssignRepInfoArray : public FFastArraySerializer
{
public:
	TArray<struct FPalWorkAssignRepInfo>         Items;                                             // 0x108(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B01[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Pal.PalWorkAssignLocalLocation
struct FPalWorkAssignLocalLocation
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FacingDirection;                                   // 0x18(0x18)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Pal.PalWorkAssignDefineData
struct FPalWorkAssignDefineData
{
public:
	TArray<enum class EPalGenusCategoryType>     GenusCategories;                                   // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<enum class EPalElementType>           ElementTypes;                                      // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class EPalWorkSuitability               WorkSuitability;                                   // 0x20(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B02[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WorkSuitabilityRank;                               // 0x24(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayerWorkable;                                   // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalWorkType                      WorkType;                                          // 0x29(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalActionType                    ActionType;                                        // 0x2A(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B03[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WorkerMaxNum;                                      // 0x2C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AffectSanityValue;                                 // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B04[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Pal.PalWorldMapUIRegionData
struct FPalWorldMapUIRegionData
{
public:
	TSoftObjectPtr<class UTexture2D>             Texture;                                           // 0x0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             blockSize;                                         // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             GridPosition;                                      // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RegionNameMsgId;                                   // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD8 - 0x8)
// ScriptStruct Pal.PalWorldMapUIDataTableRow
struct FPalWorldMapUIDataTableRow : public FTableRowBase
{
public:
	struct FVector2D                             MinMapTextureBlockSize;                            // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MapBlockNum;                                       // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LandScapeRealPositionMin;                          // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LandScapeRealPositionMax;                          // 0x40(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, struct FPalWorldMapUIRegionData> TextureDataMap;                                    // 0x58(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             DefaultMaskTexture;                                // 0xA8(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalWorldSecurityWantedStateInfo
struct FPalWorldSecurityWantedStateInfo
{
public:
	struct FDateTime                             ExpiredDate;                                       // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                         CrimeInstanceIdArray;                              // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Pal.PalCrimeStateInfo
struct FPalCrimeStateInfo
{
public:
	TMap<struct FGuid, struct FDateTime>         CrimeStateFinishTimeMap;                           // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                         CrimeStateArray;                                   // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Pal.PalCoopSkillAssaultrifleModeCandidateLocation
struct FPalCoopSkillAssaultrifleModeCandidateLocation
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B05[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x68 - 0x48)
// ScriptStruct Pal.PalAIMoveRequest
struct FPalAIMoveRequest : public FAIMoveRequest
{
public:
	uint8                                        Pad_3B06[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Pal.PalPathFollowingBlockDetectionParams
struct FPalPathFollowingBlockDetectionParams
{
public:
	float                                        BlockDetectionDistance;                            // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlockDetectionInterval;                            // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BlockDetectionSampleCount;                         // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalAISensorSearchQuery
struct FPalAISensorSearchQuery
{
public:
	uint8                                        Pad_3B07[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Pal.PalAmbientSoundAreaData
struct FPalAmbientSoundAreaData
{
public:
	int32                                        AmbientPriority;                                   // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B08[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAkAudioEvent*>                 DayAmbientEvents;                                  // 0x8(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAkAudioEvent*>                 NightAmbientEvents;                                // 0x18(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalAudioFadeParameter
struct FPalAudioFadeParameter
{
public:
	enum class EPalAudioFadeType                 FadeType;                                          // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B09[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentVolume;                                     // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Pal.PalBaseCampWorkerTaskCheckResponse
struct FPalBaseCampWorkerTaskCheckResponse
{
public:
	uint8                                        Pad_3B0A[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Pal.PalAIActionBaseCampSleepActivelyParameter
struct FPalAIActionBaseCampSleepActivelyParameter
{
public:
	float                                        WalkAroundTime;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x170 (0x170 - 0x0)
// ScriptStruct Pal.PalBaseCampCreateParameter
struct FPalBaseCampCreateParameter
{
public:
	uint8                                        Pad_3B0B[0x170];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Pal.PalBaseCampLevelMasterData
struct FPalBaseCampLevelMasterData : public FTableRowBase
{
public:
	int32                                        Level;                                             // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WorkerMaxNum;                                      // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BaseCampMaxNumInGuild;                             // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B0C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct Pal.PalBaseCampWorkerEventMasterData
struct FPalBaseCampWorkerEventMasterData : public FTableRowBase
{
public:
	class FName                                  Debug_DisplayName;                                 // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalBaseCampWorkerEventPriority   Priority;                                          // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B0D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TriggerSanity;                                     // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowInterruptRecoverHungry;                      // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowInterruptSleep;                              // 0x19(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAssignableWork;                                   // 0x1A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B0E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TriggerSkipCount;                                  // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalLogPriority                   LogPriority;                                       // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalLogContentToneType            LogTone;                                           // 0x21(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Invalid;                                           // 0x22(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B0F[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalBaseCampPassiveEffectWorkHardInfo
struct FPalBaseCampPassiveEffectWorkHardInfo
{
public:
	float                                        WorkSpeedRate;                                     // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoveSpeedRate;                                     // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AffectSanityRate;                                  // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DecreaseFullStomachRate;                           // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Pal.PalBaseCampModuleTransportItemRequirement
struct FPalBaseCampModuleTransportItemRequirement
{
public:
	enum class EPalBaseCampModuleTransportItemTransportPriority Priority;                                          // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B10[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPalStaticItemIdAndNum>        ItemInfo;                                          // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	TArray<enum class EPalItemTypeA>             ItemTypeA;                                         // 0x18(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	TArray<enum class EPalItemTypeB>             ItemTypeB;                                         // 0x28(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	TArray<enum class EPalBaseCampModuleTransportItemTransportableItemExtraType> ItemExtraTypes;                                    // 0x38(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Pal.PalBaseCampModuleTransportItemDirection
struct FPalBaseCampModuleTransportItemDirection
{
public:
	struct FGuid                                 RequiredMapObjectConcreteModelInstanceId;          // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 TransportTargetMapObjectConcreteModelInstanceId;   // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxItemStackNum;                                   // 0x20(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRetunring;                                        // 0x24(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B11[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Pal.PalBaseCampFacilityUsageInfo
struct FPalBaseCampFacilityUsageInfo
{
public:
	enum class EPalBaseCampFacilityUsageState    State;                                             // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B12[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalInstanceID                        ReservedIndividualId;                              // 0x8(0x30)(Edit, DisableEditOnTemplate, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Pal.PalBaseCampFacilityUsageInfoSet
struct FPalBaseCampFacilityUsageInfoSet
{
public:
	TMap<struct FGuid, struct FPalBaseCampFacilityUsageInfo> InfoMap;                                           // 0x0(0x50)(Edit, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalBaseCampFacilityCountPair
struct FPalBaseCampFacilityCountPair
{
public:
	enum class EPalMapObjectWorkerAvailableFacilityType FacilityType;                                      // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B13[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FacilityCount;                                     // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0x18 - 0xC)
// ScriptStruct Pal.PalBaseCampPassiveEffectRepInfo
struct FPalBaseCampPassiveEffectRepInfo : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_3B14[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalBaseCampPassiveEffectBase*         Effect;                                            // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x118 - 0x108)
// ScriptStruct Pal.PalFastBaseCampPassiveEffectRepInfoArray
struct FPalFastBaseCampPassiveEffectRepInfoArray : public FFastArraySerializer
{
public:
	TArray<struct FPalBaseCampPassiveEffectRepInfo> Items;                                             // 0x108(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalBaseCampModuleResourceCollectWorkInfo
struct FPalBaseCampModuleResourceCollectWorkInfo
{
public:
	struct FGuid                                 WorkId;                                            // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct Pal.PalBaseCampModuleTransportItemDepotParameter
struct FPalBaseCampModuleTransportItemDepotParameter
{
public:
	struct FGuid                                 OwnerMapObjectConcreteModelInstanceId;             // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalBoundsTransform                   DepotLocalBoundsTransform;                         // 0x10(0x80)(Edit, DisableEditOnTemplate, Transient, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalBaseCampModuleTransportItemRequirement Requirement;                                       // 0x90(0x48)(Edit, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B15[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x180 (0x180 - 0x0)
// ScriptStruct Pal.PalBaseCampModuleTransportItemStatus
struct FPalBaseCampModuleTransportItemStatus
{
public:
	struct FPalBaseCampModuleTransportItemRequirement Requirement;                                       // 0x0(0x48)(Edit, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	bool                                         bDepot;                                            // 0x48(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B16[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalBoundsTransform                   DepotLocalBoundsTransform;                         // 0x50(0x80)(Edit, DisableEditOnTemplate, Transient, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FGuid                                 WorkId;                                            // 0xD0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FPalInstanceID, struct FPalBaseCampModuleTransportItemDirection> DirectionMap;                                      // 0xE0(0x50)(Edit, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	TMap<class FName, int32>                     NotSatisfiedRequirementItemInfoMap;                // 0x130(0x50)(Edit, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Pal.PalBaseCampModuleTransportItemTargetReservedInfo
struct FPalBaseCampModuleTransportItemTargetReservedInfo
{
public:
	TArray<struct FPalStaticItemIdAndNum>        ItemInfos;                                         // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	struct FGuid                                 RequiredConcreteModelId;                           // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct Pal.PalBaseCampModuleTransportItemTarget
struct FPalBaseCampModuleTransportItemTarget
{
public:
	bool                                         bTargetRemoved;                                    // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B17[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FPalInstanceID, struct FPalBaseCampModuleTransportItemTargetReservedInfo> ReservedInfoMap;                                   // 0x8(0x50)(Edit, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	bool                                         bNotExistMovePath;                                 // 0x58(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableObtainAnywhere;                             // 0x59(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B18[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, int32>                     NotReservedItemInfoMap;                            // 0x60(0x50)(Edit, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	struct FGuid                                 WorkId;                                            // 0xB0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Pal.PalBaseCampModuleTransportItemCharacterInfo
struct FPalBaseCampModuleTransportItemCharacterInfo
{
public:
	TArray<struct FPalItemAndNum>                ItemInfos;                                         // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	struct FVector                               CharacterLocation;                                 // 0x10(0x18)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x28 - 0xC)
// ScriptStruct Pal.PalBaseCampRepInfo
struct FPalBaseCampRepInfo : public FFastArraySerializerItem
{
public:
	struct FGuid                                 ID;                                                // 0xC(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B19[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalBaseCampModel*                     BaseCamp;                                          // 0x20(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x148 - 0x108)
// ScriptStruct Pal.FastPalBaseCampRepInfoArray
struct FFastPalBaseCampRepInfoArray : public FFastArraySerializer
{
public:
	TArray<struct FPalBaseCampRepInfo>           Items;                                             // 0x108(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B1A[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x78 - 0x8)
// ScriptStruct Pal.PalBaseCampTaskDataSet_TableRow
struct FPalBaseCampTaskDataSet_TableRow : public FTableRowBase
{
public:
	int32                                        Level;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WorkerNum;                                         // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  WorkerNum_IncompleteMsgID;                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  WorkerNum_CompleteMsgID;                           // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BuildObject1;                                      // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BuildObjectNum1;                                   // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BuildObject1_IncompleteMsgID;                      // 0x2C(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BuildObject1_CompleteMsgID;                        // 0x34(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BuildObject2;                                      // 0x3C(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BuildObjectNum2;                                   // 0x44(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BuildObject2_IncompleteMsgID;                      // 0x48(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BuildObject2_CompleteMsgID;                        // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BuildObject3;                                      // 0x58(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BuildObjectNum3;                                   // 0x60(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BuildObject3_IncompleteMsgID;                      // 0x64(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BuildObject3_CompleteMsgID;                        // 0x6C(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B1B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Pal.PalBossBattleLevelInstanceLoadOperator
struct FPalBossBattleLevelInstanceLoadOperator
{
public:
	uint8                                        Pad_3B1C[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1A0 (0x1A0 - 0x0)
// ScriptStruct Pal.PalBossBattleInstanceModelCreateParameter
struct FPalBossBattleInstanceModelCreateParameter
{
public:
	uint8                                        Pad_3B1D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class APalCutsceneActor>       IntroCutsceneActor;                                // 0x8(0x30)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataLayerAsset*                       ReservedDataLayerAsset;                            // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          BGMAudioEvent;                                     // 0x40(0x30)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APalBossTower*                         BossTower;                                         // 0x70(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B1E[0x128];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalBuildObjectDataSetTypeB
struct FPalBuildObjectDataSetTypeB
{
public:
	enum class EPalBuildObjectTypeB              TypeB;                                             // 0x0(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B1F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPalBuildObjectData>           DataArray;                                         // 0x8(0x10)(BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct Pal.PalBuildObjectIconData
struct FPalBuildObjectIconData : public FTableRowBase
{
public:
	TSoftObjectPtr<class UTexture2D>             SoftIcon;                                          // 0x8(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct Pal.PalBuildInstallOtherOptions
struct FPalBuildInstallOtherOptions
{
public:
	uint8                                        Pad_3B20[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalBuildObjectMaterialArray
struct FPalBuildObjectMaterialArray
{
public:
	TArray<class UMaterialInterface*>            Materials;                                         // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalCaptureBallEffectSettingData
struct FPalCaptureBallEffectSettingData
{
public:
	int32                                        CaptureAbsorbToBall_ParticleCount;                 // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CaptureAbsorbToBall_Scale;                         // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Pal.CaptureResult
struct FCaptureResult
{
public:
	bool                                         IsSuccess;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B21[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TestSuccessCount;                                  // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFailedCaptureType                FailedCaptureType;                                 // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B22[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Pal.PalCameraDOFSetting
struct FPalCameraDOFSetting
{
public:
	float                                        DepthOfFieldFocalDistance;                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DepthOfFieldDepthBlurAmount;                       // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DepthOfFieldDepthBlurRadius;                       // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DepthOfFieldFstop;                                 // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FOV;                                               // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Pal.PalCharacterContainerSlotInfo
struct FPalCharacterContainerSlotInfo
{
public:
	struct FPalInstanceID                        IndividualId;                                      // 0x0(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalCharacterSlotId                   SlotID;                                            // 0x30(0x14)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B23[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Pal.PalCharacterSlotUpdateInfo
struct FPalCharacterSlotUpdateInfo
{
public:
	struct FPalContainerId                       ContainerId;                                       // 0x0(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlotIndex;                                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B24[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalInstanceID                        InstanceId;                                        // 0x18(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Pal.PalIndividualCharacterSlotUpdateInfo
struct FPalIndividualCharacterSlotUpdateInfo
{
public:
	uint8                                        Pad_3B25[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Pal.PalIndividualCharacterSlotResultInfo
struct FPalIndividualCharacterSlotResultInfo
{
public:
	uint8                                        Pad_3B26[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.CharacterListForImportanceManager
struct FCharacterListForImportanceManager
{
public:
	TArray<class APalCharacter*>                 CharacterList;                                     // 0x0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x4C (0x58 - 0xC)
// ScriptStruct Pal.CharacterParameterRepInfo
struct FCharacterParameterRepInfo : public FFastArraySerializerItem
{
public:
	struct FGuid                                 RequestGUID;                                       // 0xC(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B27[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalInstanceID                        ID;                                                // 0x20(0x30)(Edit, DisableEditOnTemplate, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPalIndividualCharacterParameter*      Parameter;                                         // 0x50(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x148 - 0x108)
// ScriptStruct Pal.FastCharacterParameterRepInfoArray
struct FFastCharacterParameterRepInfoArray : public FFastArraySerializer
{
public:
	TArray<struct FCharacterParameterRepInfo>    Items;                                             // 0x108(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B28[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Pal.PalCombiUniqueDatabaseRow
struct FPalCombiUniqueDatabaseRow : public FTableRowBase
{
public:
	enum class EPalTribeID                       ParentTribeA;                                      // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalTribeID                       ParentTribeB;                                      // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B29[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ChildCharacterID;                                  // 0xC(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B2A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalContainerInitializeParameter
struct FPalContainerInitializeParameter
{
public:
	struct FPalContainerId                       ID;                                                // 0x0(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlotNum;                                           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReferenceSlot;                                    // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalContainerOperationRestrictType OperationRestrictType;                             // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B2B[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Pal.PalContainerInfo
struct FPalContainerInfo
{
public:
	uint8                                        Pad_3B2C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalContainerId                       ContainerId;                                       // 0x8(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlotNum;                                           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B2D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3 (0x3 - 0x0)
// ScriptStruct Pal.PalContainerCreateExtraParameter
struct FPalContainerCreateExtraParameter
{
public:
	bool                                         bIsWatchAllPlayer;                                 // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSyncEnable;                                     // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalContainerOperationRestrictType OperationRestrictType;                             // 0x2(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalCoopSkillModuleAssignPassiveSkillNames
struct FPalCoopSkillModuleAssignPassiveSkillNames
{
public:
	TArray<struct FPalDataTableRowName_PassiveSkillData> AssignSkillNames;                                  // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Pal.PalCoopSkillSearchResultParameter
struct FPalCoopSkillSearchResultParameter
{
public:
	enum class EPalCoopSkillSearchType           SearchType;                                        // 0x0(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B2E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 InstanceId;                                        // 0x20(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalInstanceID                        IndividualId;                                      // 0x30(0x30)(Edit, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 RequestPlayerUId;                                  // 0x60(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Pal.PalUMGCustomVertexData
struct FPalUMGCustomVertexData
{
public:
	struct FVector4                              TexCoords;                                         // 0x0(0x20)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MaterialTexCoords;                                 // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Position;                                          // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Color;                                             // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PixelWidth;                                        // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PixelHeight;                                       // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B2F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x120 (0x128 - 0x8)
// ScriptStruct Pal.PalCharacterParameterDatabaseRow
struct FPalCharacterParameterDatabaseRow : public FTableRowBase
{
public:
	class FName                                  OverrideNameTextID;                                // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NamePrefixID;                                      // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OverridePartnerSkillTextID;                        // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPal;                                             // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalTribeID                       Tribe;                                             // 0x21(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B30[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BPClass;                                           // 0x24(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ZukanIndex;                                        // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ZukanIndexSuffix;                                  // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalSizeType                      Size;                                              // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B31[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Rarity;                                            // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalElementType                   ElementType1;                                      // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalElementType                   ElementType2;                                      // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalGenusCategoryType             GenusCategory;                                     // 0x4A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalOrganizationType              Organization;                                      // 0x4B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalWeaponType                    Weapon;                                            // 0x4C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         WeaponEquip;                                       // 0x4D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B32[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HP;                                                // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MeleeAttack;                                       // 0x54(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ShotAttack;                                        // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Defense;                                           // 0x5C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Support;                                           // 0x60(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CraftSpeed;                                        // 0x64(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EnemyReceiveDamageRate;                            // 0x68(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CaptureRateCorrect;                                // 0x6C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExpRatio;                                          // 0x70(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Price;                                             // 0x74(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AIResponse;                                        // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AISightResponse;                                   // 0x80(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlowWalkSpeed;                                     // 0x88(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WalkSpeed;                                         // 0x8C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RunSpeed;                                          // 0x90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RideSprintSpeed;                                   // 0x94(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TransportSpeed;                                    // 0x98(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsBoss;                                            // 0x9C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsTowerBoss;                                       // 0x9D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalBattleBGMType                 BattleBGM;                                         // 0x9E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IgnoreLeanBack;                                    // 0x9F(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IgnoreBlowAway;                                    // 0xA0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B33[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxFullStomach;                                    // 0xA4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FullStomachDecreaseRate;                           // 0xA8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FoodAmount;                                        // 0xAC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ViewingDistance;                                   // 0xB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ViewingAngle;                                      // 0xB4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HearingRate;                                       // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NooseTrap;                                         // 0xBC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Nocturnal;                                         // 0xBD(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B34[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BiologicalGrade;                                   // 0xC0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Predator;                                          // 0xC4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Edible;                                            // 0xC5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B35[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Stamina;                                           // 0xC8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaleProbability;                                   // 0xCC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CombiRank;                                         // 0xD0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WorkSuitability_EmitFlame;                         // 0xD4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WorkSuitability_Watering;                          // 0xD8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WorkSuitability_Seeding;                           // 0xDC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WorkSuitability_GenerateElectricity;               // 0xE0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WorkSuitability_Handcraft;                         // 0xE4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WorkSuitability_Collection;                        // 0xE8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WorkSuitability_Deforest;                          // 0xEC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WorkSuitability_Mining;                            // 0xF0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WorkSuitability_OilExtraction;                     // 0xF4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WorkSuitability_ProductMedicine;                   // 0xF8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WorkSuitability_Cool;                              // 0xFC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WorkSuitability_Transport;                         // 0x100(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WorkSuitability_MonsterFarm;                       // 0x104(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PassiveSkill1;                                     // 0x108(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PassiveSkill2;                                     // 0x110(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PassiveSkill3;                                     // 0x118(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PassiveSkill4;                                     // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct Pal.PalPlayerParameterDatabaseRow
struct FPalPlayerParameterDatabaseRow : public FTableRowBase
{
public:
	int32                                        Stamina;                                           // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HP;                                                // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MeleeAttack;                                       // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ShotAttack;                                        // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Defense;                                           // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Support;                                           // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CraftSpeed;                                        // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Satiety;                                           // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Pal.PalPlayerStatusRankMasterData
struct FPalPlayerStatusRankMasterData : public FTableRowBase
{
public:
	int32                                        Rank;                                              // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredRelicNum;                                  // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ResetRequiredMoney;                                // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B36[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct Pal.PalCharacterUpgradeMasterData
struct FPalCharacterUpgradeMasterData : public FTableRowBase
{
public:
	int32                                        Rank;                                              // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RequiredStaticItemId;                              // 0xC(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredItemNum;                                   // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ResetRequiredMoney;                                // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B37[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x78 - 0x8)
// ScriptStruct Pal.PalDropItemDatabaseRow
struct FPalDropItemDatabaseRow : public FTableRowBase
{
public:
	class FName                                  CharacterID;                                       // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ItemId1;                                           // 0x14(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Rate1;                                             // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Min1;                                              // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Max1;                                              // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ItemId2;                                           // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Rate2;                                             // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Min2;                                              // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Max2;                                              // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ItemId3;                                           // 0x3C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Rate3;                                             // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Min3;                                              // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Max3;                                              // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ItemId4;                                           // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Rate4;                                             // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Min4;                                              // 0x5C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Max4;                                              // 0x60(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ItemId5;                                           // 0x64(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Rate5;                                             // 0x6C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Min5;                                              // 0x70(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Max5;                                              // 0x74(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct Pal.PalCapturedCageInfoDatabaseRow
struct FPalCapturedCageInfoDatabaseRow : public FTableRowBase
{
public:
	class FName                                  FieldName;                                         // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PalID;                                             // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinLevel;                                          // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLevel;                                          // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B38[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x38 - 0x8)
// ScriptStruct Pal.PalCharacterIconDataRow
struct FPalCharacterIconDataRow : public FTableRowBase
{
public:
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x8(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct Pal.PalBPClassDataRow
struct FPalBPClassDataRow : public FTableRowBase
{
public:
	TSoftClassPtr<class APalCharacter>           BPClass;                                           // 0x8(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Pal.PalSizeParameterDataRow
struct FPalSizeParameterDataRow : public FTableRowBase
{
public:
	enum class EPalSizeType                      Size;                                              // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B39[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EffectScale;                                       // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        JumpEffectOffsetZ;                                 // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B3A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct Pal.PalStatusEffectFoodDataRow
struct FPalStatusEffectFoodDataRow : public FTableRowBase
{
public:
	int32                                        EffectTime;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalFoodStatusEffectType          EffectType1;                                       // 0xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B3B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EffectValue1;                                      // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalFoodStatusEffectType          EffectType2;                                       // 0x14(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B3C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EffectValue2;                                      // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B3D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Pal.PalDropItemInfo
struct FPalDropItemInfo
{
public:
	uint8                                        Pad_3B3E[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Pal.PalDeathPenaltyInfo
struct FPalDeathPenaltyInfo
{
public:
	struct FGuid                                 DeathPenaID;                                       // 0x0(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 DeathPlayerID;                                     // 0x10(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PlayerDeathLocation;                               // 0x20(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DropItemLocation;                                  // 0x38(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPalItemAndNum>                DropItemList;                                      // 0x50(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalDeathPenaltyList
struct FPalDeathPenaltyList
{
public:
	TArray<struct FPalDeathPenaltyInfo>          DeathPenaArray;                                    // 0x0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Pal.PalDebugInfoSet
struct FPalDebugInfoSet
{
public:
	uint8                                        Pad_3B3F[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct Pal.PalFieldLotteryName
struct FPalFieldLotteryName : public FTableRowBase
{
public:
	float                                        ItemSlot1_ProbabilityPercent;                      // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemSlot2_ProbabilityPercent;                      // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemSlot3_ProbabilityPercent;                      // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemSlot4_ProbabilityPercent;                      // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemSlot5_ProbabilityPercent;                      // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B40[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Pal.PalRespawnPointData
struct FPalRespawnPointData : public FTableRowBase
{
public:
	class FName                                  SpawnPointID;                                      // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ResourcesAbundant;                                 // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PalAbundant;                                       // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Pal.PalDungeonSpawnAreaData
struct FPalDungeonSpawnAreaData : public FTableRowBase
{
public:
	class FName                                  DungeonNameTextId;                                 // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PostfixTextId;                                     // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct Pal.PalDungeonLevelData
struct FPalDungeonLevelData : public FTableRowBase
{
public:
	class FName                                  SpawnAreaId;                                       // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeightInSpawnArea;                                 // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LevelName;                                         // 0x14(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B41[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalDungeonMarkerPointSpawnParameter
struct FPalDungeonMarkerPointSpawnParameter
{
public:
	float                                        RespawnInterval;                                   // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DisappearInterval;                                 // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RespawnProbability;                                // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DisappearIntervalAfterDefeatBoss;                  // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct Pal.PalDungeonMarkerPointData
struct FPalDungeonMarkerPointData
{
public:
	struct FGuid                                 MarkerPointId;                                     // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          SpawnAreaIds;                                      // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x20(0x60)(Edit, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalDungeonMarkerPointSpawnParameter  SpawnParameter;                                    // 0x80(0x10)(Edit, DisableEditOnTemplate, Transient, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class APalDungeonEntrance>       EntranceClass;                                     // 0x90(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B42[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 ConnectedDungeonInstanceId;                        // 0xA0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct Pal.PalDungeonEnemySpawnerData
struct FPalDungeonEnemySpawnerData : public FTableRowBase
{
public:
	class FName                                  SpawnAreaId;                                       // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalDungeonEnemySpawnerRankType   RankType;                                          // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B43[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WeightInSpawnAreaAndRank;                          // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class APalNPCSpawnerBase>      SpawnerBlueprintSoftClass;                         // 0x18(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SpawnerName;                                       // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct Pal.PalDungeonItemSpawnerData
struct FPalDungeonItemSpawnerData : public FTableRowBase
{
public:
	class FName                                  SpawnAreaId;                                       // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalDungeonItemSpawnerType        Type;                                              // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B44[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ItemFieldLotteryName;                              // 0x14(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B45[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Pal.PalDungeonInfoParameter
struct FPalDungeonInfoParameter
{
public:
	class FText                                  DungeonName;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DisappearRemainSeconds;                            // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B46[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Pal.PalDungeonLevelInstanceLoadOperator
struct FPalDungeonLevelInstanceLoadOperator
{
public:
	uint8                                        Pad_3B47[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Pal.PalDungeonInstanceModelCreateParameter
struct FPalDungeonInstanceModelCreateParameter
{
public:
	uint8                                        Pad_3B48[0x60];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataLayerAsset*                       ReservedDataLayerAsset;                            // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalDungeonMarkerPointDataSet
struct FPalDungeonMarkerPointDataSet
{
public:
	TArray<struct FPalDungeonMarkerPointData>    MarkerPoints;                                      // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalDungeonDataLayerAssetSet
struct FPalDungeonDataLayerAssetSet
{
public:
	TArray<class UDataLayerAsset*>               DataLayers;                                        // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalDynamicItemDataInfo
struct FPalDynamicItemDataInfo
{
public:
	class UPalDynamicItemDataBase*               ItemData;                                          // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B4A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Pal.PalDynamicItemDisposeReserveInfo
struct FPalDynamicItemDisposeReserveInfo
{
public:
	uint8                                        Pad_3B4C[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Pal.PalDynamicItemInfo
struct FPalDynamicItemInfo
{
public:
	struct FPalItemSlotId                        SlotID;                                            // 0x0(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B4D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalDynamicItemDataBase*               DynamicItemData;                                   // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalDynamicItemIdArray
struct FPalDynamicItemIdArray
{
public:
	uint8                                        Pad_3B4E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalDataTableRowName_FarmCropData
struct FPalDataTableRowName_FarmCropData
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalDataTableRowName_CrimeMasterData
struct FPalDataTableRowName_CrimeMasterData
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalDataTableRowName_ItemProductData
struct FPalDataTableRowName_ItemProductData
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalDataTableRowName_RecipeTechnologyData
struct FPalDataTableRowName_RecipeTechnologyData
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalDataTableRowName_BaseCampWorkerEventData
struct FPalDataTableRowName_BaseCampWorkerEventData
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalDataTableRowName_UIInputAction
struct FPalDataTableRowName_UIInputAction
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalDataTableRowName_ItemShopCreateData
struct FPalDataTableRowName_ItemShopCreateData
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalDataTableRowName_DungeonSpawnAreaData
struct FPalDataTableRowName_DungeonSpawnAreaData
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalDataTableRowName_FieldLotteryNameData
struct FPalDataTableRowName_FieldLotteryNameData
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalDataTableRowName_NoteData
struct FPalDataTableRowName_NoteData
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.SpawnedEnemyInfo
struct FSpawnedEnemyInfo
{
public:
	class AActor*                                SelfActor;                                         // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalEnemySpawnActorType           WeaponType;                                        // 0x8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B50[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                TargetActor;                                       // 0x10(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.TargetAbleInfoForEnemy
struct FTargetAbleInfoForEnemy
{
public:
	class AActor*                                SelfActor;                                         // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DuplicateNum;                                      // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThreatLevel_OnlyCharacterParam;                    // 0xC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalEquipWeaponInfo
struct FPalEquipWeaponInfo
{
public:
	struct FPalContainerId                       ContainerId;                                       // 0x0(0x10)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APalMonsterEquipWeaponBase*            SpawnedWeapon;                                     // 0x10(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct Pal.PalExpDatabaseRaw
struct FPalExpDatabaseRaw : public FTableRowBase
{
public:
	int32                                        DropEXP;                                           // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NextEXP;                                           // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PalNextEXP;                                        // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalEXP;                                          // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PalTotalEXP;                                       // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B51[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct Pal.PalCaptureBonusExpRaw
struct FPalCaptureBonusExpRaw : public FTableRowBase
{
public:
	int32                                        BonusExp;                                          // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B52[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Pal.PalMorphSetting
struct FPalMorphSetting
{
public:
	TMap<class FName, float>                     WeightList;                                        // 0x0(0x50)(Transient, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Pal.PalFoliageInstallData
struct FPalFoliageInstallData
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotator;                                           // 0x18(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Scale3D;                                           // 0x30(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalFoliageInstallDataArray
struct FPalFoliageInstallDataArray
{
public:
	TArray<struct FPalFoliageInstallData>        InstallDataArray;                                  // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Pal.PalFoliageInstanceInfo
struct FPalFoliageInstanceInfo
{
public:
	uint8                                        Pad_3B53[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x30 - 0xC)
// ScriptStruct Pal.PalFoliageInstanceRepInfo
struct FPalFoliageInstanceRepInfo : public FFastArraySerializerItem
{
public:
	class FName                                  FoliageTypeId;                                     // 0xC(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalFoliageInstanceId                 InstanceId;                                        // 0x14(0x10)(Edit, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B54[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalFoliageInstance*                   Instance;                                          // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x148 - 0x108)
// ScriptStruct Pal.PalFoliageInstanceRepInfoArray
struct FPalFoliageInstanceRepInfoArray : public FFastArraySerializer
{
public:
	TArray<struct FPalFoliageInstanceRepInfo>    Items;                                             // 0x108(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B55[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Pal.PalMapObjectFoliageDropItemData
struct FPalMapObjectFoliageDropItemData
{
public:
	struct FPalDataTableRowName_ItemData         StaticItemId;                                      // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Num;                                               // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Pal.PalMapObjectDropItemData
struct FPalMapObjectDropItemData
{
public:
	struct FPalDataTableRowName_ItemData         StaticItemId;                                      // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Num;                                               // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Pal.PalFoliagePresetData
struct FPalFoliagePresetData
{
public:
	struct FPalDataTableRowName_MapObjectData    FoliageMapObjectId;                                // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HP;                                                // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B56[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPalMapObjectDropItemData>     DamagedDropItems;                                  // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FPalDataTableRowName_ItemData         DropItemId;                                        // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DropItemNum;                                       // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DropEXP;                                           // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalMapObjectDestroyFXType        DestroyFXType;                                     // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B57[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DistanceFromPlayerNotRespawn;                      // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RespawnIntervalRealMinutes;                        // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RetryRespawnIntervalRealMinutes;                   // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Pal.FootIKSetting
struct FFootIKSetting
{
public:
	bool                                         bIsEnableIK;                                       // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B58[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  RayCastBoneName;                                   // 0x4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RayStartOffset;                                    // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RayEndOffset;                                      // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Pal.FootStepEffectInfo
struct FFootStepEffectInfo
{
public:
	TMap<enum class EPhysicalSurface, TSoftObjectPtr<class UNiagaraSystem>> PhysicalSurfaceToEffect;                           // 0x0(0x50)(Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Pal.PalFunnelCharacterManagementInfo
struct FPalFunnelCharacterManagementInfo
{
public:
	struct FPalInstanceID                        OwnerCharacterId;                                  // 0x0(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APalFunnelCharacter*                   FunnelCharacter;                                   // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Pal.PalFunnelSkillModuleCollectItemSearchInfo
struct FPalFunnelSkillModuleCollectItemSearchInfo
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ElapsedTime;                                       // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B59[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x68 - 0x8)
// ScriptStruct Pal.PalGameProgressPresetDataTableRow
struct FPalGameProgressPresetDataTableRow : public FTableRowBase
{
public:
	int32                                        Level;                                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HPLevel;                                           // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SPLevel;                                           // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AttackLevel;                                       // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WorkLevel;                                         // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WeightLevel;                                       // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CaptureLevel;                                      // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B5A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPalDebugOtomoPalInfo>         OtomoPals;                                         // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPalDebugOtomoPalInfo>         CapturedPals;                                      // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPalDebugItemCreateInfo>       LoadoutItems;                                      // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPalDebugItemCreateInfo>       Items;                                             // 0x58(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct Pal.PalSoundSource
struct FPalSoundSource : public FTableRowBase
{
public:
	int32                                        Radius_Meter;                                      // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMuteable;                                       // 0xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B5B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalMapObjectRepairInfo
struct FPalMapObjectRepairInfo
{
public:
	struct FPalDataTableRowName_ItemData         RepairKitItemName;                                 // 0x0(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RepairKitRequiredNum;                              // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RepairRequiredWorkAmount;                          // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalGameSystemInitSequenceSet
struct FPalGameSystemInitSequenceSet
{
public:
	TArray<class UPalGameSystemInitSequenceBase*> InitSequences;                                     // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Pal.PalGroupCreateParameter
struct FPalGroupCreateParameter
{
public:
	enum class EPalGroupType                     Type;                                              // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalOrganizationType              OrganizationType;                                  // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B5C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                GroupName;                                         // 0x8(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 AdminPlayerUId;                                    // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Pal.PalGroupUpdateInfo
struct FPalGroupUpdateInfo
{
public:
	struct FGuid                                 EnterGroupId;                                      // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ExitGroupId;                                       // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                         PlayerUIds;                                        // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPalInstanceID>                CharacterIndividualIds;                            // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                         MapObjectInstanceIds_BaseCampPoint;                // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                         BaseCampIds;                                       // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x34 (0x40 - 0xC)
// ScriptStruct Pal.PalGuildPlayerInfoRepInfo
struct FPalGuildPlayerInfoRepInfo : public FFastArraySerializerItem
{
public:
	struct FGuid                                 PlayerUId;                                         // 0xC(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B5D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalGuildPlayerInfo                   PlayerInfo;                                        // 0x20(0x20)(Edit, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
};

// 0x40 (0x148 - 0x108)
// ScriptStruct Pal.PalFastGuildPlayerInfoRepInfoArray
struct FPalFastGuildPlayerInfoRepInfoArray : public FFastArraySerializer
{
public:
	TArray<struct FPalGuildPlayerInfoRepInfo>    Items;                                             // 0x108(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B5E[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Pal.PalGuildPalStorageInfo
struct FPalGuildPalStorageInfo
{
public:
	uint8                                        Pad_3B5F[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Pal.PalHitCollisionSetupParameter
struct FPalHitCollisionSetupParameter
{
public:
	uint8                                        Pad_3B60[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct Pal.PalIncidentParameterDataTableRow
struct FPalIncidentParameterDataTableRow : public FTableRowBase
{
public:
	class FName                                  Option;                                            // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Pal.PalInteractiveObjectActionInfoData
struct FPalInteractiveObjectActionInfoData
{
public:
	enum class EPalInteractiveObjectIndicatorType IndicatorType;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalInteractiveObjectButtonType   buttonType;                                        // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B61[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LongPushTime;                                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValid;                                            // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockRiding;                                       // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsInputComsume;                                    // 0xA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B62[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalInteractiveObjectActionBy
struct FPalInteractiveObjectActionBy
{
public:
	class AActor*                                InteractingActor;                                  // 0x0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InteractId;                                        // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B63[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Pal.PalInteractiveObjectActionInfoSet
struct FPalInteractiveObjectActionInfoSet
{
public:
	struct FPalInteractiveObjectActionInfoData   Interact1_Indicator;                               // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalInteractiveObjectActionInfoData   Interact2_Indicator;                               // 0xC(0xC)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalInteractiveObjectActionInfoData   Interact3_Indicator;                               // 0x18(0xC)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FPalInteractiveObjectActionInfoData   Interact4_Indicator;                               // 0x24(0xC)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x78 - 0x70)
// ScriptStruct Pal.PalVisitorNPCDatabaseRow
struct FPalVisitorNPCDatabaseRow : public FPalInvaderDatabaseRow
{
public:
	enum class EPalIVisitorNPCAction             ActionTimeLimit;                                   // 0x70(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsSquad;                                           // 0x71(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B64[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Pal.PalInvaderSpawnCharacterParameter
struct FPalInvaderSpawnCharacterParameter
{
public:
	class FName                                  CharacterID;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Pal.PalItemOperationOptions
struct FPalItemOperationOptions
{
public:
	uint8                                        Pad_3B65[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalItemFlowInSplineInfo
struct FPalItemFlowInSplineInfo
{
public:
	class AActor*                                ItemActor;                                         // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProgressTime;                                      // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B66[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Pal.PalStaticItemAndSlot
struct FPalStaticItemAndSlot
{
public:
	struct FPalStaticItemIdAndNum                ItemInfo;                                          // 0x0(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	struct FPalItemSlotId                        SlotID;                                            // 0xC(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Pal.PalItemAndSlot
struct FPalItemAndSlot
{
public:
	struct FPalItemId                            ItemId;                                            // 0x0(0x28)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Num;                                               // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalItemSlotId                        SlotID;                                            // 0x2C(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x44 (0x44 - 0x0)
// ScriptStruct Pal.PalSlotItemAndNum
struct FPalSlotItemAndNum
{
public:
	struct FPalItemAndSlot                       ItemSlot;                                          // 0x0(0x40)(NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Num;                                               // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Pal.PalSlotOpItemInfo
struct FPalSlotOpItemInfo
{
public:
	struct FPalItemAndNum                        Item;                                              // 0x0(0x2C)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        CorruptionProgressValue;                           // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x44 (0x44 - 0x0)
// ScriptStruct Pal.PalSlotOpItemSlotInfo
struct FPalSlotOpItemSlotInfo
{
public:
	struct FPalSlotOpItemInfo                    ItemInfo;                                          // 0x0(0x30)(NoDestructor, NativeAccessSpecifierPublic)
	struct FPalItemSlotId                        SlotID;                                            // 0x30(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x68 - 0x20)
// ScriptStruct Pal.PalItemContainerInfo
struct FPalItemContainerInfo : public FPalContainerInfo
{
public:
	struct FPalItemContainerBelongInfo           BelongInfo;                                        // 0x20(0x18)(NativeAccessSpecifierPublic)
	struct FPalItemPermission                    Permission;                                        // 0x38(0x30)(NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Pal.PalItemContainerCreateParameter
struct FPalItemContainerCreateParameter
{
public:
	int32                                        SlotNum;                                           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B67[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalItemPermission                    Permission;                                        // 0x8(0x30)(NativeAccessSpecifierPublic)
	struct FPalItemContainerBelongInfo           BelongInfo;                                        // 0x38(0x18)(NativeAccessSpecifierPublic)
	TArray<struct FPalItemAndNum>                InitialItems;                                      // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct Pal.PalItemLotteryData
struct FPalItemLotteryData : public FTableRowBase
{
public:
	class FName                                  FieldName;                                         // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlotNo;                                            // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeightInSlot;                                      // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StaticItemId;                                      // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinNum;                                            // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxNum;                                            // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumUnit;                                           // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalMapObjectTreasureGradeType    TreasureBoxGrade;                                  // 0x2C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B68[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct Pal.PalLocalizedTextData
struct FPalLocalizedTextData : public FTableRowBase
{
public:
	class FText                                  TextData;                                          // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x1C (0x28 - 0xC)
// ScriptStruct Pal.PalLocationRepInfo
struct FPalLocationRepInfo : public FFastArraySerializerItem
{
public:
	struct FGuid                                 ID;                                                // 0xC(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B69[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalLocationBase*                      Location;                                          // 0x20(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x148 - 0x108)
// ScriptStruct Pal.FastPalLocationRepInfoArray
struct FFastPalLocationRepInfoArray : public FFastArraySerializer
{
public:
	TArray<struct FPalLocationRepInfo>           Items;                                             // 0x108(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B6A[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Pal.PalLogInfo_Skill
struct FPalLogInfo_Skill
{
public:
	class FText                                  SkillName;                                         // 0x0(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  CharacterName;                                     // 0x18(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Value;                                             // 0x30(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct Pal.PalMapObjectConcreteModelCreateParameter
struct FPalMapObjectConcreteModelCreateParameter
{
public:
	uint8                                        Pad_3B6B[0xA0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x70 - 0x8)
// ScriptStruct Pal.PalMapObjectMasterData
struct FPalMapObjectMasterData : public FTableRowBase
{
public:
	class FName                                  OverrideNameMsgID;                                 // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BlueprintClassName;                                // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class APalMapObject>           BlueprintClassSoft;                                // 0x18(0x30)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalMapObjectMaterialType         MaterialType;                                      // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalMapObjectMaterialSubType      MaterialSubType;                                   // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B6C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HP;                                                // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Defense;                                           // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBelongToBaseCamp;                                 // 0x54(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B6D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DistributeExpAroundPlayer;                         // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeteriorationDamage;                               // 0x5C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtinguishBurnWorkAmount;                          // 0x60(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowHPGauge;                                      // 0x64(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInDevelop;                                        // 0x65(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B6E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Editor_RowNameHash;                                // 0x68(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B6F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct Pal.PalMapObjectAssignData
struct FPalMapObjectAssignData : public FTableRowBase
{
public:
	enum class EPalGenusCategoryType             GenusCategory;                                     // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalElementType                   ElementType;                                       // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalWorkSuitability               WorkSuitability;                                   // 0xA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B70[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WorkSuitabilityRank;                               // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayerWorkable;                                   // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalWorkType                      WorkType;                                          // 0x11(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalActionType                    WorkActionType;                                    // 0x12(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B71[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WorkerMaxNum;                                      // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AffectSanityValue;                                 // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B72[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x58 - 0x8)
// ScriptStruct Pal.PalFoliageTypeReference
struct FPalFoliageTypeReference : public FTableRowBase
{
public:
	TSoftObjectPtr<class UFoliageType>           FoliageType;                                       // 0x8(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalDataTableRowName_MapObjectData    FoliageMapObjectId;                                // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HP;                                                // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalDataTableRowName_ItemData         DropItemId;                                        // 0x44(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DropItemNum;                                       // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalMapObjectDestroyFXType        DestroyFXType;                                     // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B73[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x58 - 0x8)
// ScriptStruct Pal.PalMapObjectFoliageInstallData
struct FPalMapObjectFoliageInstallData : public FTableRowBase
{
public:
	class FName                                  FoliageTypeName;                                   // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x10(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotator;                                           // 0x28(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Scale3D;                                           // 0x40(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalMapObjectStatusValue
struct FPalMapObjectStatusValue
{
public:
	int32                                        CurrentValue;                                      // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxValue;                                          // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Pal.PalMapObjectBelongInfo
struct FPalMapObjectBelongInfo : public FPalBelongInfo
{
public:
	struct FGuid                                 GroupID;                                           // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalMapObjectFoliageInstanceAccessID
struct FPalMapObjectFoliageInstanceAccessID
{
public:
	class FName                                  ModelId;                                           // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalFoliageInstanceId                 InstanceId;                                        // 0x8(0x10)(Edit, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Pal.PalFoliageInstallDataSet
struct FPalFoliageInstallDataSet
{
public:
	uint8                                        Pad_3B74[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Pal.PalMapObjectItemProductData
struct FPalMapObjectItemProductData : public FTableRowBase
{
public:
	class FName                                  Product_Id;                                        // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RequiredWorkAmount;                                // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AutoWorkAmountBySec;                               // 0x14(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Pal.PalMapObjectModelConnectInfoItem
struct FPalMapObjectModelConnectInfoItem
{
public:
	struct FGuid                                 ConnectToModelInstanceId;                          // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalMapObjectModelConnectIndex    ConnectIndex;                                      // 0x10(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B75[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalMapObjectModelConnectInfo
struct FPalMapObjectModelConnectInfo
{
public:
	enum class EPalMapObjectModelConnectIndex    ConnectIndex;                                      // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B76[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPalMapObjectModelConnectInfoItem> ConnectToInfos;                                    // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Pal.PalFoliageIdentifiableInfo
struct FPalFoliageIdentifiableInfo
{
public:
	struct FPalCellCoord                         CellCoord;                                         // 0x0(0x18)(Edit, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ModelId;                                           // 0x18(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalFoliageInstanceId                 InstanceId;                                        // 0x20(0x10)(Edit, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Pal.PalFarmCropGrowupProcessSet
struct FPalFarmCropGrowupProcessSet
{
public:
	enum class EPalFarmCropState                 State;                                             // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B77[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FComponentReference                   TargetCompRef;                                     // 0x8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        ProcessRate;                                       // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B78[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x78 - 0x8)
// ScriptStruct Pal.PalMapObjectFarmCropData
struct FPalMapObjectFarmCropData : public FTableRowBase
{
public:
	class FName                                  CropBlueprintClassName;                            // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class APalMapObjectFarmCrop>   CropClassPath;                                     // 0x10(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CropItemId;                                        // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GrowupTime;                                        // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CropItemNum;                                       // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SeedingWorkAmount;                                 // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WateringWorkAmount;                                // 0x54(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HarvestWorkAmount;                                 // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MaterialItem1_Id;                                  // 0x5C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialItem1_Num;                                 // 0x64(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MaterialItem2_Id;                                  // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialItem2_Num;                                 // 0x70(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Editor_RowNameHash;                                // 0x74(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct Pal.PalFoliageMasterData
struct FPalFoliageMasterData : public FTableRowBase
{
public:
	class FName                                  ClassRefId;                                        // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Pal.PalMapObjectItemContainerCreateContainerParameter
struct FPalMapObjectItemContainerCreateContainerParameter
{
public:
	uint8                                        Pad_3B79[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Pal.PalMapObjectCreateParameter
struct FPalMapObjectCreateParameter
{
public:
	uint8                                        Pad_3B7A[0x80];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Pal.PalMapObjectDisposeReserveInfo
struct FPalMapObjectDisposeReserveInfo
{
public:
	uint8                                        Pad_3B7B[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Pal.PalMapObjectSpawnableCheckParameter
struct FPalMapObjectSpawnableCheckParameter
{
public:
	uint8                                        Pad_3B7C[0x78];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        IgnoredOverlapCheckActors;                         // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B7D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct Pal.PalMapObjectManageAsyncTickFunction
struct FPalMapObjectManageAsyncTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_3B7E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Pal.PalMapObjectModelInitializeExtraParameters
struct FPalMapObjectModelInitializeExtraParameters
{
public:
	TArray<class UPalMapObjectModelInitializeExtraParameterBase*> Entries;                                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIgnoredSave;                                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B7F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 LevelObjectInstanceId;                             // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B80[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Pal.PalMapObjectPickupItemData
struct FPalMapObjectPickupItemData
{
public:
	struct FPalDataTableRowName_ItemData         StaticItemId;                                      // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Num;                                               // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalMapObjectPickupItemPalEggData
struct FPalMapObjectPickupItemPalEggData
{
public:
	struct FPalDataTableRowName_PalMonsterData   PalMonsterId;                                      // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Pal.PalMapObjectPickupItemPalEggLotteryData
struct FPalMapObjectPickupItemPalEggLotteryData
{
public:
	struct FPalMapObjectPickupItemPalEggData     PalEggData;                                        // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalItemPalEggDataHandle
struct FPalItemPalEggDataHandle
{
public:
	TArray<struct FPalDataTableRowName_ItemData> ItemRowNameArray;                                  // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalMapObjectVisualEffectInstanceSet
struct FPalMapObjectVisualEffectInstanceSet
{
public:
	TArray<class UNiagaraComponent*>             Instances;                                         // 0x0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalMapObjectWorldDropItemInfo
struct FPalMapObjectWorldDropItemInfo
{
public:
	uint8                                        Pad_3B81[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  StaticItemId;                                      // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameDateTime                         CreatedAt;                                         // 0x10(0x8)(Edit, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Pal.PalMapObjectWorldDropItemInfoSet
struct FPalMapObjectWorldDropItemInfoSet
{
public:
	TArray<struct FPalMapObjectWorldDropItemInfo> Infos;                                             // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FPalMapObjectWorldDropItemInfo> InsertReservedInfoSet;                             // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	int32                                        MaxCount;                                          // 0x20(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B82[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Pal.PalSphere
struct FPalSphere
{
public:
	struct FVector                               Center;                                            // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bXY;                                               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B83[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Pal.PalMonsterControllerBaseCampLogContent
struct FPalMonsterControllerBaseCampLogContent
{
public:
	enum class EPalMonsterControllerBaseCampLogType Type;                                              // 0x0(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B84[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TextId;                                            // 0x4(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TargetObjectTextId;                                // 0xC(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B85[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalInstanceID                        InstanceId;                                        // 0x18(0x30)(BlueprintVisible, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Pal.PalMonsterControllerBaseCampHungryParameter
struct FPalMonsterControllerBaseCampHungryParameter
{
public:
	float                                        RecoverSatietyTo;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoverSanityTo;                                   // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EatMaxNum;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Pal.PalNavigationDividedAreaInfo
struct FPalNavigationDividedAreaInfo
{
public:
	uint8                                        Pad_3B86[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Pal.PalNetworkChangeIndividualID
struct FPalNetworkChangeIndividualID
{
public:
	uint8                                        Pad_3B87[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Pal.PalNetworkCharacterContainerParameter
struct FPalNetworkCharacterContainerParameter
{
public:
	uint8                                        Pad_3B88[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Pal.PalNetworkDynamicItemParameter
struct FPalNetworkDynamicItemParameter
{
public:
	uint8                                        Pad_3B89[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalNetworkParameter
struct FPalNetworkParameter
{
public:
	uint8                                        Pad_3B8A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Pal.PalNetworkContainerParameter
struct FPalNetworkContainerParameter
{
public:
	uint8                                        Pad_3B8B[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Pal.PalNetworkItemOperationParameter
struct FPalNetworkItemOperationParameter
{
public:
	uint8                                        Pad_3B8C[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalStaticItemIdAndDynamicItemDataSet
struct FPalStaticItemIdAndDynamicItemDataSet
{
public:
	class FName                                  StaticItemId;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPalDynamicItemDataBase*               DynamicItemData;                                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Pal.PalItemAndSlotUpdateContentSet
struct FPalItemAndSlotUpdateContentSet
{
public:
	TArray<struct FPalItemAndSlot>               UpdateContents;                                    // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPalStaticItemIdAndDynamicItemDataSet> UpdateDynamicItems;                                // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalNetworkMapObjectSpawnRequestParameter
struct FPalNetworkMapObjectSpawnRequestParameter
{
public:
	uint8                                        Pad_3B8D[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalNetworkPlayerObtainClientParameter
struct FPalNetworkPlayerObtainClientParameter
{
public:
	uint8                                        Pad_3B8E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Pal.PalNetworkTransmitterDelaySpawnInfo
struct FPalNetworkTransmitterDelaySpawnInfo
{
public:
	uint8                                        Pad_3B8F[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 SpawnGUID;                                         // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                SpawnActor;                                        // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct Pal.PalNoteMasterData
struct FPalNoteMasterData : public FTableRowBase
{
public:
	class FName                                  TextId_Description;                                // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct Pal.PalNoteMasterDataTextureTableRow
struct FPalNoteMasterDataTextureTableRow : public FTableRowBase
{
public:
	TSoftObjectPtr<class UTexture2D>             Texture;                                           // 0x8(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct Pal.PalNPCInteractConditionConstValueDataTableRow
struct FPalNPCInteractConditionConstValueDataTableRow : public FTableRowBase
{
public:
	class FName                                  ValText;                                           // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct Pal.PalNPCInteractionDataTableRow
struct FPalNPCInteractionDataTableRow : public FTableRowBase
{
public:
	class FName                                  UniqueNPCID;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CharacterID;                                       // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalInteractiveObjectIndicatorType InteractionType;                                   // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B90[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Conditions;                                        // 0x1C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  IncidentId;                                        // 0x24(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  IncidentArgs1;                                     // 0x2C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  IncidentArgs2;                                     // 0x34(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B91[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct Pal.PalNPCOneTalkRow
struct FPalNPCOneTalkRow : public FTableRowBase
{
public:
	class UDataTable*                            OneTalkData;                                       // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct Pal.PalNPCMultiTalkRow
struct FPalNPCMultiTalkRow : public FTableRowBase
{
public:
	TSubclassOf<class UPalNPCMultiTalkHandle>    MultiTalkHandleClass;                              // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Pal.PalNPCTalkSelectedChoiceCommandData
struct FPalNPCTalkSelectedChoiceCommandData
{
public:
	enum class EPalNPCTalkSelectedChoiceCommand  SelectedChoiceCommand;                             // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B92[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SeqenceName;                                       // 0x4(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CustomFuncName;                                    // 0xC(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsCloseWhenCalledCustomFunc;                       // 0x14(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B93[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            CustomFuncParam;                                   // 0x18(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Pal.PalNPCTalkData
struct FPalNPCTalkData
{
public:
	enum class EPalNPCTalkCommand                TalkCommand;                                       // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B94[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          MessageIDList;                                     // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class FName>                          ChoiceMessageIDList;                               // 0x18(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FName                                  TalkerNameID;                                      // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CustomFuncName;                                    // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsCloseWhenCalledCustomFunc;                       // 0x38(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B95[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            CustomFuncParam;                                   // 0x40(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPalNPCTalkSelectedChoiceCommandData> SelectedChoiceCommandDataList;                     // 0x48(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Pal.PalNPCTalkDataTableRow
struct FPalNPCTalkDataTableRow : public FTableRowBase
{
public:
	TArray<struct FPalNPCTalkData>               TalkData;                                          // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalNPCTalkSystemCustomFunctionParameters
struct FPalNPCTalkSystemCustomFunctionParameters
{
public:
	TScriptInterface<class IPalNPCTalkSystemCustomFunctionInterface> Interface;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            FuncParameter;                                     // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct Pal.PalUniqueNPCDatabaseRow
struct FPalUniqueNPCDatabaseRow : public FTableRowBase
{
public:
	class FName                                  CharacterID;                                       // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NameTextID;                                        // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OneTalkDTName;                                     // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TalkBPClass;                                       // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalGenderType                    Gender;                                            // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalNPCSkinColor                  SkinColor;                                         // 0x29(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalNPCFaceType                   Face;                                              // 0x2A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalNPCHairStyleType              HairStyle;                                         // 0x2B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalNPCHairColorType              HairColor;                                         // 0x2C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalNPCClothesType                Clothes;                                           // 0x2D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalNPCScaleType                  Scale;                                             // 0x2E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B96[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Level;                                             // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B97[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct Pal.PalObjectCollectorTickFunction
struct FPalObjectCollectorTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_3B98[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct Pal.PalObjectCollectorCalcNearestCharacterTickFunction
struct FPalObjectCollectorCalcNearestCharacterTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_3B99[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x490 (0x490 - 0x0)
// ScriptStruct Pal.PalOptimizeParameter
struct FPalOptimizeParameter
{
public:
	int32                                        FoliageISMDistance_Meters;                         // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetFPS;                                         // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinFPS;                                            // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFPS;                                            // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CharacterImportance_CheckNumberPerFrame;           // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CharacterImportance_NearestCount;                  // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CharacterImportance_NearDistance;                  // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CharacterImportance_FarDistance;                   // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CharacterImportance_FarthestDistance;              // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B9A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EPalCharacterImportanceType, float> CharacterImportance_TickInterval_Actor;            // 0x28(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<enum class EPalCharacterImportanceType, float> CharacterImportance_TickInterval_Movement;         // 0x78(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<enum class EPalCharacterImportanceType, float> CharacterImportance_TickInterval_Mesh;             // 0xC8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<enum class EPalCharacterImportanceType, float> CharacterImportance_TickInterval_Action;           // 0x118(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<enum class EPalCharacterImportanceType, float> CharacterImportance_TickInterval_Status;           // 0x168(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<enum class EPalCharacterImportanceType, float> CharacterImportance_TickInterval_LookAt;           // 0x1B8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<enum class EPalCharacterImportanceType, float> CharacterImportance_TickInterval_VisualEffect;     // 0x208(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<enum class EPalCharacterImportanceType, float> CharacterImportance_TickInterval_Shooter;          // 0x258(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<enum class EPalCharacterImportanceType, float> CharacterImportance_TickInterval_FlyMesh;          // 0x2A8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<enum class EPalCharacterImportanceType, float> CharacterImportance_TickInterval_Controller;       // 0x2F8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<enum class EPalCharacterImportanceType, float> CharacterImportance_TickInterval_AIAction;         // 0x348(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<enum class EPalCharacterImportanceType, float> CharacterImportance_TickInterval_AISensor;         // 0x398(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<enum class EPalCharacterImportanceType, float> CharacterImportance_TickInterval_PathFollowing;    // 0x3E8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        SpawnerImportance_NearDistance;                    // 0x438(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpawnerImportance_FarDistance;                     // 0x43C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EPalSpwnerImportanceType, float> SpawnerImportance_TickInterval_NPCSpawner;         // 0x440(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct Pal.PalOptionWorldPresetRow
struct FPalOptionWorldPresetRow : public FTableRowBase
{
public:
	enum class EPalOptionWorldDifficulty         Diffculty;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B9B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DayTimeSpeedRate;                                  // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NightTimeSpeedRate;                                // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExpRate;                                           // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PalCaptureRate;                                    // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PalSpawnNumRate;                                   // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PalDamageRateAttack;                               // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PalDamageRateDefense;                              // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerDamageRateAttack;                            // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerDamageRateDefense;                           // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerStomachDecreaceRate;                         // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerStaminaDecreaceRate;                         // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerAutoHPRegeneRate;                            // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerAutoHpRegeneRateInSleep;                     // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PalStomachDecreaceRate;                            // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PalStaminaDecreaceRate;                            // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PalAutoHPRegeneRate;                               // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PalAutoHpRegeneRateInSleep;                        // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BuildObjectDamageRate;                             // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BuildObjectDeteriorationDamageRate;                // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollectionDropRate;                                // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollectionObjectHpRate;                            // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollectionObjectRespawnSpeedRate;                  // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EnemyDropItemRate;                                 // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalOptionWorldDeathPenalty       DeathPenalty;                                      // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActiveUNKO;                                       // 0x69(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B9C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DropItemMaxNum_UNKO;                               // 0x6C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableInvaderEnemy;                               // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B9D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DropItemMaxNum;                                    // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoResetGuildNoOnlinePlayers;                    // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B9E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AutoResetGuildTimeNoOnlinePlayers;                 // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GuildPlayerMaxNum;                                 // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PalEggDefaultHatchingTime;                         // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BaseCampWorkerMaxNum;                              // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B9F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct Pal.PalOptionWorldModePresetRow
struct FPalOptionWorldModePresetRow : public FTableRowBase
{
public:
	enum class EPalOptionWorldMode               WorldMode;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnablePlayerToPlayerDamage;                       // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanPickupOtherGuildDeathPenaltyDrop;              // 0xA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableNonLoginPenalty;                            // 0xB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableFastTravel;                                 // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsStartLocationSelectByMap;                       // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExistPlayerAfterLogout;                           // 0xE(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDefenseOtherGuildPlayer;                    // 0xF(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct Pal.PalOptionGraphicsPresetRow
struct FPalOptionGraphicsPresetRow : public FTableRowBase
{
public:
	enum class EPalOptionGraphicsLevel           GraphicsLevel;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAntiAliasingMethod               AntiAliasingType;                                  // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BA0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CommonQuality;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ViewDistanceQuality;                               // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FoliageQuality;                                    // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ShadowQuality;                                     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TextureQuality;                                    // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x180 (0x180 - 0x0)
// ScriptStruct Pal.PalOptionSaveData
struct FPalOptionSaveData
{
public:
	struct FPalOptionKeyboardSettings            KeyboardSettings;                                  // 0x0(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionPadSettings                 PadSettings;                                       // 0x10(0x18)(NoDestructor, NativeAccessSpecifierPublic)
	struct FPalKeyConfigSettings                 KeyConfigSettings;                                 // 0x28(0xC0)(NativeAccessSpecifierPublic)
	struct FPalOptionCommonSettings              CommonSettings;                                    // 0xE8(0x20)(NativeAccessSpecifierPublic)
	struct FPalOptionGraphicsSettings            GraphicsSettings;                                  // 0x108(0x54)(NoDestructor, NativeAccessSpecifierPublic)
	struct FPalOptionAudioSettings               AudioSettings;                                     // 0x15C(0x1C)(NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bHasAppliedUserSetting;                            // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BA1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct Pal.PalPartnerSkillDatabaseRow
struct FPalPartnerSkillDatabaseRow : public FTableRowBase
{
public:
	class FName                                  DevName;                                           // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectTime;                                        // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CoolDownTime;                                      // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExecCost;                                          // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IdleCost;                                          // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanThrowPal;                                       // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanChangeWeapon;                                   // 0x21(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsToggleKey;                                       // 0x22(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BA2[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalPassivePartnerSkillFindOtomoParameter
struct FPalPassivePartnerSkillFindOtomoParameter
{
public:
	enum class EPalElementType                   TargetElementType;                                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BA3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPalDataTableRowName_PalMonsterData> TargetPalIds;                                      // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Pal.PalPartnerSkillParameterQueryFunction
struct FPalPartnerSkillParameterQueryFunction
{
public:
	uint8                                        Pad_3BA5[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalPassiveSkillSetupInfo
struct FPalPassiveSkillSetupInfo
{
public:
	class FName                                  SkillName;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          Flags;                                             // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct Pal.PalPassiveSkillDatabaseRow
struct FPalPassiveSkillDatabaseRow : public FTableRowBase
{
public:
	int32                                        Rank;                                              // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OverrideDescMsgID;                                 // 0xC(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalPassiveSkillEffectType        EffectType1;                                       // 0x14(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BA7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EffectValue1;                                      // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalPassiveSkillEffectTargetType  TargetType1;                                       // 0x1C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalPassiveSkillEffectType        EffectType2;                                       // 0x1D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BA9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EffectValue2;                                      // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalPassiveSkillEffectTargetType  TargetType2;                                       // 0x24(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalPassiveSkillEffectType        EffectType3;                                       // 0x25(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BAC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EffectValue3;                                      // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalPassiveSkillEffectTargetType  TargetType3;                                       // 0x2C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InvokeActiveOtomo;                                 // 0x2D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InvokeWorker;                                      // 0x2E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InvokeRiding;                                      // 0x2F(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InvokeReserve;                                     // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InvokeInOtomo;                                     // 0x31(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InvokeAlways;                                      // 0x32(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AddPal;                                            // 0x33(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AddRarePal;                                        // 0x34(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AddShotWeapon;                                     // 0x35(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AddMeleeWeapon;                                    // 0x36(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AddArmor;                                          // 0x37(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AddAccessory;                                      // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BAD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  OverrideNameTextID;                                // 0x3C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OverrideSummaryTextId;                             // 0x44(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BAE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Pal.PalPettingParameter
struct FPalPettingParameter
{
public:
	float                                        CameraCenterDistance;                              // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraHeight;                                      // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraArmLength;                                   // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct Pal.PalPlayerDamageCameraShakeData
struct FPalPlayerDamageCameraShakeData : public FTableRowBase
{
public:
	enum class EPalPlayerDamageCameraShakeCategory Category;                                          // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BAF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scale_Min;                                         // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale_Default;                                     // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale_Max;                                         // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HPRate_Min;                                        // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HPRate_Default;                                    // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HPRate_Max;                                        // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BB0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct Pal.PalCharacterCreationMakeInfoPresetDataRow
struct FPalCharacterCreationMakeInfoPresetDataRow : public FTableRowBase
{
public:
	struct FPalPlayerDataCharacterMakeInfo       PresetMakeInfo;                                    // 0x8(0x94)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BB1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x108 - 0x8)
// ScriptStruct Pal.PalCharacterCreationMeshPresetDataRow
struct FPalCharacterCreationMeshPresetDataRow : public FTableRowBase
{
public:
	TSoftObjectPtr<class USkeletalMesh>          SkeletalMesh;                                      // 0x8(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          SkeletalMesh_MaleHead;                             // 0x38(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             IconTexture;                                       // 0x68(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UAnimInstance>           ABPAsset;                                          // 0x98(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShiftUIDisplayEyeColor;                            // 0xC8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShiftUIDisplayBodyColor;                           // 0xD8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShiftUIDisplayBrowColor;                           // 0xE8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShiftUIDisplayHairColor;                           // 0xF8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x78 - 0x8)
// ScriptStruct Pal.PalCharacterCreationEyeMaterialDataRow
struct FPalCharacterCreationEyeMaterialDataRow : public FTableRowBase
{
public:
	TSoftObjectPtr<class UMaterialInstance>      EyeMaterialInstance;                               // 0x8(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             IconTexture;                                       // 0x38(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShiftUIDisplayEyeColor;                            // 0x68(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct Pal.PalPlayerEquipmentMeshDataRow
struct FPalPlayerEquipmentMeshDataRow : public FTableRowBase
{
public:
	TMap<class FName, TSoftObjectPtr<class USkeletalMesh>> SkeletalMeshMap;                                   // 0x8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<class FName, TSoftClassPtr<class UAnimInstance>> ABPAssetMap;                                       // 0x58(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         IsHairAttachAccessory;                             // 0xA8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BB2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, class FName>               HairAttachSocketNameMap;                           // 0xB0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Pal.PalCharacterCreationColorPresetDataRow
struct FPalCharacterCreationColorPresetDataRow : public FTableRowBase
{
public:
	TArray<struct FLinearColor>                  Colors;                                            // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct Pal.PalCharacterCreationPresetDataRow
struct FPalCharacterCreationPresetDataRow : public FTableRowBase
{
public:
	struct FPalPlayerDataCharacterMakeInfo       MakeInfo;                                          // 0x8(0x94)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BB3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             IconTexture;                                       // 0xA0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x260 (0x260 - 0x0)
// ScriptStruct Pal.PalPlayerDataPalStorageSlotSaveData
struct FPalPlayerDataPalStorageSlotSaveData
{
public:
	struct FPalInstanceID                        IndividualId;                                      // 0x0(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalIndividualCharacterSaveParameter  CharacterSaveParameter;                            // 0x30(0x218)(NativeAccessSpecifierPublic)
	struct FPalCharacterSlotId                   SlotID;                                            // 0x248(0x14)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BB4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct Pal.PlayerGenderParams
struct FPlayerGenderParams
{
public:
	TMap<enum class EPalWeaponType, TSoftClassPtr<class UPalShooterAnimeAssetBase>> DefaultWeaponAnimeAssetBPSoftClassMap;             // 0x0(0x50)(Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<TSoftClassPtr<class APalWeaponBase>, TSoftClassPtr<class UPalShooterAnimeAssetBase>> OtherWeaponAnimeAssetBPSoftClassMap;               // 0x50(0x50)(Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                        ClavicleAdjustDegree;                              // 0xA0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BB5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Pal.PalPlayerRecordCountMapStruct
struct FPalPlayerRecordCountMapStruct
{
public:
	TMap<class FName, int64>                     CountMap;                                          // 0x0(0x50)(NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Pal.PalPlayerRecordFlagMapStruct
struct FPalPlayerRecordFlagMapStruct
{
public:
	TMap<class FName, bool>                      FlagMap;                                           // 0x0(0x50)(NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct Pal.PalPlayerRecordDataStruct
struct FPalPlayerRecordDataStruct
{
public:
	TMap<class FName, int64>                     SimpleCountRecordMap;                              // 0x0(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, bool>                      SimpleFlagMap;                                     // 0x50(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, struct FPalPlayerRecordCountMapStruct> CountMapRecordMap;                                 // 0xA0(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, struct FPalPlayerRecordFlagMapStruct> FlagMapRecordMap;                                  // 0xF0(0x50)(NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct Pal.PalWaitLoadingWorldPartitionParameter
struct FPalWaitLoadingWorldPartitionParameter
{
public:
	struct FWorldPartitionStreamingQuerySource   QuerySource;                                       // 0x0(0x88)(Transient, NativeAccessSpecifierPublic)
	enum class EWorldPartitionRuntimeCellState   CellState;                                         // 0x88(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BB6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IntervalTime;                                      // 0x8C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InFirstDelayTime;                                  // 0x90(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BB7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x38 - 0x8)
// ScriptStruct Pal.PalQuestDataSetRow
struct FPalQuestDataSetRow : public FTableRowBase
{
public:
	TSoftClassPtr<class UPalQuestData>           QuestData;                                         // 0x8(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Pal.PalRandomIncidentSpawnIncidentParameter
struct FPalRandomIncidentSpawnIncidentParameter
{
public:
	class FName                                  IncidentId;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SettingName;                                       // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LotteryRate;                                       // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct Pal.PalRandomIncidentSettings
struct FPalRandomIncidentSettings : public FTableRowBase
{
public:
	class UDataTable*                            MonsterSpawnData;                                  // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            NPCSpawnData;                                      // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ExcludeOtherPal;                                   // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BB8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UPalRandomIncidentActionBase> Action;                                            // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalRandomIncidentWalkPathReferenceData
struct FPalRandomIncidentWalkPathReferenceData
{
public:
	TArray<class AActor*>                        WalkPoints;                                        // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Pal.PalRandomIncidentSpawnLocationData
struct FPalRandomIncidentSpawnLocationData : public FTableRowBase
{
public:
	struct FVector2D                             Location;                                          // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct Pal.PalRandomIncidentSpawnMonsterOutbreakData
struct FPalRandomIncidentSpawnMonsterOutbreakData : public FTableRowBase
{
public:
	struct FPalDataTableRowName_PalMonsterData   CharacterID;                                       // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Num;                                               // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelMin;                                          // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelMax;                                          // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Group;                                             // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsSquad;                                           // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BB9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            LocationTable;                                     // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class APalAIController>          ControllerClass;                                   // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UPalActionBase>            DefaultActionClass;                                // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Pal.PalWorkAssignSaveData
struct FPalWorkAssignSaveData : public FPalBinaryMemory
{
public:
};

// 0x58 (0x68 - 0x10)
// ScriptStruct Pal.PalWorkSaveData
struct FPalWorkSaveData : public FPalBinaryMemory
{
public:
	enum class EPalWorkableType                  WorkableType;                                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BBA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, struct FPalWorkAssignSaveData>   WorkAssignMap;                                     // 0x18(0x50)(NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Pal.PalBaseCampSaveData_WorkerDirector
struct FPalBaseCampSaveData_WorkerDirector : public FPalBinaryMemory
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Pal.PalBaseCampSaveData_WorkCollection
struct FPalBaseCampSaveData_WorkCollection : public FPalBinaryMemory
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Pal.PalBaseCampSaveData_Module
struct FPalBaseCampSaveData_Module : public FPalBinaryMemory
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Pal.PalBaseCampSaveData_Module_PassiveEffect
struct FPalBaseCampSaveData_Module_PassiveEffect : public FPalBinaryMemory
{
public:
};

// 0x70 (0x80 - 0x10)
// ScriptStruct Pal.PalBaseCampSaveData
struct FPalBaseCampSaveData : public FPalBinaryMemory
{
public:
	struct FPalBaseCampSaveData_WorkerDirector   WorkerDirector;                                    // 0x10(0x10)(NativeAccessSpecifierPublic)
	struct FPalBaseCampSaveData_WorkCollection   WorkCollection;                                    // 0x20(0x10)(NativeAccessSpecifierPublic)
	TMap<enum class EPalBaseCampModuleType, struct FPalBaseCampSaveData_Module> ModuleMap;                                         // 0x30(0x50)(NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Pal.PalIndividualCharacterSaveParameterSaveData
struct FPalIndividualCharacterSaveParameterSaveData : public FPalBinaryMemory
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Pal.PalFoliageInstanceSaveData
struct FPalFoliageInstanceSaveData : public FPalBinaryMemory
{
public:
};

// 0x50 (0x60 - 0x10)
// ScriptStruct Pal.PalFoliageSaveData
struct FPalFoliageSaveData : public FPalBinaryMemory
{
public:
	TMap<struct FPalFoliageInstanceId, struct FPalFoliageInstanceSaveData> InstanceDataMap;                                   // 0x10(0x50)(NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Pal.PalFoliageGridSaveData
struct FPalFoliageGridSaveData
{
public:
	TMap<class FName, struct FPalFoliageSaveData> ModelMap;                                          // 0x0(0x50)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalMapObjectSpawnerItemSaveData
struct FPalMapObjectSpawnerItemSaveData
{
public:
	int64                                        NextLotteryGameTime;                               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 MapObjectInstanceId;                               // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Pal.PalMapObjectSpawnerSaveData
struct FPalMapObjectSpawnerSaveData
{
public:
	TMap<int32, struct FPalMapObjectSpawnerItemSaveData> ItemMap;                                           // 0x0(0x50)(NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Pal.PalMapObjectSpawnerInStageSaveData
struct FPalMapObjectSpawnerInStageSaveData
{
public:
	TMap<struct FGuid, struct FPalMapObjectSpawnerSaveData> SpawnerDataMapByLevelObjectInstanceId;             // 0x0(0x50)(NativeAccessSpecifierPublic)
};

// 0x30 (0x40 - 0x10)
// ScriptStruct Pal.PalItemSlotSaveData
struct FPalItemSlotSaveData : public FPalBinaryMemory
{
public:
	int32                                        SlotIndex;                                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalItemId                            ItemId;                                            // 0x14(0x28)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StackCount;                                        // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x38 - 0x10)
// ScriptStruct Pal.PalItemContainerSaveData
struct FPalItemContainerSaveData : public FPalBinaryMemory
{
public:
	struct FPalItemContainerBelongInfo           BelongInfo;                                        // 0x10(0x18)(NativeAccessSpecifierPublic)
	TArray<struct FPalItemSlotSaveData>          Slots;                                             // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Pal.PalCustomMarkerSaveData
struct FPalCustomMarkerSaveData
{
public:
	struct FVector                               IconLocation;                                      // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IconType;                                          // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BBB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Pal.PalTutorialTriggerSaveData
struct FPalTutorialTriggerSaveData
{
public:
	class FName                                  TutorialMsg;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Checked;                                           // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BBC[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalCompletedQuestSaveData
struct FPalCompletedQuestSaveData
{
public:
	class FName                                  QuestName;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Pal.PalOrderedQuestSaveData
struct FPalOrderedQuestSaveData
{
public:
	class FName                                  QuestName;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BlockIndex;                                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x48 - 0x10)
// ScriptStruct Pal.PalCharacterSlotSaveData
struct FPalCharacterSlotSaveData : public FPalBinaryMemory
{
public:
	struct FPalInstanceID                        IndividualId;                                      // 0x10(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalTribeID                       PermissionTribeID;                                 // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BBD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x28 - 0x10)
// ScriptStruct Pal.PalCharacterContainerSaveData
struct FPalCharacterContainerSaveData : public FPalBinaryMemory
{
public:
	bool                                         bReferenceSlot;                                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BBE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPalCharacterSlotSaveData>     Slots;                                             // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x38 - 0x10)
// ScriptStruct Pal.PalDynamicItemSaveData
struct FPalDynamicItemSaveData : public FPalBinaryMemory
{
public:
	struct FPalDynamicItemId                     ID;                                                // 0x10(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StaticItemId;                                      // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x18 - 0x10)
// ScriptStruct Pal.PalGroupSaveData
struct FPalGroupSaveData : public FPalBinaryMemory
{
public:
	enum class EPalGroupType                     GroupType;                                         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BBF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Pal.PalCharacterStoredParameterInfoSaveData
struct FPalCharacterStoredParameterInfoSaveData
{
public:
	struct FPalCharacterStoredParameterId        ID;                                                // 0x0(0x10)(Edit, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalIndividualCharacterSaveParameterSaveData SaveParameter;                                     // 0x10(0x10)(Edit, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	struct FGameDateTime                         StoredAt;                                          // 0x20(0x8)(Edit, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 LostPlayerUId;                                     // 0x28(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalCharacterParameterStorageSaveData
struct FPalCharacterParameterStorageSaveData
{
public:
	TArray<struct FPalCharacterStoredParameterInfoSaveData> StoredParameterInfoSaveData;                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalGameTimeSaveData
struct FPalGameTimeSaveData
{
public:
	int64                                        GameDateTimeTicks;                                 // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        RealDateTimeTicks;                                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x128 - 0x0)
// ScriptStruct Pal.PalOptionWorldSaveData
struct FPalOptionWorldSaveData
{
public:
	struct FPalOptionWorldSettings               Settings;                                          // 0x0(0x128)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Pal.PalBossSpawnerSaveData
struct FPalBossSpawnerSaveData
{
public:
	TMap<class FName, bool>                      RespawnDisableFlag;                                // 0x0(0x50)(NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Pal.PalEnemyCampSaveData
struct FPalEnemyCampSaveData
{
public:
	TMap<class FName, struct FPalEnemyCampStatus> EnemyCampStatusMap;                                // 0x0(0x50)(NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Pal.PalDungeonPointMarkerSaveData
struct FPalDungeonPointMarkerSaveData
{
public:
	struct FGuid                                 MarkerPointId;                                     // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameDateTime                         NextRespawnGameTime;                               // 0x10(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ConnectedDungeonInstanceId;                        // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Pal.PalDungeonSaveData
struct FPalDungeonSaveData
{
public:
	struct FGuid                                 InstanceId;                                        // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalDungeonType                   DungeonType;                                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BC0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 MarkerPointId;                                     // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DungeonSpawnAreaId;                                // 0x24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DungeonLevelName;                                  // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalDungeonInstanceBossState      BossState;                                         // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BC1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  EnemySpawnerDataBossRowName;                       // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameDateTime                         DisappearTimeAt;                                   // 0x40(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReservedDataLayerAssetIndex;                       // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalStageInstanceId                   StageInstanceId;                                   // 0x4C(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPalMapObjectSaveData>         MapObjectSaveData;                                 // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x2B0 (0x2B0 - 0x0)
// ScriptStruct Pal.PalLoggedinPlayerSaveDataRecordData
struct FPalLoggedinPlayerSaveDataRecordData
{
public:
	TMap<class FName, bool>                      TowerBossDefeatFlag;                               // 0x0(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, bool>                      NormalBossDefeatFlag;                              // 0x50(0x50)(NativeAccessSpecifierPublic)
	int32                                        BossDefeatCount;                                   // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TribeCaptureCount;                                 // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, int32>                     PalCaptureCount;                                   // 0xA8(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, bool>                      PaldeckUnlockFlag;                                 // 0xF8(0x50)(NativeAccessSpecifierPublic)
	int32                                        PalCaptureCountBonusCount_Tier1;                   // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PalCaptureCountBonusCount_Tier2;                   // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PalCaptureCountBonusCount_Tier3;                   // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BC2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, bool>                      RelicObtainForInstanceFlag;                        // 0x158(0x50)(NativeAccessSpecifierPublic)
	int32                                        RelicPossessNum;                                   // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BC3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, bool>                      NoteObtainForInstanceFlag;                         // 0x1B0(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, int32>                     NPCTalkIdCount;                                    // 0x200(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, bool>                      FastTravelPointUnlockFlag;                         // 0x250(0x50)(NativeAccessSpecifierPublic)
	TArray<struct FGuid>                         BuildingObjectMapObjectInstanceIds;                // 0x2A0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x2E0 (0x2E0 - 0x0)
// ScriptStruct Pal.PalLocalSaveData
struct FPalLocalSaveData
{
public:
	TMap<enum class EPalTribeID, int32>          Local_ActivateOtomoCount;                          // 0x0(0x50)(NativeAccessSpecifierPublic)
	TMap<enum class EPalTribeID, bool>           Local_PalEncountFlag;                              // 0x50(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, bool>                      Local_NoteCheckedFlag;                             // 0xA0(0x50)(NativeAccessSpecifierPublic)
	TMap<enum class EPalPlayerInventoryType, int32> Local_LoadoutSelectedIndexMap;                     // 0xF0(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, int32>                     Local_NewUnlockedBuilds;                           // 0x140(0x50)(NativeAccessSpecifierPublic)
	bool                                         Local_IsBuildMenuChecked;                          // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BC4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, int32>                     Local_NPCTalkCountMap;                             // 0x198(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, bool>                      Local_NewUnlockedTechs;                            // 0x1E8(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, bool>                      Local_ShowedCutsceneFlag;                          // 0x238(0x50)(NativeAccessSpecifierPublic)
	int32                                        Local_PlayTime;                                    // 0x288(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BC5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                WorldMapMaskTexture;                               // 0x290(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPalCustomMarkerSaveData>      Local_CustomMarkerSaveData;                        // 0x2A0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPalTutorialTriggerSaveData>   Local_TutorialTriggerSaveData;                     // 0x2B0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPalCompletedQuestSaveData>    Local_CompletedTutorialQuestSaveData;              // 0x2C0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPalOrderedQuestSaveData>      Local_OrderedTutorialQuestSaveData;                // 0x2D0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x3A0 (0x3A0 - 0x0)
// ScriptStruct Pal.PalWorldSaveData
struct FPalWorldSaveData
{
public:
	class FString                                WorldName;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FPalInstanceID, struct FPalIndividualCharacterSaveParameterSaveData> CharacterSaveParameterMap;                         // 0x10(0x50)(NativeAccessSpecifierPublic)
	TArray<struct FPalMapObjectSaveData>         MapObjectSaveData;                                 // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FPalCellCoord, struct FPalFoliageGridSaveData> FoliageGridSaveDataMap;                            // 0x70(0x50)(NativeAccessSpecifierPublic)
	TMap<struct FGuid, struct FPalMapObjectSpawnerSaveData> MapObjectSpawnerSaveData;                          // 0xC0(0x50)(NativeAccessSpecifierPublic)
	TMap<struct FPalStageInstanceId, struct FPalMapObjectSpawnerInStageSaveData> MapObjectSpawnerInStageSaveData;                   // 0x110(0x50)(NativeAccessSpecifierPublic)
	TArray<struct FPalWorkSaveData>              WorkSaveData;                                      // 0x160(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FGuid, struct FPalBaseCampSaveData> BaseCampSaveData;                                  // 0x170(0x50)(NativeAccessSpecifierPublic)
	TMap<struct FPalContainerId, struct FPalItemContainerSaveData> ItemContainerSaveData;                             // 0x1C0(0x50)(NativeAccessSpecifierPublic)
	TArray<struct FPalDynamicItemSaveData>       DynamicItemSaveData;                               // 0x210(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FPalContainerId, struct FPalCharacterContainerSaveData> CharacterContainerSaveData;                        // 0x220(0x50)(NativeAccessSpecifierPublic)
	TMap<struct FGuid, struct FPalGroupSaveData> GroupSaveDataMap;                                  // 0x270(0x50)(NativeAccessSpecifierPublic)
	struct FPalCharacterParameterStorageSaveData CharacterParameterStorageSaveData;                 // 0x2C0(0x10)(NativeAccessSpecifierPublic)
	struct FPalGameTimeSaveData                  GameTimeSaveData;                                  // 0x2D0(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FPalBossSpawnerSaveData               BossSpawnerSaveData;                               // 0x2E0(0x50)(NativeAccessSpecifierPublic)
	struct FPalEnemyCampSaveData                 EnemyCampSaveData;                                 // 0x330(0x50)(NativeAccessSpecifierPublic)
	TArray<struct FPalDungeonPointMarkerSaveData> DungeonPointMarkerSaveData;                        // 0x380(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPalDungeonSaveData>           DungeonSaveData;                                   // 0x390(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4B0 (0x4B0 - 0x0)
// ScriptStruct Pal.PalWorldPlayerSaveData
struct FPalWorldPlayerSaveData
{
public:
	struct FGuid                                 PlayerUId;                                         // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalInstanceID                        IndividualId;                                      // 0x10(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 RespawnPointMapObjectInstanceId;                   // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            LastTransform;                                     // 0x50(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerName;                                        // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalPlayerDataCharacterMakeInfo       PlayerCharacterMakeData;                           // 0xC0(0x94)(NoDestructor, NativeAccessSpecifierPublic)
	struct FPalContainerId                       OtomoCharacterContainerId;                         // 0x154(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalOtomoPalOrderType             OtomoOrder;                                        // 0x164(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BC6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalPlayerDataInventoryInfo           InventoryInfo;                                     // 0x168(0x60)(NoDestructor, NativeAccessSpecifierPublic)
	int32                                        TechnologyPoint;                                   // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        bossTechnologyPoint;                               // 0x1CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          UnlockedRecipeTechnologyNames;                     // 0x1D0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FPalContainerId                       PalStorageContainerId;                             // 0x1E0(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalLoggedinPlayerSaveDataRecordData  RecordData;                                        // 0x1F0(0x2B0)(NativeAccessSpecifierPublic)
	bool                                         bIsSelectedInitMapPoint;                           // 0x4A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BC7[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.RidingAimingAnimationInfo
struct FRidingAimingAnimationInfo
{
public:
	class UAnimSequence*                         ShootingAnimation;                                 // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAimOffsetBlendSpace*                  ShootingAO;                                        // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Pal.ShooterSpringCameraParameter
struct FShooterSpringCameraParameter
{
public:
	float                                        ArmLength;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BC8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CameraOffset;                                      // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Pal.ShooterSpringCameraAdditionalOffset
struct FShooterSpringCameraAdditionalOffset
{
public:
	class FName                                  FlagName;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BC9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FShooterSpringCameraParameter         CameraOffset;                                      // 0x10(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Pal.PalItemShopCreateDataStruct
struct FPalItemShopCreateDataStruct
{
public:
	class FName                                  StaticItemId;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BuyRate;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SellRate;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Stock;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Pal.PalItemShopCreateDataRow
struct FPalItemShopCreateDataRow : public FTableRowBase
{
public:
	TArray<struct FPalItemShopCreateDataStruct>  ProductDataArray;                                  // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct Pal.PalItemShopCreateIntermediateDataRow
struct FPalItemShopCreateIntermediateDataRow : public FTableRowBase
{
public:
	class FName                                  GroupName;                                         // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StaticItemId;                                      // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BuyRate;                                           // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SellRate;                                          // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Stock;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BCA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Pal.PalItemShopLotteryDataStruct
struct FPalItemShopLotteryDataStruct
{
public:
	class FName                                  ShopGroupName;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Pal.PalItemShopLotteryDataRow
struct FPalItemShopLotteryDataRow : public FTableRowBase
{
public:
	TArray<struct FPalItemShopLotteryDataStruct> LotteryDataArray;                                  // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct Pal.PalItemShopLotteryIntermediateDataRow
struct FPalItemShopLotteryIntermediateDataRow : public FTableRowBase
{
public:
	class FName                                  GroupName;                                         // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ShopGroupName;                                     // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BCB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct Pal.PalPalShopCreateDataRow
struct FPalPalShopCreateDataRow : public FTableRowBase
{
public:
	int32                                        MaxLostPalNum;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CharacterNum;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPalDataTableRowName_PalMonsterData> CharacterIDArray;                                  // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        MinCharacterLevel;                                 // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCharacterLevel;                                 // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Pal.PalShopProductRequireItemData
struct FPalShopProductRequireItemData
{
public:
	class FName                                  StaticItemId;                                      // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequireNum;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalBodyInstanceParameter
struct FPalBodyInstanceParameter
{
public:
	int32                                        InstanceBodyIndex;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        InstanceBoneIndex;                                 // 0x4(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BCC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LinearDamping;                                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularDamping;                                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct Pal.PalSoundIDDataTableRow
struct FPalSoundIDDataTableRow : public FTableRowBase
{
public:
	class FName                                  Description;                                       // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalSoundPlayingParameter
struct FPalSoundPlayingParameter
{
public:
	class UAkAudioEvent*                         AudioEvent;                                        // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalSoundOptions                      Options;                                           // 0x8(0x4)(NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bStopAbsolutely;                                   // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BCD[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Pal.PalStagePlayerInfo
struct FPalStagePlayerInfo
{
public:
	struct FGuid                                 PlayerUId;                                         // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalStagePlayerState              PlayerState;                                       // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BCE[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x28 - 0xC)
// ScriptStruct Pal.PalStageModelRepInfo
struct FPalStageModelRepInfo : public FFastArraySerializerItem
{
public:
	struct FPalStageInstanceId                   InstanceId;                                        // 0xC(0x14)(Edit, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPalStageModelBase*                    Model;                                             // 0x20(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x148 - 0x108)
// ScriptStruct Pal.PalFastStageModelRepInfoArray
struct FPalFastStageModelRepInfoArray : public FFastArraySerializer
{
public:
	TArray<struct FPalStageModelRepInfo>         Items;                                             // 0x108(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BCF[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Pal.PalStageAreaInfo
struct FPalStageAreaInfo
{
public:
	struct FBox                                  BoundingBox;                                       // 0x0(0x38)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Pal.FootStampInfo
struct FFootStampInfo
{
public:
	TMap<enum class EPalFootType, class UMaterialInterface*> FootstepDecalMap;                                  // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector                               FootstepDecal_Size;                                // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              FootstepDecal_InitialRotation;                     // 0x68(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Pal.PalStaticCharacterInfo_SpawnItem
struct FPalStaticCharacterInfo_SpawnItem
{
public:
	TMap<int32, struct FPalDataTableRowName_FieldLotteryNameData> FieldLotteryNameByRank;                            // 0x0(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct Pal.PalEditorItemIconTableRow
struct FPalEditorItemIconTableRow : public FTableRowBase
{
public:
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x8(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Pal.PalEditorItemStaticClassTableRow
struct FPalEditorItemStaticClassTableRow : public FTableRowBase
{
public:
	class FName                                  ClassName;                                         // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UPalStaticItemDataBase>    StaticClass;                                       // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Pal.PalEditorItemDynamicClassTableRow
struct FPalEditorItemDynamicClassTableRow : public FTableRowBase
{
public:
	class FName                                  ClassName;                                         // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UPalDynamicItemDataBase>   DynamicClass;                                      // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct Pal.PalEditorItemActorClassTableRow
struct FPalEditorItemActorClassTableRow : public FTableRowBase
{
public:
	class FName                                  ClassName;                                         // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AActor>                  ActorClass;                                        // 0x10(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct Pal.PalEditorItemStaticMeshTableRow
struct FPalEditorItemStaticMeshTableRow : public FTableRowBase
{
public:
	class FName                                  StaticMeshName;                                    // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStaticMesh>            StaticMeshPath;                                    // 0x10(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x110 - 0x8)
// ScriptStruct Pal.PalStaticItemDataStruct
struct FPalStaticItemDataStruct : public FTableRowBase
{
public:
	class FName                                  OverrideName;                                      // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OverrideDescription;                               // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  IconName;                                          // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalItemTypeA                     TypeA;                                             // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalItemTypeB                     TypeB;                                             // 0x21(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BD0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Rank;                                              // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Rarity;                                            // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxStackCount;                                     // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Price;                                             // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SortID;                                            // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInTreasureBox;                                    // 0x3C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNotConsumed;                                      // 0x3D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableHandcraft;                                  // 0x3E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BD1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TechnologyTreeLock;                                // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ItemStaticClass;                                   // 0x44(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ItemDynamicClass;                                  // 0x4C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ItemActorClass;                                    // 0x54(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ItemStaticMeshName;                                // 0x5C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  VisualBlueprintClassName;                          // 0x64(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BD2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class AActor>                  VisualBlueprintClassSoft;                          // 0x70(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalDropItemType                  DropItemType;                                      // 0xA0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BD3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Editor_RowNameHash;                                // 0xA4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RestoreSatiety;                                    // 0xA8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RestoreConcentration;                              // 0xAC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RestoreSanity;                                     // 0xB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RestoreHealth;                                     // 0xB4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GrantEffect1Id;                                    // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GrantEffect1Time;                                  // 0xBC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GrantEffect2Id;                                    // 0xC0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GrantEffect2Time;                                  // 0xC4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GrantEffect3Id;                                    // 0xC8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GrantEffect3Time;                                  // 0xCC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Durability;                                        // 0xD0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalElementType                   ElementType;                                       // 0xD4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSleepWeapon;                                      // 0xD5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BD4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MagazineSize;                                      // 0xD8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SneakAttackRate;                                   // 0xDC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PhysicalAttackValue;                               // 0xE0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HPValue;                                           // 0xE4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PhysicalDefenseValue;                              // 0xE8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ShieldValue;                                       // 0xEC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MagicAttackValue;                                  // 0xF0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MagicDefenseValue;                                 // 0xF4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PassiveSkillName;                                  // 0xF8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalWazaID                        WazaID;                                            // 0x100(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BD5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CorruptionFactor;                                  // 0x104(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValue1;                                       // 0x108(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BD6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Pal.PalItemRecipeMaterialInfo
struct FPalItemRecipeMaterialInfo
{
public:
	class FName                                  MaterialID;                                        // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialCount;                                     // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct Pal.PalTalkTreeDataTableRow
struct FPalTalkTreeDataTableRow : public FTableRowBase
{
public:
	class FName                                  NPCID;                                             // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TalkName;                                          // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TextId;                                            // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct Pal.TutorialDataStruct
struct FTutorialDataStruct : public FTableRowBase
{
public:
	class FName                                  MsgId;                                             // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalTutorialTriggerType           Type;                                              // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MultiTrigger;                                      // 0x11(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalTutorialTriggerConditionType  ConditionType;                                     // 0x12(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BD7[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ConditionObjectIds;                                // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FName                                  ConditionCategoryName;                             // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConditionValue;                                    // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BD8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct Pal.PalBaseCampWorkerSickMasterData
struct FPalBaseCampWorkerSickMasterData : public FTableRowBase
{
public:
	enum class EPalBaseCampWorkerSickType        SickType;                                          // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BD9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EffectiveItemRank;                                 // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalFacialEyeType                 Facial;                                            // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BDA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WorkSpeed;                                         // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MoveSpeed;                                         // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SatietyDecrease;                                   // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalRandomRestInfo
struct FPalRandomRestInfo
{
public:
	class UAnimMontage*                          RandomRestMontage;                                 // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LoopNum_Min;                                       // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LoopNum_Max;                                       // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AfterIdleTime;                                     // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalNavigationUpdateFrequencySetting
struct FPalNavigationUpdateFrequencySetting
{
public:
	int32                                        UpdateDivideRate;                                  // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BDB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             UpdatableRangeMinMaxFromPlayer;                    // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Pal.PalCharacterCompleteDelegateParameter
struct FPalCharacterCompleteDelegateParameter
{
public:
	enum class EPalCharacterCompleteDelegatePriority Priority;                                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BDC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           CompleteDelegate;                                  // 0x4(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalCharacterList
struct FPalCharacterList
{
public:
	TArray<class APalCharacter*>                 CharacterList;                                     // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Pal.PalCheckStuckInfo
struct FPalCheckStuckInfo
{
public:
	uint8                                        Pad_3BDD[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Pal.PalUIAimReticleMapObjectAssignableData
struct FPalUIAimReticleMapObjectAssignableData
{
public:
	bool                                         IsAssignable;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BDE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TargetMapObjectID;                                 // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Pal.PalLocationUIData
struct FPalLocationUIData
{
public:
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UPalUICompassIconBase>     CompassIconWidget;                                 // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DisplayLength;                                     // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BDF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x5 (0x5 - 0x0)
// ScriptStruct Pal.PalSlateNavigationSetting
struct FPalSlateNavigationSetting
{
public:
	bool                                         IsEnableAnalogNavigation;                          // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsEnableLeftKeyNavigation;                         // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsEnableRightKeyNavigation;                        // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsEnableDownKeyNavigation;                         // 0x3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsEnableUpKeyNavigation;                           // 0x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA8 - 0x8)
// ScriptStruct Pal.PalLocationUIData_TableRow
struct FPalLocationUIData_TableRow : public FTableRowBase
{
public:
	TMap<enum class EPalLocationType, struct FPalLocationUIData> LocationUIDataMap;                                 // 0x8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<class FName, TSoftObjectPtr<class UTexture2D>> MapObjectIconMap;                                  // 0x58(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalUIGuildMemberDisplayInfo
struct FPalUIGuildMemberDisplayInfo
{
public:
	class FString                                CharacterName;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsAdmin;                                           // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalGuildPlayerStatus             PlayerStatus;                                      // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BE0[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct Pal.PalUICaptureCameraOffsetData
struct FPalUICaptureCameraOffsetData : public FTableRowBase
{
public:
	struct FVector                               LocationOffset;                                    // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotator;                                           // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               PointLightOffset_1;                                // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PointLightIntensity_1;                             // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PointLightSize_1;                                  // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PointLightOffset_2;                                // 0x58(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PointLightIntensity_2;                             // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PointLightSize_2;                                  // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RectLightOffset;                                   // 0x78(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RectLightRotator;                                  // 0x90(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        RectLightIntensity;                                // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RectLightSize;                                     // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1A0 (0x1A0 - 0x0)
// ScriptStruct Pal.PalUIServerDisplayData
struct FPalUIServerDisplayData
{
public:
	uint8                                        Pad_3BE1[0x120];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ServerName;                                        // 0x120(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x130(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPvP;                                             // 0x140(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BE2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Day;                                               // 0x144(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NowPlayerNum;                                      // 0x148(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPlayerNum;                                      // 0x14C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Ping;                                              // 0x150(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalUIServerListFilterType        ServerListType;                                    // 0x154(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BE3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ServerAddress;                                     // 0x158(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ServerPort;                                        // 0x168(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BE4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                VersionString;                                     // 0x170(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsLocked;                                          // 0x180(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BE5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Region;                                            // 0x188(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CreateTime;                                        // 0x198(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BE6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalUIServerDataCollectInfo
struct FPalUIServerDataCollectInfo
{
public:
	enum class EPalUIServerListSortType          SortType;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BE7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SearchWord;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Pal.PalUILocalWorldDisplayData
struct FPalUILocalWorldDisplayData
{
public:
	class FString                                WorldName;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WorldDirectoryName;                                // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerName;                                        // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerLevel;                                       // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Day;                                               // 0x34(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             Timestamp;                                         // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DirectoryPath;                                     // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalUIPaldexDistributionLocationStruct
struct FPalUIPaldexDistributionLocationStruct
{
public:
	TArray<struct FVector>                       Locations;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BE8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x38 - 0x8)
// ScriptStruct Pal.PalUIPaldexDistributionData
struct FPalUIPaldexDistributionData : public FTableRowBase
{
public:
	struct FPalUIPaldexDistributionLocationStruct DayTimeLocations;                                  // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FPalUIPaldexDistributionLocationStruct NightTimeLocations;                                // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Pal.PalUIPaldex_DisplayInfo
struct FPalUIPaldex_DisplayInfo
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BE9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                IndexSuffix;                                       // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CombinedIndexString;                               // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalUIPaldexPanelDetailType       DetailType;                                        // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BEA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  baseCharacterName;                                 // 0x2C(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BEB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Pal.PalRadialCatalog
struct FPalRadialCatalog
{
public:
	TMap<int32, int32>                           Catalog;                                           // 0x0(0x50)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Pal.PalGaugeInterpolationCalculator
struct FPalGaugeInterpolationCalculator
{
public:
	float                                        CurrentValue;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetValue;                                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDirectionPositive;                                // 0x8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BEC[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Pal.PalWazaMasterLevelDataRow
struct FPalWazaMasterLevelDataRow : public FTableRowBase
{
public:
	class FName                                  PalID;                                             // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalWazaID                        WazaID;                                            // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Level;                                             // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Pal.PalWazaMasterTamagoDataRow
struct FPalWazaMasterTamagoDataRow : public FTableRowBase
{
public:
	class FName                                  PalID;                                             // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalWazaID                        WazaID;                                            // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BEE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x50 - 0x8)
// ScriptStruct Pal.PalWazaDatabaseRaw
struct FPalWazaDatabaseRaw : public FTableRowBase
{
public:
	enum class EPalWazaID                        WazaType;                                          // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalElementType                   Element;                                           // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IgnoreRandomInherit;                               // 0xA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalWazaCategory                  Category;                                          // 0xB(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Power;                                             // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsLeanBack;                                        // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalPlayerDamageCameraShakeCategory CameraShake;                                       // 0x11(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BEF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinRange;                                          // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxRange;                                          // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CoolTime;                                          // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalSizeType                      ForceRagdollSize;                                  // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalAdditionalEffectType          EffectType1;                                       // 0x21(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BF0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EffectValue1;                                      // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectValueEx1;                                    // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalAdditionalEffectType          EffectType2;                                       // 0x2C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BF1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EffectValue2;                                      // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectValueEx2;                                    // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPalSpecialAttackRateInfo>     SpecialAttackRateInfos;                            // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bIsWeaponDamage;                                   // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DisabledData;                                      // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BF4[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Pal.PalWeaponSubParameterData
struct FPalWeaponSubParameterData : public FTableRowBase
{
public:
	float                                        Dps;                                               // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Range;                                             // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stability;                                         // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Accuracy;                                          // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct Pal.PalWildSpawnerDatabaseRow
struct FPalWildSpawnerDatabaseRow : public FTableRowBase
{
public:
	class FName                                  SpawnerName;                                       // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalSpawnedCharacterType          SpawnerType;                                       // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BF6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalOneDayTimeType                OnlyTime;                                          // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalWeatherConditionType          OnlyWeather;                                       // 0x19(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BF7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Pal_1;                                             // 0x1C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NPC_1;                                             // 0x24(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LvMin_1;                                           // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LvMax_1;                                           // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumMin_1;                                          // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumMax_1;                                          // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Pal_2;                                             // 0x3C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NPC_2;                                             // 0x44(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LvMin_2;                                           // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LvMax_2;                                           // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumMin_2;                                          // 0x54(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumMax_2;                                          // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Pal_3;                                             // 0x5C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NPC_3;                                             // 0x64(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LvMin_3;                                           // 0x6C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LvMax_3;                                           // 0x70(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumMin_3;                                          // 0x74(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumMax_3;                                          // 0x78(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BF8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Pal.PalWindInfo
struct FPalWindInfo
{
public:
	struct FVector                               Direction;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Speed;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BFA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalWorkTypeSet
struct FPalWorkTypeSet
{
public:
	TArray<enum class EPalWorkType>              WorkTypes;                                         // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct Pal.PalWorkStaticParameter
struct FPalWorkStaticParameter
{
public:
	struct FGuid                                 OwnerMapObjectModelId;                             // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 OwnerMapObjectConcreteModelId;                     // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalBoundsTransform                   WorkableBounds;                                    // 0x20(0x80)(Edit, DisableEditOnTemplate, Transient, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FPalWorkAssignLocalLocation>   AssignLocalLocations;                              // 0xA0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BFB[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Pal.PalWorkAssignParameter
struct FPalWorkAssignParameter
{
public:
	uint8                                        Pad_3BFC[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalWorkWaitParameter
struct FPalWorkWaitParameter
{
public:
	uint8                                        Pad_3BFD[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Pal.PalWorkAssignDefineDataStaticSetting
struct FPalWorkAssignDefineDataStaticSetting
{
public:
	class FName                                  RowName;                                           // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPalWorkAssignDefineData              AssignDefineData;                                  // 0x8(0x38)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct Pal.PalWorkProgressManagerWorkProcessTickFunction
struct FPalWorkProgressManagerWorkProcessTickFunction : public FTickFunction
{
public:
	class UPalWorkProgressManager*               Target;                                            // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalWorkSuitabilityDefineData
struct FPalWorkSuitabilityDefineData
{
public:
	bool                                         bIsChangeWorkAnimPlayRate;                         // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BFE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CraftSpeeds;                                       // 0x8(0x10)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Pal.PalCollectionRankDefineData
struct FPalCollectionRankDefineData
{
public:
	float                                        DropNumRate;                                       // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Pal.PalWorkSuitabilityCollectionDefineData
struct FPalWorkSuitabilityCollectionDefineData
{
public:
	struct FPalWorkSuitabilityDefineData         CommonDefineData;                                  // 0x0(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FPalCollectionRankDefineData>  CollectionDefineData;                              // 0x18(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalDeforestRankDefineData
struct FPalDeforestRankDefineData
{
public:
	float                                        DamageRate;                                        // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalMapObjectMaterialSubType      MaterialSubType;                                   // 0x4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BFF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Pal.PalWorkSuitabilityDeforestDefineData
struct FPalWorkSuitabilityDeforestDefineData
{
public:
	struct FPalWorkSuitabilityDefineData         CommonDefineData;                                  // 0x0(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FPalDeforestRankDefineData>    DeforestDefineData;                                // 0x18(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.PalMiningRankDefineData
struct FPalMiningRankDefineData
{
public:
	float                                        DamageRate;                                        // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPalMapObjectMaterialSubType      MaterialSubType;                                   // 0x4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C00[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Pal.PalWorkSuitabilityMiningDefineData
struct FPalWorkSuitabilityMiningDefineData
{
public:
	struct FPalWorkSuitabilityDefineData         CommonDefineData;                                  // 0x0(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FPalMiningRankDefineData>      MiningDefineData;                                  // 0x18(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Pal.PalWorldMapUIDataSave
struct FPalWorldMapUIDataSave
{
public:
	TMap<class FName, bool>                      UnlockedRegionMap;                                 // 0x0(0x50)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalWorldObjectRecordData_MapObjectSpawnerItem
struct FPalWorldObjectRecordData_MapObjectSpawnerItem
{
public:
	struct FGameDateTime                         NextSpawnLotteryGameTime;                          // 0x0(0x8)(Edit, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 MapObjectInstanceId;                               // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Pal.PalWorldObjectRecordData_MapObjectSpawner
struct FPalWorldObjectRecordData_MapObjectSpawner
{
public:
	TMap<int32, struct FPalWorldObjectRecordData_MapObjectSpawnerItem> ItemMap;                                           // 0x0(0x50)(Edit, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C01[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Pal.PalWorldObjectRecordData_MapObjectSpawnerInStage
struct FPalWorldObjectRecordData_MapObjectSpawnerInStage
{
public:
	TMap<struct FGuid, struct FPalWorldObjectRecordData_MapObjectSpawner> RecordDataMapByLevelObjectInstanceId;              // 0x0(0x50)(Edit, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Pal.PalCrimeMasterData
struct FPalCrimeMasterData : public FTableRowBase
{
public:
	class FName                                  CrimeNameTextId;                                   // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BaseReward;                                        // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C02[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Pal.PalCrimeInstanceCreateParameter
struct FPalCrimeInstanceCreateParameter
{
public:
	class FName                                  CrimeId;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 TargetId;                                          // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Pal.PalWorldSecurityWantedPoliceSettingData
struct FPalWorldSecurityWantedPoliceSettingData
{
public:
	struct FPalDataTableRowName_PalHumanData     PoliceType;                                        // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PoliceNum;                                         // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PoliceLevel;                                       // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Pal.FloatCounter
struct FFloatCounter
{
public:
	float                                        TriggerValue;                                      // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CurrentStackValue;                                 // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

}


