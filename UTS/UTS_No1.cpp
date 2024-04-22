#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Fungsi untuk menghitung nilai akhir dan mengembalikan nilai huruf
char hitung_nilai_akhir(float nilai_tugas, float nilai_quis, float nilai_uts, float nilai_uas) {
    // Menghitung nilai akhir
    float nilai_akhir = (nilai_tugas + nilai_quis + nilai_uts + nilai_uas) / 4;
    
    // Mengonversi nilai akhir ke dalam bentuk huruf
    if (nilai_akhir >= 85) {
        return 'A';
    } else if (nilai_akhir >= 80) {
        return 'A-';
    } else if (nilai_akhir >= 75) {
        return 'B+';
    } else if (nilai_akhir >= 70) {
        return 'B';
    } else if (nilai_akhir >= 65) {
        return 'B-';
    } else if (nilai_akhir >= 60) {
        return 'C+';
    } else if (nilai_akhir >= 55) {
        return 'C';
    } else if (nilai_akhir >= 40) {
        return 'D';
    } else {
        return 'E';
    }
}

// Fungsi untuk input data mahasiswa
void input_data_mahasiswa() {
    // Deklarasi variabel untuk menyimpan data mahasiswa
    string nama, nim, kom, matkul, dosen_pa;
    float nilai_tugas, nilai_quis, nilai_uts, nilai_uas;

    // Meminta pengguna untuk memasukkan data mahasiswa
    cout << "Masukkan nama: ";
    getline(cin, nama);
    cout << "Masukkan NIM: ";
    getline(cin, nim);
    cout << "Masukkan KOM: ";
    getline(cin, kom);
    cout << "Masukkan Mata Kuliah: ";
    getline(cin, matkul);
    cout << "Masukkan Nilai Tugas: ";
    cin >> nilai_tugas;
    cout << "Masukkan Nilai Quis: ";
    cin >> nilai_quis;
    cout << "Masukkan Nilai UTS: ";
    cin >> nilai_uts;
    cout << "Masukkan Nilai UAS: ";
    cin >> nilai_uas;
    cin.ignore(); // Membersihkan buffer agar tidak mempengaruhi input string berikutnya
    cout << "Masukkan Nama Dosen PA: ";
    getline(cin, dosen_pa);

    // Menghitung nilai akhir mahasiswa
    char nilai_huruf = hitung_nilai_akhir(nilai_tugas, nilai_quis, nilai_uts, nilai_uas);

    // Menampilkan data mahasiswa beserta capaian nilai huruf
    cout << "\nData Mahasiswa:" << endl;
    cout << "Nama: " << nama << endl;
    cout << "NIM: " << nim << endl;
    cout << "KOM: " << kom << endl;
    cout << "Mata Kuliah: " << matkul << endl;
    cout << "Nilai: " << nilai_huruf << endl;
    cout << "Dosen PA: " << dosen_pa << endl;
}

// Program Utama
int main() {
    // Memanggil fungsi untuk input data mahasiswa
    input_data_mahasiswa();
    return 0;
}