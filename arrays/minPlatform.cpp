class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        sort(arr.begin(), arr.end());
sort(dep.begin(), dep.end());
        int m=arr.size();
        int n=dep.size();
        int i=0,j=0;
        int mp=0,p=0;
        while(i<m and j<n){
            if(arr[i]<=dep[j]){
                p++;
                
                mp=max(mp,p);
                i++;
            }
            else{
                p--;
                j++;
            }
        }
    
        return mp;
    }
};

