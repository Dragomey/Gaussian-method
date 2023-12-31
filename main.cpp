#include <iostream>
#include <vector>

using namespace std;

vector <vector<int>> equ (1, vector <int> (1, 0));


int f_cin_step (int n, int i){
    int cof;
    char sim;
    cin >> cof;
    equ[i][0] = cof;
    cin >> sim;
    for (int j = 1; j <= n; j++) {
        cin >> sim;
        if (sim == '-') {
            equ[i][j] *= -1;
        }
        cin >> cof;
        equ[i][j] *= cof;
        cin >> sim;
    }
    cin >> cof;
    equ[i][n+1] = cof;
    return 0;
}

int f_cin (int n){
    char k;
    int f;
    vector <vector<int>> gf (n, vector <int> (n + 1, 1));
    equ = gf;
    for (int i = 0; i < n; i++) {
        f_cin_step(n, i);
    }
    cin >> k;
    cin >> f;
    equ[n][
    return 0;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int num;
    cout << "Привет! Это программа, которая позволяет решать системы, в которой каждое уравнение имеет вид ax+by+cz=m.\nКаждый раз, когда вводишь какое-то значение, после ввода нажимай Enter.\nТакже вводи уравнения так, чтобы неизвестные всегда были в одном и том же порядке.\nМежду переменными могут быть не только плюсы, но и минусы. Вводи уравнение без пробелов.\nКоличество уравнений и переменных должно быть одинаково." << endl;
    cout << "Введите количество переменных (Значение от 1 до 4)" << endl;
    cin >> num;
    cout << "Введите уравнения через Enter" << endl;
    f_cin(num);
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num + 1; j++) {
            cout << equ[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
