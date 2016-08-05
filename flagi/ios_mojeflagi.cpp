#include <iostream>
//#include <iomanip>
using namespace std;

int main(void) {
    int    a =  53;
    double b = 123.456;

    cout << "1) a = " << a << ", b = " << b << endl;
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//    

    // konstruujemy now¹ flage stanu formatowania danych - ios::fmtflags  newflag
    
    ios::fmtflags  newflag = ios::hex | ios::showbase | // ios::fmtflags  newflag:     ustawiamy nowa flage - newflag: 
    ios::showpoint | ios::showpos;                      // ios::hex                    podstawa dla wczytywanych/pisanych liczb ca³kowitych: szesnastkowa 
                                                        // ios::showbase               przy wypisywaniu poka¿ podstawê (wiod¹ce 0 lub 0x w systemie ósemkowym i szesnastkowym).
                                                        // ios::showpoint              wypisz kropkê dziesiêtn¹ i koñcowe zera w czêœci u³amkowej
                                                        // ios::showpos                pisz znak '+' przed liczbami dodatnimi 
        
    ios::fmtflags  oldflag = cout.flags(newflag);       // zapamietujemy stara flagê (oldflag) któr¹ przywrócimy na koñcu programu    
    cout << "2) a = " << a << ", b = " << b << endl;
    
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
    cout.setf(ios::scientific);                         // ios::scientific       format naukowy dla wypisywanych liczb zmiennopozycyjnych np. 3.671e+01
                                                        // cout.setf()           funkcja pozwalaj¹ca bezpoœrednio zmieniaæ istniej¹c¹ flagê stanu bez jej uprzedniego pobierania.
    cout.unsetf(ios::showbase);                         // zeruje ios::showbase
    cout << "3) a = " << a << ", b = " << b << endl;
    
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
    cout.precision(4);                                  // ustala precyzjê (iloœæ miejsc po przecinku) wypisywania liczby                                                                                                                                                                      
    cout.setf(ios::fixed);                              // ios::fixed             ustawia wypisywanie maksymalnie tylu cyfr po kropce dziesiêtnej, ile wynosi aktualna precyzja                                                                                                                                                                    
    cout.setf(ios::showbase | ios::uppercase);          // ios::uppercase         litery 'e' w zapisie naukowym i 'x' w szesnastkowym pisz jako du¿e 'E' i 'X'                                                                                                                                                                    
    cout << "4) a = " << a << ", b = " << b << endl;
    
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
    cout.flags(oldflag);                                // powrót do standardowego formatowania oldflag (zapamiêtana w lini 19 flaga) jednak¿e z zachowaniem cout.precision(4);
    cout << "5) a = " << a << ", b = " << b << endl;
    cin.get();
}
