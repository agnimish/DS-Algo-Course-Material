// NOTE: This Brute Force Algorithm has time complexity of O(n^2) which is bad.
//       I finally Submitted a better Divide & Conquer Algorithm which having time complexit of O(nlog(n))

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        long long int inv=0;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(a[i] > a[j])
                    inv++;
            }
        }
        cout << inv << "\n";
    }
    return 0;
}