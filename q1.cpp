//Name=Kawal , Roll no=2010990378 , set-3
//Q)  Rearrange elements such that every second element becomes greater than its left and right

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{int n,temp,temp1;
cout<<"Enter number of elements\n ";
cin>>n;
int arr[n];
cout<<"Enter elements\n";

for(int i=0; i<n; i++){
    cin>>arr[i];
}

for(int i=1; i<n; i+=2){
    if(arr[i]<arr[i-1]){
        temp=arr[i];
        arr[i]=arr[i-1];
        arr[i-1]=temp;
    }
    if(arr[i]<arr[i+1]){
        temp1=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp1;
    }
}
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}

    return 0;
}
