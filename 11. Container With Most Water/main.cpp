class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0 , r = height.size()-1;
        int max_area = 0;
        while(l<r){ //設定左指標,右指標
            
            int t_max = min(height[l],height[r])*(r-l); 
            
            if(t_max > max_area)
                max_area = t_max;
            
            if(height[l] <= height[r])
                l++;
            else
                r--;
            
        }
        return max_area;
    }
};