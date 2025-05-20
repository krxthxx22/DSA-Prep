class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int x = arr.size();
        int low = 0;
        int high = x-1;
        int index = -1;
        
        while(low<=high)
        {
            int mid = (low+high)/2;
            
            if(arr[mid] == k){
                index = mid;
                high = mid-1;
            }
            
            if(arr[mid]<k)
             low = mid+1;
             
            if(arr[mid]>k)
             high = mid-1;
            
        }
        
    return index;    
    }
};