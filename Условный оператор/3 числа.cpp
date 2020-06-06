/*Дано три числа. Упорядочите их в порядке неубывания.

Вводятся три числа.
Выведите ответ на задачу.*/

#include <iostream>
using namespace std;
int main() {
  int a, b, c;
    cin >> a >> b >> c;
    if (a > b) {
        swap(a,b);
    }
    if (c < b) {
        swap(c,b);
    }
    if (b < a) {
        swap(b,a);
    }
    cout << a << " " << b << " " << c;
  return 0;
}