#include <iostream> 

using namespace std;

int firstNonSmallerIndex (int array[], int n, int value)
{
    bool found = false; 
    int index = 0;
    while (index < n && !found)
    {
        if (array[index] == value)
            found = true;
        else if (array[index] != value)
            index++;
    }
    if (found == false)
        index = -1;
    return index;
}
int main()
{
    int array[] = {1, 2, 3, 3, 3, 4, 5, 5, 14, 17};
    int value;
    cout << "Enter a value to search: ";
    cin >> value;
    cout << firstNonSmallerIndex (array, sizeof array, value);
    return 0;
}
