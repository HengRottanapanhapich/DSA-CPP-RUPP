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

    // output of the menu for user to choose
    cout << "===============bubble sort=================" << endl;
    cout << "1.Sort data of array by ascending" << endl;
    cout << "2.Sort data of array by descending" << endl;
    showArray(i, array); // show array
    cout << '\n';
    cout << "Enter your option: ";
    cin >> options;

    // check user input with the following conditions
    if (options == '1') { // if the options is = to 1 it will proceed to sort the data of array by ascending
        for(i = 0; i < size - 1; i++) { // the outter loop that let the program sort the array from the beginning 
            for (j = 0; j < size - i - 1; j ++) { // the inner take care of the process of sorting the array
                if (array[j] > array[j+1]) { // check the condition if for ex: array[0] > array[1]
                    temp = array[j]; // if the condition is met temp = array[j]
                    array[j] = array[j+1]; // then array[j] = array[j+1] 
                    array[j+1] = temp; // now the value of array[j] that was store with temp isn't lost 
                }
            }

        }
        showArray(i, array); // show array
    } else if (options == '2') { // if the options is = to 2 it will proceed to sort the data of array by descending 
        for(i = 0; i < size - 1; i++) { // the outter loop that let the program sort the array from the beginning
            for (j = 0; j < size - i - 1; j ++) { // the inner take care of the process of sorting the array
                if (array[j] < array[j+1]) { // check the condition if for ex: array[0] < array[1
                    temp = array[j]; // if the condition is met temp = array[j]
                    array[j] = array[j+1]; // then array[j] = array[j+1]
                    array[j+1] = temp; // now the value of array[j] that was store with temp isn't lost
                }
            }
        }
        showArray(i, array); // show array
    } else {
        cout << "invalid input!" << endl; // output this message if the input is something else other then 1 or 2
    }
    
    return 0;
}