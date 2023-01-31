#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void hanoi(int n, stack<int>& origen, stack<int>& auxiliar, stack<int>& destino) {
    if (n > 0) {
        hanoi(n - 1, origen, destino, auxiliar);
        destino.push(origen.top());
        origen.pop();
        hanoi(n - 1, auxiliar, origen, destino);
    }
}

int main() {
    int n;
    cout << "Introduce el numero de discos: ";
    cin >> n;
    stack<int> origen, auxiliar, destino;
    for (int i = n; i > 0; i--)
        origen.push(i);
    hanoi(n, origen, auxiliar, destino);
    cout << "La secuencia de movimientos es: " << endl;
    while (!destino.empty()) {
        cout << destino.top() << endl;
        destino.pop();
    }
    return 0;
}
