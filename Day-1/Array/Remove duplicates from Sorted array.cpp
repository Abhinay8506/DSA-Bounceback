class Solution {
public:
    
    int removeDuplicates(vector<int>& nums) {
        int i=1;
        for(int j=1;j<nums.size();j++){
            if(nums[j-1]!=nums[j]){
                nums[i]=nums[j];
                i++;
            }
        }
        return i;
        /*map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int count=0;
        for(auto it:mpp){ /////UNIQUE ELEMENT ASK
            count++;
        }
        return count;*/
    }
};
