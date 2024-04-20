coding
```

#include <iostream>
#include <string>
using namespace std;

// Definisi struktur Tanaman
struct Tanaman {
    string nama;
    int hargaPerKg;
    int jumlahPanenTahunan;
};

// Definisi struktur Hewan
struct Hewan {
    string nama;
    int jumlah;
    int hargaPerEkor;
};

// Definisi struktur Petani
struct Petani {
    string nama;
    int usia;
    int pendapatanTahunan;
};

// Fungsi untuk memasukkan informasi ke dalam struktur Tanaman
void inputTanaman(Tanaman &tanaman) {
    cout << "Masukkan nama tanaman: ";
    getline(cin, tanaman.nama);
    cout << "Masukkan harga per kilogram: $";
    cin >> tanaman.hargaPerKg;
    cout << "Masukkan jumlah panen tahunan (kg): ";
    cin >> tanaman.jumlahPanenTahunan;
    cin.ignore(); // Membersihkan buffer
}

// Fungsi untuk menampilkan informasi dari struktur Tanaman
void outputTanaman(Tanaman tanaman) {
    cout << "Informasi Tanaman:" << endl;
    cout << "Nama: " << tanaman.nama << endl;
    cout << "Harga per Kilogram: $" << tanaman.hargaPerKg << endl;
    cout << "Jumlah Panen Tahunan: " << tanaman.jumlahPanenTahunan << " kg" << endl;
}

// Fungsi untuk memasukkan informasi ke dalam struktur Hewan
void inputHewan(Hewan &hewan) {
    cout << "Masukkan nama hewan: ";
    getline(cin, hewan.nama);
    cout << "Masukkan jumlah hewan: ";
    cin >> hewan.jumlah;
    cout << "Masukkan harga per ekor: $";
    cin >> hewan.hargaPerEkor;
    cin.ignore(); // Membersihkan buffer
}

// Fungsi untuk menampilkan informasi dari struktur Hewan
void outputHewan(Hewan hewan) {
    cout << "Informasi Hewan:" << endl;
    cout << "Nama: " << hewan.nama << endl;
    cout << "Jumlah: " << hewan.jumlah << " ekor" << endl;
    cout << "Harga per Ekor: $" << hewan.hargaPerEkor << endl;
}

// Fungsi untuk memasukkan informasi ke dalam struktur Petani
void inputPetani(Petani &petani) {
    cout << "Masukkan nama petani: ";
    getline(cin, petani.nama);
    cout << "Masukkan usia petani: ";
    cin >> petani.usia;
    cout << "Masukkan pendapatan tahunan petani: $";
    cin >> petani.pendapatanTahunan;
    cin.ignore(); // Membersihkan buffer
}

// Fungsi untuk menampilkan informasi dari struktur Petani
void outputPetani(Petani petani) {
    cout << "Informasi Petani:" << endl;
    cout << "Nama: " << petani.nama << endl;
    cout << "Usia: " << petani.usia << " tahun" << endl;
    cout << "Pendapatan Tahunan: $" << petani.pendapatanTahunan << endl;
}

int main() {
    // Contoh data untuk setiap struktur
    Tanaman tanaman1;
    inputTanaman(tanaman1);

    Hewan hewan1;
    inputHewan(hewan1);

    Petani petani1;
    inputPetani(petani1);

    // Menampilkan informasi dari setiap struktur
    outputTanaman(tanaman1);
    cout << endl;
    outputHewan(hewan1);
    cout << endl;
    outputPetani(petani1);

    // Output tambahan
    int nilai[] = {2, 5, 3, 2, 4};
    for (int i = 0; i < 5; i++) {
        if (i != 0) cout << " ";
        cout << "Nilai dari index-" << i << ": " << nilai[i];
        if (i != 4) cout << " ";
    }

    return 0;
}

```
hasil output

```
![Screenshot (10)](https://github.com/kayla0204/TugasProgram/assets/98437578/6c430ca3-452f-4232-84ae-baac7a5b5dc9)

