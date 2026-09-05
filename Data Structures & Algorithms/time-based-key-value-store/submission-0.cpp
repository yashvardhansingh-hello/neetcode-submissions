class TimeMap {
public:
    unordered_map<string, vector<pair<string, int>>> tmp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        tmp[key].emplace_back(value, timestamp);
    }
    
    string get(string key, int timestamp) {
        const auto& searchList = tmp[key];
        int l=0,r=searchList.size()-1;
        string res="";
        while(l<=r) {
            int m=l+(r-l)/2;
            if(searchList[m].second<=timestamp) {
                l=m+1;
                res=searchList[m].first;
                }
            else r=m-1;
        }
        return res;

    }
};
