//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
//---------------------------------------------------------------------------
TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::FormCreate(TObject *Sender)
{
	this->DrawScreen = new TDrawingScreen(Screen);
	this->TextureStorage = new TTextureStorage();
	this->InitializeTextures();
	this->DrawScreen->DrawRect({{500,500},{599,599}},clBlack,clRed); // Debug rect
	this->DrawScreen->DrawTexture({{100,100},{200,200}}, this->TextureStorage->GetTexture("Wood"));
	this->DrawScreen->Draw();
}
//---------------------------------------------------------------------------

void TMainForm::InitializeTextures() {
	//Define textures here
	//this->TextureStorage->DefineTexture("Texture1", "path/to/texture/Texture1");
	this->TextureStorage->DefineTexture("Wood", "../../textures/Wood.bmp");

	//Load textures here
	this->TextureStorage->LoadTexture("Wood");

}
