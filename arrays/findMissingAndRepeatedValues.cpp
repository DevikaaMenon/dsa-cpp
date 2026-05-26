class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=-1,r=-1;

        unordered_map<int,int> freq;
        for(auto& row:grid){
            for(int num:row){
                freq[num]++;
            }
        }   

        for(int i=1;i<=n*n;i++){
            if(!freq.count(i)){
                m=i;
            }else if(freq[i]==2){
                r=i;
            }
        }
        return {r,m};
    }
};