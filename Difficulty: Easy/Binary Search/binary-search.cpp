class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        int low = 0;
        int high = n-1;
        int index = -1;
        
        while(low<=high)
        {
            int mid = (low+high)/2;
            
            if(arr[mid]==k)
            {
                index = mid;
                high = mid-1;
            }
            
             else if (arr[mid]>k)
            {
                high = mid-1;
            }
            
            else low = mid+1;
        }
         
         
        return index;
    }
};