// fichero radixsort.cpp
#include <iostream>  
#include <vector>    
#include <algorithm> 
#include <cmath>     
#include <cstdlib>   

template <typename T>
T getMax(const std::vector<T>& arr) {
    return *std::max_element(arr.begin(), arr.end());
}
//Algoritmo Counting Sort estable.
template <typename T>
void countingSort(std::vector<T>& arr, int exp) {
    int n = arr.size();

    std::vector<T> output(n);
    std::vector<int> count(10, 0); 
    for (int i = 0; i < n; i++) {
        count[(arr[i] / exp) % 10]++;
    }
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }
    arr = output;
}
//Implementación de RadixSort
template <typename T>
void radixSort(std::vector<T>& arr) {
    if (arr.empty()) return;

    T max = getMax(arr);
    for (int exp = 1; max / exp > 0; exp *= 10) {
        countingSort(arr, exp);
    }
}
int main() {
    
    std::vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};
    std::cout << "Array original:\n";
    for (int x : arr) {std::cout << x << " ";}
    std::cout << "\n";
    radixSort(arr);
    std::cout << "\nArray ordenado:\n";
    for (int x : arr) {std::cout << x << " ";}
    std::cout << "\n";
    return EXIT_SUCCESS;
}