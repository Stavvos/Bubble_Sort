#include <iostream>

using namespace std;

void swap(int *a, int *b) // a function that swaps 2 given values
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int array[], int size)
{
    for (int step = 0; step < size - 1; step++)
    {
        int swapped = 0; //variable used to check if array has sorted

        for (int i = 0; i < size - step - 1; i++)
        {
            if(array[i] > array[i+1]) //to arrange array in descending order change > to <
            {
                swap(&array[i], &array[i+1]); // call to swap function
                swapped++; //indicate array has sorted
            }
        }

        if (swapped == 0) //check if array hasn't sorted
        {
            break;  //stop the loop because if array hasn't sorted its in the desired order
        }
    }
}

void display (int array[], int size) //a basic display array function
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int array[5] = {5,4,3,2,1}, //initialize array

    size = sizeof(array)/sizeof(array[0]); //set size variable for the array

    display(array,size); // print unsorted array

    bubbleSort(array,size); //run bubble sort function

    display(array,size); //print sorted array
    return 0;
}
