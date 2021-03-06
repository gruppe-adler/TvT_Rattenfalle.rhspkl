params ["_unit", "_blood"];

private _cardinalDirection = [_blood] call GRAD_pilotTracking_fnc_getCardinalBearing;
private _timestamp = _blood getVariable ["GRAD_pilotTracking_bloodDropTimestamp",-1];
private _delta = CBA_missionTime - _timestamp;

_unit action ["TakeFlag", objNull];

if (_timestamp < 0) exitWith { hint "can't read this blood"; };

if (!(_unit getVariable ["GRAD_pilotTracking_isScout", false])) exitWith {
    hint format ["This trace leads to %1. I need a scout to say how long ago it dropped.", _cardinalDirection];
};

if (_delta > 30*60) then {
    hint format ["This trace is really old. More than 30 mins. It leads to %1.", _cardinalDirection];
} else {
  if (_delta <= 30*60 && _delta > 20*60) then {
      hint format ["This trace is between 20 and 30 mins old. It leads to %1.", _cardinalDirection];
  } else {
    if (_delta <= 20*60 && _delta > 15*60) then {
        hint format ["This trace is between 15 and 20 mins old. It leads to %1.", _cardinalDirection];
    } else {
      if (_delta <= 15*60 && _delta > 10*60) then {
          hint format ["This trace is between 10 and 15 mins old. It leads to %1.", _cardinalDirection];
      } else {
        if (_delta <= 10*60 && _delta > 5*60) then {
            hint format ["This trace is between 5 and 10 mins old. It leads to %1.", _cardinalDirection];
        } else {
          if (_delta <= 5*60 && _delta > 2*60) then {
              hint format ["This trace is between 2 and 5 mins old. It leads to %1.", _cardinalDirection];
          } else {
              hint format ["This trace is really fresh, less than 2 mins. It leads to %1.", _cardinalDirection];
          };
        };
      };
    };
  };
};