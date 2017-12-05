class gui_pilot_gps_0
	{
		idd = -1;
		duration = 10e10;
		name = "gui_pilot_gps_0";
		onLoad = "uiNamespace setVariable ['gui_pilot_gps_0', (_this select 0)];";

	 	class controls {
			class gui_pilot_gps_0_pic: RscPicture
			{
				idc = 2396;
				x = safeZoneX + (safeZoneW/2) - 0.025;
				y = safeZoneY + safeZoneH - 0.04;
				w = 0.05;
				h = 0.05;
				text = "grad_pilotTracking\data\gpsicon_0.paa";
			};
		};
	};

class gui_pilot_gps_1
	{
		idd = -1;
		duration = 10e10;
		name = "gui_pilot_gps_1";

	 	class controls {
			class gui_pilot_gps_1_pic: RscPicture
			{
				idc = -1;
				x = safeZoneX + safeZoneW - 0.2;
				y = safeZoneY + safeZoneH - 1;
				w = 0.2;
				h = 0.2;
				text = "grad_pilotTracking\data\gpsicon_1.paa";
			};
		};
	};

class gui_pilot_gps_2
	{
		idd = -1;
		duration = 10e10;
		name = "gui_pilot_gps_2";

	 	class controls {
			class gui_pilot_gps_2_pic: RscPicture
			{
				idc = -1;
				x = safeZoneX + safeZoneW - 0.2;
				y = safeZoneY + safeZoneH - 1;
				w = 0.2;
				h = 0.2;
				text = "grad_pilotTracking\data\gpsicon_2.paa";
			};
		};
	};


class RscProgress
	{
		type = 8;
		style = 0;
		colorFrame[] = {1,1,1,0.2};
		colorBar[] = {0.5,0.07,0.14,1};
		texture = "#(argb,8,8,3)color(0.5,0.07,0.14,1)";
		w = 1;
		h = 0.01;
	};

class GRAD_rattrap_bloodLevelBar
{
	idd = -1;
	duration = 10e10;
	name = "GRAD_rattrap_bloodLevelBar";
	onLoad = "uiNamespace setVariable ['GRAD_rattrap_bloodLevelBar', (_this select 0)];";

	class Controls
	{
		class Progress: RscProgress 
		{
			idc = 2399;
			x = 0;
			y = ( safeZoneY + safeZoneH ) - 0.02;
		};
	};
};