class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        /*int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
        }*/
        vector<int>ans;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
            {
                count++;
            }
            else{
                ans.push_back(nums[i]);
            }
        }
        for(int i=0;i<count;i++){
            ans.push_back(0);
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=ans[i];
        }
        ans.erase(ans.begin(),ans.end());
        
    }
};
