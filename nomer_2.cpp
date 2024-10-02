// NAMA : DWIYANDRA RAYSHA PUTRA SYAWAL
// NPM  : 2410631170069

#include <iostream>
using namespace std;

int main(){
    int angka;

    cout << "Masukkan angka  : ";
    cin >> angka;

    for (int i = 1; i <= angka; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}