#include <iostream>

using namespace std;

long long fibI(long long n){
        if(n == 0){ return 0;
        }
        long long a, b;
        a = 1; b = 1;
        for(unsigned int i=0; i < n-2; i++) {
            swap(a, b);
            b += a;
        }
        return b;
}
long long fibR(long long n){
    if(n<3){
        return 1;
    }
    if(n>2){
    return fibR(n-2) + fibR(n-1);
    }
}


int main()
{
    cout << "Wybierz element ciagu" << endl;
    long long Element;
    int Metoda;
    cin >> Element;
    cout<<"Wybrales "<<Element<<", wybierz metode wyznaczenia elementu ciagu"<<endl<<"1 - iteracyjna"<<endl<<"2 - rekurencyjna"<<endl;

    cin>>Metoda;
    if(Metoda==1){
        cout<<"Wybrales metode iteracyjna"<<endl;
        long long Wynik=fibI(Element);
        cout<<Wynik<<endl;
    }
    if(Metoda==2){
        cout<<"Wybrales metode rekurencyjna"<<endl;
        long long Wynik=fibR(Element);
        cout<<Wynik<<endl;
    }

    return 0;
}

