#include "CfgLoot.hpp"

class CfgBuildingLoot {
	class Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base", "z_hunter", "z_teacher", "z_suit1", "z_suit2", "z_worker1", "z_worker2", "z_worker3", "z_villager1", "z_villager2", "z_villager3"};
		lootChance = 0;
		lootPos[] = {};
		lootPosSmall[] = {};
		lootPosZombie[] = {};
		itemType[] = {};
		itemChance[] = {};
		itemTypeSmall[] = {};
		itemChanceSmall[] = {};
		hangPos[] = {};
		vehPos[] = {};
	};
	
	class Residential : Default {
		zombieChance = 0.3;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base", "z_hunter", "z_teacher", "z_villager1", "z_villager2", "z_villager3"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] = {{"ItemWatch", "generic"}, {"ItemCompass", "generic"}, {"ItemMap", "weapon"}, {"pistols", "cfglootweapon"}, {"ItemFlashlight", "generic"}, {"ItemKnife", "generic"}, {"ItemMatchbox_DZE", "generic"}, {"", "generic"}, {"backpacks", "backpack"}, {"tents", "single"}, {"", "military"}, {"", "trash"}, {"Binocular", "weapon"}, {"PartPlywoodPack", "magazine"}, {"clothes", "single"}, {"specialclothes", "single"}, {"WeaponHolder_MeleeCrowbar", "object"}, {"shotgunsingleshot", "cfglootweapon"}};
		itemChance[] = {0.04, 0.03, 0.02, 0.1, 0.01, 0.04, 0.01, 0.36, 0.04, 0.01, 0.02, 0.17, 0.02, 0.02, 0.01, 0.01, 0.03, 0.06};
		itemTypeSmall[] = {{"ItemSodaMdew", "magazine"},  {"ItemSodaRbull", "magazine"},  {"ItemSodaOrangeSherbet", "magazine"},  {"ItemWatch", "weapon"},  {"ItemCompass", "weapon"},  {"ItemMap", "weapon"},  {"pistols", "cfglootweapon"},  {"ItemFlashlight", "weapon"},  {"ItemKnife", "weapon"},  {"ItemMatchbox_DZE", "weapon"},  {"", "generic"}, {"", "military"}, {"", "trash"}, {"Binocular", "weapon"},  {"clothes", "single"},  {"specialclothes", "single"}};
		itemChanceSmall[] = {0.01, 0.01, 0.02, 0.05, 0.04, 0.03, 0.12, 0.02, 0.04, 0.03, 0.38, 0.04, 0.17, 0.02, 0.01, 0.01};
	};
	
	class Office : Default {
		maxRoaming = 3;
		zombieClass[] = {"z_suit1", "z_suit2"};
		zombieChance = 0.3;
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] = {{"ItemWatch", "generic"},  {"ItemCompass", "generic"},  {"ItemMap", "weapon"},  {"pistols", "cfglootweapon"},  {"ItemFlashlight", "generic"},  {"ItemKnife", "generic"},  {"ItemMatchbox_DZE", "generic"},  {"", "generic"}, {"shotgunsingleshot", "cfglootweapon"},  {"backpacks", "backpack"},  {"tents", "single"},  {"", "military"}, {"", "trash"}, {"Binocular", "weapon"},  {"PartPlywoodPack", "magazine"},  {"clothes", "single"},  {"specialclothes", "single"},  {"WeaponHolder_MeleeCrowbar", "object"},  {"ItemBriefcaseEmpty", "magazine"}};
		itemChance[] = {0.04, 0.03, 0.02, 0.11, 0.01, 0.04, 0.01, 0.31, 0.05, 0.04, 0.01, 0.02, 0.21, 0.02, 0.02, 0.01, 0.01, 0.03, 0.01};
		itemTypeSmall[] = {{"ItemSodaMdew", "magazine"},  {"ItemSodaRbull", "magazine"},  {"ItemSodaOrangeSherbet", "magazine"},  {"ItemWatch", "weapon"},  {"ItemCompass", "weapon"},  {"ItemMap", "weapon"},  {"pistols", "cfglootweapon"},  {"ItemFlashlight", "weapon"},  {"ItemKnife", "weapon"},  {"ItemMatchbox_DZE", "weapon"},  {"", "generic"}, {"", "military"}, {"", "trash"}, {"Binocular", "weapon"},  {"clothes", "single"},  {"specialclothes", "single"},  {"ItemDocument", "magazine"}};
		itemChanceSmall[] = {0.01, 0.01, 0.02, 0.05, 0.04, 0.03, 0.15, 0.02, 0.05, 0.03, 0.31, 0.04, 0.03, 0.02, 0.16, 0.02, 0.01};
	};
	
	class Industrial : Default {
		zombieChance = 0.4;
		zombieClass[] = {"z_worker1", "z_worker2", "z_worker3"};
		maxRoaming = 2;
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] = {{"ItemGenerator", "magazine"},  {"ItemFuelBarrelEmpty", "magazine"},  {"", "generic"}, {"", "trash"}, {"", "military"}, {"PartGeneric", "magazine"},  {"PartWheel", "magazine"},  {"PartFueltank", "magazine"},  {"PartEngine", "magazine"},  {"PartGlass", "magazine"},  {"PartVRotor", "magazine"},  {"ItemJerrycan", "magazine"},  {"WeaponHolder_ItemHatchet_DZE", "object"},  {"ItemKnife", "military"},  {"ItemToolbox", "weapon"},  {"ItemWire", "magazine"},  {"ItemTankTrap", "magazine"},  {"ItemKeyKit", "weapon"},  {"CinderBlocks", "magazine"},  {"MortarBucket", "magazine"}};
		itemChance[] = {0.01, 0.01, 0.17, 0.25, 0.04, 0.04, 0.05, 0.02, 0.02, 0.04, 0.01, 0.04, 0.07, 0.07, 0.06, 0.01, 0.04, 0.01, 0.03, 0.01};
		itemTypeSmall[] = {{"", "generic"}, {"", "trash"}, {"", "military"}, {"ItemKnife", "weapon"},  {"ItemKeyKit", "weapon"}};
		itemChanceSmall[] = {0.5, 0.28, 0.14, 0.07, 0.01};
	};
	
	class IndustrialFuel : Default {
		zombieChance = 0.4;
		zombieClass[] = {"z_worker1", "z_worker2", "z_worker3"};
		maxRoaming = 2;
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] = {{"ItemGenerator", "magazine"},  {"ItemFuelPump", "magazine"},  {"", "generic"}, {"", "trash"}, {"", "military"}, {"PartGeneric", "magazine"},  {"PartWheel", "magazine"},  {"PartFueltank", "magazine"},  {"PartEngine", "magazine"},  {"PartGlass", "magazine"},  {"PartVRotor", "magazine"},  {"ItemJerrycan", "magazine"},  {"WeaponHolder_ItemHatchet_DZE", "object"},  {"ItemKnife", "military"},  {"ItemToolbox", "weapon"},  {"ItemWire", "magazine"},  {"ItemTankTrap", "magazine"},  {"ItemKeyKit", "weapon"}};
		itemChance[] = {0.01, 0.01, 0.18, 0.28, 0.04, 0.04, 0.05, 0.02, 0.02, 0.04, 0.01, 0.04, 0.07, 0.07, 0.06, 0.01, 0.04, 0.01};
		itemTypeSmall[] = {{"", "generic"}, {"", "trash"}, {"", "military"}, {"ItemKnife", "weapon"},  {"ItemKeyKit", "weapon"}};
		itemChanceSmall[] = {0.5, 0.28, 0.14, 0.07, 0.01};
	};
	
	class Farm : Default {
		zombieChance = 0.3;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base", "z_hunter", "z_hunter", "z_hunter", "z_villager1", "z_villager2", "z_villager3"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] = {{"ItemJerrycan", "magazine"},  {"", "generic"}, {"farmweapons", "cfglootweapon"},  {"", "trash"}, {"PartPlankPack", "magazine"},  {"WeaponHolder_ItemHatchet_DZE", "object"},  {"ItemFuelBarrelEmpty", "magazine"},  {"WeaponHolder_ItemMachete", "object"},  {"ItemFishingPole", "weapon"},  {"ItemLightBulb", "magazine"},  {"ItemSledgeHandle", "magazine"}};
		itemChance[] = {0.05, 0.3, 0.18, 0.26, 0.06, 0.05, 0.01, 0.03, 0.02, 0.02, 0.02};
		itemTypeSmall[] = {{"", "generic"}, {"", "trash"}, {"", "military"}, {"ItemLightBulb", "magazine"},  {"ItemSledgeHead", "magazine"}};
		itemChanceSmall[] = {0.79, 0.14, 0.05, 0.01, 0.01};
	};
	
	class Supermarket : Default {
		lootChance = 0.6;
		minRoaming = 2;
		maxRoaming = 6;
		zombieChance = 0.3;
		zombieClass[] = {"zZombie_Base", "zZombie_Base", "z_teacher", "z_suit1", "z_suit2"};
		itemType[] = {{"ItemWatch", "generic"},  {"ItemCompass", "generic"},  {"ItemMap", "weapon"},  {"pistols", "cfglootweapon"},  {"ItemFlashlight", "generic"},  {"ItemKnife", "generic"},  {"ItemMatchbox_DZE", "generic"},  {"", "generic"}, {"shotgunsingleshot", "cfglootweapon"},  {"backpacks", "backpack"},  {"tents", "single"},  {"", "food"}, {"", "trash"}, {"Binocular", "weapon"},  {"PartPlywoodPack", "magazine"}};
		itemChance[] = {0.07, 0.02, 0.04, 0.04, 0.01, 0.02, 0.04, 0.04, 0.04, 0.07, 0.01, 0.3, 0.23, 0.05, 0.02};
		itemTypeSmall[] = {{"ItemSodaMdew", "magazine"},  {"ItemSodaRbull", "magazine"},  {"ItemSodaOrangeSherbet", "magazine"},  {"ItemWatch", "weapon"},  {"ItemCompass", "weapon"},  {"ItemMap", "weapon"},  {"pistols", "cfglootweapon"},  {"ItemFlashlight", "weapon"},  {"ItemKnife", "weapon"},  {"ItemMatchbox_DZE", "weapon"},  {"", "generic"}, {"", "food"}, {"", "trash"}, {"Binocular", "weapon"},  {"ItemMixOil", "magazine"}};
		itemChanceSmall[] = {0.01, 0.01, 0.03, 0.07, 0.03, 0.05, 0.08, 0.01, 0.02, 0.04, 0.21, 0.24, 0.16, 0.02, 0.02};
	};
	
	class HeliCrash : Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] = {{"assaultrifles", "cfglootweapon"},  {"submachinegun", "cfglootweapon"},  {"sniperrifles", "cfglootweapon"},  {"machineguns", "cfglootweapon"},  {"", "military"}, {"", "medical"}, {"MedBox0", "object"},  {"NVGoggles", "weapon"},  {"AmmoBoxSmall_556", "object"},  {"AmmoBoxSmall_762", "object"},  {"militaryclothes", "single"},  {"militaryammo", "single"}};
		itemChance[] = {0.1, 0.04, 0.07, 0.06, 0.3, 0.18, 0.02, 0.05, 0.03, 0.03, 0.05, 0.06};
	};
	
	class HeliCrash_No50s : Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] = {{"assaultrifles", "cfglootweapon"},  {"submachinegun", "cfglootweapon"},  {"sniperrifles", "cfglootweapon"},  {"machineguns", "cfglootweapon"},  {"", "military"}, {"", "medical"}, {"MedBox0", "object"},  {"NVGoggles", "weapon"},  {"AmmoBoxSmall_556", "object"},  {"AmmoBoxSmall_762", "object"},  {"militaryclothes", "single"},  {"militaryammo", "single"}};
		itemChance[] = {0.09, 0.03, 0.05, 0.05, 0.35, 0.18, 0.05, 0.01, 0.03, 0.03, 0.05, 0.06};
	};
	
	class Hospital : Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_doctor", "z_doctor", "z_doctor"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] = {{"", "trash"}, {"", "hospital"}, {"MedBox0", "object"}};
		itemChance[] = {0.1, 0.7, 0.2};
		itemTypeSmall[] = {{"", "trash"}, {"", "hospital"}};
		itemChanceSmall[] = {0.1, 0.9};
	};
	
	class Military : Default {
		zombieChance = 0.3;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier", "z_soldier_heavy", "z_policeman"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] = {{"pistols", "cfglootweapon"},  {"assaultrifles", "cfglootweapon"},  {"sniperrifles", "cfglootweapon"},  {"shotgunsingleshot", "cfglootweapon"},  {"submachinegun", "cfglootweapon"},  {"Binocular", "weapon"},  {"ItemFlashlightRed", "military"},  {"ItemKnife", "military"},  {"ItemGPS", "weapon"},  {"ItemMap", "military"},  {"militarybackpacks", "backpack"},  {"", "medical"}, {"", "generic"}, {"", "military"}, {"ItemEtool", "weapon"},  {"ItemSandbag", "magazine"},  {"machineguns", "cfglootweapon"}};
		itemChance[] = {0.04, 0.13, 0.04, 0.06, 0.07, 0.03, 0.04, 0.01, 0.01, 0.02, 0.05, 0.03, 0.1, 0.3, 0.02, 0.02, 0.03};
		itemTypeSmall[] = {{"pistols", "cfglootweapon"},  {"Binocular", "weapon"},  {"ItemFlashlightRed", "weapon"},  {"ItemKnife", "weapon"},  {"ItemGPS", "weapon"},  {"ItemMap", "weapon"},  {"", "medical"}, {"", "generic"}, {"", "military"}, {"submachinegun", "cfglootweapon"},  {"ItemEtool", "weapon"}};
		itemChanceSmall[] = {0.15, 0.02, 0.03, 0.04, 0.02, 0.02, 0.09, 0.34, 0.26, 0.02, 0.01};
	};
	
	class MilitaryIndustrial : Default {
		zombieChance = 0.3;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier", "z_soldier_heavy", "z_policeman", "z_soldier", "z_soldier_heavy", "z_policeman", "z_worker1", "z_worker2", "z_worker3"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] = {{"pistols", "cfglootweapon"},  {"assaultrifles", "cfglootweapon"},  {"PartGeneric", "magazine"},  {"sniperrifles", "cfglootweapon"},  {"shotgunsingleshot", "cfglootweapon"},  {"ItemGenerator", "magazine"},  {"submachinegun", "cfglootweapon"},  {"PartWheel", "magazine"},  {"Binocular", "weapon"},  {"ItemFlashlightRed", "military"},  {"ItemKnife", "military"},  {"ItemGPS", "weapon"},  {"PartVRotor", "magazine"},  {"militarybackpacks", "backpack"},  {"", "medical"}, {"", "generic"}, {"", "military"}, {"ItemEtool", "weapon"},  {"ItemSandbag", "magazine"},  {"ItemFuelBarrelEmpty", "magazine"},  {"ItemFuelPump", "magazine"},  {"machineguns", "cfglootweapon"}};
		itemChance[] = {0.02, 0.05, 0.03, 0.01, 0.05, 0.01, 0.05, 0.02, 0.01, 0.03, 0.04, 0.01, 0.01, 0.03, 0.05, 0.35, 0.07, 0.03, 0.02, 0.03, 0.01, 0.01};
		itemTypeSmall[] = {{"pistols", "cfglootweapon"},  {"Binocular", "weapon"},  {"ItemFlashlightRed", "weapon"},  {"ItemKnife", "weapon"},  {"ItemGPS", "weapon"},  {"", "medical"}, {"", "generic"}, {"", "military"}, {"submachinegun", "cfglootweapon"},  {"ItemEtool", "weapon"}};
		itemChanceSmall[] = {0.12, 0.05, 0.03, 0.04, 0.02, 0.02, 0.09, 0.34, 0.26, 0.03};
	};
	
	class IndustrialMilitary : Default {
		zombieChance = 0.4;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier", "z_soldier_heavy", "z_policeman", "z_soldier", "z_soldier_heavy", "z_policeman", "z_worker1", "z_worker2", "z_worker3"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] = {{"pistols", "cfglootweapon"},  {"assaultrifles", "cfglootweapon"},  {"PartGeneric", "magazine"},  {"sniperrifles", "cfglootweapon"},  {"shotgunsingleshot", "cfglootweapon"},  {"ItemGenerator", "magazine"},  {"submachinegun", "cfglootweapon"},  {"PartWheel", "magazine"},  {"Binocular", "weapon"},  {"ItemFlashlightRed", "military"},  {"ItemKnife", "military"},  {"ItemGPS", "weapon"},  {"PartVRotor", "magazine"},  {"PartFueltank", "magazine"},  {"PartEngine", "magazine"},  {"PartGlass", "magazine"},  {"militarybackpacks", "backpack"},  {"", "medical"}, {"", "generic"}, {"", "military"}, {"ItemEtool", "weapon"},  {"ItemSandbag", "magazine"},  {"ItemFuelBarrelEmpty", "magazine"},  {"ItemFuelPump", "magazine"},  {"machineguns", "cfglootweapon"}};
		itemChance[] = {0.02, 0.05, 0.03, 0.01, 0.05, 0.01, 0.05, 0.02, 0.01, 0.03, 0.04, 0.01, 0.01, 0.03, 0.04, 0.05, 0.03, 0.05, 0.25, 0.07, 0.03, 0.02, 0.03, 0.01, 0.01};
		itemTypeSmall[] = {{"pistols", "cfglootweapon"},  {"Binocular", "weapon"},  {"ItemFlashlightRed", "weapon"},  {"ItemKnife", "weapon"},  {"ItemGPS", "weapon"},  {"", "medical"}, {"", "generic"}, {"", "military"}, {"submachinegun", "cfglootweapon"},  {"ItemEtool", "weapon"}};
		itemChanceSmall[] = {0.12, 0.05, 0.03, 0.04, 0.02, 0.02, 0.09, 0.34, 0.26, 0.03};
	};
	
	class MilitarySpecial : Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier_heavy"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] = {{"assaultrifles", "cfglootweapon"},  {"machineguns", "cfglootweapon"},  {"pistols", "cfglootweapon"},  {"sniperrifles", "cfglootweapon"},  {"militaryshotguns", "cfglootweapon"},  {"submachinegun", "cfglootweapon"},  {"AmmoBoxSmall_556", "object"},  {"AmmoBoxSmall_762", "object"},  {"Binocular", "weapon"},  {"ItemFlashlightRed", "military"},  {"ItemKnife", "military"},  {"ItemGPS", "weapon"},  {"ItemMap", "military"},  {"Binocular_Vector", "military"},  {"militarybackpacks", "backpack"},  {"", "medical"}, {"", "generic"}, {"", "military"}, {"machinegunammo", "single"},  {"militaryclothes", "single"},  {"NVGoggles", "weapon"}};
		itemChance[] = {0.1, 0.04, 0.08, 0.03, 0.05, 0.06, 0.01, 0.02, 0.01, 0.02, 0.01, 0.01, 0.01, 0.01, 0.04, 0.08, 0.3, 0.01, 0.05, 0.05, 0.01};
		itemTypeSmall[] = {
			{"pistols", "cfglootweapon"},  {"AmmoBoxSmall_556", "object"},  {"AmmoBoxSmall_762", "object"},  {"Binocular", "weapon"},  {"ItemFlashlightRed", "military"},  {"ItemKnife", "military"},  {"ItemGPS", "weapon"},  {"ItemMap", "weapon"},  {"Binocular_Vector", "weapon"},  {"", "medical"}, 
 {"", "generic"}, 
 {"", "military"}, 
 {"5Rnd_86x70_L115A1", "magazine"},  {"machinegunammoexpl", "single"},  {"militaryclothes", "single"},  {"NVGoggles", "weapon"},  {"100Rnd_762x54_PK", "magazine"}};
		itemChanceSmall[] = {0.1, 0.02, 0.02, 0.02, 0.01, 0.02, 0.01, 0.03, 0.01, 0.06, 0.15, 0.33, 0.02, 0.02, 0.05, 0.02, 0.05, 0.01, 0.01};
	};
	
	class Hunting : Default {
		zombieChance = 0.4;
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_hunter", "z_hunter", "z_hunter"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] = {{"ItemMap", "weapon"},  {"ItemFlashlight", "generic"},  {"ItemKnife", "generic"},  {"ItemMatchbox_DZE", "generic"},  {"farmweapons", "cfglootweapon"},  {"", "military"}, 
 {"WeaponHolder_ItemMachete", "object"},  {"", "hunter"}};
		itemChance[] = {0.02, 0.01, 0.01, 0.03, 0.03, 0.38, 0.02, 0.5};
		itemTypeSmall[] = {{"ItemMap", "weapon"},  {"ItemFlashlight", "weapon"},  {"ItemKnife", "weapon"},  {"ItemMatchbox_DZE", "weapon"},  {"", "military"}, {"", "hunter"}};
		itemChanceSmall[] = {0.02, 0.02, 0.02, 0.04, 0.4, 0.5};
	};
	
	class DynamicDebris : Default {
		lootChance = 0.4;
		minRoaming = 0;
		maxRoaming = 2;
		zombieChance = 0.3;
		zombieClass[] = {"zZombie_Base", "zZombie_Base", "z_teacher", "z_suit1", "z_suit2"};
		itemType[] = {{"ItemWatch", "generic"},  {"ItemCompass", "generic"},  {"ItemMap", "weapon"},  {"Makarov", "weapon"},  {"Colt1911", "weapon"},  {"ItemFlashlight", "generic"},  {"ItemKnife", "generic"},  {"ItemMatchbox_DZE", "generic"},  {"ItemToolbox", "weapon"},  {"", "generic"}, {"", "food"}, {"PartGeneric", "magazine"},  {"PartWheel", "magazine"},  {"PartFueltank", "magazine"},  {"PartEngine", "magazine"},  {"PartGlass", "magazine"},  {"WeaponHolder_ItemJerrycan", "object"}};
		itemChance[] = {0.191, 0.012, 0.062, 0.024, 0.024, 0.055, 0.055, 0.055, 0.022, 0.169, 0.055, 0.066, 0.055, 0.033, 0.011, 0.078, 0.033};
	};
	
	class DynamicDebrisMilitary : Default {
		lootChance = 0.4;
		minRoaming = 0;
		maxRoaming = 2;
		zombieChance = 0.3;
		zombieClass[] = {"z_soldier_pilot", "z_soldier_heavy"};
		itemType[] = {{"ItemEtool", "weapon"},  {"ItemSandbag", "magazine"},  {"", "military"}, {"ItemWatch", "generic"},  {"ItemCompass", "generic"},  {"ItemMap", "weapon"},  {"MakarovSD", "weapon"},  {"Colt1911", "weapon"},  {"ItemFlashlight", "generic"},  {"ItemKnife", "generic"},  {"ItemMatchbox_DZE", "generic"},  {"ItemToolbox", "weapon"},  {"", "generic"}, {"", "food"}, {"PartGeneric", "magazine"},  {"PartWheel", "magazine"},  {"PartFueltank", "magazine"},  {"PartEngine", "magazine"},  {"PartGlass", "magazine"},  {"PartVRotor", "magazine"},  {"WeaponHolder_ItemJerrycan", "object"}};
		itemChance[] = {0.05, 0.1, 0.08, 0.1, 0.02, 0.05, 0.01, 0.02, 0.01, 0.05, 0.05, 0.02, 0.15, 0.05, 0.06, 0.05, 0.03, 0.02, 0.03, 0.02, 0.03};
	};
	
	class SupplyDrop : Default {
		zombieChance = 1;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base", "z_hunter", "z_hunter", "z_hunter", "z_villager1", "z_villager2", "z_villager3", "z_doctor", "z_soldier_pilot", "z_soldier_heavy"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] = {{"PartPlywoodPack", "magazine"},  {"PartPlankPack", "magazine"},  {"CinderBlocks", "magazine"},  {"MortarBucket", "magazine"},  {"bulk_PartGeneric", "magazine"},  {"bulk_ItemSandbag", "magazine"},  {"bulk_ItemTankTrap", "magazine"},  {"ItemSledge", "weapon"}};
		itemChance[] = {0.1, 0.2, 0.1, 0.1, 0.2, 0.1, 0.1, 0.1};
	};
	
	class MassGrave : Default {
		zombieChance = 1;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base", "z_hunter", "z_hunter", "z_hunter", "z_villager1", "z_villager2", "z_villager3", "z_doctor", "z_soldier_pilot", "z_soldier_heavy"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] = {{M16A2, "weapon"}, {M16A2GL, "weapon"}, {M249_EP1_DZ, "weapon"}, {M9SD, "weapon"}, {"Pecheneg_DZ", "weapon"},  {AK_74, "weapon"}, {"M4A1_Aim", "weapon"},  {"AKS_74_kobra", "weapon"},  {AKS_74_U, "weapon"}, {AK_47_M, "weapon"}, {M24, "weapon"}, {SVD_CAMO, "weapon"}, {M1014, "weapon"}, {"BAF_LRR_scoped", "weapon"},  {M4SPR, "weapon"}, {M4A1, "weapon"}, {M14_EP1, "weapon"}, {UZI_EP1, "weapon"}, {"Remington870_lamp", "weapon"},  {"glock17_EP1", "weapon"},  {M240_DZ, "weapon"}, {"M4A1_AIM_SD_camo", "weapon"},  {M16A4_ACG, "weapon"}, {"M4A1_HWS_GL_camo", "weapon"},  {"Mk_48_DZ", "weapon"},  {M4A3_CCO_EP1, "weapon"}, {"AmmoBoxSmall_556", "object"},  {"AmmoBoxSmall_762", "object"},  {"Binocular", "weapon"},  {"ItemFlashlightRed", "military"},  {"ItemKnife", "military"},  {"ItemGPS", "weapon"},  {"ItemMap", "military"},  {"Binocular_Vector", "military"},  {"DZ_ALICE_Pack_EP1", "object"},  {"DZ_TK_Assault_Pack_EP1", "object"},  {"DZ_British_ACU", "object"},  {"DZ_CivilBackpack_EP1", "object"},  {"DZ_Backpack_EP1", "object"},  {"DZ_LargeGunBag_EP1", "object"},  {"", "medical"}, {"", "generic"}, {"", "military"},  {"Sa58V_RCO_EP1", "weapon"},  {"Sa58V_CCO_EP1", "weapon"},  {"G36_C_SD_camo", "weapon"},  {M40A3, "weapon"}, {"100Rnd_762x54_PK", "magazine"},  {"", "militaryclothes"}, {"WeaponHolder_ItemMachete", "object"},  {"SCAR_H_LNG_Sniper_SD", "weapon"},  {"2000Rnd_762x51_M134", "magazine"},  {KSVK_DZE, "weapon"}, {"m240_scoped_EP1_DZE", "weapon"}};
		itemChance[] = {0.03, 0.01, 0.01, 0.02, 0.01, 0.02, 0.01, 0.01, 0.02, 0.02, 0.01, 0.02, 0.01, 0.01, 0.01, 0.02, 0.03, 0.01, 0.02, 0.02, 0.01, 0.01, 0.01, 0.01, 0.01, 0.03, 0.03, 0.01, 0.02, 0.01, 0.01, 0.01, 0.01, 0.03, 0.02, 0.02, 0.02, 0.01, 0.01, 0.05, 0.05, 0.13, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.05, 0.02, 0.01, 0.01, 0.01, 0.01};
	};
	
	#include "\dayz_epoch_b\CfgLootPos.hpp"

	class Land_MBG_Garage_Single_A : Land_MBG_Garage_Single_B {};
	class Land_MBG_Garage_Single_C : Land_MBG_Garage_Single_A {};

	class Land_MBG_GER_RHUS_4 : Residential {
		zombieChance = 0.2;
		lootPos[] = {
			{1.48242, 2.94995, -2.86569}, 
			{3.06348, 4.1582, -2.9157}, 
			{-3.42676, 2.75391, -2.4157}, 
			{1.38086, -3.94336, -2.36569}, 
			{3.60645, -1.51001, -2.51569}, 
			{-3.38477, -2.74951, -3.36569}, 
			{-1.16504, 4.1582, -0.465683}, 
			{3.46973, 1.44287, -0.465683}, 
			{3.46875, 0.478027, -0.465683}, 
			{1.0332, -4.48242, -0.465683}, 
			{-3.27734, -2.83789, -0.465683} 
		};
		lootPosZombie[] = {
			{2.15918, 5.73291, -3.76373}, 
			{-0.509766, -2.11768, -3.36569}, 
			{2.39648, -5.71338, -3.86574} 
		};
	};
	class Land_build5 : Residential {
		lootPos[] = {
			{-4.43384, -3.91895, -2.63174}, 
			{0.712891, -3.93848, -2.63174}, 
			{4.61523, 1.90918, -2.63174}, 
			{2.2312, -3.87012, -2.63174} 
		};
	};
	class Land_build2 : Residential {
		lootPos[] = {
			{3.63599, -6.05859, -4.93416}, 
			{5.09741, 1.81348, -4.88693}, 
			{-1.91016, 0.357422, -4.48692}, 
			{1.94507, 0.337891, -4.53691}, 
			{-6.98242, -5.40625, -4.28452}, 
			{-3.57275, 1.89063, -4.88681}, 
			{-7.60327, 1.92676, -1.57527}, 
			{-3.59155, -6.12891, -1.62527}, 
			{2.38135, 5.81738, -1.57527}, 
			{7.39673, -6.00977, -1.57527}, 
			{7.66113, 1.90918, -1.62527}, 
			{2.32056, 1.71484, -1.62527}, 
			{-3.38208, -1.24121, -4.03601} 
		};
	};
	class Land_Bet_haus_5_bs_b : Residential {
		lootPos[] = {
			{0.224609, 2.91943, -4.52586}, 
			{-2.79492, 3.22949, -1.46469}, 
			{2.61523, -1.34058, -0.614716}, 
			{-0.632813, 1.63501, -5.27586} 
		};
	};
	class Land_Bet_haus_2_fw_e : Residential {
		lootPos[] = {
			{2.8291, 1.03491, -0.945053}, 
			{-2.95508, 1.05908, -0.945526}, 
			{-2.49316, 0.814941, -4.34476} 
		};
	};
	class Land_Bet_haus_4_fw_a : Residential {
		lootPos[] = {
			{-2.72803, 2.4834, -2.63354}, 
			{2.72021, 3.09668, -4.73357}, 
			{-2.38354, -1.85449, -1.16264}, 
			{-2.74487, 0.0292969, 2.3932}, 
			{2.88232, 0.936523, 1.5932} 
		};
	};
	class Land_Bet_haus_4_bs_a2: Residential
	{
		lootPos[] = {{ -1.20508,0.995117,-4.73357 },{ -0.968018,-1.08594,-4.73357 },{ -1.4729,-1.72754,-1.16264 },{ -0.221924,-1.48828,-1.5932 }};
	};
	class Land_Bet_haus_4_fw_b: Residential
	{
		lootPos[] = {{ 2.07642,1.55566,-4.73358 },{ -1.27588,-1.91016,-4.73358 },{ -0.129395,-1.65527,-1.16264 },{ 1.31079,1.69824,-1.16264 },{ 1.36938,1.26563,1.5932 }};
	};
	class Land_Bet_haus_4_bs_b: Residential
	{
		lootPos[] = {{ 0.113525,2.1582,-1.16264 },{ 1.44067,1.52637,1.5932 },{ -1.52905,-1.43945,1.5932 }};
	};
	class Land_Bet_haus_5_bs_a: Residential
	{
		lootPos[] = {{ -1.78174,1.53027,-2.86942 },{ 2.41333,1.83301,-2.86942 }};
	};
	class Land_MBG_GER_RHUS_5: Residential
	{
		lootPos[] = {{ 1.02637,4.22412,-3.36559 },{ -2.26465,-0.113037,-3.36569 },{ -2.29785,-3.79395,-3.36569 },{ 2.35645,-2.69824,-0.465683 },{ 2.3623,3.05469,-0.465683 },{ -1.87695,2.13574,-0.465683 }};
	};
	class Land_MBG_GER_HUS_2 : Residential {
		lootPos[] = {
			{-5.58545, 7.28223, -3.11288}, 
			{-5.72217, 2.13184, -3.11288}, 
			{-5.54395, -1.48438, -3.11288}, 
			{1.95801, -6.60645, -1.66289}, 
			{2.73926, 4.52832, -2.31288}, 
			{5.11475, 2.08691, -2.26288}, 
			{-0.0527344, 7.06055, -2.11288}, 
			{5.58008, -7.27246, -2.96289}, 
			{3.20947, -6.19043, -0.112885}, 
			{-3.07324, -2.56543, 0.387115}, 
			{-2.01074, -6.89648, -0.112885}, 
			{-2.57324, 7.37402, 0.437119}, 
			{-5.62598, 2.13281, -0.112885}, 
			{3.37256, 4.18359, 0.387115}, 
			{-0.496582, 7.30176, -0.112885}, 
			{-5.73682, 1.20898, -0.112885} 
		};
	};
	class Land_MBG_GER_SUPERMARKET_3 : Supermarket {
		lootPos[] = {
			{10.6057, -12.8652, -3.24568}, 
			{10.6379, 11.5, -3.24568}, 
			{6.15674, 4.34375, -2.64568}, 
			{-2.97998, -9.08594, -3.14568}, 
			{-9.83252, -12.8633, -3.24568}, 
			{-8.63599, -9.23047, -3.19568}, 
			{-6.96411, -7.60547, -3.24568}, 
			{-5.17773, -1.1416, -3.24568}, 
			{-2.37354, -1.05957, -3.24568}, 
			{2.41846, -1.00684, -3.24568}, 
			{4.34155, 4.66113, -3.24568}, 
			{-4.93188, 2.4541, -3.24568}, 
			{-9, 7.56641, -3.24568}, 
			{-5.77002, 9.25391, -2.59569}, 
			{-0.598633, 7.71289, -2.64568}, 
			{5.20215, 11.4004, -2.64568}, 
			{-4.63672, 9.49414, -2.64568}, 
			{-1.20361, 13.0977, -3.24568}, 
			{1.30542, 16.4131, -3.24568}, 
			{5.53394, 12.9023, -3.24568}, 
			{9.39844, 16.5801, -3.24568}, 
			{9.73926, 13.7266, -3.24568}, 
			{-8.77417, 0.785156, -3.24568}, 
			{-4.06519, -4.82813, -3.24568}, 
			{-2.73828, -12.498, -3.24568}, 
			{3.82227, -8.48926, -3.24568} 
		};
	};
	class Land_MBG_GER_PUB_2: Residential
	{
		lootPos[] = {{ 7.1499,-3.82813,-3.56017 },{ 4.38306,1.96777,-3.53085 },{ 1.38916,-0.146484,-3.53085 },{ -4.22998,-0.65332,-3.53085 },{ -6.2876,-4.40234,-3.53085 },{ -3.02856,-4.6709,-3.53085 },{ 5.08154,-4.91504,-3.53085 },{ 4.70215,3.10742,-0.733139 },{ 5.46021,1.42188,-0.630844 },{ 5.74634,-1.63477,-0.630844 },{ 2.70239,-0.567383,-0.630844 },{ 2.3811,-4.92285,-0.630844 },{ -1.55713,-4.85742,-0.630844 },{ -5.68286,-4.5791,-0.630844 },{ 4.66333,5.24902,-0.630844 },{ 1.90747,7.16309,-0.630844 }};
	};
	class MBG_Police_Station_EU: Military {
		lootChance = 0.3;
		lootPos[] = {{1.51685,5.53186,-1.49856},{-1.86304,3.56152,-1.49856},{6.15845,6.00208,-1.49856},{-1.27002,7.04468,1.80144},{1.70874,-1.98877,1.80144},{8.92798,6.20569,1.80144},{-1.71167,-5.23706,1.80144},{-4.25537,-1.6947,1.80144},{-5.62292,-4.64026,-1.49856}};
		lootPosZombie[] = {{1.51685,5.53186,-1.49856},{-1.86304,3.56152,-1.49856},{6.15845,6.00208,-1.49856},{-1.27002,7.04468,1.80144},{1.70874,-1.98877,1.80144},{8.92798,6.20569,1.80144},{-1.71167,-5.23706,1.80144},{-4.25537,-1.6947,1.80144},{-5.62292,-4.64026,-1.49856}};
	};
	class Land_MBG_GER_RHUS_2: Residential
	{
		lootPos[] = {{ 2.6145,-3.36914,-3.36569 },{ 1.99365,-0.302734,-3.36569 },{ -2.01758,-0.208008,-3.36569 },{ -0.538086,3.88867,-3.36569 },{ 2.80811,2.23633,-3.36569 },{ -0.656494,0.271484,-0.465698 },{ -1.73999,-3.66699,-0.465683 }};
	};
	class Land_MBG_GER_RHUS_3: Residential
	{
		lootPos[] = {{ 2.6145,-3.36914,-3.36569 },{ 1.99365,-0.302734,-3.36569 },{ -2.01758,-0.208008,-3.36569 },{ -0.538086,3.88867,-3.36569 },{ 2.80811,2.23633,-3.36569 },{ -0.656494,0.271484,-0.465698 },{ -1.73999,-3.66699,-0.465683 }};
	};
	class Land_MBG_GER_HUS_1: Residential
	{
		lootPos[] = {{ -2.60254,-6.22339,-3.11288 },{ 1.2863,-6.3479,-3.11288 },{ 5.83301,0.563477,-3.11288 },{ 6.4248,0.344971,-0.112885 },{ -3.92285,0.278809,-0.112885 },{ 4.20313,-2.43945,-0.112885 },{ 5.72168,-4.62769,-0.112885 },{ 1.06445,-3.92847,0.513565 },{ -3.68652,3.45801,-0.112885 }};
	};

	class Land_smd_ammostore2_open: MilitarySpecial {
		lootPos[] = {
			{2.32324, 3.56213, -1.98814}, //small
			{0.478516, 5.21533, -1.98814}, //small
			{-2.1748, 4.7135, -1.68814} //small
		};
		lootPosZombie[] = {{0.00878906, -2.6001, -2.88206}};
	};
	class Land_smd_fuelstation_army: IndustrialFuel {
		lootPos[] = {
			{5.35742, -0.0854492, -2.28509}, //small
			{-5.6543, 5.2168, -2.28509} //small
		};
	};
	class Land_smd_dum_olezlina_open: Residential {
		lootPos[] = {
			{-7.11621, 3.34131, -2.8848}, //small
			{-4.04492, -3.46143, -3.8348}, //small
			{-0.479492, -3.27441, -3.8348}, //small
			{0.732422, -3.22388, -3.8348}, //small
			{7.52441, -3.4646, -3.83481}, //small
			{6.87402, 3.16968, -3.8348}, //small
			{7.39355, -2.84497, 0.26593}, //small
			{0.832031, -3.29199, -0.434067}, //small
			{0.844727, 1.38892, -0.434067}, //small
			{-6.35742, -2.81445, -0.434067}, //small
			{-4.03027, 1.60107, -0.434067}, //small
			{-1.84375, -3.04736, -0.436424}, //small
			{-2.97949, 3.24463, -3.8348} //small
		};
	};
	class Land_smd_dum_mesto_in_open: Residential {
		lootPos[] = {
			{-5.32031, -3.25903, -3.96844}, //small
			{-3.80859, 0.807617, -3.96844}, //small
			{4.89258, -3.01001, -3.41931}, //small
			{5, 4.44434, -3.96931}, //small
			{2.2373, 0.507324, -3.96931}, //small
			{1.21094, 4.39941, -2.46075}, //small
			{6.16113, -3.69434, 0.213913}, //small
			{3.80371, 4.771, -0.986084}, //small
			{1.28418, 0.909668, -0.036087}, //small
			{-5.84473, -4.84497, -0.817612}, //small
			{-0.996094, 4.57031, -0.980965}, //small
			{-6.18164, 0.42041, 0.219032}, //small
			{-6.07617, -3.63818, -0.980965}, //small
			{0.453125, -3.97168, -0.986084} //small
		};
	};
	class Land_smd_budova3_open: Residential {
		lootPos[] = {
			{-1.6731, -0.0371094, -1.1634}, //small
			{2.73413, -2.83691, -1.90865}, //small
			{-3.08691, 2.49512, -1.91362} //small
		};
	};
	class Land_smd_bouda_plech_open: Industrial {
		lootPos[] = {
			{0.262451, 1.64453, -1.04471}, //small
			{0.462891, -1.70117, -1.03748} //small
		};
	};
	class Land_smd_sara_stodola2: Industrial {
		lootPos[] = {{5.01367, 3.33118, -2.19523}, {2.51758, 1.05737, -2.19523}, {-1.30957, -1.02954, -2.19523}, {-4.24414, 4.0238, -2.19523}, {5.16211, -0.661621, -2.19523}};
	};
	class Land_sara_domek_podhradi_1: Residential {
		lootPos[] = {
			{-5.18237, 3.62109, -2.75808}, //small
			{-5.18726, -0.751953, -2.75808}, //small
			{-5.13086, -3.82715, -2.75808}, //small
			{1.43921, -3.7168, -2.75808} //small
		};
	};
	class Land_smd_army_hut_int: Military {
		lootPos[] = {
			{-1.31726, 0.819824, -0.0588951}, //small
			{2.47717, -0.00244141, -1.33056}, //small
			{2.54358, -2.67383, -1.33056}, //small
			{0.11792, -4.72656, -0.580559}, //small
			{-1.99268, -2.08838, -1.34386} //small
		};
	};
};
