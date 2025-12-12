#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter size of vector here  : ";
    cin>>n;
    cout<<"Enter vector elements now : ";
    vector <int> v(n);
    for(int i = 0;i< n;i++)
    {
        cin>>v[i];
    }
    int target;
    cout<<"Enter target now : ";
    cin>>target;
    int low = 0,high = n-1,mid,ans;
    while(low<=high)
    {
        mid = low + (high-low)/2;
        if(v[mid]==target)
        {
            ans = mid+1;
            break;
        }
        else if(v[mid]<target)
        {
            low = mid + 1;
        }
        else 
        {
            ans = mid;
            high = mid - 1;
        }
    }
    cout<<"Upper Bound is : "<<ans;
}