#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of vector here : ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter vector elements now : ";
    for(int i = 0;i< n;i++)
    {
        cin>>v[i];
    }
    vector <int> suffix(n);
    suffix[n-1] = v[n-1];
    for(int i = n-2;i>=0;i--)
    {
        suffix[i] = suffix[i+1]+v[i];
    }
    cout<<"Printing prefix vector : ";
    for(int i=0;i<n;i++)
    {
        cout<<suffix[i]<<" ";
    }

}