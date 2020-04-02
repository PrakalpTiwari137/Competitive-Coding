class Solution {
public:
    vector<vector<int>> result;
    
    void permutations(vector<int>& nums, int i, int n){
        if(i==(n-1)){      
            result.push_back(nums);  
        }
        for(int j=i;j<n;j++){
            swap(nums[i],nums[j]); 
            permutations(nums,i+1,n); 
            swap(nums[i],nums[j]); 
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        permutations(nums,0,nums.size());
        return result;
    }
};
