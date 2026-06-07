#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> arr;
    // adding the element in vector
    cout << "enter the no of element to add in a vector: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        arr.push_back(input);
    }
    // insert at the index 3
    arr[0] = 100;
    arr.insert(arr.begin() + 3, 12);
    for (int i = 0; i < n; i++) {
        cout << arr.at(i) << " ";
    }
}
