#include <iostream>
#include <fstream>

using namespace std;

char      nazwaplik[67];
double    w;

int main(void) {
  
   
    
   cout<<"Program sprawdza stan strumienia wejscia i sygnalizuje ewentualne bledy"<<endl<<endl;

    do {                                                                                        // pêtla do...while wykonujaca siê tak d³ugo, jak d³ugo podana œcie¿ka do pliku bêdzie niepoprawna !ifstream(nazwaplik)
        cout << "Podaj poprawna sciezke do dowolnego pliku : ";
        
        cin.getline(nazwaplik, 40);                                                             // wczytujemy nazwê pliku                                                
        ifstream(nazwaplik).clear();                                                            // void clear(iostate stan = ios::goodbit) - Zeruje s³owo stanu, co odpowiada ustawieniu stanu na good. Nastêpnie ustawia znacznik stan, który musi byæ jedn¹ ze sta³ych ios::badbit, ios::failbit itd. Domyœln¹ wartoœci¹ jest ios::goodbit, a zatem wywo³anie bez argumentu „naprawia” strumieñ
        ifstream(nazwaplik).open(nazwaplik);                                                    // próbujemy otworzyæ plik do czytania. Jeœli plik o takiej nazwie nie istnieje, strumieñ ifstream(nazwaplik) bêdzie w stanie bad, zatem warunek pêtli do...while bêdzie spe³niony, a wiêc program przejdzie do nastêpnego jej obrotu i jeszcze raz zapyta o nazwê.
        
        if(!ifstream(nazwaplik))
            { 
              cout << endl;
              cout<<"Po wprowadzeniu BLEDNEJ sciezki do pliku: "<<endl<<endl  
              <<"   ifstream(nazwaplik).good(): "<<ifstream(nazwaplik).good()<<endl             //ios::goodbit - Strumieñ jest „zdrowy”. Wartoœci¹ goodbit jest 0.
              <<"    ifstream(nazwaplik).bad(): "<<ifstream(nazwaplik).bad()<<endl              //ios::badbit - Strumieñ jest zniszczony; nie wiadomo, czy ostatnia operacja na nim powiod³a siê. Nastêpna na pewno nie powiedzie siê.
              <<"    ifstream(nazwaplik).eof(): "<<ifstream(nazwaplik).eof()<<endl              //ios::eofbit - Wykonano próbê dostêpu do danych poza koñcem strumienia (pliku).
              <<"ifstream(nazwaplik).rdstate(): "<<ifstream(nazwaplik).rdstate()<<endl          //iostate rdstate() - Zwraca s³owo stanu w postaci zmiennej typu iostate.
              <<"   ifstream(nazwaplik).fail(): "<<ifstream(nazwaplik).fail()<<endl<<endl;      //ios::failbit - Nastêpna operacja nie powiedzie siê, ale strumieñ nie jest zniszczony, w szczególnoœci nie zgubiono ¿adnych znaków.   
            }
              
    } while (!ifstream(nazwaplik));
    
      cout << endl;
      cout<<"Po wprowadzeniu POPRAWNEJ sciezki do pliku: "<<endl<<endl
      <<"   ifstream(nazwaplik).good(): "<<ifstream(nazwaplik).good()<<endl
      <<"    ifstream(nazwaplik).bad(): "<<ifstream(nazwaplik).bad()<<endl
      <<"    ifstream(nazwaplik).eof(): "<<ifstream(nazwaplik).eof()<<endl
      <<"ifstream(nazwaplik).rdstate(): "<<ifstream(nazwaplik).rdstate()<<endl
      <<"   ifstream(nazwaplik).fail(): "<<ifstream(nazwaplik).fail()<<endl;
    
    ifstream(nazwaplik).close();

    do {
        if (!cin) 
        {                      
             cout << endl;
             cout<<"Po wprowadzeniu BLEDNEJ liczby: "<<endl<<endl      
             <<"  cin.rdstate(): "<<cin.rdstate()<<endl
             <<"      cin.eof(): "<<cin.eof()<<endl
             <<"     cin.fail(): "<<cin.fail()<<endl
             <<"      cin.bad(): "<<cin.bad()<<endl
             <<"     cin.good(): "<<cin.good()<<endl
             <<endl; 
          
            cin.clear();                               // na wypadek gdyby stan strumienia by³ z³y(cin.bad), zerujemy s³owo stanu("naprawiamy strumieñ") inaczej operacje wejœcia na tym strumieniu bêd¹ ignorowane
            cin.ignore(2048,'\n');                     // Poniewa¿ bufor strumienia nie zosta³ „wyczytany”, gdybyœmy ograniczyli siê do naprawy strumienia, to nastêpna operacja bêdzie czytaæ nie wprowadzon¹, byæ mo¿e tym razem prawid³owo, liczbê, ale „œmieci” pozosta³e w buforze z poprzedniej, nieudanej próby. I tak w nieskoñczonoœæ bêdziemy czytaæ te same œmieci. Zatem musimy je usun¹æ przez wywo³anie ignore.
        }
        cout <<endl<<
        cout << "Wpisz liczbe (zakres typu double): ";
        cin >> w;                                      // usi³ujemy wczytaæ liczbê na zmienn¹ x. Jeœli siê to nie powiedzie, bo na przyk³ad u¿ytkownik wpisa³ zamiast liczby litery, to stan strumienia cin bêdzie bad. Zatoczymy zatem pêtlê i podejmiemy kolejn¹ próbê.
    } while (!cin);    
     
      cout << endl;
    cout<<"Po wprowadzeniu POPRAWNEJ liczby: "<<endl<<endl       
       <<"  cin.rdstate(): "<<cin.rdstate()<<endl
       <<"      cin.eof(): "<<cin.eof()<<endl
       <<"     cin.fail(): "<<cin.fail()<<endl
       <<"      cin.bad(): "<<cin.bad()<<endl
       <<"     cin.good(): "<<cin.good()<<endl
       <<endl;
   
     system("PAUSE");
}
