#include <iostream>
#include <vector>
#include <limits>
#include <string>
#include <sstream>

// void create_vector - функция для создания и заполнения вектора
void create_vector(std::vector<int>& arr);

// std::vector<int> cout_vector - функция для вывода вектора
void cout_vector(std::vector<int>& cnt);

// int max_element - функция для нахождения максимального элемента в векторе
int max_element(std::vector<int>& arr, int n);

// int min_element - функция для нахождения минимального элемента в векторе
int min_element(std::vector<int>& arr, int n);

// void create_cnt - функция для заполнения массива cnt значениями
void create_cnt(std::vector<int>& arr, int n, std::vector<int>& cnt, int min_val);

// void restore_sorted_array - функция для восстановления отсортированного массива
void restore_sorted_array(const std::vector<int>& cnt, std::vector<int>& sorted_arr, int min_val);

int main() {
    std::vector<int> arr;
    create_vector(arr);
    int max_arr = max_element(arr, arr.size());
    int min_arr = min_element(arr, arr.size());
    int size_cnt = max_arr - min_arr + 1;
    std::vector<int> cnt(size_cnt, 0);
    create_cnt(arr, arr.size(), cnt, min_arr);
    std::vector<int> sorted_arr;
    restore_sorted_array(cnt, sorted_arr, min_arr);
    cout_vector(sorted_arr);
}

void create_vector(std::vector<int>& arr) {
    std::string line;
    std::getline(std::cin, line); // Считываем всю строку
    std::stringstream ss(line);
    int value;
    while (ss >> value) {
        arr.push_back(value);
    }
}

void cout_vector(std::vector<int>& cnt) {
    for (size_t i = 0; i < cnt.size(); i++) {
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

void restore_sorted_array(const std::vector<int>& cnt, std::vector<int>& sorted_arr, int min_val) {
    for (size_t i = 0; i < cnt.size(); i++) {
        for (int j = 0; j < cnt[i]; j++) {
            sorted_arr.push_back(i + min_val);
        }
    }
}



