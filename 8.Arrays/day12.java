import java.util.*;
public class day12 {
    public static void main(String args[]){
        int arr[]={1,1,1,3,3,2,2,2,5,5,5,5,5,5,5,5,2,2,2,2};
        int cnt1=0;
        int cnt2=0;
        int el1=0;
        int el2=0;
        for(int i=0;i<arr.length;i++){
if(cnt1==0 && arr[i]!=el2){
    cnt1=1;
    el1=arr[i];
}else if(cnt2==0 && arr[i]!=el1){
    cnt2=1;
    el2=arr[i];
}
else if(el1==arr[i])cnt1++;
else if(el2==arr[i])cnt2++;
else{
    cnt1--;cnt2--;
}
        }


        System.out.println(el1+" "+el2);
    }
}
