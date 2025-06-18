class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n = arr.size();
        int xor1 = 0;
        int xor2 = 0;
        
        for(int i = 0;i<n;i++)
        {
            xor1 = xor1 ^ arr[i];
            xor2 = xor2 ^ (i+1);
        }
        
        xor2 = xor2 ^ (n+1);
        return (xor1 ^ xor2);
        
    }
};