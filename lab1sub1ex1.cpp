#include <iostream>

#define swap(t,x,y) t aux ; aux=x ; x=y ; y=aux;
using namespace std;

int main()
{
    int x,y;

    cout<<"x=";
    cin>>x;

    cout<<"y=";
    cin>>y;

    swap(int,x,y);

    cout<<"After swaping the values,"<<endl;
    cout<<"x="<<x;
    cout<<endl;
    cout<<"y="<<y;

    return 0;
}
