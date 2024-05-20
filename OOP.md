#Robot
```
#include <iostream>
using namespace std;

// Deklarasi kelas
class Robot {
public:
    string nama;
    int umur;
    string mbti;

    // Metode untuk menampilkan informasi
    void perkenalandiri() {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
        cout << "mbti: " << mbti << endl;
        
    }
};

int main() {
    // Membuat objek dari kelas Manusia
    Robot r1;
    Robot r2;

    // Memberi nilai atribut objek
    r1.nama = "Chan";
    r1.umur = 25;
    r1.mbti = "ISTJ";

    r2.nama = "jen";
    r2.umur = 25;
    r2.mbti = "INFJ";
 
    // Memanggil metode untuk menampilkan informasi
    r1.perkenalandiri();
    r2.perkenalandiri();

    return 0;
}

```
#mobil
```
#include <iostream>
using namespace std;

// Deklarasi kelas
class Mobil {
public:
    string merk;
    string model;
    int umur;
    string warna;
    string info;

    // Metode untuk menampilkan informasi
    void tampilkaninfomobil() {
        cout << "Merk: " << merk << endl;
        cout << "Model: " << model << endl;
        cout << "Umur: " << umur << endl;
        cout << "Warna: " << warna << endl;
    }
};  

int main() {
    // Membuat objek dari kelas mobil
    Mobil mobil1;
    Mobil mobil2;

    // Memberi nilai atribut objek
    mobil1.merk = "porsche";
    mobil1.model = "911 Dakar";
    mobil1.umur = 2 ;
    mobil1.warna = "hitam";

    mobil2.merk = "hyundai";
    mobil2.model = "stargazer X";
    mobil2.umur = 4 ;
    mobil2.warna = "putih";
 
    // Memanggil metode untuk menampilkan informasi
    mobil1.tampilkaninfomobil();
    mobil2.tampilkaninfomobil();

    return 0; 
};

```
output robot
![Screenshot (17)](https://github.com/kayla0204/TugasProgram/assets/98437578/55e2a2cf-6990-4ce9-b00b-d08b523633a9)

output mobil
![Screenshot (19)](https://github.com/kayla0204/TugasProgram/assets/98437578/2ee5664d-abb5-4a09-9fa3-3d010e212faf)

