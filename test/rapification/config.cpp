class CfgPatches {
    class ace_frag {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.56;
        requiredAddons[] = {"ace_common"};
        author[] = {"Nou"};
        version = "3.5.0.0";
        versionStr = "3.5.0.0";
        versionAr[] = {3, 5, 0, 0};
    };
};
class Extended_PreStart_EventHandlers {
    class ace_frag {
        init = "call compile preProcessFileLineNumbers '\z\ace\addons\frag\XEH_preStart.sqf'";
    };
};
class Extended_PreInit_EventHandlers {
    class ace_frag {
        init = "call compile preProcessFileLineNumbers '\z\ace\addons\frag\XEH_preInit.sqf'";
    };
};
class Extended_PostInit_EventHandlers {
    class ace_frag {
        init = "call compile preProcessFileLineNumbers '\z\ace\addons\frag\XEH_postInit.sqf'";
    };
};
class CfgAmmo {
    class Bo_GBU12_LGB;
    class ACE_GBU12: Bo_GBU12_LGB {
        ace_frag_enabled = 1;
        ace_frag_classes[] = {"ACE_frag_large", "ACE_frag_large", "ACE_frag_large_HD", "ACE_frag_large", "ACE_frag_huge", "ACE_frag_huge_HD", "ACE_frag_huge"};
        ace_frag_metal = 140000;
        ace_frag_charge = 87000;
        ace_frag_gurney_c = 2320;
        ace_frag_gurney_k = "1/2";
        sideAirFriction = 0.04;
        airFriction = 0.04;
        laserLock = 0;
    };
    class GrenadeBase;
    class Grenade;
    class GrenadeHand: Grenade {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = {"ACE_frag_tiny_HD"};
        ace_frag_metal = 210;
        ace_frag_charge = 185;
        ace_frag_gurney_c = 2843;
        ace_frag_gurney_k = "3/5";
    };
    class GrenadeHand_stone: GrenadeHand {
        ace_frag_skip = 1;
    };
    class SmokeShell: GrenadeHand {
        ace_frag_skip = 1;
    };
    class RocketBase;
    class R_Hydra_HE: RocketBase {
        ace_frag_enabled = 1;
        ace_frag_classes[] = {"ACE_frag_medium", "ACE_frag_medium_HD"};
        ace_frag_metal = 3850;
        ace_frag_charge = 1040;
        ace_frag_gurney_c = 2700;
        ace_frag_gurney_k = "1/2";
    };
    class R_80mm_HE: RocketBase {
        ace_frag_skip = 1;
    };
    class BombCore;
    class Bo_Mk82: BombCore {
        ace_frag_enabled = 1;
        ace_frag_classes[] = {"ACE_frag_large", "ACE_frag_large", "ACE_frag_large_HD", "ACE_frag_large", "ACE_frag_huge", "ACE_frag_huge_HD", "ACE_frag_huge"};
        ace_frag_metal = 140000;
        ace_frag_charge = 87000;
        ace_frag_gurney_c = 2320;
        ace_frag_gurney_k = "1/2";
    };
    class G_40mm_HE: GrenadeBase {
        ace_frag_enabled = 1;
        ace_frag_classes[] = {"ACE_frag_tiny_HD"};
        ace_frag_metal = 200;
        ace_frag_charge = 32;
        ace_frag_gurney_c = 2700;
        ace_frag_gurney_k = "1/2";
    };
    class G_40mm_HEDP: G_40mm_HE {
        ace_frag_enabled = 1;
        ace_frag_classes[] = {"ACE_frag_tiny_HD"};
        ace_frag_metal = 200;
        ace_frag_charge = 45;
        ace_frag_gurney_c = 2830;
        ace_frag_gurney_k = "1/2";
    };
    class ACE_G_40mm_HEDP: G_40mm_HEDP {};
    class ACE_G_40mm_HE: G_40mm_HE {};
    class ACE_G_40mm_Practice: ACE_G_40mm_HE {
        ace_frag_skip = 1;
    };
    class ACE_G40mm_HE_VOG25P: G_40mm_HE {
        ace_frag_skip = 0;
        ace_frag_force = 1;
    };
    class ShellBase;
    class Sh_125mm_HEAT;
    class Sh_155mm_AMOS: ShellBase {
        ace_frag_enabled = 1;
        ace_frag_classes[] = {"ACE_frag_large", "ACE_frag_large", "ACE_frag_large_HD", "ACE_frag_large", "ACE_frag_huge", "ACE_frag_huge_HD", "ACE_frag_huge"};
        ace_frag_metal = 36000;
        ace_frag_charge = 9979;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "1/2";
    };
    class Sh_82mm_AMOS: Sh_155mm_AMOS {
        ace_frag_enabled = 1;
        ace_frag_classes[] = {"ACE_frag_medium", "ACE_frag_medium_HD"};
        ace_frag_metal = 3200;
        ace_frag_charge = 420;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "1/2";
    };
    class ModuleOrdnanceMortar_F_Ammo: Sh_82mm_AMOS {
        ace_frag_enabled = 1;
        ace_frag_classes[] = {"ACE_frag_medium", "ACE_frag_medium_HD"};
        ace_frag_metal = 800;
        ace_frag_charge = 4200;
        ace_frag_gurney_c = 2320;
        ace_frag_gurney_k = "1/2";
    };
    class Sh_105mm_HEAT_MP: Sh_125mm_HEAT {
        ace_frag_enabled = 1;
        ace_frag_classes[] = {"ACE_frag_medium", "ACE_frag_medium_HD"};
        ace_frag_metal = 11400;
        ace_frag_charge = 7100;
        ace_frag_gurney_c = 2800;
        ace_frag_gurney_k = "1/2";
    };
    class Sh_120mm_HE: ShellBase {
        ace_frag_enabled = 1;
        ace_frag_classes[] = {"ACE_frag_medium", "ACE_frag_medium_HD"};
        ace_frag_metal = 23000;
        ace_frag_charge = 3148;
        ace_frag_gurney_c = 2830;
        ace_frag_gurney_k = "1/2";
    };
    class Sh_125mm_HE: Sh_120mm_HE {
        ace_frag_enabled = 1;
        ace_frag_classes[] = {"ACE_frag_medium", "ACE_frag_medium_HD"};
        ace_frag_metal = 16000;
        ace_frag_charge = 3200;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "1/2";
    };
    class ModuleOrdnanceHowitzer_F_ammo: Sh_155mm_AMOS {
        ace_frag_enabled = 1;
        ace_frag_classes[] = {"ACE_frag_large", "ACE_frag_large", "ACE_frag_large_HD", "ACE_frag_large", "ACE_frag_huge", "ACE_frag_huge_HD", "ACE_frag_huge"};
        ace_frag_metal = 1950;
        ace_frag_charge = 15800;
        ace_frag_gurney_c = 2320;
        ace_frag_gurney_k = "1/2";
    };
    class MissileBase;
    class Missile_AGM_02_F: MissileBase {
        ace_frag_enabled = 1;
        ace_frag_classes[] = {"ACE_frag_medium", "ACE_frag_medium_HD"};
        ace_frag_metal = 56250;
        ace_frag_charge = 39000;
        ace_frag_gurney_c = 2700;
        ace_frag_gurney_k = "1/2";
    };
    class M_Hellfire_AT: MissileBase {
        ace_frag_enabled = 1;
        ace_frag_classes[] = {"ACE_frag_medium", "ACE_frag_medium_HD"};
        ace_frag_metal = 8000;
        ace_frag_charge = 2400;
        ace_frag_gurney_c = 2700;
        ace_frag_gurney_k = "1/2";
    };
    class B_65x39_Caseless;
    class ACE_frag_base: B_65x39_Caseless {
        timeToLive = 12;
        typicalSpeed = 1500;
        deflecting = 65;
    };
    class ACE_frag_tiny: ACE_frag_base {
        hit = 6;
        airFriction = -0.01;
        caliber = 0.75;
    };
    class ACE_frag_tiny_HD: ACE_frag_base {
        hit = 6;
        airFriction = "(-0.01*5)";
        caliber = 0.75;
    };
    class ACE_frag_small: ACE_frag_base {
        hit = 12;
        airFriction = "-0.01*0.9";
    };
    class ACE_frag_small_HD: ACE_frag_base {
        hit = 12;
        airFriction = "(-0.01*5)*0.9";
    };
    class ACE_frag_medium: ACE_frag_base {
        hit = 14;
        airFriction = "-0.01*0.75";
        caliber = 1.2;
    };
    class ACE_frag_medium_HD: ACE_frag_base {
        hit = 14;
        airFriction = "(-0.01*5)*0.75";
        caliber = 1.2;
    };
    class ACE_frag_large: ACE_frag_base {
        hit = 28;
        indirectHit = 2;
        indirectHitRange = 0.25;
        airFriction = "-0.01*0.65";
        caliber = 2;
        explosive = 0;
    };
    class ACE_frag_large_HD: ACE_frag_large {
        hit = 28;
        indirectHit = 2;
        indirectHitRange = 0.25;
        airFriction = "(-0.01*5)*0.65";
        caliber = 2;
    };
    class ACE_frag_huge: ACE_frag_large {
        hit = 40;
        indirectHit = 4;
        indirectHitRange = 0.5;
        airFriction = "-0.01*0.5";
        caliber = 2.8;
    };
    class ACE_frag_huge_HD: ACE_frag_large {
        hit = 40;
        indirectHit = 4;
        indirectHitRange = 0.5;
        airFriction = "(-0.01*5)*0.5";
        caliber = 2.8;
    };
    class ACE_frag_spall_small: ACE_frag_small {
        timeToLive = 0.1;
    };
    class ACE_frag_spall_medium: ACE_frag_medium {
        timeToLive = 0.15;
    };
    class ACE_frag_spall_large: ACE_frag_large {
        timeToLive = 0.25;
    };
    class ACE_frag_spall_huge: ACE_frag_huge {
        timeToLive = 0.3;
    };
    class ace_explosion_reflection_base: Sh_120mm_HE {
        CraterWaterEffects = "";
        CraterEffects = "";
        effectsMissile = "";
        ExplosionEffects = "";
        effectFlare = "";
        class HitEffects {
            hitWater = "";
        };
        multiSoundHit[] = {};
        explosionTime = 0.0001;
        explosive = 1;
        soundFakeFall[] = {};
        typicalSpeed = 0;
        model = "\A3\Weapons_F\empty.p3d";
        craterShape = "\A3\weapons_f\empty.p3d";
    };
    class ace_explosion_reflection_2_10: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 10;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_20: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 20;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_30: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 30;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_40: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 40;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_50: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 50;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_60: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 60;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_70: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 70;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_80: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 80;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_90: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 90;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_100: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 100;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_110: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 110;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_120: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 120;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_130: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 130;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_140: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 140;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_150: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 150;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_160: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 160;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_170: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 170;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_180: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 180;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_190: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 190;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_200: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 200;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_210: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 210;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_220: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 220;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_230: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 230;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_240: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 240;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_250: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 250;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_260: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 260;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_270: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 270;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_280: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 280;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_290: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 290;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_300: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 300;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_310: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 310;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_320: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 320;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_330: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 330;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_340: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 340;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_350: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 350;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_360: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 360;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_370: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 370;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_380: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 380;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_390: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 390;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_400: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 400;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_410: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 410;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_420: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 420;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_430: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 430;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_440: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 440;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_450: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 450;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_460: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 460;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_470: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 470;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_480: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 480;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_490: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 490;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_2_500: ace_explosion_reflection_base {
        indirectHitRange = 2;
        indirectHit = 500;
        dangerRadiusHit = "2*3";
        suppressionRadiusHit = "2*2";
    };
    class ace_explosion_reflection_4_10: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 10;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_20: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 20;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_30: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 30;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_40: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 40;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_50: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 50;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_60: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 60;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_70: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 70;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_80: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 80;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_90: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 90;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_100: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 100;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_110: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 110;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_120: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 120;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_130: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 130;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_140: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 140;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_150: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 150;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_160: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 160;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_170: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 170;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_180: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 180;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_190: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 190;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_200: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 200;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_210: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 210;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_220: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 220;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_230: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 230;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_240: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 240;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_250: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 250;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_260: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 260;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_270: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 270;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_280: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 280;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_290: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 290;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_300: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 300;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_310: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 310;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_320: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 320;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_330: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 330;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_340: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 340;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_350: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 350;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_360: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 360;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_370: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 370;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_380: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 380;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_390: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 390;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_400: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 400;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_410: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 410;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_420: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 420;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_430: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 430;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_440: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 440;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_450: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 450;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_460: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 460;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_470: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 470;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_480: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 480;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_490: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 490;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_4_500: ace_explosion_reflection_base {
        indirectHitRange = 4;
        indirectHit = 500;
        dangerRadiusHit = "4*3";
        suppressionRadiusHit = "4*2";
    };
    class ace_explosion_reflection_6_10: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 10;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_20: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 20;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_30: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 30;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_40: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 40;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_50: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 50;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_60: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 60;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_70: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 70;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_80: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 80;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_90: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 90;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_100: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 100;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_110: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 110;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_120: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 120;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_130: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 130;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_140: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 140;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_150: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 150;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_160: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 160;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_170: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 170;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_180: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 180;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_190: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 190;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_200: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 200;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_210: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 210;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_220: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 220;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_230: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 230;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_240: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 240;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_250: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 250;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_260: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 260;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_270: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 270;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_280: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 280;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_290: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 290;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_300: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 300;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_310: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 310;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_320: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 320;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_330: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 330;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_340: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 340;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_350: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 350;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_360: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 360;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_370: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 370;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_380: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 380;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_390: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 390;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_400: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 400;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_410: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 410;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_420: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 420;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_430: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 430;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_440: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 440;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_450: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 450;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_460: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 460;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_470: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 470;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_480: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 480;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_490: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 490;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_6_500: ace_explosion_reflection_base {
        indirectHitRange = 6;
        indirectHit = 500;
        dangerRadiusHit = "6*3";
        suppressionRadiusHit = "6*2";
    };
    class ace_explosion_reflection_8_10: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 10;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_20: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 20;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_30: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 30;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_40: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 40;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_50: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 50;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_60: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 60;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_70: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 70;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_80: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 80;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_90: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 90;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_100: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 100;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_110: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 110;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_120: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 120;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_130: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 130;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_140: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 140;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_150: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 150;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_160: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 160;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_170: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 170;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_180: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 180;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_190: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 190;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_200: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 200;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_210: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 210;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_220: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 220;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_230: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 230;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_240: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 240;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_250: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 250;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_260: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 260;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_270: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 270;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_280: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 280;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_290: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 290;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_300: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 300;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_310: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 310;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_320: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 320;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_330: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 330;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_340: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 340;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_350: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 350;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_360: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 360;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_370: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 370;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_380: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 380;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_390: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 390;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_400: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 400;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_410: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 410;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_420: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 420;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_430: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 430;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_440: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 440;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_450: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 450;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_460: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 460;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_470: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 470;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_480: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 480;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_490: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 490;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_8_500: ace_explosion_reflection_base {
        indirectHitRange = 8;
        indirectHit = 500;
        dangerRadiusHit = "8*3";
        suppressionRadiusHit = "8*2";
    };
    class ace_explosion_reflection_10_10: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 10;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_20: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 20;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_30: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 30;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_40: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 40;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_50: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 50;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_60: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 60;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_70: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 70;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_80: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 80;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_90: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 90;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_100: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 100;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_110: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 110;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_120: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 120;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_130: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 130;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_140: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 140;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_150: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 150;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_160: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 160;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_170: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 170;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_180: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 180;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_190: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 190;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_200: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 200;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_210: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 210;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_220: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 220;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_230: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 230;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_240: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 240;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_250: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 250;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_260: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 260;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_270: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 270;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_280: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 280;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_290: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 290;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_300: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 300;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_310: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 310;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_320: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 320;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_330: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 330;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_340: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 340;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_350: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 350;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_360: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 360;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_370: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 370;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_380: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 380;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_390: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 390;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_400: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 400;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_410: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 410;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_420: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 420;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_430: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 430;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_440: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 440;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_450: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 450;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_460: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 460;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_470: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 470;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_480: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 480;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_490: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 490;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_10_500: ace_explosion_reflection_base {
        indirectHitRange = 10;
        indirectHit = 500;
        dangerRadiusHit = "10*3";
        suppressionRadiusHit = "10*2";
    };
    class ace_explosion_reflection_12_10: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 10;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_20: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 20;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_30: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 30;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_40: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 40;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_50: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 50;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_60: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 60;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_70: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 70;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_80: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 80;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_90: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 90;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_100: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 100;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_110: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 110;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_120: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 120;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_130: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 130;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_140: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 140;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_150: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 150;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_160: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 160;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_170: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 170;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_180: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 180;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_190: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 190;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_200: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 200;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_210: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 210;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_220: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 220;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_230: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 230;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_240: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 240;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_250: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 250;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_260: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 260;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_270: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 270;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_280: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 280;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_290: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 290;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_300: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 300;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_310: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 310;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_320: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 320;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_330: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 330;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_340: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 340;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_350: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 350;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_360: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 360;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_370: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 370;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_380: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 380;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_390: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 390;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_400: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 400;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_410: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 410;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_420: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 420;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_430: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 430;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_440: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 440;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_450: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 450;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_460: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 460;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_470: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 470;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_480: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 480;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_490: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 490;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_12_500: ace_explosion_reflection_base {
        indirectHitRange = 12;
        indirectHit = 500;
        dangerRadiusHit = "12*3";
        suppressionRadiusHit = "12*2";
    };
    class ace_explosion_reflection_14_10: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 10;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_20: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 20;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_30: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 30;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_40: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 40;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_50: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 50;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_60: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 60;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_70: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 70;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_80: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 80;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_90: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 90;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_100: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 100;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_110: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 110;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_120: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 120;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_130: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 130;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_140: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 140;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_150: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 150;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_160: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 160;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_170: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 170;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_180: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 180;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_190: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 190;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_200: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 200;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_210: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 210;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_220: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 220;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_230: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 230;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_240: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 240;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_250: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 250;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_260: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 260;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_270: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 270;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_280: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 280;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_290: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 290;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_300: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 300;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_310: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 310;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_320: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 320;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_330: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 330;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_340: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 340;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_350: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 350;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_360: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 360;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_370: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 370;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_380: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 380;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_390: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 390;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_400: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 400;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_410: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 410;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_420: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 420;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_430: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 430;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_440: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 440;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_450: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 450;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_460: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 460;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_470: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 470;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_480: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 480;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_490: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 490;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_14_500: ace_explosion_reflection_base {
        indirectHitRange = 14;
        indirectHit = 500;
        dangerRadiusHit = "14*3";
        suppressionRadiusHit = "14*2";
    };
    class ace_explosion_reflection_16_10: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 10;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_20: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 20;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_30: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 30;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_40: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 40;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_50: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 50;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_60: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 60;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_70: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 70;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_80: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 80;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_90: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 90;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_100: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 100;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_110: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 110;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_120: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 120;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_130: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 130;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_140: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 140;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_150: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 150;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_160: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 160;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_170: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 170;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_180: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 180;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_190: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 190;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_200: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 200;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_210: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 210;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_220: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 220;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_230: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 230;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_240: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 240;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_250: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 250;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_260: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 260;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_270: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 270;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_280: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 280;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_290: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 290;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_300: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 300;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_310: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 310;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_320: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 320;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_330: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 330;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_340: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 340;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_350: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 350;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_360: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 360;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_370: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 370;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_380: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 380;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_390: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 390;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_400: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 400;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_410: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 410;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_420: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 420;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_430: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 430;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_440: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 440;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_450: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 450;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_460: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 460;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_470: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 470;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_480: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 480;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_490: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 490;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_16_500: ace_explosion_reflection_base {
        indirectHitRange = 16;
        indirectHit = 500;
        dangerRadiusHit = "16*3";
        suppressionRadiusHit = "16*2";
    };
    class ace_explosion_reflection_18_10: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 10;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_20: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 20;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_30: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 30;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_40: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 40;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_50: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 50;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_60: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 60;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_70: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 70;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_80: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 80;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_90: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 90;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_100: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 100;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_110: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 110;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_120: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 120;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_130: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 130;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_140: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 140;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_150: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 150;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_160: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 160;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_170: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 170;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_180: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 180;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_190: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 190;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_200: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 200;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_210: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 210;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_220: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 220;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_230: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 230;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_240: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 240;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_250: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 250;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_260: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 260;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_270: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 270;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_280: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 280;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_290: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 290;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_300: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 300;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_310: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 310;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_320: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 320;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_330: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 330;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_340: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 340;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_350: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 350;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_360: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 360;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_370: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 370;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_380: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 380;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_390: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 390;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_400: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 400;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_410: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 410;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_420: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 420;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_430: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 430;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_440: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 440;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_450: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 450;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_460: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 460;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_470: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 470;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_480: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 480;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_490: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 490;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_18_500: ace_explosion_reflection_base {
        indirectHitRange = 18;
        indirectHit = 500;
        dangerRadiusHit = "18*3";
        suppressionRadiusHit = "18*2";
    };
    class ace_explosion_reflection_20_10: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 10;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_20: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 20;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_30: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 30;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_40: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 40;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_50: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 50;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_60: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 60;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_70: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 70;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_80: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 80;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_90: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 90;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_100: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 100;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_110: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 110;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_120: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 120;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_130: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 130;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_140: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 140;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_150: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 150;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_160: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 160;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_170: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 170;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_180: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 180;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_190: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 190;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_200: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 200;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_210: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 210;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_220: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 220;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_230: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 230;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_240: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 240;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_250: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 250;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_260: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 260;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_270: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 270;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_280: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 280;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_290: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 290;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_300: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 300;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_310: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 310;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_320: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 320;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_330: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 330;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_340: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 340;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_350: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 350;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_360: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 360;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_370: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 370;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_380: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 380;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_390: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 390;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_400: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 400;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_410: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 410;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_420: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 420;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_430: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 430;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_440: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 440;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_450: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 450;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_460: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 460;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_470: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 470;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_480: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 480;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_490: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 490;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_20_500: ace_explosion_reflection_base {
        indirectHitRange = 20;
        indirectHit = 500;
        dangerRadiusHit = "20*3";
        suppressionRadiusHit = "20*2";
    };
    class ace_explosion_reflection_22_10: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 10;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_20: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 20;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_30: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 30;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_40: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 40;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_50: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 50;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_60: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 60;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_70: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 70;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_80: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 80;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_90: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 90;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_100: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 100;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_110: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 110;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_120: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 120;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_130: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 130;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_140: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 140;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_150: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 150;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_160: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 160;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_170: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 170;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_180: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 180;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_190: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 190;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_200: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 200;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_210: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 210;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_220: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 220;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_230: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 230;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_240: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 240;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_250: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 250;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_260: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 260;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_270: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 270;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_280: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 280;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_290: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 290;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_300: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 300;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_310: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 310;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_320: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 320;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_330: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 330;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_340: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 340;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_350: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 350;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_360: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 360;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_370: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 370;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_380: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 380;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_390: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 390;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_400: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 400;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_410: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 410;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_420: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 420;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_430: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 430;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_440: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 440;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_450: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 450;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_460: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 460;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_470: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 470;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_480: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 480;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_490: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 490;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_22_500: ace_explosion_reflection_base {
        indirectHitRange = 22;
        indirectHit = 500;
        dangerRadiusHit = "22*3";
        suppressionRadiusHit = "22*2";
    };
    class ace_explosion_reflection_24_10: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 10;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_20: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 20;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_30: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 30;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_40: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 40;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_50: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 50;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_60: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 60;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_70: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 70;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_80: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 80;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_90: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 90;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_100: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 100;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_110: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 110;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_120: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 120;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_130: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 130;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_140: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 140;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_150: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 150;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_160: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 160;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_170: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 170;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_180: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 180;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_190: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 190;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_200: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 200;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_210: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 210;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_220: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 220;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_230: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 230;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_240: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 240;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_250: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 250;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_260: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 260;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_270: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 270;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_280: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 280;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_290: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 290;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_300: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 300;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_310: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 310;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_320: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 320;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_330: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 330;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_340: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 340;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_350: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 350;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_360: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 360;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_370: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 370;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_380: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 380;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_390: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 390;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_400: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 400;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_410: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 410;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_420: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 420;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_430: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 430;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_440: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 440;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_450: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 450;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_460: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 460;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_470: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 470;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_480: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 480;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_490: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 490;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_24_500: ace_explosion_reflection_base {
        indirectHitRange = 24;
        indirectHit = 500;
        dangerRadiusHit = "24*3";
        suppressionRadiusHit = "24*2";
    };
    class ace_explosion_reflection_26_10: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 10;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_20: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 20;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_30: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 30;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_40: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 40;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_50: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 50;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_60: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 60;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_70: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 70;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_80: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 80;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_90: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 90;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_100: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 100;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_110: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 110;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_120: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 120;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_130: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 130;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_140: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 140;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_150: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 150;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_160: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 160;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_170: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 170;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_180: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 180;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_190: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 190;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_200: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 200;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_210: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 210;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_220: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 220;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_230: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 230;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_240: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 240;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_250: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 250;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_260: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 260;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_270: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 270;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_280: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 280;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_290: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 290;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_300: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 300;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_310: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 310;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_320: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 320;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_330: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 330;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_340: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 340;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_350: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 350;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_360: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 360;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_370: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 370;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_380: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 380;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_390: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 390;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_400: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 400;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_410: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 410;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_420: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 420;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_430: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 430;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_440: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 440;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_450: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 450;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_460: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 460;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_470: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 470;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_480: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 480;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_490: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 490;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_26_500: ace_explosion_reflection_base {
        indirectHitRange = 26;
        indirectHit = 500;
        dangerRadiusHit = "26*3";
        suppressionRadiusHit = "26*2";
    };
    class ace_explosion_reflection_28_10: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 10;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_20: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 20;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_30: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 30;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_40: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 40;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_50: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 50;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_60: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 60;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_70: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 70;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_80: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 80;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_90: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 90;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_100: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 100;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_110: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 110;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_120: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 120;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_130: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 130;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_140: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 140;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_150: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 150;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_160: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 160;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_170: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 170;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_180: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 180;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_190: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 190;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_200: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 200;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_210: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 210;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_220: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 220;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_230: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 230;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_240: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 240;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_250: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 250;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_260: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 260;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_270: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 270;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_280: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 280;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_290: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 290;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_300: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 300;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_310: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 310;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_320: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 320;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_330: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 330;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_340: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 340;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_350: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 350;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_360: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 360;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_370: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 370;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_380: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 380;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_390: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 390;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_400: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 400;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_410: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 410;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_420: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 420;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_430: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 430;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_440: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 440;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_450: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 450;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_460: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 460;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_470: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 470;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_480: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 480;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_490: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 490;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_28_500: ace_explosion_reflection_base {
        indirectHitRange = 28;
        indirectHit = 500;
        dangerRadiusHit = "28*3";
        suppressionRadiusHit = "28*2";
    };
    class ace_explosion_reflection_30_10: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 10;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_20: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 20;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_30: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 30;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_40: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 40;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_50: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 50;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_60: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 60;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_70: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 70;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_80: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 80;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_90: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 90;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_100: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 100;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_110: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 110;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_120: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 120;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_130: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 130;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_140: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 140;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_150: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 150;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_160: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 160;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_170: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 170;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_180: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 180;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_190: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 190;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_200: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 200;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_210: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 210;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_220: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 220;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_230: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 230;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_240: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 240;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_250: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 250;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_260: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 260;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_270: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 270;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_280: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 280;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_290: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 290;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_300: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 300;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_310: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 310;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_320: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 320;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_330: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 330;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_340: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 340;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_350: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 350;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_360: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 360;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_370: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 370;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_380: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 380;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_390: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 390;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_400: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 400;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_410: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 410;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_420: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 420;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_430: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 430;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_440: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 440;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_450: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 450;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_460: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 460;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_470: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 470;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_480: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 480;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_490: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 490;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_30_500: ace_explosion_reflection_base {
        indirectHitRange = 30;
        indirectHit = 500;
        dangerRadiusHit = "30*3";
        suppressionRadiusHit = "30*2";
    };
    class ace_explosion_reflection_32_10: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 10;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_20: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 20;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_30: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 30;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_40: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 40;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_50: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 50;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_60: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 60;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_70: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 70;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_80: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 80;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_90: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 90;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_100: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 100;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_110: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 110;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_120: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 120;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_130: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 130;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_140: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 140;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_150: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 150;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_160: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 160;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_170: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 170;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_180: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 180;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_190: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 190;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_200: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 200;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_210: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 210;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_220: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 220;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_230: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 230;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_240: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 240;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_250: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 250;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_260: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 260;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_270: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 270;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_280: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 280;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_290: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 290;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_300: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 300;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_310: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 310;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_320: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 320;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_330: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 330;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_340: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 340;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_350: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 350;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_360: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 360;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_370: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 370;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_380: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 380;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_390: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 390;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_400: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 400;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_410: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 410;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_420: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 420;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_430: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 430;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_440: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 440;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_450: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 450;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_460: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 460;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_470: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 470;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_480: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 480;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_490: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 490;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_32_500: ace_explosion_reflection_base {
        indirectHitRange = 32;
        indirectHit = 500;
        dangerRadiusHit = "32*3";
        suppressionRadiusHit = "32*2";
    };
    class ace_explosion_reflection_34_10: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 10;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_20: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 20;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_30: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 30;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_40: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 40;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_50: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 50;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_60: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 60;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_70: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 70;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_80: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 80;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_90: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 90;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_100: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 100;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_110: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 110;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_120: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 120;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_130: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 130;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_140: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 140;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_150: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 150;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_160: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 160;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_170: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 170;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_180: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 180;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_190: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 190;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_200: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 200;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_210: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 210;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_220: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 220;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_230: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 230;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_240: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 240;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_250: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 250;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_260: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 260;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_270: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 270;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_280: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 280;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_290: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 290;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_300: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 300;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_310: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 310;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_320: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 320;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_330: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 330;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_340: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 340;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_350: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 350;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_360: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 360;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_370: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 370;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_380: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 380;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_390: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 390;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_400: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 400;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_410: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 410;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_420: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 420;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_430: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 430;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_440: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 440;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_450: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 450;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_460: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 460;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_470: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 470;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_480: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 480;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_490: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 490;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_34_500: ace_explosion_reflection_base {
        indirectHitRange = 34;
        indirectHit = 500;
        dangerRadiusHit = "34*3";
        suppressionRadiusHit = "34*2";
    };
    class ace_explosion_reflection_36_10: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 10;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_20: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 20;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_30: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 30;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_40: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 40;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_50: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 50;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_60: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 60;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_70: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 70;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_80: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 80;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_90: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 90;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_100: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 100;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_110: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 110;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_120: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 120;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_130: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 130;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_140: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 140;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_150: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 150;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_160: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 160;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_170: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 170;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_180: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 180;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_190: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 190;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_200: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 200;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_210: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 210;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_220: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 220;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_230: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 230;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_240: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 240;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_250: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 250;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_260: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 260;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_270: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 270;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_280: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 280;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_290: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 290;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_300: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 300;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_310: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 310;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_320: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 320;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_330: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 330;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_340: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 340;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_350: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 350;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_360: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 360;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_370: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 370;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_380: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 380;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_390: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 390;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_400: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 400;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_410: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 410;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_420: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 420;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_430: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 430;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_440: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 440;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_450: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 450;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_460: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 460;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_470: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 470;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_480: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 480;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_490: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 490;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_36_500: ace_explosion_reflection_base {
        indirectHitRange = 36;
        indirectHit = 500;
        dangerRadiusHit = "36*3";
        suppressionRadiusHit = "36*2";
    };
    class ace_explosion_reflection_38_10: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 10;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_20: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 20;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_30: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 30;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_40: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 40;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_50: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 50;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_60: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 60;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_70: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 70;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_80: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 80;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_90: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 90;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_100: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 100;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_110: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 110;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_120: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 120;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_130: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 130;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_140: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 140;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_150: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 150;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_160: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 160;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_170: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 170;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_180: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 180;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_190: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 190;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_200: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 200;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_210: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 210;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_220: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 220;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_230: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 230;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_240: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 240;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_250: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 250;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_260: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 260;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_270: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 270;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_280: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 280;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_290: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 290;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_300: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 300;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_310: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 310;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_320: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 320;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_330: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 330;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_340: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 340;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_350: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 350;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_360: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 360;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_370: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 370;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_380: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 380;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_390: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 390;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_400: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 400;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_410: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 410;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_420: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 420;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_430: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 430;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_440: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 440;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_450: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 450;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_460: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 460;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_470: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 470;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_480: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 480;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_490: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 490;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_38_500: ace_explosion_reflection_base {
        indirectHitRange = 38;
        indirectHit = 500;
        dangerRadiusHit = "38*3";
        suppressionRadiusHit = "38*2";
    };
    class ace_explosion_reflection_40_10: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 10;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_20: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 20;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_30: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 30;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_40: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 40;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_50: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 50;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_60: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 60;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_70: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 70;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_80: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 80;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_90: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 90;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_100: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 100;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_110: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 110;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_120: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 120;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_130: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 130;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_140: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 140;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_150: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 150;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_160: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 160;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_170: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 170;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_180: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 180;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_190: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 190;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_200: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 200;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_210: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 210;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_220: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 220;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_230: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 230;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_240: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 240;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_250: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 250;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_260: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 260;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_270: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 270;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_280: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 280;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_290: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 290;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_300: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 300;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_310: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 310;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_320: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 320;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_330: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 330;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_340: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 340;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_350: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 350;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_360: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 360;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_370: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 370;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_380: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 380;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_390: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 390;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_400: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 400;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_410: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 410;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_420: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 420;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_430: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 430;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_440: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 440;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_450: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 450;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_460: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 460;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_470: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 470;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_480: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 480;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_490: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 490;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_40_500: ace_explosion_reflection_base {
        indirectHitRange = 40;
        indirectHit = 500;
        dangerRadiusHit = "40*3";
        suppressionRadiusHit = "40*2";
    };
    class ace_explosion_reflection_42_10: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 10;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_20: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 20;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_30: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 30;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_40: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 40;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_50: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 50;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_60: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 60;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_70: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 70;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_80: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 80;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_90: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 90;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_100: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 100;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_110: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 110;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_120: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 120;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_130: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 130;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_140: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 140;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_150: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 150;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_160: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 160;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_170: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 170;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_180: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 180;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_190: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 190;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_200: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 200;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_210: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 210;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_220: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 220;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_230: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 230;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_240: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 240;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_250: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 250;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_260: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 260;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_270: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 270;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_280: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 280;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_290: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 290;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_300: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 300;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_310: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 310;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_320: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 320;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_330: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 330;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_340: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 340;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_350: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 350;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_360: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 360;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_370: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 370;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_380: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 380;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_390: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 390;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_400: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 400;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_410: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 410;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_420: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 420;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_430: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 430;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_440: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 440;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_450: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 450;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_460: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 460;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_470: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 470;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_480: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 480;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_490: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 490;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_42_500: ace_explosion_reflection_base {
        indirectHitRange = 42;
        indirectHit = 500;
        dangerRadiusHit = "42*3";
        suppressionRadiusHit = "42*2";
    };
    class ace_explosion_reflection_44_10: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 10;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_20: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 20;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_30: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 30;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_40: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 40;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_50: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 50;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_60: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 60;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_70: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 70;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_80: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 80;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_90: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 90;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_100: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 100;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_110: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 110;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_120: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 120;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_130: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 130;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_140: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 140;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_150: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 150;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_160: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 160;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_170: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 170;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_180: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 180;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_190: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 190;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_200: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 200;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_210: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 210;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_220: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 220;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_230: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 230;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_240: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 240;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_250: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 250;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_260: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 260;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_270: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 270;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_280: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 280;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_290: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 290;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_300: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 300;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_310: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 310;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_320: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 320;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_330: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 330;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_340: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 340;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_350: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 350;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_360: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 360;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_370: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 370;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_380: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 380;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_390: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 390;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_400: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 400;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_410: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 410;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_420: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 420;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_430: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 430;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_440: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 440;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_450: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 450;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_460: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 460;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_470: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 470;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_480: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 480;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_490: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 490;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_44_500: ace_explosion_reflection_base {
        indirectHitRange = 44;
        indirectHit = 500;
        dangerRadiusHit = "44*3";
        suppressionRadiusHit = "44*2";
    };
    class ace_explosion_reflection_46_10: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 10;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_20: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 20;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_30: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 30;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_40: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 40;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_50: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 50;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_60: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 60;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_70: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 70;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_80: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 80;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_90: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 90;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_100: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 100;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_110: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 110;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_120: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 120;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_130: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 130;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_140: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 140;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_150: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 150;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_160: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 160;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_170: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 170;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_180: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 180;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_190: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 190;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_200: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 200;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_210: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 210;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_220: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 220;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_230: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 230;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_240: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 240;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_250: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 250;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_260: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 260;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_270: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 270;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_280: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 280;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_290: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 290;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_300: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 300;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_310: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 310;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_320: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 320;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_330: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 330;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_340: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 340;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_350: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 350;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_360: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 360;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_370: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 370;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_380: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 380;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_390: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 390;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_400: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 400;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_410: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 410;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_420: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 420;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_430: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 430;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_440: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 440;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_450: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 450;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_460: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 460;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_470: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 470;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_480: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 480;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_490: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 490;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_46_500: ace_explosion_reflection_base {
        indirectHitRange = 46;
        indirectHit = 500;
        dangerRadiusHit = "46*3";
        suppressionRadiusHit = "46*2";
    };
    class ace_explosion_reflection_48_10: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 10;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_20: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 20;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_30: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 30;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_40: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 40;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_50: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 50;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_60: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 60;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_70: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 70;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_80: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 80;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_90: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 90;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_100: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 100;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_110: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 110;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_120: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 120;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_130: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 130;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_140: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 140;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_150: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 150;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_160: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 160;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_170: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 170;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_180: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 180;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_190: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 190;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_200: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 200;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_210: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 210;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_220: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 220;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_230: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 230;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_240: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 240;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_250: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 250;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_260: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 260;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_270: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 270;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_280: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 280;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_290: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 290;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_300: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 300;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_310: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 310;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_320: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 320;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_330: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 330;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_340: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 340;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_350: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 350;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_360: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 360;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_370: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 370;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_380: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 380;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_390: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 390;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_400: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 400;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_410: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 410;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_420: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 420;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_430: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 430;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_440: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 440;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_450: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 450;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_460: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 460;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_470: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 470;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_480: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 480;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_490: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 490;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_48_500: ace_explosion_reflection_base {
        indirectHitRange = 48;
        indirectHit = 500;
        dangerRadiusHit = "48*3";
        suppressionRadiusHit = "48*2";
    };
    class ace_explosion_reflection_50_10: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 10;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_20: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 20;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_30: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 30;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_40: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 40;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_50: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 50;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_60: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 60;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_70: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 70;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_80: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 80;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_90: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 90;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_100: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 100;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_110: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 110;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_120: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 120;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_130: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 130;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_140: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 140;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_150: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 150;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_160: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 160;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_170: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 170;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_180: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 180;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_190: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 190;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_200: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 200;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_210: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 210;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_220: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 220;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_230: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 230;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_240: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 240;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_250: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 250;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_260: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 260;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_270: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 270;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_280: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 280;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_290: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 290;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_300: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 300;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_310: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 310;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_320: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 320;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_330: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 330;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_340: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 340;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_350: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 350;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_360: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 360;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_370: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 370;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_380: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 380;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_390: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 390;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_400: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 400;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_410: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 410;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_420: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 420;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_430: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 430;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_440: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 440;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_450: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 450;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_460: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 460;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_470: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 470;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_480: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 480;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_490: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 490;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_50_500: ace_explosion_reflection_base {
        indirectHitRange = 50;
        indirectHit = 500;
        dangerRadiusHit = "50*3";
        suppressionRadiusHit = "50*2";
    };
    class ace_explosion_reflection_52_10: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 10;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_20: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 20;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_30: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 30;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_40: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 40;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_50: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 50;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_60: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 60;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_70: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 70;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_80: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 80;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_90: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 90;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_100: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 100;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_110: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 110;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_120: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 120;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_130: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 130;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_140: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 140;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_150: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 150;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_160: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 160;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_170: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 170;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_180: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 180;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_190: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 190;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_200: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 200;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_210: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 210;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_220: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 220;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_230: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 230;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_240: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 240;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_250: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 250;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_260: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 260;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_270: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 270;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_280: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 280;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_290: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 290;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_300: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 300;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_310: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 310;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_320: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 320;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_330: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 330;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_340: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 340;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_350: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 350;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_360: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 360;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_370: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 370;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_380: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 380;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_390: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 390;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_400: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 400;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_410: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 410;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_420: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 420;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_430: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 430;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_440: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 440;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_450: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 450;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_460: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 460;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_470: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 470;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_480: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 480;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_490: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 490;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_52_500: ace_explosion_reflection_base {
        indirectHitRange = 52;
        indirectHit = 500;
        dangerRadiusHit = "52*3";
        suppressionRadiusHit = "52*2";
    };
    class ace_explosion_reflection_54_10: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 10;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_20: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 20;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_30: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 30;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_40: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 40;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_50: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 50;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_60: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 60;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_70: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 70;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_80: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 80;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_90: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 90;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_100: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 100;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_110: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 110;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_120: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 120;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_130: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 130;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_140: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 140;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_150: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 150;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_160: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 160;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_170: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 170;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_180: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 180;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_190: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 190;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_200: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 200;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_210: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 210;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_220: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 220;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_230: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 230;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_240: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 240;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_250: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 250;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_260: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 260;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_270: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 270;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_280: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 280;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_290: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 290;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_300: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 300;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_310: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 310;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_320: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 320;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_330: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 330;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_340: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 340;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_350: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 350;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_360: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 360;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_370: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 370;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_380: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 380;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_390: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 390;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_400: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 400;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_410: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 410;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_420: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 420;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_430: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 430;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_440: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 440;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_450: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 450;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_460: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 460;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_470: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 470;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_480: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 480;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_490: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 490;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_54_500: ace_explosion_reflection_base {
        indirectHitRange = 54;
        indirectHit = 500;
        dangerRadiusHit = "54*3";
        suppressionRadiusHit = "54*2";
    };
    class ace_explosion_reflection_56_10: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 10;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_20: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 20;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_30: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 30;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_40: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 40;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_50: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 50;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_60: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 60;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_70: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 70;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_80: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 80;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_90: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 90;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_100: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 100;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_110: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 110;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_120: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 120;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_130: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 130;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_140: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 140;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_150: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 150;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_160: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 160;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_170: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 170;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_180: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 180;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_190: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 190;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_200: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 200;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_210: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 210;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_220: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 220;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_230: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 230;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_240: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 240;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_250: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 250;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_260: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 260;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_270: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 270;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_280: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 280;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_290: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 290;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_300: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 300;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_310: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 310;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_320: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 320;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_330: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 330;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_340: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 340;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_350: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 350;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_360: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 360;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_370: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 370;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_380: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 380;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_390: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 390;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_400: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 400;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_410: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 410;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_420: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 420;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_430: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 430;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_440: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 440;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_450: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 450;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_460: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 460;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_470: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 470;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_480: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 480;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_490: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 490;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_56_500: ace_explosion_reflection_base {
        indirectHitRange = 56;
        indirectHit = 500;
        dangerRadiusHit = "56*3";
        suppressionRadiusHit = "56*2";
    };
    class ace_explosion_reflection_58_10: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 10;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_20: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 20;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_30: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 30;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_40: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 40;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_50: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 50;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_60: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 60;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_70: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 70;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_80: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 80;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_90: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 90;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_100: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 100;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_110: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 110;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_120: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 120;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_130: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 130;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_140: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 140;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_150: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 150;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_160: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 160;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_170: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 170;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_180: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 180;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_190: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 190;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_200: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 200;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_210: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 210;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_220: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 220;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_230: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 230;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_240: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 240;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_250: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 250;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_260: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 260;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_270: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 270;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_280: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 280;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_290: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 290;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_300: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 300;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_310: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 310;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_320: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 320;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_330: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 330;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_340: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 340;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_350: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 350;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_360: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 360;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_370: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 370;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_380: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 380;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_390: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 390;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_400: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 400;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_410: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 410;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_420: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 420;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_430: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 430;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_440: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 440;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_450: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 450;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_460: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 460;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_470: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 470;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_480: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 480;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_490: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 490;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_58_500: ace_explosion_reflection_base {
        indirectHitRange = 58;
        indirectHit = 500;
        dangerRadiusHit = "58*3";
        suppressionRadiusHit = "58*2";
    };
    class ace_explosion_reflection_60_10: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 10;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_20: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 20;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_30: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 30;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_40: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 40;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_50: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 50;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_60: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 60;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_70: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 70;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_80: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 80;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_90: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 90;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_100: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 100;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_110: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 110;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_120: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 120;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_130: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 130;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_140: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 140;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_150: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 150;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_160: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 160;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_170: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 170;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_180: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 180;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_190: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 190;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_200: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 200;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_210: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 210;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_220: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 220;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_230: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 230;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_240: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 240;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_250: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 250;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_260: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 260;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_270: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 270;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_280: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 280;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_290: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 290;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_300: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 300;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_310: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 310;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_320: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 320;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_330: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 330;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_340: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 340;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_350: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 350;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_360: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 360;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_370: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 370;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_380: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 380;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_390: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 390;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_400: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 400;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_410: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 410;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_420: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 420;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_430: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 430;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_440: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 440;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_450: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 450;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_460: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 460;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_470: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 470;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_480: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 480;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_490: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 490;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_60_500: ace_explosion_reflection_base {
        indirectHitRange = 60;
        indirectHit = 500;
        dangerRadiusHit = "60*3";
        suppressionRadiusHit = "60*2";
    };
    class ace_explosion_reflection_62_10: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 10;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_20: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 20;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_30: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 30;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_40: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 40;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_50: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 50;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_60: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 60;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_70: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 70;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_80: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 80;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_90: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 90;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_100: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 100;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_110: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 110;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_120: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 120;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_130: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 130;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_140: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 140;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_150: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 150;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_160: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 160;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_170: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 170;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_180: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 180;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_190: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 190;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_200: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 200;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_210: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 210;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_220: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 220;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_230: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 230;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_240: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 240;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_250: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 250;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_260: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 260;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_270: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 270;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_280: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 280;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_290: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 290;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_300: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 300;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_310: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 310;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_320: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 320;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_330: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 330;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_340: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 340;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_350: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 350;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_360: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 360;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_370: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 370;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_380: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 380;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_390: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 390;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_400: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 400;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_410: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 410;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_420: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 420;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_430: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 430;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_440: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 440;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_450: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 450;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_460: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 460;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_470: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 470;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_480: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 480;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_490: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 490;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_62_500: ace_explosion_reflection_base {
        indirectHitRange = 62;
        indirectHit = 500;
        dangerRadiusHit = "62*3";
        suppressionRadiusHit = "62*2";
    };
    class ace_explosion_reflection_64_10: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 10;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_20: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 20;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_30: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 30;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_40: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 40;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_50: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 50;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_60: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 60;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_70: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 70;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_80: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 80;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_90: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 90;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_100: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 100;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_110: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 110;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_120: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 120;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_130: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 130;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_140: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 140;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_150: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 150;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_160: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 160;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_170: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 170;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_180: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 180;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_190: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 190;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_200: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 200;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_210: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 210;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_220: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 220;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_230: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 230;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_240: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 240;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_250: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 250;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_260: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 260;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_270: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 270;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_280: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 280;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_290: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 290;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_300: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 300;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_310: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 310;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_320: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 320;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_330: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 330;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_340: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 340;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_350: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 350;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_360: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 360;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_370: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 370;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_380: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 380;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_390: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 390;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_400: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 400;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_410: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 410;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_420: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 420;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_430: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 430;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_440: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 440;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_450: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 450;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_460: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 460;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_470: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 470;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_480: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 480;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_490: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 490;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_64_500: ace_explosion_reflection_base {
        indirectHitRange = 64;
        indirectHit = 500;
        dangerRadiusHit = "64*3";
        suppressionRadiusHit = "64*2";
    };
    class ace_explosion_reflection_66_10: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 10;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_20: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 20;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_30: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 30;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_40: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 40;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_50: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 50;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_60: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 60;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_70: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 70;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_80: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 80;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_90: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 90;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_100: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 100;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_110: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 110;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_120: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 120;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_130: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 130;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_140: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 140;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_150: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 150;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_160: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 160;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_170: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 170;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_180: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 180;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_190: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 190;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_200: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 200;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_210: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 210;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_220: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 220;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_230: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 230;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_240: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 240;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_250: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 250;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_260: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 260;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_270: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 270;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_280: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 280;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_290: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 290;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_300: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 300;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_310: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 310;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_320: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 320;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_330: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 330;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_340: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 340;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_350: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 350;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_360: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 360;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_370: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 370;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_380: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 380;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_390: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 390;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_400: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 400;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_410: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 410;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_420: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 420;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_430: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 430;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_440: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 440;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_450: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 450;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_460: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 460;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_470: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 470;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_480: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 480;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_490: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 490;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_66_500: ace_explosion_reflection_base {
        indirectHitRange = 66;
        indirectHit = 500;
        dangerRadiusHit = "66*3";
        suppressionRadiusHit = "66*2";
    };
    class ace_explosion_reflection_68_10: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 10;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_20: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 20;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_30: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 30;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_40: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 40;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_50: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 50;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_60: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 60;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_70: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 70;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_80: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 80;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_90: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 90;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_100: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 100;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_110: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 110;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_120: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 120;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_130: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 130;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_140: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 140;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_150: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 150;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_160: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 160;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_170: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 170;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_180: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 180;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_190: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 190;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_200: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 200;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_210: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 210;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_220: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 220;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_230: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 230;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_240: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 240;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_250: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 250;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_260: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 260;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_270: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 270;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_280: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 280;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_290: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 290;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_300: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 300;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_310: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 310;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_320: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 320;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_330: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 330;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_340: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 340;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_350: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 350;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_360: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 360;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_370: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 370;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_380: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 380;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_390: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 390;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_400: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 400;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_410: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 410;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_420: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 420;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_430: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 430;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_440: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 440;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_450: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 450;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_460: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 460;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_470: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 470;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_480: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 480;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_490: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 490;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_68_500: ace_explosion_reflection_base {
        indirectHitRange = 68;
        indirectHit = 500;
        dangerRadiusHit = "68*3";
        suppressionRadiusHit = "68*2";
    };
    class ace_explosion_reflection_70_10: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 10;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_20: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 20;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_30: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 30;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_40: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 40;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_50: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 50;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_60: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 60;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_70: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 70;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_80: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 80;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_90: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 90;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_100: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 100;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_110: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 110;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_120: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 120;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_130: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 130;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_140: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 140;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_150: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 150;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_160: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 160;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_170: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 170;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_180: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 180;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_190: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 190;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_200: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 200;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_210: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 210;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_220: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 220;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_230: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 230;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_240: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 240;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_250: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 250;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_260: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 260;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_270: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 270;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_280: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 280;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_290: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 290;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_300: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 300;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_310: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 310;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_320: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 320;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_330: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 330;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_340: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 340;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_350: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 350;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_360: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 360;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_370: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 370;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_380: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 380;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_390: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 390;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_400: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 400;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_410: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 410;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_420: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 420;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_430: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 430;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_440: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 440;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_450: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 450;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_460: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 460;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_470: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 470;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_480: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 480;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_490: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 490;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_70_500: ace_explosion_reflection_base {
        indirectHitRange = 70;
        indirectHit = 500;
        dangerRadiusHit = "70*3";
        suppressionRadiusHit = "70*2";
    };
    class ace_explosion_reflection_72_10: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 10;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_20: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 20;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_30: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 30;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_40: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 40;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_50: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 50;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_60: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 60;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_70: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 70;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_80: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 80;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_90: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 90;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_100: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 100;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_110: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 110;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_120: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 120;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_130: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 130;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_140: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 140;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_150: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 150;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_160: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 160;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_170: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 170;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_180: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 180;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_190: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 190;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_200: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 200;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_210: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 210;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_220: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 220;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_230: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 230;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_240: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 240;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_250: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 250;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_260: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 260;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_270: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 270;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_280: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 280;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_290: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 290;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_300: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 300;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_310: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 310;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_320: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 320;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_330: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 330;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_340: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 340;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_350: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 350;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_360: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 360;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_370: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 370;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_380: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 380;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_390: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 390;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_400: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 400;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_410: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 410;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_420: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 420;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_430: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 430;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_440: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 440;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_450: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 450;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_460: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 460;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_470: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 470;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_480: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 480;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_490: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 490;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_72_500: ace_explosion_reflection_base {
        indirectHitRange = 72;
        indirectHit = 500;
        dangerRadiusHit = "72*3";
        suppressionRadiusHit = "72*2";
    };
    class ace_explosion_reflection_74_10: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 10;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_20: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 20;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_30: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 30;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_40: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 40;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_50: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 50;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_60: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 60;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_70: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 70;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_80: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 80;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_90: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 90;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_100: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 100;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_110: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 110;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_120: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 120;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_130: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 130;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_140: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 140;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_150: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 150;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_160: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 160;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_170: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 170;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_180: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 180;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_190: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 190;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_200: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 200;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_210: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 210;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_220: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 220;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_230: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 230;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_240: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 240;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_250: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 250;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_260: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 260;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_270: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 270;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_280: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 280;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_290: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 290;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_300: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 300;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_310: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 310;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_320: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 320;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_330: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 330;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_340: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 340;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_350: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 350;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_360: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 360;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_370: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 370;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_380: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 380;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_390: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 390;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_400: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 400;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_410: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 410;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_420: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 420;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_430: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 430;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_440: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 440;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_450: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 450;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_460: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 460;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_470: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 470;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_480: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 480;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_490: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 490;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_74_500: ace_explosion_reflection_base {
        indirectHitRange = 74;
        indirectHit = 500;
        dangerRadiusHit = "74*3";
        suppressionRadiusHit = "74*2";
    };
    class ace_explosion_reflection_76_10: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 10;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_20: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 20;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_30: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 30;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_40: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 40;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_50: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 50;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_60: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 60;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_70: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 70;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_80: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 80;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_90: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 90;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_100: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 100;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_110: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 110;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_120: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 120;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_130: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 130;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_140: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 140;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_150: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 150;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_160: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 160;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_170: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 170;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_180: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 180;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_190: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 190;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_200: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 200;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_210: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 210;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_220: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 220;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_230: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 230;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_240: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 240;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_250: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 250;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_260: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 260;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_270: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 270;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_280: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 280;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_290: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 290;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_300: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 300;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_310: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 310;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_320: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 320;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_330: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 330;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_340: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 340;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_350: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 350;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_360: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 360;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_370: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 370;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_380: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 380;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_390: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 390;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_400: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 400;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_410: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 410;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_420: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 420;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_430: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 430;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_440: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 440;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_450: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 450;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_460: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 460;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_470: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 470;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_480: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 480;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_490: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 490;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_76_500: ace_explosion_reflection_base {
        indirectHitRange = 76;
        indirectHit = 500;
        dangerRadiusHit = "76*3";
        suppressionRadiusHit = "76*2";
    };
    class ace_explosion_reflection_78_10: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 10;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_20: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 20;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_30: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 30;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_40: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 40;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_50: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 50;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_60: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 60;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_70: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 70;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_80: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 80;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_90: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 90;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_100: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 100;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_110: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 110;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_120: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 120;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_130: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 130;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_140: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 140;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_150: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 150;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_160: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 160;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_170: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 170;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_180: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 180;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_190: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 190;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_200: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 200;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_210: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 210;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_220: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 220;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_230: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 230;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_240: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 240;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_250: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 250;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_260: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 260;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_270: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 270;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_280: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 280;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_290: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 290;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_300: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 300;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_310: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 310;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_320: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 320;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_330: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 330;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_340: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 340;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_350: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 350;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_360: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 360;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_370: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 370;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_380: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 380;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_390: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 390;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_400: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 400;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_410: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 410;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_420: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 420;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_430: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 430;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_440: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 440;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_450: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 450;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_460: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 460;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_470: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 470;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_480: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 480;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_490: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 490;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_78_500: ace_explosion_reflection_base {
        indirectHitRange = 78;
        indirectHit = 500;
        dangerRadiusHit = "78*3";
        suppressionRadiusHit = "78*2";
    };
    class ace_explosion_reflection_80_10: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 10;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_20: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 20;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_30: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 30;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_40: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 40;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_50: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 50;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_60: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 60;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_70: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 70;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_80: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 80;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_90: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 90;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_100: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 100;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_110: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 110;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_120: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 120;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_130: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 130;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_140: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 140;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_150: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 150;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_160: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 160;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_170: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 170;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_180: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 180;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_190: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 190;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_200: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 200;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_210: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 210;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_220: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 220;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_230: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 230;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_240: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 240;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_250: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 250;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_260: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 260;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_270: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 270;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_280: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 280;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_290: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 290;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_300: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 300;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_310: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 310;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_320: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 320;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_330: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 330;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_340: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 340;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_350: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 350;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_360: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 360;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_370: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 370;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_380: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 380;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_390: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 390;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_400: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 400;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_410: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 410;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_420: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 420;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_430: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 430;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_440: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 440;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_450: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 450;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_460: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 460;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_470: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 470;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_480: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 480;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_490: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 490;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_80_500: ace_explosion_reflection_base {
        indirectHitRange = 80;
        indirectHit = 500;
        dangerRadiusHit = "80*3";
        suppressionRadiusHit = "80*2";
    };
    class ace_explosion_reflection_82_10: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 10;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_20: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 20;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_30: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 30;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_40: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 40;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_50: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 50;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_60: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 60;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_70: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 70;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_80: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 80;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_90: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 90;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_100: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 100;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_110: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 110;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_120: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 120;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_130: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 130;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_140: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 140;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_150: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 150;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_160: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 160;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_170: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 170;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_180: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 180;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_190: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 190;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_200: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 200;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_210: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 210;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_220: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 220;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_230: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 230;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_240: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 240;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_250: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 250;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_260: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 260;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_270: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 270;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_280: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 280;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_290: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 290;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_300: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 300;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_310: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 310;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_320: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 320;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_330: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 330;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_340: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 340;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_350: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 350;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_360: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 360;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_370: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 370;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_380: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 380;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_390: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 390;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_400: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 400;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_410: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 410;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_420: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 420;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_430: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 430;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_440: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 440;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_450: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 450;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_460: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 460;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_470: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 470;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_480: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 480;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_490: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 490;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_82_500: ace_explosion_reflection_base {
        indirectHitRange = 82;
        indirectHit = 500;
        dangerRadiusHit = "82*3";
        suppressionRadiusHit = "82*2";
    };
    class ace_explosion_reflection_84_10: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 10;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_20: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 20;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_30: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 30;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_40: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 40;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_50: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 50;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_60: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 60;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_70: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 70;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_80: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 80;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_90: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 90;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_100: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 100;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_110: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 110;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_120: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 120;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_130: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 130;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_140: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 140;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_150: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 150;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_160: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 160;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_170: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 170;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_180: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 180;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_190: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 190;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_200: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 200;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_210: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 210;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_220: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 220;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_230: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 230;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_240: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 240;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_250: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 250;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_260: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 260;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_270: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 270;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_280: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 280;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_290: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 290;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_300: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 300;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_310: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 310;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_320: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 320;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_330: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 330;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_340: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 340;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_350: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 350;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_360: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 360;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_370: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 370;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_380: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 380;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_390: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 390;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_400: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 400;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_410: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 410;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_420: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 420;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_430: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 430;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_440: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 440;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_450: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 450;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_460: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 460;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_470: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 470;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_480: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 480;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_490: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 490;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_84_500: ace_explosion_reflection_base {
        indirectHitRange = 84;
        indirectHit = 500;
        dangerRadiusHit = "84*3";
        suppressionRadiusHit = "84*2";
    };
    class ace_explosion_reflection_86_10: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 10;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_20: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 20;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_30: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 30;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_40: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 40;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_50: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 50;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_60: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 60;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_70: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 70;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_80: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 80;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_90: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 90;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_100: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 100;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_110: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 110;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_120: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 120;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_130: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 130;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_140: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 140;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_150: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 150;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_160: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 160;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_170: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 170;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_180: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 180;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_190: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 190;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_200: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 200;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_210: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 210;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_220: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 220;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_230: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 230;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_240: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 240;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_250: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 250;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_260: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 260;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_270: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 270;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_280: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 280;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_290: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 290;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_300: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 300;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_310: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 310;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_320: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 320;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_330: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 330;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_340: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 340;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_350: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 350;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_360: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 360;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_370: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 370;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_380: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 380;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_390: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 390;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_400: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 400;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_410: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 410;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_420: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 420;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_430: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 430;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_440: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 440;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_450: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 450;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_460: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 460;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_470: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 470;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_480: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 480;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_490: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 490;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_86_500: ace_explosion_reflection_base {
        indirectHitRange = 86;
        indirectHit = 500;
        dangerRadiusHit = "86*3";
        suppressionRadiusHit = "86*2";
    };
    class ace_explosion_reflection_88_10: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 10;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_20: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 20;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_30: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 30;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_40: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 40;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_50: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 50;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_60: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 60;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_70: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 70;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_80: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 80;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_90: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 90;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_100: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 100;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_110: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 110;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_120: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 120;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_130: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 130;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_140: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 140;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_150: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 150;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_160: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 160;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_170: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 170;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_180: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 180;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_190: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 190;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_200: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 200;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_210: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 210;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_220: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 220;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_230: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 230;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_240: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 240;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_250: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 250;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_260: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 260;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_270: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 270;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_280: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 280;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_290: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 290;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_300: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 300;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_310: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 310;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_320: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 320;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_330: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 330;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_340: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 340;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_350: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 350;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_360: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 360;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_370: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 370;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_380: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 380;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_390: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 390;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_400: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 400;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_410: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 410;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_420: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 420;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_430: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 430;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_440: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 440;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_450: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 450;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_460: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 460;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_470: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 470;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_480: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 480;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_490: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 490;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_88_500: ace_explosion_reflection_base {
        indirectHitRange = 88;
        indirectHit = 500;
        dangerRadiusHit = "88*3";
        suppressionRadiusHit = "88*2";
    };
    class ace_explosion_reflection_90_10: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 10;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_20: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 20;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_30: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 30;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_40: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 40;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_50: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 50;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_60: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 60;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_70: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 70;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_80: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 80;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_90: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 90;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_100: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 100;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_110: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 110;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_120: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 120;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_130: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 130;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_140: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 140;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_150: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 150;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_160: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 160;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_170: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 170;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_180: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 180;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_190: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 190;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_200: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 200;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_210: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 210;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_220: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 220;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_230: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 230;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_240: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 240;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_250: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 250;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_260: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 260;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_270: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 270;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_280: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 280;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_290: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 290;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_300: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 300;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_310: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 310;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_320: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 320;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_330: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 330;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_340: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 340;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_350: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 350;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_360: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 360;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_370: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 370;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_380: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 380;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_390: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 390;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_400: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 400;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_410: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 410;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_420: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 420;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_430: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 430;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_440: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 440;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_450: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 450;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_460: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 460;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_470: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 470;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_480: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 480;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_490: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 490;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_90_500: ace_explosion_reflection_base {
        indirectHitRange = 90;
        indirectHit = 500;
        dangerRadiusHit = "90*3";
        suppressionRadiusHit = "90*2";
    };
    class ace_explosion_reflection_92_10: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 10;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_20: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 20;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_30: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 30;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_40: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 40;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_50: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 50;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_60: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 60;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_70: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 70;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_80: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 80;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_90: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 90;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_100: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 100;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_110: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 110;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_120: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 120;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_130: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 130;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_140: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 140;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_150: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 150;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_160: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 160;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_170: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 170;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_180: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 180;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_190: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 190;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_200: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 200;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_210: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 210;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_220: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 220;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_230: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 230;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_240: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 240;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_250: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 250;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_260: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 260;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_270: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 270;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_280: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 280;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_290: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 290;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_300: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 300;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_310: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 310;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_320: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 320;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_330: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 330;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_340: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 340;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_350: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 350;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_360: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 360;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_370: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 370;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_380: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 380;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_390: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 390;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_400: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 400;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_410: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 410;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_420: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 420;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_430: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 430;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_440: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 440;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_450: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 450;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_460: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 460;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_470: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 470;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_480: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 480;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_490: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 490;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_92_500: ace_explosion_reflection_base {
        indirectHitRange = 92;
        indirectHit = 500;
        dangerRadiusHit = "92*3";
        suppressionRadiusHit = "92*2";
    };
    class ace_explosion_reflection_94_10: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 10;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_20: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 20;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_30: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 30;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_40: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 40;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_50: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 50;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_60: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 60;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_70: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 70;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_80: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 80;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_90: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 90;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_100: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 100;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_110: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 110;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_120: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 120;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_130: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 130;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_140: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 140;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_150: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 150;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_160: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 160;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_170: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 170;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_180: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 180;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_190: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 190;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_200: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 200;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_210: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 210;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_220: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 220;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_230: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 230;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_240: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 240;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_250: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 250;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_260: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 260;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_270: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 270;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_280: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 280;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_290: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 290;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_300: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 300;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_310: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 310;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_320: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 320;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_330: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 330;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_340: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 340;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_350: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 350;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_360: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 360;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_370: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 370;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_380: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 380;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_390: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 390;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_400: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 400;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_410: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 410;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_420: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 420;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_430: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 430;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_440: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 440;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_450: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 450;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_460: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 460;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_470: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 470;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_480: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 480;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_490: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 490;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_94_500: ace_explosion_reflection_base {
        indirectHitRange = 94;
        indirectHit = 500;
        dangerRadiusHit = "94*3";
        suppressionRadiusHit = "94*2";
    };
    class ace_explosion_reflection_96_10: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 10;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_20: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 20;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_30: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 30;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_40: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 40;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_50: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 50;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_60: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 60;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_70: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 70;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_80: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 80;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_90: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 90;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_100: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 100;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_110: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 110;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_120: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 120;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_130: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 130;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_140: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 140;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_150: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 150;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_160: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 160;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_170: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 170;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_180: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 180;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_190: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 190;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_200: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 200;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_210: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 210;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_220: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 220;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_230: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 230;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_240: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 240;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_250: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 250;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_260: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 260;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_270: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 270;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_280: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 280;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_290: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 290;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_300: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 300;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_310: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 310;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_320: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 320;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_330: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 330;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_340: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 340;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_350: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 350;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_360: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 360;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_370: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 370;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_380: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 380;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_390: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 390;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_400: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 400;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_410: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 410;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_420: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 420;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_430: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 430;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_440: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 440;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_450: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 450;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_460: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 460;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_470: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 470;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_480: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 480;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_490: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 490;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_96_500: ace_explosion_reflection_base {
        indirectHitRange = 96;
        indirectHit = 500;
        dangerRadiusHit = "96*3";
        suppressionRadiusHit = "96*2";
    };
    class ace_explosion_reflection_98_10: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 10;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_20: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 20;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_30: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 30;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_40: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 40;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_50: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 50;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_60: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 60;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_70: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 70;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_80: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 80;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_90: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 90;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_100: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 100;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_110: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 110;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_120: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 120;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_130: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 130;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_140: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 140;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_150: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 150;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_160: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 160;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_170: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 170;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_180: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 180;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_190: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 190;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_200: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 200;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_210: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 210;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_220: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 220;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_230: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 230;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_240: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 240;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_250: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 250;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_260: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 260;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_270: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 270;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_280: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 280;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_290: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 290;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_300: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 300;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_310: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 310;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_320: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 320;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_330: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 330;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_340: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 340;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_350: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 350;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_360: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 360;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_370: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 370;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_380: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 380;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_390: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 390;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_400: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 400;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_410: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 410;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_420: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 420;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_430: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 430;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_440: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 440;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_450: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 450;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_460: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 460;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_470: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 470;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_480: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 480;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_490: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 490;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_98_500: ace_explosion_reflection_base {
        indirectHitRange = 98;
        indirectHit = 500;
        dangerRadiusHit = "98*3";
        suppressionRadiusHit = "98*2";
    };
    class ace_explosion_reflection_100_10: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 10;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_20: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 20;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_30: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 30;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_40: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 40;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_50: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 50;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_60: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 60;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_70: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 70;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_80: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 80;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_90: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 90;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_100: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 100;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_110: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 110;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_120: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 120;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_130: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 130;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_140: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 140;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_150: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 150;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_160: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 160;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_170: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 170;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_180: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 180;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_190: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 190;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_200: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 200;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_210: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 210;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_220: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 220;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_230: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 230;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_240: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 240;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_250: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 250;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_260: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 260;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_270: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 270;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_280: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 280;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_290: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 290;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_300: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 300;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_310: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 310;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_320: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 320;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_330: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 330;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_340: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 340;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_350: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 350;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_360: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 360;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_370: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 370;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_380: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 380;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_390: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 390;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_400: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 400;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_410: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 410;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_420: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 420;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_430: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 430;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_440: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 440;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_450: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 450;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_460: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 460;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_470: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 470;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_480: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 480;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_490: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 490;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
    class ace_explosion_reflection_100_500: ace_explosion_reflection_base {
        indirectHitRange = 100;
        indirectHit = 500;
        dangerRadiusHit = "100*3";
        suppressionRadiusHit = "100*2";
    };
};
class ACE_Settings {
    class ace_frag_Enabled {
        category = "$STR_ace_frag_Module_DisplayName";
        displayName = "$STR_ace_frag_EnableFrag";
        description = "$STR_ace_frag_EnableFrag_Desc";
        typeName = "BOOL";
        value = 1;
    };
    class ace_frag_SpallEnabled {
        category = "$STR_ace_frag_Module_DisplayName";
        displayName = "$STR_ace_frag_EnableSpall";
        description = "$STR_ace_frag_EnableSpall_Desc";
        typeName = "BOOL";
        value = 0;
    };
    class ace_frag_ReflectionsEnabled {
        category = "$STR_ace_frag_Module_DisplayName";
        displayName = "$STR_ace_frag_EnableReflections";
        description = "$STR_ace_frag_EnableReflections_Desc";
        typeName = "BOOL";
        value = 0;
    };
    class ace_frag_maxTrack {
        category = "$STR_ace_frag_Module_DisplayName";
        displayName = "$STR_ace_frag_MaxTrack";
        description = "$STR_ace_frag_MaxTrack_Desc";
        typeName = "SCALAR";
        value = 500;
    };
    class ace_frag_MaxTrackPerFrame {
        category = "$STR_ace_frag_Module_DisplayName";
        displayName = "$STR_ace_frag_MaxTrackPerFrame";
        description = "$STR_ace_frag_MaxTrackPerFrame_Desc";
        typeName = "SCALAR";
        value = 50;
    };
    class ace_frag_EnableDebugTrace {
        category = "$STR_ace_frag_Module_DisplayName";
        displayName = "$STR_ace_frag_EnableDebugTrace";
        description = "$STR_ace_frag_EnableDebugTrace_Desc";
        typeName = "BOOL";
        value = 0;
    };
};
