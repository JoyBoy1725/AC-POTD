class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int elsum=0;
        int i=0;
        while(i<nums.size())
        {
            sum=sum+i+1;  //adding numbers from 0 to size of vector
            elsum=elsum+nums[i]; //adding elements
            i++;
        }

        int missingelement=abs(elsum-sum);   //gives the missing  element
        return missingelement;
        
    }
};