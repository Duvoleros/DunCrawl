//---------------------------------------------------------------------------

#pragma hdrstop

#include "Cell.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Cell::Cell(Coords _loc) {
    this->loc = _loc;
}

Coords Cell::getLoc() {
    return this->loc;
}
