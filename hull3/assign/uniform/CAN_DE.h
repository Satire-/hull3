class CAN_DE {
    class Rifleman {
        headGear = "MNP_Helmet_Canada_D";
        goggles = "";
        uniform = "MNP_CombatUniform_Canada_D";
        vest = "MNP_Vest_Canada_D2";
        backpack = "B_Kitbag_cbr";
    };

    class Leader : Rifleman {
        uniform = "MNP_CombatUniform_Canada_DS";
        vest = "MNP_Vest_Canada_D";
    };

    class Officer : Leader {
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_I";
        uniform = "MNP_CombatUniform_Canada_DS";
        vest = "V_BandollierB_khk";
        backpack = "B_AssaultPack_cbr";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "B_Carryall_khk";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "MNP_CombatUniform_Canada_DS";
    };

    class AAR : Rifleman {
        backpack = "B_Carryall_khk";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "B_Carryall_khk";
    };

    class MMGAG : AAR {
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        backpack = "B_Carryall_khk";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "B_Carryall_khk";
    };

    class HATAG : AAR {
    };

    class HATAC : HATAG {
    };
    
    class DHATG : AR {
    };

    class DHATAG : AAR {
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
    };

    class SAMAG : AAR {
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
    };

    class GMGAG : AAR {
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
    };

    class MTRAG : AAR {
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        uniform = "MNP_CombatUniform_Canada_DS";
        backpack = "B_Carryall_khk";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "MNP_Boonie_CAN_D";
        goggles = "G_Bandanna_khk";
        uniform = "MNP_CombatUniform_Canada_DS";
        vest = "V_BandollierB_khk";
        backpack = "B_AssaultPack_cbr";
    };

    class SP : SN {
    };

    class VC : Crew {
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "H_PilotHelmetHeli_O";
        uniform = "MNP_CombatUniform_Canada_D";
        vest = "V_TacVest_oli";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };
};