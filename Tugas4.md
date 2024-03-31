Coding
```

#include <iostream>
using namespace std;

int main() {
    int matriks_a[2][2] = {{1, 2}, {3, 4}};
    int matriks_b[2][2] = {{5, 6}, {7, 8}};
    int hasil_jumlah[2][2];

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            hasil_jumlah[i][j] = matriks_a[i][j] + matriks_b[i][j];
        }
    }

    cout << "Matriks A = " << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << matriks_a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Matriks B = " << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << matriks_b[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Hasil penjumlahan matriks A dan B adalah = " << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << hasil_jumlah[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


```
Hasil Ouput
![Screenshot (8)](https://github.com/kayla0204/TugasProgram/assets/98437578/359796ec-087c-430d-8da3-2b7fa722facb)

