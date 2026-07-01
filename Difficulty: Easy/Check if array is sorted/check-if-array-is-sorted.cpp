class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        vector<int> brr = arr;
        sort(brr.begin() , brr.end());
        return arr == brr;
        
    }
};