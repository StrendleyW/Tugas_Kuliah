#include <iostream>
#include <string>
#include <cstdlib> // untuk menggunakan stoi
using namespace std;

int masaajaran, tahunsekarang, digittahunajaran, thnmasuk;
string npm, digit20 = "20";
bool confirm;

void CekNPM()
{
    if (digittahunajaran < 2003 || digittahunajaran > tahunsekarang)
    {
        cout << "NPM tidak ditemukan." << endl;
        confirm = false;
    }
    else
    {
        if (digittahunajaran < 2017)
        {
            cout << "Anda sudah lulus" << endl;
            confirm = true;
        }
    }}

void CekFasilkom() {
    if (npm[3] == '8') {
        switch (npm[4]) {
            case '1':
                cout << "Informatika";
                break;

            case '2':
                cout << "Sistem Informasi";
                break;

            case '3':
                cout << "Sains Data";
                break;

            case '4':
                cout << "Bisnis Digital";
                break;

            default:
                cout << "Bukan program studi yang dikenal";
                break;
        }
        cout << endl;

        masaajaran = tahunsekarang - digittahunajaran;
        cout << "Informasi: masa ajaran anda sudah " << masaajaran << " tahun." << endl;
        confirm = true;
    } else {
        confirm = false;
        cout << "Bukan fasilkom" << endl;
    }
}

int main()
{
    cout << "Masukkan NPM: ";
    cin >> npm;
    thnmasuk = stoi(npm.substr(0, 2)); // Mengambil karakter pertama dan kedua dari npm
    string tahunajaran = digit20 + to_string(thnmasuk);
    cout;
    digittahunajaran = stoi(tahunajaran);
    tahunsekarang = 2023;

    CekNPM();
    CekFasilkom();

    return 0; // Tambahkan ini untuk mengindikasikan keluar dari program dengan sukses
}
