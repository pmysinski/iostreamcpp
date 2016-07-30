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
        {
                ofstream liczby("c:\\liczby.txt");                   //ZAPIS PLIKU
                liczby.write((char*) x,n*sizeof(double));
                liczby.close();
        }

        {
                ifstream liczby("c:\\liczby.txt",ios::binary);       //ODCZYT PLIKU
                liczby.read((char*) y,n*sizeof(double));
                liczby.close();
        }
        for(int i=0; i<n; i++) cout<<y[i]<<' ';
        cin.get();
        {
                double XX=444.555, YY=9.9;
                fstream liczby("c:\\liczby.txt",ios::in|ios::out|ios::binary); //KOREKTA PLIKU
                int n=liczby.tellg(); cout<<n<<endl;
                liczby.seekg(1*sizeof(double));
                n=liczby.tellg(); cout<<n<<endl;
                liczby.read((char*)&YY,sizeof(double)),cout<<YY<<endl;
                liczby.seekp(2*sizeof(double));
                liczby.write((char*) &XX,sizeof(double));
                n=liczby.tellg(); cout<<n<<endl;
                n=liczby.tellp(); cout<<n<<endl;
                liczby.close();
        }
        {
                ifstream liczby("c:\\liczby.txt",ios::binary);       //ODCZYT PLIKU
                liczby.read((char*) y,n*sizeof(double));
                liczby.close();
        }
   for(int i=0; i<n; ++i) cout<<y[i]<<' ';
   cin.get();
}
//---------------------------------------------------------------------------

