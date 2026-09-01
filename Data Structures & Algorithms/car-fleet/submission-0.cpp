class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        if(target==0) return 1;
        vector<pair<int, int>> cars;
        for(int i=0;i<position.size();i++){
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.rbegin(), cars.rend());
        stack<double> timeList;
        for(const auto& car:cars){
            double time = ((double)target-car.first)/car.second;
            if(timeList.empty() || timeList.top()<time){
                timeList.push(time);
            }
        }
        return timeList.size();
    }
};
