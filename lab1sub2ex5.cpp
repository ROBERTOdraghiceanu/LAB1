#include <iostream>

using namespace std;

int main()
{
    char nume[101],prenume[101];
    int contor;

    cout<<"Introduceti:";
    cout<<endl;
    cout<<"Numele:";
    cin.get(nume,100);
    cin.get();
    cout<<"Prenumele:";
    cin.get(prenume,100);
    cin.get();

    for( contor=1 ; contor<=10 ; contor++ ){

        cout<<nume;
        cout<<" ";
        cout<<prenume;
        cout<<endl;

    }

    return 0;
}
