#include <iostream>
#include<algorithm>
using namespace std;
int arr[10000005];
int k;
int n;
int read() {

    char c = getchar();int x = 0, s = 1;

    while (c < '0' || c > '9') { if (c == '-') s = -1; c = getchar(); }            //ÊÇ·ûºÅ

    while (c >= '0' && c <= '9') { x = x * 10 + c - '0'; c = getchar(); }    //ÊÇÊý×Ö

    return x * s;

}
void quick_sort(int arr[],int l,int r) {
    if (l>=r)
    {
        return;
    }
    int povit = arr[(l + r) / 2];
    int i = l-1;
    int j = r+1;
    while (i < j) {
        do i++; while (arr[i] < povit);
        do j--;while (arr[j] > povit);
        if (i<j)
        {
            swap(arr[i], arr[j]);
        }
    }
    if (k<j)
    {
        quick_sort(arr, l, j);
    }
    else
    {
        quick_sort(arr, j+1, r);
    }
}
int main(void) {
    while (cin>>n>>k) {
        for (size_t i = 1; i <= n; i++)
        {
            arr[i] = read();
        }
        quick_sort(arr, 1, n);
        cout << arr[k] << endl;
    }
    return 0;
}