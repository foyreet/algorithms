#include <vector>
#include <iostream>

// Функция для слияния двух отсортированных массивов и подсчета инверсий
std::pair<std::vector<int>, long long> merge_and_count(std::vector<int> &left, std::vector<int> &right) {
    std::vector<int> result;  // Результирующий массив после слияния
    long long inv_count = 0;        // Счетчик инверсий

    size_t i = 0, j = 0;      // Индексы для прохода по левому и правому массивам
    while (i < left.size() && j < right.size()) {  // Пока не закончился один из массивов
        if (left[i] <= right[j]) {                 // Если текущий элемент левого массива меньше или равен текущему элементу правого
            result.push_back(left[i]);             // Добавляем элемент из левого массива в результирующий
            ++i;                                  // Переходим к следующему элементу левого массива
        } else {                                  // Если текущий элемент правого массива меньше текущего элемента левого
            result.push_back(right[j]);            // Добавляем элемент из правого массива в результирующий
            inv_count += left.size() - i;         // Увеличиваем счетчик инверсий на количество оставшихся элементов в левом массиве
            ++j;                                  // Переходим к следующему элементу правого массива
        }
    }

    // Добавляем оставшиеся элементы из левого массива
    while (i < left.size()) {
        result.push_back(left[i]);
        ++i;
    }

    // Добавляем оставшиеся элементы из правого массива
    while (j < right.size()) {
        result.push_back(right[j]);
        ++j;
    }

    return {result, inv_count};  // Возвращаем результирующий массив и количество инверсий
}

// Рекурсивная функция сортировки слиянием и подсчета инверсий
std::pair<std::vector<int>, long long> merge_sort_and_count(const std::vector<int>& arr) {
    if (arr.size() <= 1) {  // Если массив состоит из одного элемента или пустой, он уже отсортирован
        return {arr, 0LL};    // Возвращаем массив без изменений и ноль инверсий
    }

    size_t mid = arr.size() / 2;  // Находим середину массива
    std::vector<int> left(arr.begin(), arr.begin() + mid);   // Левая половина массива
    std::vector<int> right(arr.begin() + mid, arr.end());    // Правая половина массива

    // Рекурсивно сортируем левую и правую половину и подсчитываем инверсии в каждой
    auto [sorted_left, left_inv] = merge_sort_and_count(left);
    auto [sorted_right, right_inv] = merge_sort_and_count(right);

    // Сливаем отсортированные половины и подсчитываем инверсии между ними
    auto [merged, split_inv] = merge_and_count(sorted_left, sorted_right);

    // Общее количество инверсий — сумма инверсий в левой половине, правой половине и при слиянии
    long long total_inv = left_inv + right_inv + split_inv;

    return {merged, total_inv};  // Возвращаем отсортированный массив и общее количество инверсий
}

// Функция для подсчета инверсий в массиве
long long count_inversions(const std::vector<int>& arr) {
    auto [sorted_arr, inv_count] = merge_sort_and_count(arr);  // Получаем отсортированный массив и количество инверсий
    return inv_count;  // Возвращаем только количество инверсий
}