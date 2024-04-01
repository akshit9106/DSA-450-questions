#include <iostream>
#include <vector>

using namespace std;

void reverseArray(vector<int> &arr)
{
    vector<int> reversedArray(arr.size());

    // reverse Array
    for (int i = 0; i < arr.size(); i++)
    {
        reversedArray[i] = arr[arr.size() - i - 1];
    }

    // print Array
    for (int i = 0; i < reversedArray.size(); i++)
    {
        cout << reversedArray[i] << endl;
    }
}

vector<int> arr({1, 2, 3, 4, 5, 6, 7, 8, 9});

int main()
{
    reverseArray(arr);
    return 0;
}