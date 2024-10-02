// NAMA : DWIYANDRA RAYSHA PUTRA SYAWAL
// NPM  : 2410631170069

#include <iostream>
using namespace std;

int main()
 {
     
    double tinggi_m, berat_kg, IMT;
    int IMT_integer;

     
    cout << "Masukkan tinggi badan (m): ";
    cin >> tinggi_m;
    cout << "Masukkan berat badan (kg): ";
    cin >> berat_kg;

     
    IMT = berat_kg / (tinggi_m * tinggi_m);

    cout << "\nIMT Anda: " << IMT_integer << endl;

     
    cout << "Kategori berat badan: ";
    if (IMT_integer < 18,4) {
        cout << "Berat badan kurang  " << endl;

    } else if (IMT_integer >= 18,5 && IMT_integer <= 24,9) {
        cout << "Berat badan ideal" << endl;

    } else if (IMT_integer > 25 && IMT_integer <= 29,9) {
        cout << "Berat badan berlebih" << endl;
    }
        else if (IMT_integer > 30 && IMT_integer <= 39,9) {
        cout << "Gemuk" << endl;

    } else {
        cout << "Sangat Gemuk" << endl;
    }

    return 0;
}
