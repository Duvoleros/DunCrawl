//---------------------------------------------------------------------------

#pragma hdrstop

#include "CellObject.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

CellObject::CellObject(Cell* _loc) {
    this->loc = _loc;
}

Cell* CellObject::getLoc() {
    return this->loc;
}

void CellObject::DoRender(TDrawingScreen* Screen,int x,int y,int width,int height) {
    Screen->DrawTexture({{x,y},{x+width,y+height}}, this->_texture);
}

void CellObject::setTexture(TTexture* texture) {
    this->_texture = texture;
}
