class Solution {
public:
    //dutch national flag algorithm
    void sortColors(vector<int>& arr) {
        int n = arr.size();
        int i=0, mid=0, j=n-1;
        while(mid<=j)
        {
            if(arr[mid] == 0)
            {
                swap(arr[mid], arr[i]);
                i++; mid++;
            }
            else if(arr[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(arr[mid], arr[j]);
                j--;
            }
        }
        return ;
    }
};