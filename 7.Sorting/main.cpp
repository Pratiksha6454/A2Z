#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIdx=i;
        for(int j=i+1;j<n;j++){
if(arr[minIdx]>arr[j]){
minIdx=j;
}
        }
        int temp=arr[minIdx];
        arr[minIdx]=arr[i];
        arr[i]=temp;
    }
}


void BubbleSort(int arr[],int n){

for(int i=0;i<=n;i++){
    for(int j=0;j<n-1-i;j++){

        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }

    }
}

}




void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }else{
                break;
            }
        }
    }
}




void Myerge(int arr[],int si,int mid,int ei){
    int temp[ei-si+1];
    int k=0;
    int i=si;
    int j=mid+1;
    while(i<=mid && j<=ei){
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            i++;
        }else{
            temp[k]=arr[j];
            j++;
        }
        k++;
    }
while(i<=mid){
    temp[k]=arr[i];
    k++;i++;
}
while(j<=ei){
    temp[k]=arr[j];
    k++;j++;
}

for(int i=si,k=0;k<ei-si+1;k++,i++){
    arr[i]=temp[k];
}


}




void MergeSort(int arr[],int si,int ei){
    if(si>=ei){
        return;
    }
int mid = si + (ei - si) / 2;
 MergeSort(arr,si,mid);
 MergeSort(arr,mid+1,ei);
Myerge(arr, si, mid, ei);
}


int findPivot(int arr[],int si,int ei){

    int pivot=arr[ei];
    int i=si-1;
    for(int j=si;j<ei;j++){
       if(arr[j]<=pivot){
        i++;
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
       } 
    }
    i++;
    int temp=pivot;
    arr[ei]=arr[i];
    arr[i]=temp;
    return i;
}

void QuickSort(int arr[],int si,int ei){

    if(si>=ei){
        return;
    }
int pivot=findPivot(arr,si,ei);
QuickSort(arr,si,pivot-1);
QuickSort(arr,pivot+1,ei);
}




int main(){

int arr[]={5,23,67,2,1,8,4,9,34,65,16,12,5,45};
int n=11;


QuickSort(arr,0,n-1);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}






    return 0;
}