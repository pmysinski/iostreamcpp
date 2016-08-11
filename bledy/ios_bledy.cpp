#include <iostream>
#include <fstream>

using namespace std;

char      nazwaplik[67];
double    w;

int main(void) {
  
   
    
   cout<<"Program sprawdza stan strumienia wejscia i sygnalizuje ewentualne bledy"<<endl<<endl;

    do {                                                                                        // p�tla do...while wykonujaca si� tak d�ugo, jak d�ugo podana �cie�ka do pliku b�dzie niepoprawna !ifstream(nazwaplik)
        cout << "Podaj poprawna sciezke do dowolnego pliku : ";
        
        cin.getline(nazwaplik, 40);                                                             // wczytujemy nazw� pliku                                                
        ifstream(nazwaplik).clear();                                                            // void clear(iostate stan = ios::goodbit) - Zeruje s�owo stanu, co odpowiada ustawieniu stanu na good. Nast�pnie ustawia znacznik stan, kt�ry musi by� jedn� ze sta�ych ios::badbit, ios::failbit itd. Domy�ln� warto�ci� jest ios::goodbit, a zatem wywo�anie bez argumentu �naprawia� strumie�
        ifstream(nazwaplik).open(nazwaplik);                                                    // pr�bujemy otworzy� plik do czytania. Je�li plik o takiej nazwie nie istnieje, strumie� ifstream(nazwaplik) b�dzie w stanie bad, zatem warunek p�tli do...while b�dzie spe�niony, a wi�c program przejdzie do nast�pnego jej obrotu i jeszcze raz zapyta o nazw�.
        
        if(!ifstream(nazwaplik))
            { 
              cout << endl;
              cout<<"Po wprowadzeniu BLEDNEJ sciezki do pliku: "<<endl<<endl  
              <<"   ifstream(nazwaplik).good(): "<<ifstream(nazwaplik).good()<<endl             //ios::goodbit - Strumie� jest �zdrowy�. Warto�ci� goodbit jest 0.
              <<"    ifstream(nazwaplik).bad(): "<<ifstream(nazwaplik).bad()<<endl              //ios::badbit - Strumie� jest zniszczony; nie wiadomo, czy ostatnia operacja na nim powiod�a si�. Nast�pna na pewno nie powiedzie si�.
              <<"    ifstream(nazwaplik).eof(): "<<ifstream(nazwaplik).eof()<<endl              //ios::eofbit - Wykonano pr�b� dost�pu do danych poza ko�cem strumienia (pliku).
              <<"ifstream(nazwaplik).rdstate(): "<<ifstream(nazwaplik).rdstate()<<endl          //iostate rdstate() - Zwraca s�owo stanu w postaci zmiennej typu iostate.
              <<"   ifstream(nazwaplik).fail(): "<<ifstream(nazwaplik).fail()<<endl<<endl;      //ios::failbit - Nast�pna operacja nie powiedzie si�, ale strumie� nie jest zniszczony, w szczeg�lno�ci nie zgubiono �adnych znak�w.   
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
          
            cin.clear();                               // na wypadek gdyby stan strumienia by� z�y(cin.bad), zerujemy s�owo stanu("naprawiamy strumie�") inaczej operacje wej�cia na tym strumieniu b�d� ignorowane
            cin.ignore(2048,'\n');                     // Poniewa� bufor strumienia nie zosta� �wyczytany�, gdyby�my ograniczyli si� do naprawy strumienia, to nast�pna operacja b�dzie czyta� nie wprowadzon�, by� mo�e tym razem prawid�owo, liczb�, ale ��mieci� pozosta�e w buforze z poprzedniej, nieudanej pr�by. I tak w niesko�czono�� b�dziemy czyta� te same �mieci. Zatem musimy je usun�� przez wywo�anie ignore.
        }
        cout <<endl<<
        cout << "Wpisz liczbe (zakres typu double): ";
        cin >> w;                                      // usi�ujemy wczyta� liczb� na zmienn� x. Je�li si� to nie powiedzie, bo na przyk�ad u�ytkownik wpisa� zamiast liczby litery, to stan strumienia cin b�dzie bad. Zatoczymy zatem p�tl� i podejmiemy kolejn� pr�b�.
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
