#include <iostream>
#include <string>
#include <map>

std::string haribesok(const std::string& hari_sekarang) {
    std::map<std::string, std::string> hari = {
        {"senin", "selasa"}, {"selasa", "rabu"}, {"rabu", "kamis"}, {"kamis", "jumat"}, {"jumat", "sabtu"}, {"sabtu", "minggu"}, {"minggu", "senin"}
    };
    auto it = hari.find(hari_sekarang);
    if (it != hari.end()) {
        return it->second;
    }
    return "Hari yang tidak valid";
}

int main() {
    std::string hari_sekarang;
    std::cout << "Masukan nama hari dalam seminggu (senin-minggu): ";
    std::cin >> hari_sekarang;
    std::string hari_besok = haribesok(hari_sekarang);
    std::cout << "Hari selanjutnya adalah: " << hari_besok << std::endl;
    return 0;
}
