#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

void swapp(vector<int> &arr, int i, int j)
{
    int tem = arr[i];
    arr[i] = arr[j];
    arr[j] = tem;
}

int partitions(vector<int> &arr, int low, int high)
{
    int pivotkey;
    int m = low + (high - low) / 2;
    if (arr[low] > arr[high])
        swapp(arr, low, high);
    if (arr[m] > arr[high])
        swapp(arr, m, high);
    if (arr[low] < arr[m])
        swapp(arr, low, m);
    pivotkey = arr[low];
    while (low < high)
    {
        while (arr[high] >= pivotkey && low < high)
            high--;
        arr[low] = arr[high];
        while (arr[low] <= pivotkey && low < high)
            low++;
        arr[high] = arr[low];
    }
    arr[low] = pivotkey;
    return low;
}

void qsort(vector<int>& arr , int low , int high)
{
    int pivot=0;
    if(low < high)
    {
        pivot = partitions(arr , low , high );
        qsort(arr , low , pivot-1);
        qsort(arr , pivot+1 , high);
    }
}

int main()
{
    ll t;
    vector<int>q = {1,2,7,3,6,9,1,2};
    qsort(q,0,q.size()-1);
    for ( auto p:q ) cout << p << " ";
    return 0;
}