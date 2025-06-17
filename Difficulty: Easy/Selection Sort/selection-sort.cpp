class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
       int n = arr.size();
       int i,j;
       
       for( i = 0; i<n;i++)
       {
           int min_dex = i;
           
           for(j = i+1; j<n;j++)
           {
               if(arr[min_dex]> arr[j])
               min_dex = j;
           }
           
           swap(arr[min_dex],arr[i]);
       }
        
    }
};