#include <iostream>
using namespace std;

struct FazzyNumber {
    double a;
    double b;
    double c;
};

struct FazzyNumber del(FazzyNumber A, FazzyNumber B) {
    struct FazzyNumber f;
    f.a = A.a / B.a;
    f.b = (A.a * B.b + B.a * A.c) / (B.a * B.a);
    f.c = (A.a * B.c + B.a * A.b) / (B.a * B.a);
    return f;
}

int main() {
    double x, e1, e2;
    cout << "Enter A: " << endl;
    cout << "x = ";
    cin >> x;
    cout << "e1 = ";
    cin >> e1;
    cout << "e2 = ";
    cin >> e2;
    struct FazzyNumber A;
    A.a = x - e1;
    A.b = x;
    A.c = x + e2;

    cout << "Enter B: " << endl;
    cout << "x = ";
    cin >> x;
    cout << "e1 = ";
    cin >> e1;
    cout << "e2 = ";
    cin >> e2;
    struct FazzyNumber B;
    B.a = x - e1;
    B.b = x;
    B.c = x + e2;

    struct FazzyNumber C = del(A, B);
    cout << "C(" << C.a << ", " << C.b << ", " << C.c << ")";
    return 0;
}