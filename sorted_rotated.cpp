#include <iostream>
using namespace std;
int biary_search(int arr[], int l, int h, int fi)
{
    int mid = (l + h) / 2;
    if (arr[mid] == fi)
    {
        return mid;
    }
    else if (arr[mid] > fi)
    {
        biary_search(arr, l, mid - 1, fi);
    }
    else
    {
        biary_search(arr, mid + 1, h, fi);
    }
}
int check_arr(int arr[], int l, int h, int fi)
{
    int mid = (l + h) / 2;
    int num;
    if (arr[mid] == fi)
    {
        return mid;
    }
    else if (fi < arr[mid] && fi > arr[l])
    {
        num = biary_search(arr, l, mid, fi);
        return num;
    }
    else
    {
        num = biary_search(arr, mid + 1, h, fi);
        return num;
    }
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
    cout << check_arr(arr, 0, t - 1, f);
    return 0;
}