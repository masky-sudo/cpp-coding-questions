class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k < 0)
            return 0;
        unordered_map<int,int> mp;
        for(int m:nums) {
            mp[m]++; //if element is not found,it reaches mp [m]== nums.end(),which is 0
        }
        int pairs= 0;
        for(auto p:mp) {
            // The first condition is when k=0 & we have to consider identical pairs in our result and 2nd condn checks whether pair is present by adding p.first+k
           if((!k  && p.second>1) 
                || (k && mp.count(p.first+k))) {
                pairs++;
            } 
        }       
        
        return pairs;  
    }
};
