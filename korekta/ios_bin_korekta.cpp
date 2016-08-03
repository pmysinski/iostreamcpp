#include <iostream>
#include <fstream>

using namespace std;

                      // PLIKI ELEMENTOWE

int main()
{
  const int n=5;
  double x[n]={0, 43.123, .91, 1000, 0.5}, y[n]; // utworzenie dwóch tablic x oraz y 5-elementowych
  {
    ofstream liczby("c:\\liczby.txt");             // ZAPIS PLIKU, otwarcie pliku metod¹ "do zapisu"
    liczby.write((char*) x,n*sizeof(double));      // wpisz znak po znaku (char) wartoœæ przypisan¹ x, wielkoœæ zapisu wynosi 5*wielkoœæ binarna double(8)= 40 bitów
    liczby.close();
   }
                // istream& seekg(streamoff offset, ios::seek_dir origin)
                // enum seek_dir {beg=0, cur=1, end=2}
   {
    ifstream liczby("c:\\liczby.txt",ios::binary);       // ODCZYT PLIKU, otwarcie pliku metod¹ "do odczytu" binarnie
    liczby.read((char*) y,n*sizeof(double));             // odczytaj znak po znaku (char) i przypisz wartoœæ do y, wielkoœæ wynosi 5*wielkoœæ binarna double(8)= 40 bitów
    cout <<"ilosc odczytanych znakow w pliku tekstowym liczby.txt: "<< liczby.gcount()<<endl<<endl; 
    liczby.close();
   }
   for(int i=0; i<n; ++i) cout<<y[i]<<' ';
   cin.get();
   {
    double XX=66.66, YY=123.456;
    cout<<"double XX=66.66, YY=123.456"<<endl<<endl;    
    fstream liczby("c:\\liczby.txt",ios::in|ios::out|ios::binary); // KOREKTA PLIKU, otwarcie pliku metod¹ "do zapisu" i zarazem "do odczytu" binarnie
    int n=liczby.tellg();                                          // Zwraca wskaŸnik pozycji ODCZYTU danych obecnego strumienia wejœciowego (0) i przypisuje do zmiennej n
    cout<<n<< "       n-wskaznik pozycji odczytu danych" <<endl;
    liczby.seekg(3*sizeof(double));                                // Przesuwa wskaŸnik ODCZYTU danych strumienia na 3*sizeof(double) czyli: 8-wielkoœæ bitowa double, 3*8=24 bit danych
    n=liczby.tellg(); cout<<n<<"      ponownie n"<<endl;      
    liczby.read((char*)&YY,sizeof(double)),                        // odczytuje znaki ze strumienia od wskaŸnika ODCZYTU tj. 24 do 24+8(sizeof(double))=32 bitu (czwarty double) oraz zapisuje je jako zmienn¹ YY
    cout<<YY<<"    nowa wartosc zmiennej YY"<<endl; 
    int m=liczby.tellp();                                          // Zwraca wskaŸnik pozycji ZAPISU danych obecnego strumienia wejœciowego (32) i przypisuje do zmiennej m
    cout<<m<< "      m-wskaznik pozycji zapisu danych" <<endl;
    liczby.seekp(1*sizeof(double));                                // Przesuwa wskaŸnik ZAPISU danych strumienia na 1*sizeof(double) = drugi bit czyli 8 
    m=liczby.tellp(); 
    cout<<m<< "       ponownie m" <<endl;
    liczby.write((char*) &XX,sizeof(double));                      // Zapisz zmienn¹ XX na miejscu ustalonego powy¿ej wskaŸnika
    n=liczby.tellg();
    m=liczby.tellp(); 
    cout<<n<<"      n"<<endl;                                      // wskaŸniki zapisu i odczytu przestawiaj¹ siê na pierwszy bit po zapisanej zmiennej double(8-15) (16 bit)
    cout<<m<<"      m"<<endl;    
    liczby.close();
   }
   {
    ifstream liczby("c:\\liczby.txt",ios::binary);                // ODCZYT PLIKU
    liczby.read((char*) y,n*sizeof(double));                      // czytaj znak po znaku (char) wartoœæ przypisan¹ y, o wielkoœci n*wielkoœæ bitowa double
    liczby.close();
   }
   cout<<endl;
   for(int i=0; i<n; ++i) cout<<y[i]<<' ';                        // poka¿ tablicê y[n]
   cin.get();
   return 0;
}

