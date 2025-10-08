// 103112430052_Dina Nadhyfa

#include <iostream>
using namespace std;

// untuk menampilkan pola segitiga angka
void segitiga(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah baris: ";
    cin >> n;

    cout << "\npola segitiga angka:" << endl;
    segitiga(n);

    return 0;
}