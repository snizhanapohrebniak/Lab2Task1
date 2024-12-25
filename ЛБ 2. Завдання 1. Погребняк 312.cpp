#include <iostream>

using namespace std;

int main() {
    // Введення кількості секунд, що пройшли з початку доби
    int N;
    cout << "Vvedite secundi s nachala sutok: ";
    cin >> N;

    // Обчислення кількості секунд, що пройшли з початку останньої години
    int secondsSinceLastHour = N % 3600;

    // Виведення результату
    cout << "Kolichestvo secund s nachala chasa: " << secondsSinceLastHour << endl;

    return 0;
}