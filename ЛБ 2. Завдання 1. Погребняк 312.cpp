#include <iostream>

using namespace std;

int main() {
    // �������� ������� ������, �� ������� � ������� ����
    int N;
    cout << "Vvedite secundi s nachala sutok: ";
    cin >> N;

    // ���������� ������� ������, �� ������� � ������� �������� ������
    int secondsSinceLastHour = N % 3600;

    // ��������� ����������
    cout << "Kolichestvo secund s nachala chasa: " << secondsSinceLastHour << endl;

    return 0;
}