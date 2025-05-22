import java.util.*;
public class day4{
    public static void main(String[] args) {
        int maxLen=0;
        int arr[]={4,2,3,0,0,0,0,0,0,1,1,1,1,4,2,3};
//         for(int i=0;i<arr.length;i++){
//             int sum=0;
//             for(int j=i;j<arr.length;j++){
// sum+=arr[j];
// if(sum==4){
//     maxLen=Math.max(j-i+1,maxLen);
// }
//             }
//         }
//         System.out.println("The maximum length is : "+maxLen);


// HashMap<Integer,Integer>ans=new HashMap<>();
// ans.put(arr[0], 0);
// int sum=arr[0];
// for(int i=1;i<arr.length;i++){
// sum+=arr[i];
// if(sum==4){
//     maxLen=i+1;
// }
// int rem=sum-4;
// if(ans.containsKey(rem)){
//     maxLen=Math.max(maxLen,i-ans.get(rem));
// }
// if(!ans.containsKey(sum)){
// ans.put(sum, i);
// }


// }

int left = 0;
int right = 0;
int sum = 0;

while (right < arr.length) {
    sum += arr[right];

    while (sum > 4 && left <= right) {
        sum -= arr[left];
        left++;
    }

    if (sum == 4) {
        maxLen = Math.max(maxLen, right - left + 1);
    }

    right++;
}






System.out.println(maxLen);

    }
}