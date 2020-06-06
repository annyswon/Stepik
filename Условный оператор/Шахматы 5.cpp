/*Шахматный конь ходит буквой “Г” — на две клетки по вертикали в любом направлении и на одну клетку по горизонтали, или наоборот. 
Даны две различные клетки шахматной доски, определите, может ли конь попасть с первой клетки на вторую одним ходом.

Программа получает на вход четыре числа от 1 до 8 каждое, задающие номер столбца и номер строки сначала для первой клетки, потом для второй клетки.
Программа должна вывести YES, если из первой клетки ходом коня можно попасть во вторую или NO в противном случае.*/

#include <iostream>
using namespace std;
int main() {
  int a,b,c,d;
  cin >>a>>b>>c>>d;
  if ((a-c)*(a-c)+(b-d)*(b-d)==5)
      cout<<"YES";
  else
      cout<<"NO";
  return 0;
}