#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {

    vector<int> arr = {1,2,3,4,5,6,1};
    int k = 3;

    int Length = arr.size(); cout << "Length = " << Length;

    int sum = 0;
    int FirstIndex = 0;
    int LastIndex = Length - 1;
    while(FirstIndex <= LastIndex && k > 0) {
        if(arr[FirstIndex] > arr[LastIndex]) {
            sum += arr[FirstIndex];
            ++FirstIndex;
        } else {
            sum += arr[LastIndex];
            --LastIndex;
        }
        --k;
    }
    cout << "\narr: ";for(auto i : arr) { cout << i << ' '; }

    cout << "\nsum: " << sum;
    return 0;
}