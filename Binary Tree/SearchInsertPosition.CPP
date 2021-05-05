class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=-1,h=nums.size(),mid;
        while(h-l>1)
        {
            mid=(l+h)/2;
            if(nums[mid]>target)
            {
                h=mid;
            }
            else if(nums[mid]==target)
            {
                return mid;
            }
            else
            {
                l=mid;
            }
        }
        return h;
    }
};