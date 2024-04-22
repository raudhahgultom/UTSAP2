#include <iostream>
#include <string>

using namespace std;

int main() {
    // Deklarasi variabel
    int pilihan;
    string presiden;

    // Menampilkan daftar calon presiden
    cout << "Daftar Calon Presiden:" << endl;
    cout << "1. Soekarno" << endl;
    cout << "2. Soeharto" << endl;
    cout << "3. Bj. Habibie" << endl;
    // Tambahkan calon presiden lainnya di sini sesuai kebutuhan

    // Meminta pengguna untuk memasukkan pilihan
    cout << "Masukkan Pilihan Presiden anda: ";
    cin >> pilihan;

    // Memilih presiden berdasarkan pilihan pengguna
    switch (pilihan) {
        case 1:
            presiden = "Soekarno";
            break;
        case 2:
            presiden = "Soeharto";
            break;
        case 3:
            presiden = "Bj. Habibie";
            break;
        // Tambahkan case untuk calon presiden lainnya di sini sesuai kebutuhan
        default:
            presiden = "Tidak ada"; // Pesan default jika pilihan tidak valid
            break;
    }

    // Menampilkan hasil pemilihan
    cout << "Pilihan anda telah disimpan, pilihan anda adalah " << pilihan << ". " << presiden << endl;

    return 0;
}