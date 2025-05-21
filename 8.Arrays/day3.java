import java.util.*;
public class day3{
    public static void main(String args[]){
    //     int arr[]={1,2,3,4,6,5,7,8,10};
    //     int N=10;
    //     int xor=0;
    //     for(int i=0;i<arr.length;i++){
    //         xor^=(i+1);
    //         xor^=arr[i];
    //     }
    //     xor^=N;

    //   System.out.println("The missing number is "+xor);





    // int nums[]={0,1,1,1,0,0,0,1,1,1,1,1,1,1,0,0,0,1,1,0,0,1,1};
    // int maxLen=0;
    // int cnt=0;
    // for(int i=0;i<nums.length;i++){
    //     if(nums[i]==1){
    //         cnt++;
    //         maxLen=Math.max(maxLen,cnt);
    //     }else{
    //         cnt=0;
    //     }
    // }
    // System.out.println("The maximum number is :"+maxLen);






    int arr[]={1,1,3,2,2,5,5,7,7,8,8,5,3,9,9};
    int ans=0;
    for(int i=0;i<arr.length;i++){
ans^=arr[i];
    }
    System.out.println("The unique element is "+ans);
    }
}