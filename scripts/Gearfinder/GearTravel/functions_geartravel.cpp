//=========================================================================
// Função para Portal / NPC de teletransporte.
//=========================================================================
function	script	F_GearTravel	{
	.@menu$ = "";
	for (.@i = 0; .@i < getarg(0); .@i++) {
		.@menu$ += getarg(1 + (.@i * 4)) + ":";
	}

	.@choice = select(.@menu$) - 1;

	.@index = 1 + (.@choice * 4);

	.@map$ = getarg(.@index + 1);
	.@x = getarg(.@index + 2);
	.@y = getarg(.@index + 3);

	warp .@map$, .@x, .@y;
	return;
}

//=========================================================================
// Exemplo Funcional: Ferrovia de Einbroch.
//=========================================================================
einbroch,227,269,0	script	RailroadEinbroch#ein1	WARPNPC,1,1,{
	end;
OnTouch:
	callfunc "F_GearTravel", 3,
		"Einbech", "einbech", 43, 212,
		"Einbroch", "einbroch", 236, 262,
		"Lighthalzen", "lighthalzen", 232, 164;
	end;
}
einbroch,236,269,0	duplicate(RailroadEinbroch#ein1)	RailroadEinbroch#ein2	WARPNPC,1,1
einbroch,246,303,0	duplicate(RailroadEinbroch#ein1)	RailroadEinbroch#ein3	WARPNPC,1,1
einbroch,257,303,0	duplicate(RailroadEinbroch#ein1)	RailroadEinbroch#ein4	WARPNPC,1,1
einbech,43,216,0	duplicate(RailroadEinbroch#ein1)	RailroadEinbroch#ein5	WARPNPC,1,1
lighthalzen,236,164,0	duplicate(RailroadEinbroch#ein1)	RailroadEinbroch#ein6	WARPNPC,1,1
