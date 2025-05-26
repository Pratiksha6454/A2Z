import java.util.*;
public class day8 {


     public static boolean linearSearch(int []a, int num) {
        int n = a.length; //size of array
        for (int i = 0; i < n; i++) {
            if (a[i] == num)
                return true;
        }
        return false;
    }
    public static void main(String args[]){
        int arr[]={10,22,12,3,0,6};
        ArrayList<Integer>ans=new ArrayList<>();
        // for(int i=0;i<arr.length;i++){
        //     boolean flag=true;
        //     for(int j=i+1;j<arr.length;j++){
        //         if(arr[i]<arr[j]){
        //             flag=false;
        //             break;
        //         }
        //     }
        //     if(flag){
        //         ans.add(arr[i]);
        //     }
        // }


//         int largest=arr[arr.length-1];
//         ans.add(largest);
// for(int i=arr.length-2;i>=0;i--){
//     if(arr[i]>largest){
//         ans.add(arr[i]);
//         largest=arr[i];
//     }
// }
// Collections.reverse(ans);



//         for(int i=0;i<ans.size();i++){
//             System.out.print(ans.get(i)+" ");
//         }
//         System.out.println("End");



// Longest Consecutive Sequence
int nums[]={102,4,100,1,101,3,2,1,1,5,107,6};
// int cnt=0;
// int Longest=1;
// for(int i=0;i<nums.length;i++){
//     int x=nums[i];
//     cnt=1;
//     while(linearSearch(nums,x+1)){
//         x=x+1;
//         cnt=cnt+1;
//         // System.out.println("Cnt "+cnt);
//     }
//     Longest=Math.max(Longest,cnt);

// }
int cnt=0;
int x=-1;
Set<Integer> set = new HashSet<>();
int Longest=1;
for(int i=0;i<nums.length;i++){
    set.add(nums[i]);
}
for(int it:set){
    if(!set.contains(it-1)){
cnt=1;
x=it;
while(set.contains(x+1)){
    x=x+1;
    cnt=cnt+1;
}
Longest=Math.max(cnt, Longest);
    }
}

System.out.println(Longest);

    }
}
