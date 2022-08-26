//Name=Kawal yodh vir singh , Roll no=2010990378 , set-3
//Q)  Find a pair with given sum in it

#include <iostream>
using namespace std;

void findPair(int nums[], int n, int target)
{
    
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                 cout<<"Pair found("<<nums[i]<<","<<nums[j]<<')';
                return;
            }
        }
    }
 
    
    cout<<"Pair not found\n";
}
 
int main()
{  int n;
   cout<<"Enter number of elements\n";
   cin>>n;
    int nums[n];
    cout<<"Enter array elements\n";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int target;
    cout<<"Enter target\n";
    cin>>target;
    findPair(nums, n, target);
 
    return 0;
}
