class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        for(int i = 0; i<=n;i++)
        
        {
            int min_dex = i;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]<arr[min_dex])
                {
                    int temp = arr[j];
                    arr[j] = arr[min_dex];
                    arr[min_dex] = temp;
                }
            }
        }
    }
};