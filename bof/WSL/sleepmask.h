#ifndef _SLEEPMASK_H_
#define _SLEEPMASK_H_

#include <windows.h>
#include "beacon.h"
#include "beacon_gate.h"

typedef void(* SLEEPMASK_FUNC)(PBEACON_INFO, PFUNCTION_CALL);
#endif // _SLEEPMASK_H_
