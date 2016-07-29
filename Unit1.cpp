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
        const int n=5;
        double x[n]={1.2, .357, 0., 100000, 0.5}, y[n];
        ofstream liczby("c:\\liczby.txt");
        liczby.write((char*) x,n*sizeof(double));
        liczby.close();
}
//---------------------------------------------------------------------------

