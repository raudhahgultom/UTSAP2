#include <iostream>

using namespace std;

// Fungsi untuk menghitung jumlah kuadrat bilangan ganjil dari 1 hingga n
int jumlahKuadratBilanganGanjil(int n) {
    int sum = 0;
    
    // Perulangan untuk menambahkan kuadrat bilangan ganjil
    for (int i = 1; i <= n; i += 2) {
        sum += i * i; // Menambahkan kuadrat bilangan ganjil ke dalam jumlah
    }
    
    return sum;
}

int main() {
    int n;
    
    // Meminta pengguna untuk memasukkan nilai n
    cout << "Masukkan nilai n: ";
    cin >> n;
    
    // Memeriksa apakah n positif
    if (n <= 0) {
        cout << "Masukkan nilai n harus lebih besar dari 0." << endl;
        return 1; // Keluar dari program dengan status kesalahan
    }
    
    // Menghitung jumlah kuadrat bilangan ganjil dari 1 hingga n
    int hasil = jumlahKuadratBilanganGanjil(n);
    
    // Menampilkan hasil
    cout << "n : " << n << " = " << hasil << endl;

    return 0;
}