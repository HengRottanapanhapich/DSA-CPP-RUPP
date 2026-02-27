#include <iostream>
using namespace std;

void test(int x)
{
    x = 5 + 10;
    cout << x << endl;
}

void test_1(int &y)
{
    y = 5 + 10;
    cout << y << endl;
}

int main() {

    int x = 10;
    int y = 10;

    test(x);
    cout << x << endl;

    test_1(y);
    cout << y << endl;

    cout << '\n';

    // one of the reason why we need temp variable
    // if you manually change the value like the example below one of the value will be lost
    int a = 2;
    int b = 4;

    a = b;
    b = a;

    cout << a << endl;
    cout << b << endl;

}