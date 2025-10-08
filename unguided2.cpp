// 103112430052_Dina Nadhyfa

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Masukkan jumlah elemen: ";
    cin >> N;

    int *ptr = new int[N]; // pointer ke array dinamis

    cout << "Masukkan " << N << " bilangan:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> *(ptr + i); // input lewat pointer aritmatika
    }

    int jumlah = 0;
    int maks = *ptr;
    int min = *ptr;

    // Proses perhitungan lewat pointer
    for (int i = 0; i < N; i++) {
        int nilai = *(ptr + i);
        jumlah += nilai;
        if (nilai > maks) maks = nilai;
        if (nilai < min) min = nilai;
    }

    cout << "\nHasil Perhitungan:" << endl;
    cout << "Jumlah = " << jumlah << endl;
    cout << "Maksimum = " << maks << endl;
    cout << "Minimum = " << min << endl;

    delete[] ptr; //menghapus memori

    return 0;
}