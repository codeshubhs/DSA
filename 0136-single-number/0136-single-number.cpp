class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int n=nums.size();
/*int xorr=0;
       for(int i=0; i<n; i++){
xorr=xorr^nums[i];
       }
       return xorr; */
        // method-2
        /*map<int,int>mp;
        
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        
        for(auto it:mp){
            
            if(it.second==1)
                return it.first;
        }
       return -1;*/
        
        map<int,int>mp;
        
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        
        for(auto it:mp){
            if(it.second==1){
                return it.first;
            }
        }
        return -1;
    }
};