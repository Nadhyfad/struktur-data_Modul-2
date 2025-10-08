// 103112430052_Dina Nadhyfa

#include <iostream>
using namespace std;

// Fungsi untuk menghitung rata-rata nilai
float rataRata(int nilai[], int n) {
    float jumlah = 0;
    for (int i = 0; i < n; i++) {
        jumlah += nilai[i];
    }
    return jumlah / n;
}

// Fungsi untuk mencari nilai tertinggi dan terendah
void cariNilai(int nilai[], int n, int &maks, int &min) {
    maks = nilai[0];
    min = nilai[0];
    for (int i = 1; i < n; i++) {
        if (nilai[i] > maks)
            maks = nilai[i];
        if (nilai[i] < min)
            min = nilai[i];
    }
}

int main() {
    int N;
    cout << "Masukkan jumlah siswa: ";
    cin >> N;

    int nilai[N];
    cout << "Masukkan nilai ujian untuk " << N << " siswa:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Nilai siswa ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    float rata = rataRata(nilai, N);
    int maks, min;
    cariNilai(nilai, N, maks, min);

    cout << "\n=== Hasil Perhitungan ===" << endl;
    cout << "Rata-rata kelas : " << rata << endl;
    cout << "Nilai tertinggi : " << maks << endl;
    cout << "Nilai terendah  : " << min << endl;

    return 0;
}