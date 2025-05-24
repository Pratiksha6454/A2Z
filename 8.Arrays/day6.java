import java.util.*;
public class day6{
    public static void main(String[] args) {
        int arr[]={-1,-2,-3,-4,-5,1,2,3,4,5,7,8,9,10};
   ArrayList<Integer>negs=new ArrayList<>();
   ArrayList<Integer>pos=new ArrayList<>();
   for(int i=0;i<arr.length;i++){
    if(arr[i]<0){
        negs.add(arr[i]);
    }else{
        pos.add(arr[i]);
    }
   }

   if(negs.size()<pos.size()){
    for(int i=0;i<negs.size();i++){
        arr[i*2]=pos.get(i);
        arr[i*2+1]=negs.get(i);
    }
    int index=negs.size()*2;
    for(int i=negs.size();i<pos.size();i++){
        arr[index++]=pos.get(i);
    }
   }else{
    for(int i=0;i<pos.size();i++){
        arr[i*2]=pos.get(i);
        arr[i*2+1]=negs.get(i);
    }
    int index=pos.size()*2;
    for(int i=pos.size();i<negs.size();i++){
        arr[index++]=negs.get(i);
    }
   }

//    int posIndex=0;
//    int negIndex=1;
//    for(int i=0;i<arr.length;i++){
//     if(arr[i]<0){
// ans[negIndex]=arr[i];
// negIndex+=2;
//     }else{
//         ans[posIndex]=arr[i];
//         posIndex+=2;
//     }

//    }


        for(int j=0;j<arr.length;j++){
            System.out.print(arr[j]+" ");
        }
    }
}