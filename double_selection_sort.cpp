#include <iostream>
#include <vector>

using namespace std;

// Функція для двостороннього сортування вибором
void doubleSelectionSort(vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int min_index = left;
        int max_index = right;

        // Знаходимо мінімум та максимум у поточному діапазоні
        for (int i = left; i <= right; i++) {
            if (arr[i] < arr[min_index]) {
                min_index = i;
            }
            if (arr[i] > arr[max_index]) {
                max_index = i;
            }
        }

        // Розміщуємо мінімум на лівому кінці
        swap(arr[left], arr[min_index]);

        // Якщо максимум був на місці мінімуму, оновлюємо його індекс
        if (max_index == left) {
            max_index = min_index;
        }

        // Розміщуємо максимум на правому кінці
        swap(arr[right], arr[max_index]);

        // Зсуваємо межі до середини
        left++;
        right--;
    }
}

// Функція для виведення масиву
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> numbers = {9, 4, 1, 7, 3, 6, 2, 8, 5};

    cout << "До сортування: ";
    printArray(numbers);

    doubleSelectionSort(numbers);

    cout << "Після сортування: ";
    printArray(numbers);

    return 0;
}
