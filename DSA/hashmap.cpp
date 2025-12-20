#include <iostream>
using namespace std;

int hashh[1000000];  // size for hash

int main() {
    int n;
    // 0 < n < 10^6
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // precompute
    // int hash[n+1] = {0};
    for(int i = 0; i < n; i++) {
        hashh[arr[i]] += 1;
    }

    /*
    NOTE:
    -----
    1. array size can only go upto 10^6 approx 4mb (for integer) | for boolean^7 approx 37mb (IN SIDE INT MAIN)
    2. we declare 0 because if don't it gonna take garbage value in every index;
        a. also in global declaration its by default 0 in every index and
        b. size of integer array is upto 10^7 | 10^8 for boolean array
    */

    int q;
    cin >> q;  // for fetching no. of values
    int number;
    while(q--) {
        cin >> number;                  // for fetching values provided
        cout << hashh[number] << endl;  // fetc
    }
    return 0;
}