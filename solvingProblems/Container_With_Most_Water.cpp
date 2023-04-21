class Solution {
public:
    int maxArea(vector<int>& height) {
        int water = 0 ; 
        int n = height.size();
        int i=0 , j=n-1 ;
        while(i<j){
            if(height[i]>height[j]){
                water= max(water,(j-i)*height[j]);
                j--;
            }
            else {
                water= max(water,(j-i)*height[i]);
                i++;
            }
        }
        return water;
    }
};