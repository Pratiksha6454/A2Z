#include<bits/stdc++.h>
using namespace std;
int main(){

int arr[]={89,12,78,100,12,1,4,6,7,99,12,100};
int size = sizeof(arr) / sizeof(arr[0]);

// find the largest element



// sort(arr,arr+size);
// cout<<arr[size-1]<<'\n';

// int largest=arr[0];
// for(int i=1;i<size;i++){
//     largest=max(largest,arr[i]);
// }

// cout<<largest<<endl;






//finding second largest element
// sort(arr,arr+size);
// cout<<arr[size-2];

// int largest=arr[0];
// for(int i=1;i<size;i++){
//     largest=max(largest,arr[i]);
// }
// int slargest=-1;
// for(int i=0;i<size;i++){
//     if(slargest<arr[i] && arr[i]!=largest){
//         slargest=arr[i];
//     }
// }
// cout<<slargest;



// int largest=arr[0];
// int slargest=-1;
// for(int i=0;i<size;i++){
//     if(largest<arr[i]){
//         slargest=largest;
//         largest=arr[i];
//     }else if(slargest<arr[i] && largest!=arr[i]){
//         slargest=arr[i];
//     }
// }
// cout<<slargest;



// for(int i=1;i<size;i++){
//     if(arr[i]<arr[i-1]){
//         cout<<"Not sorted";
//         return 0;
//     }
// }
// cout<<"Sorted";


// Removing duplicates from sorted array
int nums[]={1,1,1,1,1,1,2,2,2,2,4,4,4,4,4,6,6,6,6,6,7,7,7,7,8,8,8,8,13};
int n=sizeof(nums)/sizeof(nums[0]);
// set<int>s;
// for(int i=0;i<n;i++){
//     s.insert(nums[i]);
// }
// int j=0;
// for(set<int>::iterator it=s.begin();it!=s.end();it++,j++){
// nums[j]=*it;
// }

int j=1;
nums[j]=nums[0];
for(int i=1;i<n;i++){
    if(nums[i]!=nums[i-1]){
        nums[j]=nums[i];
        j++;
    }
}

for(int i=0;i<n;i++){
    cout<<nums[i]<<" ";
}
    return 0;
}