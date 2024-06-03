# praktikum 1
```
#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
    private:
      int nrp;
};

 
class fakultas {
    public:
      int kode;
};

int main() {
    // mahasiswa mhs
    fakultas fkl;
    // mhs.nrp = 12345
    fkl.kode = 22;
    // std::cout <<"NRP"<<mhs.nrp<<
    cout <<"kode : "<<fkl.kode<<endl;

    return 0;
}
```
# output
![Screenshot (22)](https://github.com/kayla0204/TugasProgram/assets/98437578/4ea8fd32-6e3f-4311-bb39-37922db77607)

# praktikum 2
```
#include <iostream>
#include <string>

class Mahasiswa {

private:
    int nrp;

public:
int getNrp(){
    return nrp;
}

void setNrp(int a){
    nrp = a;

  }
};
class Fakultas {
public:
     int kode;

     
};

int main() {
    Mahasiswa mhs;
    Fakultas fkl;

    mhs.setNrp(12345);
    fkl.kode = 22;

    std::cout << "NRP: " << mhs.getNrp()<< std::endl;
    std::cout << "Kode: " << fkl.kode << std::endl;

    return 0;
}
```
# ouput
![Screenshot (23)](https://github.com/kayla0204/TugasProgram/assets/98437578/4af8167f-b737-40a0-b910-9577b21b2fc4)
