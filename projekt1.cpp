#include <iostream>
using namespace std;

int factorial(int n) {
    if (n < 0) return 0;
    if (n == 0) return 1;
    int wynik = 1;
    for (int i = 1; i <= n; i++) wynik *= i;
    return wynik;
}

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "1. Oblicz silnie" << endl;   
        cout << "2. Czy liczba jest pierwsza" << endl;  

        cin >> wyjscie;

        if (wyjscie == 1) {
            int x;
            cout << "Podaj liczbe: ";
            cin >> x;
            cout << "Silnia = " << factorial(x) << endl;
        }
        if (wyjscie == 2) {
            int x;
            cout << "Podaj liczbe: ";
            cin >> x;
            if (isPrime(x)) cout << "Liczba jest pierwsza";
            else cout << "Liczba nie jest pierwsza";
        }

    } while(wyjscie != 0);

    return 0;
}