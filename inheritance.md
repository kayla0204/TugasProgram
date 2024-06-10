# percobaan
```
#include <iostream>
#include <string>
using namespace std;

class Hewan{
    public:
        void predator(){
        cout<<"Hewan ini predator"<<endl;}
        void taring(){
        cout<<"Hewan ini bertaring"<<endl;}
        void cakar(){
        cout<<"Hewan ini memiliki cakar"<<endl;}
};
class Harimau:public Hewan {
    public:
        void HarimauInfo(){
        cout<<"Ini adalah Harimau"<<endl;}
};
class Singa:public Hewan {
    public:
        void SingaInfo(){
        cout<<"Ini adalah Singa"<<endl;}
};
class Macan:public Hewan {
    public:
        void MacanInfo(){
        cout<<"Ini adalah Macan"<<endl;}
};
int main () {
    Harimau harimau;
    harimau.HarimauInfo();
    harimau.predator();
    harimau.taring();
    harimau.cakar();
cout << endl;

    Singa singa;
    singa.SingaInfo();
    singa.predator();
    singa.taring();
    singa.cakar();

cout << endl;

    Macan macan;
    macan.MacanInfo();
    macan.predator();
    macan.taring();
    macan.cakar();

    return 0;
}
```
# output
![Screenshot (24)](https://github.com/kayla0204/TugasProgram/assets/98437578/bc1cd721-7211-4d13-b313-147baf2a3ac9)
# Tugas
```
#include <iostream>
#include <string>
using namespace std;

class Hewan{
    public:
        void predator(){
        cout<<"Hewan ini predator"<<endl;}
        void taring(){
        cout<<"Hewan ini bertaring"<<endl;}
        void cakar(){
        cout<<"Hewan ini memiliki cakar"<<endl;}
};
class Harimau:public Hewan {
    public:
        void predator(){
        cout<<"Ini adalah Harimau"<<endl;}
};
class Singa:public Hewan {
    public:
        void predator(){
        cout<<"Ini adalah Singa"<<endl;}
};
class Macan:public Hewan {
    public:
        void predator(){
        cout<<"Ini adalah Macan"<<endl;}
};
int main () {
    Harimau harimau;
    harimau.predator();
    //harimau.predator();
    harimau.taring();
    harimau.cakar();
cout << endl;

    Singa singa;
    singa.predator();
    //singa.predator();
    singa.taring();
    singa.cakar();

cout << endl;

    Macan macan;
    macan.predator();
    //macan.predator();
    macan.taring();
    macan.cakar();

    return 0;
}
```
# output
![Screenshot (25)](https://github.com/kayla0204/TugasProgram/assets/98437578/543af31e-6105-4124-bd88-f1dcf9b09db0)
# kesimpulan
```
Koding pertama menggunakan fungsi predator() dari kelas pertama, sehingga menghasilkan output yang sama.
koding kedua menggunakan fungsi predator() yang telah diubah disetiap kelas turunan
sehingga memberikan output yang berbeda di masing masing method.
