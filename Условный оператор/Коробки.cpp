/*Есть две коробки, первая размером A1×B1×C1, вторая размером A2×B2×C2. 
Определите, можно ли разместить одну из этих коробок внутри другой, при условии, что поворачивать коробки можно только на 90 градусов вокруг ребер.

Программа получает на вход числа A1, B1, C1, A2, B2, C2.
Программа должна вывести одну из следующих строчек:
Boxes are equal, если коробки одинаковые,
The first box is smaller than the second one, если первая коробка может быть положена во вторую,
The first box is larger than the second one, если вторая коробка может быть положена в первую,
Boxes are incomparable, во всех остальных случаях.*/

#include <iostream>
using namespace std;
int main() {
  int A1, B1, C1, A2, B2, C2;
    cin >>A1>>B1>>C1>>A2>>B2>>C2;
    if (A1 > B1) {
        swap(A1,B1);
    }
    if (C1 < B1) {
        swap(C1,B1);
    }
    if (B1 < A1) {
        swap(B1,A1);
    }
    //cout<<A1<<B1<<C1<<endl;
    if (A2 > B2) {
        swap(A2,B2);
    }
    if (C2 < B2) {
        swap(C2,B2);
    }
    if (B2 < A2) {
        swap(B2,A2);
    }
    //cout<<A2<<B2<<C2<<endl;
    if (A1-A2==0 && B1-B2==0 && C1-C2==0)
        cout<<"Boxes are equal";
    else if (A1-A2<=0 && B1-B2<=0 && C1-C2<=0)
        cout<<"The first box is smaller than the second one";
    else if (A1-A2>=0 && B1-B2>=0 && C1-C2>=0)
        cout<<"The first box is larger than the second one";
    else
        cout<<"Boxes are incomparable";
  return 0;
}