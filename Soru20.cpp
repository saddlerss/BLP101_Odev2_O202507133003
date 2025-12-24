#include <iostream>
using namespace std;

int main() {

    int sayi;

    cin >> sayi;   // sayiyi aliyorum

    // 1'den sayiya kadar bolenleri buluyorum
    for(int i = 1; i <= sayi; i++) {

        if(sayi % i == 0)
            cout << i << " ";
    }

    return 0;
}
