#include <iostream>

using namespace std;

int main() {
    int array[10];
    int i;
    int count_array = 0;
    
    for (i = 0; i < 10; i++)
    {
        array[i] = -1;
        cout << array[i] << " "; // the -1 indicates that the array is empty.
    }
    cout << '\n';

    array[0] = 10;
    count_array++;
    array[1] = 20;
    count_array++;
    array[2] = 30;
    count_array++;
    array[3] = 40;
    count_array++;
    array[4] = 50;
    count_array++;

    for (i = 0; i < 10; i++)
        cout << array[i] << " ";
    cout << '\n';

    cout << "the amount of element in the array is: " << count_array << '\n';

    // inserting 99 into index 2

    for (i = count_array; i > 2; i--)
        array[i] = array[i - 1];
    array[i] = 99;
    count_array++;

    for (i = 0; i < 10; i++)
        cout << array[i] << " ";
    cout << '\n';

    cout << "the amount of element in the array is: " << count_array << '\n';

    // deleting element from index 3

    for (i = 3; i < count_array - 1; i++)
        array[i] = array[i+1];
    array[i] = -1;
    count_array--;

    for (i = 0; i < 10; i++)
        cout << array[i] << " ";
    cout << '\n';

    cout << "the amount of element in the array is: " << count_array << '\n';



}