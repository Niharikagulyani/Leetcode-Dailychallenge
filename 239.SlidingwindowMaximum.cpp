vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    vector<int> ans;
    int i=0 , j =0;  
    priority_queue<int> pq;
    unordered_map<int,int> mp;
    while(j<nums.size()){
        pq.push(nums[j]);
        mp[nums[j]]++;
        if(j-i+1<k) j++;
        else if(j-i+1==k){
            while(mp[pq.top()]<1){
                pq.pop();
            }
            ans.push_back(pq.top());
            mp[nums[i]]--;
            i++;
            j++;
        }        
    }
    return ans;  
    }
