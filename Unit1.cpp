//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include<iostream>
#include<fstream.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
    ShellExecute(0, "open", "ios_bin_korekta.exe", "", "korekta", SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
Label1->Caption = "Obs�uga wej�cia wyj�cia z wykorzystaniem\nszablon�w klas strumieniowych";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
     ShellExecute(0, "open", "ios_mojeflagi.exe", "", "flagi", SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

