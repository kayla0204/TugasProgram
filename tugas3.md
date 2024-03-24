```coding

#include <iostream>
#include <string>

std::string haribesok(const std::string& hari_sekarang) {
    const int hari_dalam_minggu = 7;
    const std::string hari[hari_dalam_minggu] = {
        "senin", "selasa", "rabu", "kamis", "jumat", "sabtu", "minggu"
    };
    const std::string hari_besok[hari_dalam_minggu] = {
        "selasa", "rabu", "kamis", "jumat", "sabtu", "minggu", "senin"
    };

    for (int i = 0; i < hari_dalam_minggu; ++i) {
        if (hari_sekarang == hari[i]) {
            return hari_besok[i];
        }
    }

    std::cout << "Hari yang salah: " << hari_sekarang << std::endl;
    return "";
}

int main() {
    std::string hari_sekarang;
    std::cout << "Masukan nama hari dalam seminggu (senin-minggu): ";
    std::cin >> hari_sekarang;
    std::string hari_besok = haribesok(hari_sekarang);
    if (!hari_besok.empty()) {
        std::cout << "Hari selanjutnya adalah: " << hari_besok << std::endl;
    }
    return 0;
}


```Hasil pemrograman
![Screenshot (7)](https://github.com/kayla0204/TugasProgram/assets/98437578/7f380f16-8517-4d6f-ae35-6d3215ec49dd)
