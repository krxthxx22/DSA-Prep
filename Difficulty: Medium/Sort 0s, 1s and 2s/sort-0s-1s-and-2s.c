// User function Template for C


    // code here
    void sort012(int arr[], int n) {
    // code here
    
    int low = 0;
    int mid = 0;
    int high = n-1;
    
    
    while(mid<= high)
    {
        if(arr[mid]==0)
        {
            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            
            mid++;
            low++;
        }
        
        else if(arr[mid] == 1)
        mid++;

        
        else if(arr[mid] == 2)
            {
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
            }

    }
}


