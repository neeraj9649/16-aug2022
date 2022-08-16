#include <iostream>
using namespace std;
int first(int arr[], int s, int f)
{
    int l = 0, h = s - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (f > arr[mid])
        {
            l = mid + 1;
        }
        else if (f < arr[mid])
        {
            h = mid + 1;
        }
        else
        {
            if (mid == 0 || arr[mid] != arr[mid - 1])
            {
                return mid;
            }
            else
            {
                h = mid;
            }
        }
    }
}
int last(int arr[], int s, int f)
{
    int l = 0, h = s - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (f > arr[mid])
        {
            l = mid + 1;
        }
        else if (f < arr[mid])
        {
            h = mid + 1;
        }
        else
        {
            if (mid == 0 || arr[mid] != arr[mid + 1])
            {
                return mid;
            }
            else
            {
                l = mid;
            }
        }
    }
}
int total(int arr[], int t, int f)
{
    int tot;
    tot = (last(arr, t, f) - (first(arr, t, f) + 1));
    if (tot == -1)
    {
        return 0;
    }
    else
        return tot;
}
int main()
{
    int t;
    cin >> t;
    int f;
    cin >> f;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    cout << first(arr, t, f) << endl;
    cout << last(arr, t, f) << endl;
    cout << total(arr, t, f);

    return 0;
}