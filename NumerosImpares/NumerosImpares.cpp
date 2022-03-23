
#include <iostream>
using namespace std;

int main(){

    int x, n;

    cout << "Ingrese un numero" << endl;
    cin >> n;

    cout << "Los numeros impares son:" << endl;

    for (x = 1;x < n;x += 2) {
        cout << x << endl;
    }

    if (n % 2 == 0) {

    }else {
        cout << n << endl;
    }
}