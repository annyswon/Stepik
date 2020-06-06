/*Даны значения двух моментов времени, принадлежащих одним и тем же суткам: часы, минуты и секунды для каждого из моментов времени. 
Известно, что второй момент времени наступил не раньше первого. Определите, сколько секунд прошло между двумя моментами времени.
Программа на вход получает три целых числа: часы, минуты, секунды, задающие первый момент времени и три целых числа, задающих второй момент времени.
Выведите число секунд между этими моментами времени.*/

#include <iostream>
using namespace std;
int main() {
  int h1,m1,s1,h2,m2,s2;
  cin >>h1>>m1>>s1>>h2>>m2>>s2;
  cout <<(h2*3600+m2*60+s2)-(h1*3600+m1*60+s1);
  return 0;
}