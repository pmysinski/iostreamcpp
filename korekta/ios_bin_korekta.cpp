#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  const int n=5;
  double x[n]={0, 43.123, .91, 1000, 0.5}, y[n]; // utworzenie dw�ch tablic x oraz y 5-elementowych
  {
    ofstream liczby("c:\\liczby.txt");             // ZAPIS PLIKU, otwarcie pliku metod� "do zapisu"
    liczby.write((char*) x,n*sizeof(double));      // wpisz znak po znaku (char = 1 Bajt) warto�� x, wielko�� zapisu wynosi 5*wielko�� binarna double(8 Bajt�w)= 40 Bajt�w
    liczby.close();     
   }               
   {
    ifstream liczby("c:\\liczby.txt",ios::binary);       // ODCZYT PLIKU, otwarcie pliku metod� "do odczytu" binarnie
    liczby.read((char*) y,n*sizeof(double));             // odczytaj znak po znaku (char) i przypisz warto�� do y, wielko�� wynosi 5*wielko�� binarna double(8)= 40 B
    cout <<"ilosc odczytanych znakow w pliku tekstowym liczby.txt: "<< liczby.gcount()<<endl<<endl; 
    liczby.close();
   }
   for(int i=0; i<n; ++i) cout<<y[i]<<' ';
   cin.get();
   {
    double XX=66.66, YY=123.456;
    cout<<"double XX=66.66, YY=123.456"<<endl<<endl;    
    fstream liczby("c:\\liczby.txt",ios::in|ios::out|ios::binary); // KOREKTA PLIKU, otwarcie pliku metod� "do zapisu" i zarazem "do odczytu" binarnie
    int n=liczby.tellg();                                          // Zwraca wska�nik pozycji ODCZYTU danych obecnego strumienia wej�ciowego (0) i przypisuje do zmiennej n
    cout<<n<< "       n- aktualny wskaznik pozycji odczytu danych" <<endl;
    liczby.seekg(3*sizeof(double));                                // Przesuwa wska�nik ODCZYTU danych strumienia na 3*sizeof(double) czyli:  3*8=24 Bajt danych
    n=liczby.tellg(); cout<<n<<"      przesuwamy wskaznik na 24 Bajt (czwarty double)"<<endl;      
    liczby.read((char*)&YY,sizeof(double)),                        // odczytuje znaki ze strumienia od wska�nika ODCZYTU tj. 24 do 24+8(sizeof(double))=32 B (czwarty double) oraz zapisuje je jako zmienn� YY
    cout<<YY<<"    przypisujemy nowa wartosc zmiennej YY"<<endl; 
    int m=liczby.tellp();                                          // Zwraca wska�nik pozycji ZAPISU danych obecnego strumienia wej�ciowego (32) i przypisuje do zmiennej m
    cout<<m<< "      m- aktualny wskaznik pozycji zapisu danych" <<endl;
    liczby.seekp(1*sizeof(double));                                // Przesuwa wska�nik ZAPISU danych strumienia na 1*sizeof(double) =  8B czyli nasz drugi double 
    m=liczby.tellp(); 
    cout<<m<< "       przesuwamy wskaznik na 8 Bajt (drugi double) i podmieniamy go na XX" <<endl;
    liczby.write((char*) &XX,sizeof(double));                      // Zapisz zmienn� XX na miejscu ustalonego powy�ej wska�nika
    n=liczby.tellg();
    m=liczby.tellp(); 
    cout<<n<<"      n"<<endl;                                      // wska�niki zapisu i odczytu przestawiaj� si� na pierwszy bit po zapisanej zmiennej double(8-15) (16B)
    cout<<m<<"      m"<<endl;    
    liczby.close();
   }
   {
    ifstream liczby("c:\\liczby.txt",ios::binary);                // ODCZYT PLIKU
    liczby.read((char*) y,n*sizeof(double));                      // czytaj znak po znaku (char) warto�� y, o wielko�ci n*wielko�� bitowa double
    liczby.close();
   }
   cout<<endl;
   for(int i=0; i<n; ++i) cout<<y[i]<<' ';                        // poka� tablic� z wprowadzonymi modyfikacjami y[n]
      
   getchar();
   return 0;
}

