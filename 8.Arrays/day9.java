import java.util.*;
public class day9{

  static  void RowZero(int row,int matrix[][]){
for(int i=0;i<matrix[0].length;i++){
matrix[row][i]=-1;
}
    }

  static  void ColZero(int col,int matrix[][]){
for(int i=0;i<matrix.length;i++){
matrix[i][col]=-1;
}
    }

    static void reverse(int arr[],int si,int ei){
        while(si<=ei){
        int temp=arr[si];
        arr[si]=arr[ei];
        arr[ei]=temp;
        si++;ei--;
        }
    }


    public static void main(String[] args) {
        int matrix[][]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};



        // Brute Force
// for(int i=0;i<matrix.length;i++){
//     for(int j=0;j<matrix[0].length;j++){
//         if(matrix[i][j]==0){
//             RowZero(i,matrix);
//             ColZero(j,matrix);
//         }
//     }
// }



// Better Approach

// int row[]=new int[matrix[0].length];
// int col[]=new int[matrix.length];
// Arrays.fill(row, 0);
// Arrays.fill(col, 0);

// for(int i=0;i<matrix.length;i++){
//     for(int j=0;j<matrix[0].length;j++){
//         if(matrix[i][j]==0){
//            row[j]=-1;
//            col[i]=-1;
//         }
//     }
// }

//  for(int i=0;i<matrix.length;i++){
//             for(int j=0;j<matrix[0].length;j++){
//                 if(row[j]==-1|| col[i]==-1){
//                     matrix[i][j]=0;
//                 }
//             }

//         }




// Optimal Aproach

// int col=1;
// for(int i=0;i<matrix.length;i++){
//     for(int j=0;j<matrix[0].length;j++){
//         if(matrix[i][j]==0){
//             matrix[i][0]=0;
//             if(j==0){
//                 col=0;
//             }else{
//                 matrix[0][j]=0;
//             }
//         }
//     }
// }

//  for(int i=1;i<matrix.length;i++){
//             for(int j=1;j<matrix[0].length;j++){
//                 if(matrix[i][0]==0||matrix[0][j]==0){
//                     matrix[i][j]=0;
//                 }
//             }

//         }

// if(matrix[0][0]==0){
//     for(int i=0;i<matrix[0].length;i++){
//         matrix[0][i]=0;
//     }
// } 
// if(col==0){
//     for(int i=0;i<matrix.length;i++){
//         matrix[i][0]=0;
//     }
// }       





// trAnPOse

for(int i=0;i<matrix.length;i++){
    for(int j=i+1;j<matrix[0].length;j++){
        int temp=matrix[i][j];
        matrix[i][j]=matrix[j][i];
        matrix[j][i]=temp;
    }
}
for(int i=0;i<matrix.length;i++){
    reverse(matrix[i], 0, matrix[0].length-1);
}


        for(int i=0;i<matrix.length;i++){
            for(int j=0;j<matrix[0].length;j++){
                System.out.print(matrix[i][j]+" ");
            }
            System.out.println();
        }
    }
}