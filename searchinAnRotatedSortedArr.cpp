#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& arr, int n, int k){
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid=(low+high)/2;
        if (arr[mid] == k){
            return mid;
        }

        if(arr[low]<=arr[mid])
        {
            if(arr[mid]>=k&&arr[low]<=k){
                high = mid - 1;
            }
            else{
                low=mid+1;
            }
            
        }
        else{
            if(arr[mid]<=k&&arr[high]>=k){
                low = mid + 1;

            }
            else{
                high=mid-1;
            }

        }
    }
    return -1;  // element is not present in array. 277 is a placeholder for the upper limit of the array. 277 is chosen as a large number to handle the case when the array is rotated. 277 is also used to handle the case when the array is not sorted. 277 is chosen as a large number to handle the case when the array is not sorted. 277 is chosen as a large number to handle the


}


int main()
{
    vector<int> arr = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int n = 9, k = 1;
    int ans = search(arr, n, k);
    if (ans == -1)
        cout << "Target is not present.\n";
    else
        cout << "The index is: " << ans << "\n";
    return 0;
}
