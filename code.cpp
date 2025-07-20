class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int mx = INT_MIN , sum = 0;
        vector<int> test;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                test.push_back(sum);
                test.push_back(0);
                sum = 0;
            }
            else sum+=nums[i];
        }
        test.push_back(sum);
        for(int i=0;i<test.size();i++){
            if(test[i]==0 && i!=0 && i!=test.size()-1) mx = max(mx,test[i-1]+test[i+1]);
        }
        if(mx==INT_MIN) return nums.size()-1;
        return mx;
    }
};
