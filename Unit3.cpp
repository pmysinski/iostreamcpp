//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button2Click(TObject *Sender)
{
        ShellExecute(0, "open", "ios_mojeflagi.exe", "", "flagi", SW_SHOWNORMAL);        
}
//---------------------------------------------------------------------------

void __fastcall TForm3::ZamknijClick(TObject *Sender)
{
        Form3->Close();
}
//---------------------------------------------------------------------------
