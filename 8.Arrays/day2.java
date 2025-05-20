import java.util.*;
public class day2{
    public static void reverse(int arr[] ,int si,int ei){
        while(si<=ei){
            int temp=arr[si];
            arr[si]=arr[ei];
            arr[ei]=temp;
            si++;ei--;
        }
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);

    //    Left rotate array by one place
    //    int  arr[]={1,2,3,4,5,6,7,8};
    //    int temp=arr[0];
    //    for(int i=1;i<arr.length;i++){
    //     arr[i-1]=arr[i];
    //    }
    
    // arr[arr.length-1]=temp;




    // rotate an array by d places;
    // int d=3;
    // reverse(arr, 0, arr.length-1-d);
    // reverse(arr, arr.length-d, arr.length-1);
    // reverse(arr, 0, arr.length-1);
    // for(int i=0;i<arr.length;i++){
    //     System.out.print(arr[i]+" ");
    // }





    // // place zero to the end of array
    // int nums[]={1,2,3,0,2,0,6,0,2,0,5,0};
    // //1,2,3,2,6,2,5
    // int j=0;
    // for(int i=0;i<nums.length;i++){
    //     if(nums[i]==0){
    //      j=i;
    //      break;
    //     }
    // }
  
    // for(int i=j;i<nums.length;i++){
    //     if(nums[i]!=0){
    //         nums[j]=nums[i];
    //         nums[i]=0;
    //         j++;
    //     }
    // }



// int nums1[]={1,1,1,3,4,5,6,6,6,7,7,7,9};
// int nums2[]={0,1,1,2,2,5,8,8,10};
// ArrayList<Integer>ans=new ArrayList<>();
// int i=0;
// int j=0;

// while(i<nums1.length && j<nums2.length){
//     if(nums1[i]==nums2[j]){
//         if(ans.size()==0 || ans.get(ans.size()-1)!=nums1[i]){
//             ans.add(nums1[i]);
//         }
       
//         i++;j++;
//     }
//    else if(nums1[i]<nums2[j]){
//     if(ans.size()==0 || ans.get(ans.size()-1)!=nums1[i]){
//  ans.add(nums1[i]);
//     }
       
//         i++;
//     }
//     else{
//         if(ans.size()==0 || ans.get(ans.size()-1)!=nums1[j]){
//  ans.add(nums1[j]);
//     }
//         j++;
//     }
// }
// while (i<nums1.length) {
//     if(ans.size()==0 || ans.get(ans.size()-1)!=nums1[i]){
//  ans.add(nums1[i]);
//     }
//     i++;
// }
// while (j<nums2.length) {
//         if(ans.size()==0 || ans.get(ans.size()-1)!=nums1[j]){
//  ans.add(nums1[j]);
//     }
//         j++;
// }



//     for(int x=0;x<ans.size();x++){
//         System.out.print(ans.get(x)+" ");
//     }







// Intersection of Array


int nums1[]={1,1,1,3,4,5,6,6,6,7,7,7,9,11,13,14,15};
int nums2[]={0,1,1,2,2,5,8,8,10,11,15};
ArrayList<Integer>ans=new ArrayList<>();
int i=0;
int j=0;
while(i<nums1.length && j<nums2.length){
    if(nums1[i]==nums2[j]){
        ans.add(nums1[i]);
        i++;j++;
    }else if(nums1[i]<nums2[j]){
        i++;
    }else{
        j++;
    }
}

    for(int x=0;x<ans.size();x++){
        System.out.print(ans.get(x)+" ");
    }







}
}