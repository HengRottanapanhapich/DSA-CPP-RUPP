#include <iostream>
#include <limits>
using namespace std;

int binary_search (int key_search, int array[], int max_element) {
    int cur_in;
    int lower_bound = 0;
    int upper_bound = max_element - 1;

    while(true) {
        cur_in = (lower_bound + upper_bound) / 2;

        if ( array[cur_in] == key_search) {
            return cur_in;
        } else if (lower_bound > upper_bound)
            return max_element;
        else {
            if (array[cur_in] < key_search)
                lower_bound = cur_in + 1;
            else upper_bound = cur_in - 1;
        }
    }

}

void show_element(int array[], int max_element, int i) {
    for (i = 0; i < max_element; i++)
        cout << array[i] << " ";
    cout << '\n';
}

int main() {

    int array[20];
    int i;
    int max_element = 20;
    int key_search;

    for (i = 1; i <= max_element; i++) {
        array[i-1] = i*2;
    }

    show_element(array, max_element, i);

    while(true) {
        cout << "Enter the number you want to search (Even number from 2 to 40): ";
        cin >> key_search;
        if (!cin.fail()) break;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = binary_search(key_search, array, max_element);

    if (result == max_element) {
        cout << "The element is not found!" << endl;
    } else {
        cout << "element is found in index: " << result << endl;
    }

    return 0;
}