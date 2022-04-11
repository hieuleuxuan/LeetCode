class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0 , r = height.size()-1;
        int max_area = 0;
        while(l<r){ //設定左指標,右指標
            
            int t_max = min(height[l],height[r])*(r-l); //每次都先計算圍成的面積
            
            if(t_max > max_area)
                max_area = t_max;
            
            if(height[l] <= height[r])//移動小的那一根就好 移動大的反而會讓面積更小
                l++;
            else
                r--;
            
        }
        return max_area;
    }
};