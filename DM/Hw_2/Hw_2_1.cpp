#include <iostream>
using namespace std;

int main() {

    int i, j, x;

    for(i = 1; i <= 10; i+=2){
        for (j = 1; j <= 5; j+=2)
        {
            x = i + j;
            cout << "The sum of odd integers are always even: " << x << endl;
        }
    }

    return 0;
}