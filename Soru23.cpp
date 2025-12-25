#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N;   // kac terim yazdirilacak

    int a = 0, b = 1, temp;

    if(N >= 1)
        cout << a << " ";

    if(N >= 2)
        cout << b << " ";

    for(int i = 3; i <= N; i++) {
        temp = a + b;   // yeni sayi
        cout << temp << " ";
        a = b;          // kaydirma
        b = temp;
    }

    return 0;
}
