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
![Screenshot (19)](https://github.com/kayla0204/TugasProgram/assets/98437578/e0d09b8a-e0f2-442b-a150-ce1546ec8976)
