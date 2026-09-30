#include <iostream>
#include <vector>
using namespace std;

// Odd-Even Sort (Парно-непарне сортування)
void oddEvenSort(vector<int>& arr) {
    int n = arr.size();
    bool sorted = false;

    while (!sorted) {
        sorted = true;

        // Непарна фаза: порівнюємо елементи на позиціях (1, 2), (3, 4), (5, 6) ...
        for (int i = 1; i < n - 1; i += 2) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                sorted = false;
            }
        }

        // Парна фаза: порівнюємо елементи на позиціях (0, 1), (2, 3), (4, 5) ...
        for (int i = 0; i < n - 1; i += 2) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                sorted = false;
            }
        }
    }
}

int main() {
    vector<int> arr = {9, 4, 1, 7, 3, 6, 2, 8, 5};

    oddEvenSort(arr);

    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
