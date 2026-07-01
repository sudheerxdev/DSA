class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int res = -1;
        sort(arr.begin() , arr.end());
        for(int i = arr.size() - 1 ; i >= 0 ; i--){
            if(arr[i]!= arr[arr.size() - 1]){
                return arr[i];
            }
        }
        return res;
    }
};