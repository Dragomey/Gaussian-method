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
    cout << "Привет! Это программа, которая позволяет решать системы, в которой каждое уравнение имеет вид ax+by+cz=m. \n Каждый раз, когда вводишь какое-то значение, после ввода нажимай Enter.  Также вводи уравнения так, чтобы неизвестные всегда были в одном и том же порядке.  Между переменными могут быть не только плюсы, но и минусы. Вводи уравнение без пробелов. Количество уравнений и переменных должно быть одинаково." << endl;
    //Ввод просле Enter
    cout << "Введите количество переменных (Значение от 1 до 4)" << endl;
    cin >> num;
    cout << "Введите уравнения через Enter" << endl;
    f_cin(num);

    return 0;
}
