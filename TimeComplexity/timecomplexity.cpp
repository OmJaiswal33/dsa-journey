#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 3; // this line runs for 1 time so its time complexity is O(1).
    cout<<n<<"\n"; // this line runs for 1 time so its time complexity is O(1).
    for(int i = 0;i< n;i++) // this runs for n times (0 to n-1 is n times) so its time complexity is O(n).
    {
        cout<<n<<endl; // this runs for n times (0 to n-1 is n times) so its time complexity is O(n).
    }
    // NOTE : tho to save time inside the loop that cout statement will run that many no. of times which no. of times the loop gonna run so just calculating outer loop is gonna save time but if inside the loop theres another loop then its O(n sq),be very careful of that.
    //so in total its 2n+2 and ignoring constants and coefficients its O(n).
    // in time complexities we always see for how many times is it running.
}