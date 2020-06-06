/*Шоколадка имеет вид прямоугольника, разделенного на N×M долек. 
Шоколадку можно один раз разломить по прямой на две части. Определите, можно ли таким образом отломить от шоколадки ровно K долек.

Программа получает на вход три числа: N, M, K
Программа должна вывести одно из двух слов: YES или NO.*/

#include <iostream>
using namespace std;
int main() {
  int N, M, K;
  cin >> N >> M >> K;
  if (K < N*M && (K % N == 0 || K % M == 0))
        cout<<"YES";
  else
      cout<<"NO";
  return 0;
}