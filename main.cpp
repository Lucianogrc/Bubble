#include <iostream>
#include <vector>

using namespace std;

void Intercambio(int &A, int &B) {
    int temp = A;
    A = B;
    B = temp;
}

void bubblesort(vector<int> &vec) {
    int n = vec.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (vec[j] > vec[j + 1]) {
                swap (vec[j], vec [j+1]);
            }
        }
    }
}

int main() {
    vector<int> vec;

    cout << "Introduce unas 6 calificaciones aqui: ";
    for (int i = 0; i < 6; i++) {
        int cali;
        cin >> cali;
        vec.push_back(cali);
    }

    bubblesort(vec);
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }

    return 0;
}