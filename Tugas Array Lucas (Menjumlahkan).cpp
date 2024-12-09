#include <iostream>

using namespace std;

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    // Menghitung jumlah semua elemen
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    // Menghitung rata-rata
    double average = (double)sum / n;

    cout << "Rata-rata: " << average << endl;

    return 0;
}