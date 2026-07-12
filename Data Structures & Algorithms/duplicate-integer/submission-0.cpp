class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_map<int,int>mp; //number, freq

        for(auto it: nums){
            mp[it]++;
        }

        for(auto it: mp){
            if(mp[it.first]>1){
                return true;
            }
        }
        return false;
    }
};