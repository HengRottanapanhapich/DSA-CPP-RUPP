#include <iostream>
using namespace std;

// function to show the array
void showArray(int i, int array[]) {
    for (i = 0; i < 10; i++) { 
        cout << array[i] << " "; // output all the element in the array one by one
    }
}

int main() {
    int array[10] = {23, 98, 76, 52, 18, 8, 49, 87, 35, 61}; // the array
    int size = 10; // size of the array
    int i, j, temp;
    char options;

    // output the menu for user to choose
    cout << "===============insertion sort=================" << endl;
    cout << "1.Sort data of array by ascending" << endl;
    cout << "2.Sort data of array by descending" << endl;
    showArray(i, array); // show the array
    cout << '\n';
    cout << "Enter your option: ";
    cin >> options;

    // check the input with the following conditions
    if (options == '1') { // if the options is = to 1 it will proceed to sort the data of array by ascending
        for (i = 1; i < size; i++) { // start from the second element and continue when the while condition isn't met
            temp = array[i]; // store array[i] to temp
            j = i; // start with the current element 
            while (j > 0 && array[j-1] > temp) { // check if j > 0 and array[j-1] > temp
                array[j] = array[j-1]; // if the condition is met store array[j-1] to array[j]
                j--; // then decrease the value of j then go to check the condition again
            }
            array[j] = temp; // if the condition is not met then store temp to array[j]
        }
        showArray(i, array); // show the array
    } else if (options == '2') { // if the options is = to 2 it will proceed to sort the data of array by descending
        for (i = 1; i < size; i++) { // // start from the second element and continue when the while condition isn't met
            temp = array[i]; // store array[i] to temp
            j = i; // start with the current element
            while (j > 0 && array[j-1] < temp) { // check if j > 0 and array[j-1] < temp
                array[j] = array[j-1]; // if the condition is met store array[j-1] to array[j]
                j--;
            }
            array[j] = temp; // if the condition is not met then store temp to array[j]
        }
        showArray(i, array); // show the array
    } else {
        cout << "invalid input!" << endl; // output this message if the input is something else other then 1 or 2
    }

    return 0;
}