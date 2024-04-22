#include <iostream>
#include <cstdlib> // Library untuk menggunakan fungsi system("CLS")
#include <string> // Library untuk menggunakan tipe data string

using namespace std; // Menggunakan namespace std untuk kemudahan penggunaan

int main() {
    system("CLS"); // Menggunakan system("CLS") untuk membersihkan layar

    string a; // Mendeklarasikan variabel 'a' sebagai string untuk menyimpan input

    // Label 'umur' untuk digunakan dalam goto
    umur:
    
    // Meminta pengguna untuk menebak umur
    cout << "Tebak Umur Saya: ";
    cin >> a; // Menggunakan operator >> untuk mengambil input dari pengguna

    // Menggunakan if-else untuk memeriksa jawaban
    if (a == "20") { // Menggunakan operator == untuk membandingkan nilai
        cout << "Jawaban Anda Benar" << endl;
    } else { // Tidak perlu kondisi di sini, cukup else saja
        cout << "Jawaban Salah, Coba Lagi..." << endl;
        goto umur; // Menggunakan goto untuk kembali ke label 'umur'
    }
    
    cout << "Program Selesai";

    return 0;
}