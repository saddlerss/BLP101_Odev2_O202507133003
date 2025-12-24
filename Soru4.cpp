#include <iostream>
using namespace std;

int main() {
    int vize, final;
    double ortalama;
    cin >> vize >> final;
    ortalama = vize * 0.4 + final * 0.6;
//vize ve final notunun yüzdesine göre harf notu aldırıyorum
    if (ortalama >= 90) {
        cout << "Harf Notu: AA";
    }else if (ortalama >= 85) {
        cout << "Harf Notu: BA";
    }else if (ortalama >= 80) {
        cout << "Harf Notu: BB";
    }else if (ortalama >= 50) {
        cout << "Harf Notu: Gecer";
    }else {
        cout << "Harf Notu: Kaldi";
    }
    return 0;
}
