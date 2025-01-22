#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int romanToInt(const string& s) {
    unordered_map<char, int> roman {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}
    };

    int total = 0;
    int prevValue = 0;

    for (int i = s.length() - 1; i >= 0; i--) {
        int currentValue = roman[s[i]];
        if (currentValue < prevValue) {
            total -= currentValue;
        } else {
            total += currentValue;
        }
        prevValue = currentValue;
    }

    return total;
}

// Функция для сравнения двух строк
bool compareStrings(const string& a, const string& b) {

    size_t spaceA = a.find(' ');
    size_t spaceB = b.find(' ');

    string firstWordA = a.substr(0, spaceA);
    string firstWordB = b.substr(0, spaceB);

    if (firstWordA != firstWordB) {
        return firstWordA < firstWordB;
    }

    string romanA = a.substr(spaceA + 1);
    string romanB = b.substr(spaceB + 1);

    int numA = romanToInt(romanA);
    int numB = romanToInt(romanB);

    return numA < numB;
}

void insertion_sort(vector<string>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        string key = arr[i];
        int j = i - 1;

        while (j >= 0 && compareStrings(key, arr[j])) {  // Лексикографическое сравнение
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    vector<string> s;
    for (int i = 0; i < n; i++) {
        string el;
        getline(cin, el);
        s.push_back(el);
    }

    insertion_sort(s);

    for (const string& str : s) {
        cout << str << endl;
    }
}