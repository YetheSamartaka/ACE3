class CfgWeapons {

    class Pistol_Base_F;
    class ACE_Flashlight_Maglite_ML300L: Pistol_Base_F {
        author = ECSTRING(common,ACETeam);
        displayName = CSTRING(Maglite_ML300L_DisplayName);
        descriptionShort = CSTRING(Maglite_ML300L_Description);
        model = QPATHTOF(data\maglite_ml300l.p3d);
        picture = QPATHTOF(UI\maglite_ml300l_ca.paa);
        scope = 2;

        magazines[] = {};
        recoil = "";
		recoilProne = "";
		distanceZoomMin = 50;
		distanceZoomMax = 50;
        autoFire = 0;

        class FlashLight
		{
			color[] = {180,180,190};
            ambient[] = {0.9,0.81,0.7};
            intensity = 85;
            size = 1;
            innerAngle = 5;
            outerAngle = 60;
            coneFadeCoef = 8;
			position = "flash dir";
            direction = "flash";
			useFlare = 1;
			flareSize = 1.4;
            flareMaxDistance = 100;
            dayLight = 1;
			class Attenuation {
                start = 0;
                constant = 0.7;
                linear = 0.5;
                quadratic = 0.6;
                hardLimitStart = 45;
                hardLimitEnd = 60;
            };
            scale[] = {0};
		};
    };


    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class ACE_Flashlight_MX991: ACE_ItemCore {
        author = ECSTRING(common,ACETeam);
        displayName = CSTRING(MX991_DisplayName);
        descriptionShort = CSTRING(MX991_Description);
        model = QPATHTOF(data\mx_991.p3d);
        picture = QPATHTOF(UI\mx_991_ca.paa);
        scope = 2;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
            class FlashLight {
                ACE_Flashlight_Colour = "red";
                ACE_Flashlight_Beam = QPATHTOF(UI\Flashlight_beam_red_ca.paa);
                ACE_Flashlight_Size = 1.75;
            };
        };
    };

    class ACE_Flashlight_KSF1: ACE_ItemCore {
        author = ECSTRING(common,ACETeam);
        displayName = CSTRING(KSF1_DisplayName);
        descriptionShort = CSTRING(KSF1_Description);
        model = QPATHTOF(data\ksf_1.p3d);
        picture = QPATHTOF(UI\ksf_1_ca.paa);
        scope = 2;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
            class FlashLight {
                ACE_Flashlight_Colour = "red";
                ACE_Flashlight_Beam = QPATHTOF(UI\Flashlight_beam_red_ca.paa);
                ACE_Flashlight_Size = 1.5;
            };
        };
    };

    class ACE_Flashlight_XL50: ACE_ItemCore {
        author = ECSTRING(common,ACETeam);
        displayName = CSTRING(XL50_DisplayName);
        descriptionShort = CSTRING(XL50_Description);
        model = QPATHTOF(data\maglite_xl50.p3d);
        picture = QPATHTOF(UI\maglite_xl50_ca.paa);
        scope = 2;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
            class FlashLight {
                ACE_Flashlight_Colour = "white";
                ACE_Flashlight_Beam = QPATHTOF(UI\Flashlight_beam_white_ca.paa);
                ACE_Flashlight_Size = 2.15;
            };
        };
    };
};
