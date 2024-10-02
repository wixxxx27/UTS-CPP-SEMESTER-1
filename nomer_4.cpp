// NAMA : DWIYANDRA RAYSHA PUTRA SYAWAL
// NPM  : 2410631170069

#include <iostream>
using namespace std;

int main()
{
    int batas;
    cout << "Masukkan angka : ";
    cin >> batas;

    cout << "Bilangan Ganjil :" << endl;
    for (int i = 0; i < batas; i++){
        if (i % 2 != 0) {
                cout << i << endl;
        }
    }

    cout << endl;

    cout << "Bilangan Genap :" << endl;
    for (int i = 0; i < batas; i++){
        if (i % 2 == 0) {
                cout << i << endl;
        }
    }

    return 0;
}