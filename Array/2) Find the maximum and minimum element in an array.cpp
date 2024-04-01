#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

class minMax
{
public:
    int min;
    int max;

    minMax getMinMax(vector<int> &arr)
    {

        int min = INT_MAX;
        int max = INT_MIN;

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        minMax ans;
        ans.min = min;
        ans.max = max;
        return ans;
    }
};

int main()
{
    vector<int> arr({1, 2, 3, 4, 5, 6, 7, 8, 9});

    minMax ans = ans.getMinMax(arr);

    cout << "min: " << ans.min << endl;
    cout << "max: " << ans.max << endl;

    return 0;
}