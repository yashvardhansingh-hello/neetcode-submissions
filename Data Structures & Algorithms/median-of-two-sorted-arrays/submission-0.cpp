class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>* smaller = &nums1;
        vector<int>* larger = &nums2;

        if(smaller->size()>larger->size()) swap(smaller,larger);

        int ss=smaller->size(),ls=larger->size();

        int l=0, r=ss;
        while(l<=r) {
            int spi = l+(r-l)/2;
            int lpi = (ss+ls+1)/2 - spi;

            int slmaxv = spi>0?(*smaller)[spi-1]:INT_MIN;
            int srminv = spi<ss?(*smaller)[spi]:INT_MAX;

            int llmaxv = lpi>0?(*larger)[lpi-1]:INT_MIN;
            int lrminv = lpi<ls?(*larger)[lpi]:INT_MAX;

            if(slmaxv<=lrminv && llmaxv<=srminv){
                if((ss+ls)%2==1) return max(slmaxv,llmaxv);
                return (max(slmaxv, llmaxv)+min(srminv, lrminv))/2.0;
            } else {
                if(slmaxv>lrminv) r=spi-1;
                else l=spi+1;
            }
        }
        return 0.0;
    }
};
