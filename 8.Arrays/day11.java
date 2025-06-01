import java.util.HashMap;

public class day11 {
    public static void main(String args[]) {
        int arr[] = {1, 2, 3, -2, 5, -3, 1, 2};
int k = 5;
        int cnt = 0;

        // for (int i = 0; i < arr.length; i++) {
        //     int sum = 0;
        //     for (int j = i; j < arr.length; j++) {
        //         sum += arr[j];
        //         if (sum == k) {
        //             cnt++;
        //         }
        //     }
        // }

        HashMap<Integer,Integer>ans=new HashMap<>();
        int sum=0;
        ans.put(0, 1);
        for(int i=0;i<arr.length;i++){
           sum+=arr[i];
           int rem=sum-k;
           cnt+=ans.getOrDefault(rem,0);
           ans.put(sum, ans.getOrDefault(ans, 0) + 1);
        }


    


        System.out.println("Count is " + cnt);
    }
}
