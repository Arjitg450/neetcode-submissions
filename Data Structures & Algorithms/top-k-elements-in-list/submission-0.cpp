class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {


        // <freq, elem> --> heap with size k on sorted nums - nlogn + n log k
        // map - O(n) to build map + k * n for searching  = O(kn)
        // make a map,->we have freq, from freq, make a min heap of size k+1, so taht at last k elements are top k frequent elements
        //ques is is there any effiecent way to know fom frequencies 
      
        unordered_map<int, int> mp;//num, freq
        for(auto it: nums){
            mp[it]++;
        }

        // priority_queue<> p; //make min heap of size k , it contains <freq, element
        priority_queue< pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> p;
        
        vector<int> ans;
        for(auto it: mp){

            p.push({it.second, it.first});

            if(p.size()>k){
                p.pop();
            }
        }
            while (!p.empty()) {
                ans.push_back(p.top().second);  // element
                p.pop();
            }

            return ans;

    }
};
