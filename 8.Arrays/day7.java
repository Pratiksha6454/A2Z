import java.util.*;
public class day7{
   static void reverse(int arr[],int si,int ei){
        while(si<=ei){
            int temp=arr[ei];
            arr[ei]=arr[si];
            arr[si]=temp;
            si++;ei--;
        }
    }
    public static void main(String args[]){
        int arr[]={4,5,3,2,1,0};
        int index=-1;
        for(int i=arr.length-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                index=i;
                break;
            }
        }
        // if(index==-1){
        //     reverse(arr, 0, arr.length-1);
        //     for(int i=0;i<arr.length;i++){
        //     System.out.print(arr[i]+" ");
        // }
        // }

        for(int i=arr.length-1;i>index;i--){
            if(arr[i]>arr[index]){
                int temp=arr[i];
                arr[i]=arr[index];
                arr[index]=temp;
                break;
            }
        }


        reverse(arr,index+1,arr.length-1);

        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
    }
}
