#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define MAX 1e9
#define MIN -1e9
#define INF 1e9

int binarySearch(long long int a[], int l, int r, int key){
    if(l <= r){
        int mid = l + (r-l)/2;
        if(key == a[mid])
            return mid;
        else if(key < a[mid])
            return binarySearch(a, l, mid-1, key);
        else
            return binarySearch(a, mid+1, r, key);
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long int a[n], k;
        int min = MAX, shift = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i] < min){
                min = a[i];
                shift = i;
            }
        }
        cin >> k;
        if(k <= a[n-1])
            cout << binarySearch(a, shift, n-1, k) << "\n";
        else
            cout << binarySearch(a, 0, shift-1, k) << "\n";
    }
    return 0;
}