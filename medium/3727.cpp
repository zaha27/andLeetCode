#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    vector<int> arr = {1, 2, 3, 5, 9, 0, 12, 10};
    vector<int> mins;
    vector<int> maxs;

    int Length = arr.size(); cout << "Length = " << Length;
    int HalfLength = Length/2;
    
    //sortare arr
    sort(arr.begin(), arr.end());
    cout << "\narr: ";
    for(auto i : arr) {
        cout << i << ' ';
    }

    for(int i = 0; i < HalfLength; ++i) {
        mins.push_back(arr[i]);
    }
    for(int i = Length - 1; i > (HalfLength - Length%2); --i) {
        maxs.push_back(arr[i]);
    }

    cout << "\nminime: ";for(auto i : mins) { cout << i << ' '; }
    cout << "\nmaxime: ";for(auto i : maxs) { cout << i << ' '; }
    

    vector<int> FinalVector;
    int i, j;
    i = j = 0;
    int pas = 0;
    while(i < mins.size() and j < maxs.size()) {
        if(pas % 2) {
            FinalVector.push_back(mins[i]); 
            ++i;
        } else {
            FinalVector.push_back(maxs[j]);
            ++j;
        }
        pas++;
    }
    cout << "\nVector Final: ";for(auto l : FinalVector) { cout << l << ' '; }
    return 0;
}