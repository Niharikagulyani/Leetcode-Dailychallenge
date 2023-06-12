vector<string> summaryRanges(vector<int>& nums) {
    vector<string> ans;
    for(int i=0;i<nums.size();){
        int l = i;
        int h = i;
        while(h+1<nums.size() && nums[h+1]==nums[h]+1){
            h++;
        }
        if(h>l)
            ans.push_back(to_string(nums[l])+"->"+to_string(nums[h]));
        else 
            ans.push_back(to_string(nums[l]));
        i=h+1;
    }
    return ans; 
 }
