//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int large = -1;
        int second_large = -1;
        
        int n = arr.size();
        
        
        
        for(int i =0;i<n;i++)
        {
            if(large < arr[i])
            {
                second_large = large;
                large = arr[i];
            }
            
            else if(arr[i]>second_large && arr[i]!= large)
            {
                second_large  = arr[i];
            }
        }
        return second_large;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends