#include <iostream>
using namespace std;

int main() {

    int i, j, x;

    for(i = 1; i <= 5; i++){
        for (j = 1; j <= 5; j++)
        {
            x = 2*i + 2*j;
            cout << "The sum of even integers are always even: " << x << endl;
        }
    }

    return 0;
}