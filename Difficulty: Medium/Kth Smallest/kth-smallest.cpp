class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        sort(arr.begin() , arr.end());
        unordered_set<int>pq ; 
        // for(int num : arr){
        //     pq.push(num);
        //     if(num > num && pq.size()>k){
                
        //     }
        // }
        return arr[k - 1];
    }
};