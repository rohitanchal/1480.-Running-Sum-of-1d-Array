// method 1 --->>

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
      int sum=0;
      vector <int>ans;
       for(int i=0;i<nums.size();i++)
       {
            sum+=nums[i];
            ans.push_back(sum);
       } 
        return ans;
    }
};


// method 2 ---->>>

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
      for(int i=1;i<nums.size();i++){
          nums[i]+=nums[i-1]; // 2 + (2-1) = 3 
      }  
      return nums;
    }
};