// нахождение НОД(a, b)

#include <iostream>
int gcd(int a, int b) {
    while (b != 0) {
	int t = b;
	b = a % b;
	a = t;
    }
    return a;
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int a, b;
    std::cin >> a >> b;
    
    std::cout << "НОД: " << gcd(a, b) << '\n';
    std::cout << "НОК: " << lcm(a, b) << '\n';
}
