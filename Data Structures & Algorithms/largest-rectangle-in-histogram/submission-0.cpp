class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
         int maxArea = 0;
         stack<pair<int, int>> pillar;
         for (int i=0;i<heights.size();i++){
            int start = i;
            while(!pillar.empty() && pillar.top().second>heights[i]){
                auto column = pillar.top();
                pillar.pop();
                int area = column.second * (i-column.first);
                if(maxArea<area) maxArea=area;
                start = column.first;
            }
            pillar.push({start, heights[i]});  
         }
         while(!pillar.empty()) {
            auto p = pillar.top();
            pillar.pop();
            int area = p.second * (heights.size()-p.first);
            if(maxArea<area) maxArea=area;
         }
         return maxArea;
    }
};
