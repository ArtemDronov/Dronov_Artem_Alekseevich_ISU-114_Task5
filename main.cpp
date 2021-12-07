#include <iostream>
#include "FazzyNumber.h"
using namespace std;

int main(){
    double x, e1, e2;
    cout << "Enter A: " << endl;
    cout << "x = ";
    cin >> x;
    cout << "e1 = ";
    cin >> e1;
    cout << "e2 = ";
    cin >> e2;
    struct FazzyNumber A;
    A.a = x-e1;
    A.b = x;
    A.c = x+e2;

    cout << "Enter B: " << endl;
    cout << "x = ";
    cin >> x;
    cout << "e1 = ";
    cin >> e1;
    cout << "e2 = ";
    cin >> e2;
    struct FazzyNumber B;
    B.a = x-e1;
    B.b = x;
    B.c = x+e2;

    struct FazzyNumber C = del(A,B);
    cout << "C(" << C.a << ", " << C.b << ", " << C.c << ")";
    return 0;
}
