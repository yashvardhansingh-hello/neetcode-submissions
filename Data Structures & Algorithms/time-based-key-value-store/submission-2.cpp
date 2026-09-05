class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>> tmp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        tmp[key].emplace_back(timestamp, value);
    }
    
    string get(string key, int timestamp) {
        auto& searchList = tmp[key];
        int l=0,r=searchList.size()-1;
        string res="";
        while(l<=r) {
            int m=l+(r-l)/2;
            if(searchList[m].first<=timestamp) {
                l=m+1;
                res=searchList[m].second;
                }
            else r=m-1;
        }
        return res;

    }
};
