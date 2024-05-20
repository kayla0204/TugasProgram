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

![Screenshot (17)](https://github.com/kayla0204/TugasProgram/assets/98437578/55e2a2cf-6990-4ce9-b00b-d08b523633a9)
