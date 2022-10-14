#include <iostream>
#include <string>
using namespace std;

int main () {
    int nomor;
    char answer;

        do {
        string deskripsi = " Pilih Rumus yang ingin digunakan: \n"
        "1. Persegi \n"
        "2. Persegi Panjang \n"
        "3. Segitiga \n"
        "4. Trapesium \n"
        "5. Jajar Genjang \n"
        "6. Belah Ketupat \n"
        "7. Layang-layang \n"
        "8. lingkaran \n" ;
        cout << deskripsi;

        cout << "Masukan pilihan Rumus tersebut dalam angka: ";
        cin >> nomor;

        switch(nomor) {
        case 1:
            int sisi, luas;
            cout << "input panjang sisi persegi: ";
            cin >> sisi ;
            luas = sisi*sisi;
            cout<< "Luas persegi: " << luas << endl;
            break;
        case 2:
            int p, l;
            cout << "input panjang persegi panjang ";
            cin >> p;
            cout << "input lebar persegi panjang ";
            cin >> l;
            luas = p*l;
            cout << "Luas persegi panjang: " << luas << endl;
            break;
        case 3:
            int alas, tinggi;
            cout << "input alas segitiga ";
            cin >> alas;
            cout << "input tinggi segitiga ";
            cin >> tinggi;
            luas = 0.5 * alas * tinggi;
            cout << "Luas Segitiga: " << luas << endl;
            break;
        case 4:
            int alas1, alas2;
            cout << "Input alas 1 Trapesium ";
            cin >> alas1;
            cout << "Input alas 2 Trapesium ";
            cin >> alas2;
            cout << "Input Tinggi Trapesium ";
            cin >> tinggi;
            luas = 0.5*(alas1+alas2)*tinggi;
            cout << "Luas Trapesium: " << luas << endl;
            break;
        case 5 :
            cout << "Input alas jajar genjang: ";
            cin >> alas;
            cout << "Input tinggi Jajar genjang: ";
            cin >> tinggi;
            luas = alas*tinggi;
            cout << "Luas Jajar Genjang: " << luas << endl;
            break;
        case 6:
            int d1, d2;
            cout << "Input d1 belah ketupat: ";
            cin >> d1;
            cout << "Input d2 belah ketupat: ";
            cin >> d2;
            luas = 0.5*d1*d2;
            cout << "Luas Belah Ketupat: " << luas << endl;
            break;
        case 7:
            // sama kayak kasus case 5
            cout << "Input d1 Layang-layang: ";
            cin >> d1;
            cout << "Input d2 Layang-layang: ";
            cin >> d2;
            luas = 0.5*d1*d2;
            cout << "Luas Layang-layang: " << luas << endl;
            break;
        case 8:
            int r;
            cout << "Input Jari-jari Lingkaran: ";
            cin >> r;
            luas = 3.14*r*r;
            cout << "Luas Lingkaran: " << luas << endl;

        default:
            cout << "Pilih angka di yang ada di list \n";
        break;
        }
        cout << endl ;
        cout << "Ingin mencoba menggunakan Rumus yang lain? [y/t]" ;
        cin >> answer ;
        cout << endl;
    }
        while (answer != 't') ;
        cout << "Terima kasih telah mencoba " ;
// do...while
    return 0;
}
