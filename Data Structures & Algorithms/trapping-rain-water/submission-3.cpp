class Solution {
public:
    int trap(vector<int>& height) {
      int sum=0, l=0,r=height.size()-1, lm=height[l],rm=height[r];
      
      while(l<r) {
        if(lm<rm) {
          l++;
          if(height[l]>lm) lm = height[l];
          sum += lm-height[l];
        } else {
          r--;
          if(height[r]>rm) rm = height[r];
          sum += rm-height[r];
        }
      }
      return sum;
    }
};
