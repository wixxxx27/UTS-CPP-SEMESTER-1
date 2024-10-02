// NAMA : DWIYANDRA RAYSHA PUTRA SYAWAL
// NPM  : 2410631170069

#include <iostream>
using namespace std;

char hitungHurufMutu(double nilaiAkhir) {
    if (nilaiAkhir >= 85 && nilaiAkhir < 100)
        return 'A';
    else if (nilaiAkhir >= 80 && nilaiAkhir < 85)
        return 'B';
    else if (nilaiAkhir >= 75 && nilaiAkhir < 80)
        return 'C';
    else if (nilaiAkhir >= 70 && nilaiAkhir < 75)
        return 'D';
    else
        return 'E';
}

int main() {
    string nama, npm;
    double nilaiAbsen, nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;
    char hurufMutu;

    cout << "Masukkan Nama: ";
    getline(cin, nama);
    cout << "Masukkan NPM: ";
    getline(cin, npm);
    cout << "Masukkan Nilai Absen (0-100): ";
    cin >> nilaiAbsen;
    cout << "Masukkan Nilai Tugas (0-100): ";
    cin >> nilaiTugas;
    cout << "Masukkan Nilai UTS (0-100): ";
    cin >> nilaiUTS;
    cout << "Masukkan Nilai UAS (0-100): ";
    cin >> nilaiUAS;

    nilaiAkhir = (nilaiAbsen * 0.10) + (nilaiTugas * 0.20) + (nilaiUTS * 0.30) + (nilaiUAS * 0.40);

    hurufMutu = hitungHurufMutu(nilaiAkhir);

    cout << "\n       Hasil Akhir         " << endl;
    cout << "Nama: " << nama << endl;
    cout << "NPM: " << npm << endl;
    cout << "Nilai Absen: " << nilaiAbsen << endl;
    cout << "Nilai Tugas: " << nilaiTugas << endl;
    cout << "Nilai UTS: " << nilaiUTS << endl;
    cout << "Nilai UAS: " << nilaiUAS << endl;
    cout << "Nilai Akhir: " << nilaiAkhir << endl;
    cout << "Huruf Mutu: " << hurufMutu << endl;

    return 0;
}