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
    cout << " vector before sorting";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    sort(arr.begin(), arr.end());
    cout << "array after sorting";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
