#include <iostream>
#include <limits>

using namespace std;
// & means passing by reference so that mean the origial variable will be changed, the function will change of course but the original variable will not be changed if you don't use &
void show_elements(int array[], int &count_array, int i)
{
    for ( i = 0; i < 10; i++)
        cout << array[i] << " ";
    cout << '\n';
}

void insert_element(int array[], int &count_array, int i)
{
    int position, element;

    if (count_array == 10) {
        cout << "There is no space left in the array!" << endl;
        return;
    }
    
    while(true) {
        cout << "Enter the position to insert the element: ";
        cin >> position;

        if (cin.fail()) {
            cout << "Please input only number!!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (position < 0 || position > count_array) {
            cout << "Please enter a number from 1 to " << count_array << "!!!!" << endl;
            continue;
        }
        break;
    }

    while(true) {
        cout << "Enter the element to insert: ";
        cin >> element;
        if (!cin.fail()) break;
        cout << "Please input only number!!" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }


    for ( i = count_array; i > position; i--)
        array[i] = array[i - 1];
    array[position] = element;
    count_array++;
    show_elements(array, count_array, i);
}

void delete_element(int array[], int &count_array, int i)
{
    int position;

    if (count_array == 0) {
        cout << "Array is empty, no elements to delete!" << endl;
        return;
    }

    while(true) {
        cout << "Enter the position to delete the element: ";
        cin >> position;
        if (cin.fail()) {
            cout << "Please input only number!!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (position < 0 || position > count_array) {
            cout << "Please enter a number from 1 to " << count_array << "!!!!" << endl;
            continue;
        }
        break;
    }

    for ( i = position; i < count_array - 1; i++)
        array[i] = array[i + 1];
    array[i] = -1;
    count_array--;
    show_elements(array, count_array, i);
}

// non duplicate search means that after we find the element it will stop searching and break
void search_element_nd(int array[], int &count_array, int i)
{
    int search;

    while(true) {
        cout << "Enter the element you want to search: ";
        cin >> search;
        if (!cin.fail()) break;
        cout << "Please input only number!!" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    for ( i = 0; i < count_array; i++)
        if (array[i] == search) break;
    if (i < count_array)
        cout << "Element is found at positions: " << i << '\n';
    else
        cout << "Element not found!" << '\n';
}

// duplicate search means that after we find the element it will continue searching until the end of the array incase there are multiple of the same element
void search_element_d(int array[], int &count_array, int i)
{
    int search;
    
    while(true) {
        cout << "Enter the element you want to search: ";
        cin >> search;
        if (!cin.fail()) break;
        cout << "Please input only number!!" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "The element is found at the positions: ";
    for ( i = 0; i < count_array; i++)
        if (array[i] == search) {
            cout << i << " ";
        }
    cout << '\n';
}

int main() {
    int array[10];
    int count_array = 0;
    int i;
    char options;

    for ( i = 0; i < 10; i++)
        array[i] = -1;

    array[0] = 10;
    array[1] = 20;
    array[2] = 30;
    array[3] = 40;
    array[4] = 50;
    array[5] = 10;
    count_array += 6;

    while( options != '0')
    {
        cout << "1. Show the elements in the array" << '\n';
        cout << "2. insert an element into the array" << '\n';
        cout << "3. delete an element from the array" << '\n';
        cout << "4. Search non duplicated element from the array" << '\n';
        cout << "5. Search duplicated element from the array" << '\n';
        cout << "Ente 0 to Exit" << '\n';

        cout << "Enter the options: ";
        cin >> options;

        switch(options)
        {
            case '0': 
                cout << "Thank you!" << '\n';
                break;
            case '1':
                show_elements(array, count_array, i);
                break;
            case '2':
                insert_element(array, count_array, i);
                break;
            case '3':
                delete_element(array, count_array, i);
                break;
            case '4':
                search_element_nd(array, count_array, i);
                break;
            case '5':
                search_element_d(array, count_array, i);
                break;
            default:
            system("cls");
                cout << "Undefined options" << '\n';
                break;
        }

    }
    
}