#include <iostream>
using namespace std;

void fonksiyon1() {
    static int sayac = 0;   // static keywordu eklenirse memoryde yer kaplar ve UNUTULMAZ. Üzerine eklenerek(sayac++ gibi) devam eder.
    sayac++;
    cout<<"Sayac sonucu: "<<sayac<<endl;
}


void fonksiyon2() {
    static int sayac = 0;
    sayac++;
    cout<<"Sayac sonucu: "<<sayac<<endl;
}


int main() {

    fonksiyon1();
    fonksiyon1();
    fonksiyon1();
    fonksiyon1();

    cout<<endl;
    fonksiyon2();
    cout<<endl;

    fonksiyon1();


    return 0;
}