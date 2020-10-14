class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> rightMax_v(n);
        vector<int> leftMax_v(n);
        
        int rightMax = INT_MIN;
        int leftMax = INT_MIN;
        
        for(int i=0;i<n;i++){
            rightMax = max(rightMax, height[i]);
            rightMax_v[i] = rightMax;
        }
        
        for(int i=n-1;i>=0;i--){
            leftMax = max(leftMax, height[i]);
            leftMax_v[i] = leftMax;
        }
        
//         vector<int> trapped;
//         for(int i=0;i<n;i++){
//             trapped[i] = min(rightMax_v[i], leftMax_v[i]) - height[i];
//         }
        
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += (min(rightMax_v[i], leftMax_v[i]) - height[i]);
        }
        
        return sum;
    }
};
