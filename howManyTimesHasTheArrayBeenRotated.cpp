int findRotation(vector<int>&arr)
{
    int low=0,high=arr.size()-1;
    int ans=INT_MAX;
    int index=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[low]<=arr[high])
        {
            if(arr[low]<ans)
            {
                index=low;
                ans=arr[mid];
            }
            break;
        }
        if(arr[low]<=arr[mid])
        {
            if(arr[low]<ans)
            {
                index=low;
                ans=arr[low];
            }
            low=mid+1;
        }
        else{
            high=mid-1;
            if(arr[mid]<ans)
            {
                index=mid;
                ans=arr[mid];
            }
        }

    }
    return index;
}