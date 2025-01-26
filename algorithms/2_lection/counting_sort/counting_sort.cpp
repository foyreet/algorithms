#include <iostream>
#include <vector>
#include <limits>

// void create_vector - функция для создания и заполнения вектора
void create_vector(std::vector<int>& arr, int n);

// std::vector<int> cout_vector - функция для вывода вектора
void cout_vector(std::vector<int>& cnt, int m);

// int max_element - функция для нахождения максимального элемента в векторе
int max_element(std::vector<int>& arr, int n);

// int min_element - функция для нахождения минимального элемента в векторе
int min_element(std::vector<int>& arr, int n);

// void create_cnt - функция для заполнения массива cnt значениями
void create_cnt(std::vector<int>& arr, int n, std::vector<int>& cnt, int min_val);


int main() {
    std::vector<int> arr;
    int n;
    create_vector(arr, n);
    int max_arr = max_element(arr, n);
    int min_arr = min_element(arr, n);
    int size_cnt = max_arr - min_arr + 1;
    std::vector<int> cnt(size_cnt, 0);
    create_cnt(arr, n, cnt, min_arr);
}

void create_vector(std::vector<int>& arr, int n) {
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int value;
        std::cin >> value;
        arr.push_back(value);
    }
}

void cout_vector(std::vector<int>& cnt, int m) {
    for (int i = 0; i < m; i++) {
        std::cout << cnt[i] << " ";
    }
}

int max_element(std::vector<int>& arr, int n) {
    int max_val = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] >= max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

int min_element(std::vector<int>& arr, int n) {
    int min_val = std::numeric_limits<int>::max();
    for (int i = 0; i < n; i++) {
        if (arr[i] <= min_val) {
            min_val = arr[i];
        }
    }
    return min_val;
}

void create_cnt(std::vector<int>& arr, int n, std::vector<int>& cnt, int min_val) {
    for (int i = 0; i < n; i++) {
        cnt[arr[i] - min_val]++;
    }
}





