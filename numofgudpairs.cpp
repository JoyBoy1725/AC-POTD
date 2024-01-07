class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        int count=0;
        for(int i=0;i<nums.size()-1;i++)  //loop from 0th element to 2nd last element of vector
        {
            for(int j=i+1;j<nums.size();j++)  //loop from i+1 to the last element of vector
            {
                if(nums[i]==nums[j])  //checks the condition if value at i position and j position are equal
                {
                    count++;   //increase count by 1 if yes
                }
            }
        }
        return count;
    }
};