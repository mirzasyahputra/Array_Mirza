#include <iostream>

using namespace std;

int main() {
    int arr[] = {4, 2, 7, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    // Menghitung jumlah semua elemen
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    cout << "Jumlah elemen: " << sum << endl;

    return 0;
}
