#include "counting_sort.h"

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










