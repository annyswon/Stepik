/*Длина Московской кольцевой автомобильной дороги —109 километров. 
Байкер Вася стартует с нулевого километра МКАД и едет со скоростью V километров в час. 
На какой отметке он остановится через T часов?
Программа получает на вход целые числа V и T. Если V > 0, то Вася движется в положительном направлении по МКАД, если же значение V < 0, то в отрицательном. 
0 ≤ T ≤ 1000, -1000 ≤ V ≤ 1000
Программа должна вывести целое число от 0 до 108 — номер отметки, на которой остановится Вася.*/

#include <iostream>
using namespace std;
int main() {
  int V,T;
  cin >> V >> T;
  cout << (109+(V*T)%109)%109;
  return 0;
}