#include <iostream>

// Deklarasi fungsi
double menghitungLuasPersegiPanjang(double panjang, double lebar);
double menghitungKelilingPersegiPanjang(double panjang, double lebar);

int main() {
    // Meminta pengguna memasukkan panjang, lebar persegi panjang
    double panjang;
    std::cout << "Masukkan panjang persegi panjang: ";
    std::cin >> panjang;

    double lebar;
    std::cout << "Masukkan lebar persegi panjang: ";
    std::cin >> lebar;

    // Memanggil fungsi untuk menghitung luas dan keliling lingkaran
    double luas = menghitungLuasPersegiPanjang (panjang, lebar);
    double keliling = menghitungKelilingPersegiPanjang(panjang, lebar);

    // Menampilkan hasil
    std::cout << "Luas persegi panjang: " << luas << std::endl;
    std::cout << "Keliling persegi panjang: " << keliling << std::endl;

    return 0;
}

// Implementasi fungsi menghitung luas lingkaran
double menghitungLuasPersegiPanjang(double panjang, double lebar) {
    return panjang*lebar;
}

// Implementasi fungsi menghitung keliling lingkaran
double menghitungKelilingPersegiPanjang(double panjang, double lebar) {
    return 2*(panjang+lebar);
}