#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
    int    a =  53;
    double b = 123.456;

    cout << "1) a = " << a << ", b = " << b << endl;
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//    

    // konstruujemy now� flage stanu formatowania danych - ios::fmtflags  newflag
    
    ios::fmtflags  newflag = ios::hex | ios::showbase | // ios::fmtflags  newflag:     ustawiamy nowa flage - newflag: 
    ios::showpoint | ios::showpos;                      // ios::hex                    podstawa dla wczytywanych/pisanych liczb ca�kowitych: szesnastkowa 
                                                        // ios::showbase               przy wypisywaniu poka� podstaw� (wiod�ce 0 lub 0x w systemie �semkowym i szesnastkowym).
                                                        // ios::showpoint              wypisz kropk� dziesi�tn� i ko�cowe zera w cz�ci u�amkowej
                                                        // ios::showpos                pisz znak '+' przed liczbami dodatnimi 
        
    ios::fmtflags  oldflag = cout.flags(newflag);       // zapamietujemy stara flag� (oldflag) kt�r� przywr�cimy na ko�cu programu    
    cout << "2) a = " << a << ", b = " << b << endl;
    
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
    cout.setf(ios::scientific);                         // ios::scientific       format naukowy dla wypisywanych liczb zmiennopozycyjnych np. 3.671e+01
                                                        // cout.setf()           funkcja pozwalaj�ca bezpo�rednio zmienia� istniej�c� flag� stanu bez jej uprzedniego pobierania.
    cout.unsetf(ios::showbase);                         // zeruje ios::showbase
    cout << "3) a = " << a << ", b = " << b << endl;
    
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
    cout.precision(4);                                  // ustala precyzj� (ilo�� miejsc po przecinku) wypisywania liczby                                                                                                                                                                      
    cout.setf(ios::fixed);                              // ios::fixed             ustawia wypisywanie maksymalnie tylu cyfr po kropce dziesi�tnej, ile wynosi aktualna precyzja                                                                                                                                                                    
    cout.setf(ios::showbase | ios::uppercase);          // ios::uppercase         litery 'e' w zapisie naukowym i 'x' w szesnastkowym pisz jako du�e 'E' i 'X'                                                                                                                                                                    
    cout << "4) a = " << a << ", b = " << b << endl;
    
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
    cout.flags(oldflag);                                // powr�t do standardowego formatowania oldflag (zapami�tana w lini 19 flaga) jednak�e z zachowaniem cout.precision(4);
    cout << "5) a = " << a << ", b = " << b << endl;
    cin.get();
}
