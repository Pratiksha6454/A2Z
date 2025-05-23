import java.lang.reflect.Array;
import java.util.*;
public class day5 {
    public static void main(String[] args) {
        // Two sum
        // int arr[]={3,4,1,6,7,2,9,9,-1};
        // int target=8;

        // Brute Force
        // for(int i=0;i<arr.length-1;i++){
        //     for(int j=i+1;j<arr.length;j++){
        //         int sum=arr[i]+arr[j];
        //         if(sum==target){
        //             System.out.println("Sum found at "+i+" "+j);
                   
        //         }
        //     }
        // }


        // Better One
        // HashMap<Integer,Integer>ans=new HashMap<>();
        // for(int i=0;i<arr.length;i++){
        //     if(ans.containsKey(target-arr[i])){
        //         System.out.println("Sum at "+i+" "+ans.get(target-arr[i]));
        //     }
        //     else{
        //         ans.put(arr[i], i);
        //     }
        // }




        // Optimal Solution

        // Arrays.sort(arr);
        // int si=0;
        // int ei=arr.length-1;
        // while(si<=ei){
        //     if(arr[si]+arr[ei]==target){
        //         System.out.print("Sum at "+si+" "+ei);
        //         si++;ei--;
        //     }else if(arr[si]+arr[ei]<target){
        //         si++;
        //     }else{
        //         ei--;
        //     }
        // }



        // Sort arr containing 0,1,2

        // int arr[]={2,2,2,2,2,1,0,2,1,0,0,2,1,0,1,0,2,2,0,1,1,1,0};
        // int low=0;
        // int mid=0;
        // int high=arr.length-1;
        // while(mid<=high){
        //     if(arr[mid]==0){
        //         int temp=arr[mid];
        //         arr[mid]=arr[low];
        //         arr[low]=temp;
        //         low++;mid++;
        //     }else if(arr[mid]==1){
        //         mid++;
        //     }else{
        //         int temp=arr[mid];
        //         arr[mid]=arr[high];
        //         arr[high]=temp;
        //         high--;
        //     }
        // }

        // for(int i=0;i<arr.length;i++){
        //     System.out.print(arr[i]+" ");
        // }





        // Majority Element

//         int arr[]={1, 1, 2, 1, 3, 5, 1};
//         HashMap<Integer,Integer>ans=new HashMap<>();
//         for(int i=0;i<arr.length;i++){
//             ans.put(arr[i],ans.getOrDefault(arr[i], 0)+1);
//         }

//         for (Integer key : ans.keySet()) {
//             if(ans.get(key)>arr.length/2){
//                 System.out.print(key);
//             }

// }

// int arr[]={1, 1, 2, 1, 3, 5, 1};
// int el=-1;
// int cnt=0;
// for(int i=0;i<arr.length;i++){
//     if(cnt==0){
//         el=arr[i];
//         cnt=1;
//     }else if(arr[i]==el){
//         cnt++;
//     }else{
//         cnt--;
//     }
// }

// System.out.print(el);




// Maximum Subarray sum
// int arr[]={-2,-3,4,-1,-2,1,5,-3};
// // int arr[]={-100,-12,-30,-1,-5,-2};

// int start=0;
// int end=0;
// int sum=0;
// int maxLen=0;
// int maxi=Integer.MIN_VALUE;
// for(int i=0;i<arr.length;i++){
//     if(sum<=0){
//         sum=0;
//         start=i;
//     }
//     sum+=arr[i];
//     end=i;
//     maxLen=Math.max(maxLen,end-start+1);
//     maxi=Math.max(maxi, sum);
//     System.out.println("Maximum sum "+maxi+",maximum length "+maxLen);
    
// }





// Best time to buy an stock

int arr[]={7,1,5,3,6,4,10};
int profit=0;
int buyingPrice=arr[0];
for(int i=1;i<arr.length;i++){
    profit=Math.max(profit,arr[i]-buyingPrice);
    if(buyingPrice>arr[i]){
        buyingPrice=arr[i];
    }
}

System.out.println(profit);




    }
}
