# OOP Robot
```
#include <iostream>
using namespace std;

// Deklarasi kelas
class Robot {
private:
    string nama;
    int umur;
    string mbti;

public:
    // Setter methods
    void setNama(string n) {
        nama = n;
    }

    void setUmur(int u) {
        umur = u;
    }

    void setMbti(string m) {
        mbti = m;
    }

    // Getter methods
    string getNama() {
        return nama;
    }

    int getUmur() {
        return umur;
    }

    string getMbti() {
        return mbti;
    }

    // Metode untuk menampilkan informasi
    void perkenalandiri() {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
        cout << "MBTI: " << mbti << endl;
    }
};

int main() {
    // Membuat objek dari kelas Robot
    Robot r1;
    Robot r2;

    // Memberi nilai atribut objek menggunakan setter methods
    r1.setNama("Chan");
    r1.setUmur(25);
    r1.setMbti("ISTJ");

    r2.setNama("Jen");
    r2.setUmur(25);
    r2.setMbti("INFJ");

    // Memanggil metode untuk menampilkan informasi
    r1.perkenalandiri();
    r2.perkenalandiri();

    return 0;
}
```
# Output
![Screenshot (18)](https://github.com/kayla0204/TugasProgram/assets/98437578/6e2834d9-6e51-479c-a12f-3d4aeb873cf2)

# OOP Mobil
```
#include <iostream>
using namespace std;

// Deklarasi kelas
class Mobil {
private:
    string merk;
    string model;
    int umur;
    string warna;

public:
    // Setter methods
    void setMerk(string m) {
        merk = m;
    }

    void setModel(string m) {
        model = m;
    }

    void setUmur(int u) {
        umur = u;
    }

    void setWarna(string w) {
        warna = w;
    }

    // Getter methods
    string getMerk() {
        return merk;
    }

    string getModel() {
        return model;
    }

    int getUmur() {
        return umur;
    }

    string getWarna() {
        return warna;
    }

    // Metode untuk menampilkan informasi
    void tampilkaninfomobil() {
        cout << "Merk: " << merk << endl;
        cout << "Model: " << model << endl;
        cout << "Umur: " << umur << endl;
        cout << "Warna: " << warna << endl;
    }
};

int main() {
    // Membuat objek dari kelas Mobil
    Mobil mobil1;
    Mobil mobil2;

    // Memberi nilai atribut objek menggunakan setter methods
    mobil1.setMerk("Porsche");
    mobil1.setModel("911 Dakar");
    mobil1.setUmur(2);
    mobil1.setWarna("Hitam");

    mobil2.setMerk("Hyundai");
    mobil2.setModel("Stargazer X");
    mobil2.setUmur(4);
    mobil2.setWarna("Putih");

    // Memanggil metode untuk menampilkan informasi
    mobil1.tampilkaninfomobil();
    mobil2.tampilkaninfomobil();

    return 0;
}
```
# Output
![Screenshot (19)](https://github.com/kayla0204/TugasProgram/assets/98437578/f47b9b54-3912-4b3b-9fdf-4979a568c63f)

