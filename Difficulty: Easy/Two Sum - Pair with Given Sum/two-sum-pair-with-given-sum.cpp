class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        unordered_map<int , int>mp;
        for(int i = 0 ; i < arr.size() ; i++){
            mp[arr[i]]=i;
        }
        for(int i = 0 ; i < arr.size() ; i++){
            if(mp.find(target - arr[i])!= mp.end() && mp[target - arr[i]] != i){
                return true;
            }
        }
        return false;
    }
};