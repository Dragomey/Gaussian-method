#include <iostream>
#include <vector>

using namespace std;

vector <vector<int>> equ (1, vector <int> (1, 0));

int f_cin (int n){
    vector <vector<int>> gf (n, vector <int> (n + 1, 1));
    equ = gf;

}
int f_cin_step (int n){
    return 0;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int num;
    char nothing;
    cout << "������! ��� ���������, ������� ��������� ������ �������, � ������� ������ ��������� ����� ��� ax+by+cz=m. \n ������ ���, ����� ������� �����-�� ��������, ����� ����� ������� Enter.  ����� ����� ��������� ���, ����� ����������� ������ ���� � ����� � ��� �� �������.  ����� ����������� ����� ���� �� ������ �����, �� � ������. ����� ��������� ��� ��������. ���������� ��������� � ���������� ������ ���� ���������." << endl;
    //���� ������ Enter
    cout << "������� ���������� ���������� (�������� �� 1 �� 4)" << endl;
    cin >> num;
    cout << "������� ��������� ����� Enter" << endl;
    f_cin(num);

    return 0;
}
