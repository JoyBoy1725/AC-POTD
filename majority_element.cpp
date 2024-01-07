class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size() / 2;  //half the size  of vector
        unordered_map<int, int> hash;   //creating an unordered map
        for (int i = 0; i < nums.size(); i++) {  //TC - O(n)
            hash[nums[i]]++;  //it increases the key of number getting repeated
        }
        for (int j = 0; j < n + 1; j++) {  // TC - O(n)
            if (hash[nums[j]] > n) {  //checks if the key is greater than half the size of vector
                return nums[j];   //prints the number whose key is greater than n
            }
        }
        return -1;
    }
};