#include <iostream>
#include <fstream>

using namespace std;

char      nazwaplik[67];
double    w;

int main(void) {
  
   
    
   cout<<"Program sprawdza stan strumienia wejscia i sygnalizuje ewentualne bledy"<<endl<<endl;

    do {
        cout << "Podaj poprawna sciezke do dowolnego pliku : ";
        
        cin.getline(nazwaplik, 40);                                                             
        ifstream(nazwaplik).clear();
        ifstream(nazwaplik).open(nazwaplik);
        
        if(!ifstream(nazwaplik))
            { 
              cout << endl;
              cout<<"Po wprowadzeniu BLEDNEJ sciezki do pliku: "<<endl<<endl
              <<"   ifstream(nazwaplik).good(): "<<ifstream(nazwaplik).good()<<endl
              <<"    ifstream(nazwaplik).bad(): "<<ifstream(nazwaplik).bad()<<endl
              <<"    ifstream(nazwaplik).eof(): "<<ifstream(nazwaplik).eof()<<endl
              <<"ifstream(nazwaplik).rdstate(): "<<ifstream(nazwaplik).rdstate()<<endl
              <<"   ifstream(nazwaplik).fail(): "<<ifstream(nazwaplik).fail()<<endl<<endl;       
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
          
            cin.clear();
            cin.ignore(2048,'\n');
        }
        cout <<endl<<
        cout << "Wpisz liczbe (zakres typu double): ";
        cin >> w;
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
