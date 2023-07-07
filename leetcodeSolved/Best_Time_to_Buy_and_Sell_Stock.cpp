
// https://leetcode.com/problems/contains-duplicate/description/


//Complexity O(1) Coool 😄 
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        set<int>s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        int m = s.size();
        if(m==n){
            return false;
        }
        else{
            return true;
        }
        
    }
};