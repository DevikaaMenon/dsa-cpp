class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int sl=-1;
        int l=arr[0];
        
        //iterate to find the largest element of the array
        for(int i=1;i<arr.size();i++){
            if(arr[i]>l){
                sl=l;
                l=arr[i];
            }
            else if(arr[i]<l && arr[i]>sl){
                sl=arr[i];
            }
        }
        
        return sl;
    }
};