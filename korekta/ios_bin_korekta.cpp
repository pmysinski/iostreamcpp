#include <iostream>
#include <fstream>

using namespace std;

                      // PLIKI ELEMENTOWE

int main()
{
  const int n=5;
  double x[n]={0, 43.123, .91, 1000, 0.5}, y[n]; // utworzenie dw�ch tablic x oraz y 5-elementowych
  {
    ofstream liczby("c:\\liczby.txt");             // ZAPIS PLIKU, otwarcie pliku metod� "do zapisu"
    liczby.write((char*) x,n*sizeof(double));      // wpisz znak po znaku (char) warto�� przypisan� x, wielko�� zapisu wynosi 5*wielko�� binarna double(8)= 40 bit�w
    liczby.close();
   }
                // istream& seekg(streamoff offset, ios::seek_dir origin)
                // enum seek_dir {beg=0, cur=1, end=2}
   {
    ifstream liczby("c:\\liczby.txt",ios::binary);       // ODCZYT PLIKU, otwarcie pliku metod� "do odczytu" binarnie
    liczby.read((char*) y,n*sizeof(double));             // odczytaj znak po znaku (char) i przypisz warto�� do y, wielko�� wynosi 5*wielko�� binarna double(8)= 40 bit�w
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
    cout<<n<< "       n-wskaznik pozycji odczytu danych" <<endl;
    liczby.seekg(3*sizeof(double));                                // Przesuwa wska�nik ODCZYTU danych strumienia na 3*sizeof(double) czyli: 8-wielko�� bitowa double, 3*8=24 bit danych
    n=liczby.tellg(); cout<<n<<"      ponownie n"<<endl;      
    liczby.read((char*)&YY,sizeof(double)),                        // odczytuje znaki ze strumienia od wska�nika ODCZYTU tj. 24 do 24+8(sizeof(double))=32 bitu (czwarty double) oraz zapisuje je jako zmienn� YY
    cout<<YY<<"    nowa wartosc zmiennej YY"<<endl; 
    int m=liczby.tellp();                                          // Zwraca wska�nik pozycji ZAPISU danych obecnego strumienia wej�ciowego (32) i przypisuje do zmiennej m
    cout<<m<< "      m-wskaznik pozycji zapisu danych" <<endl;
    liczby.seekp(1*sizeof(double));                                // Przesuwa wska�nik ZAPISU danych strumienia na 1*sizeof(double) = drugi bit czyli 8 
    m=liczby.tellp(); 
    cout<<m<< "       ponownie m" <<endl;
    liczby.write((char*) &XX,sizeof(double));                      // Zapisz zmienn� XX na miejscu ustalonego powy�ej wska�nika
    n=liczby.tellg();
    m=liczby.tellp(); 
    cout<<n<<"      n"<<endl;                                      // wska�niki zapisu i odczytu przestawiaj� si� na pierwszy bit po zapisanej zmiennej double(8-15) (16 bit)
    cout<<m<<"      m"<<endl;    
    liczby.close();
   }
   {
    ifstream liczby("c:\\liczby.txt",ios::binary);                // ODCZYT PLIKU
    liczby.read((char*) y,n*sizeof(double));                      // czytaj znak po znaku (char) warto�� przypisan� y, o wielko�ci n*wielko�� bitowa double
    liczby.close();
   }
   cout<<endl;
   for(int i=0; i<n; ++i) cout<<y[i]<<' ';                        // poka� tablic� y[n]
   cin.get();
   return 0;
}

