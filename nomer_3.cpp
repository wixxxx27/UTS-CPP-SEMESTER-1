// NAMA : DWIYANDRA RAYSHA PUTRA SYAWAL
// NPM  : 2410631170069

#include <iostream>
using namespace std;

double penjumlahan(double a, double b) {
    return a + b;
}

double pengurangan(double a, double b) {
    return a - b;
}

double perkalian(double a, double b) {
    return a * b;
}

double pembagian(double a, double b) {
    if (b != 0)
        return a / b;
    else
        return 0; // Mengembalikan 0 jika pembagi nol
}

int main() {
    int pilihan;
    double operand1, operand2, hasil;

    cout << "Pilih operasi matematika:\n";
    cout << "\n1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "4. Pembagian\n";
    cout << "Masukkan pilihan (1/2/3/4): ";
    cin >> pilihan;

    cout << "Masukkan angka pertama: ";
    cin >> operand1;
    cout << "Masukkan angka kedua: ";
    cin >> operand2;

    switch (pilihan) {
        case 1:
            hasil = penjumlahan(operand1, operand2);
            cout << "Hasil dari Penjumlahan: " << hasil << endl;
            break;
        case 2:
            hasil = pengurangan(operand1, operand2);
            cout << "Hasil dari Pengurangan: " << hasil << endl;
            break;
        case 3:
            hasil = perkalian(operand1, operand2);
            cout << "Hasil dari Perkalian: " << hasil << endl;
            break;
        case 4:
            hasil = pembagian(operand1, operand2);
            if (operand2 == 0)
                cout << "Tidak bisa dibagi dengan nol!" << endl;
            else
                cout << "Hasil dari Pembagian: " << hasil << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
    }

    return 0;
}