class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        bool check = false;
        int index1, index2;
        for(int i = 0; i < nums.size(); i++) {
            if(check)
                break;
            int val = target - nums[i]; 
            if(umap.find(val) != umap.end()) {
                check = true;
                index1 = i;
                index2 = umap[val];
            }
            else {
                umap.insert(make_pair(nums[i],i));
            }
        }
        vector<int> vec;
        vec.push_back(index1);
        vec.push_back(index2);
        sort(vec.begin(), vec.end());
        return vec;
    }
};
