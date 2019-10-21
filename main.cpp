#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

int main()
{
    /*
    string kata="dimas";
    cout << kata << endl;
    string hasil_acak;
    srand((unsigned)time(NULL));
    for(int i=0;i<kata.size();i++){
        hasil_acak=rand()%kata[i]+1;
        cout << hasil_acak <<endl;
    */
    string kata;
    int jumlah;
    int alpha1, alpha2;
    char temp;
    srand(static_cast<unsigned int>(time(0)));

    cout << "Masukkan kata yang anda inginkan : " ;cin >>kata;
    jumlah=kata.size();
    string random = kata;
    cout << "\n\n Jumlah huruf di kata tersebut : "<<jumlah <<endl;

    for(int i=0;i<jumlah;i++){
            alpha1 = (rand()% jumlah);
            alpha2 = (rand()% jumlah);
            temp = random[alpha1];
            random[alpha1] = random[alpha2];
            random[alpha2] = temp;
    }
        cout << "\n Kata yang sudah diacak : "<<random<<endl;

    return 0;
}
