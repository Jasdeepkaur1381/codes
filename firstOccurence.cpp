#include <bits/stdc++.h>

using namespace std;
void printArray(int arr[], int size, int i, int find, int count)
{
    if (i == size)
        return;
    else
    {
        if (arr[i] == find)
        {
            count++;
            cout << " count number  " << count << endl;
            if (count == 2)
            {
                cout << i << " " << arr[i] << " ";
                return;
            }
        }

        printArray(arr, size, ++i, find, count);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 2, 3, 4, 3, 4, 6, 5, 3};
    int i = 0;
    int count = 0;
    int find = 4;
    printArray(arr, 11, i, find, count);
    return 0;
}