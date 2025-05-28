import java.util.*;
public class day10{
    public static void main(String args[]){
        // int matrix[][]={{1,2,3,4,5,6},{20,21,22,23,24,7},{19,32,33,34,25,8},{18,31,36,35,26,9},{17,30,29,28,27,10},{16,15,14,13,12,11}};
// int[][] matrix = {
//   {1, 2, 3},
//   {8, 9, 4},
//   {7, 6, 5}
// };
int[][] matrix ={{1,2,3,4},
                 {5,6,7,8},
                 {9,10,11,12}};

// int[][] matrix = {
//     { 1,  2,  3,  4,  5},
//     {16, 17, 18, 19,  6},
//     {15, 24, 25, 20,  7},
//     {14, 23, 22, 21,  8},
//     {13, 12, 11, 10,  9}
// };

int startRow=0;
int startCol=0;
int endCol=matrix[0].length-1;
int endRow=matrix.length-1;

while(startRow<=endRow && startCol<=endCol){
        for(int i=startCol;i<=endCol;i++){
            System.out.print(matrix[startRow][i]+" ");
        }
        for(int i=startRow+1;i<=endRow;i++){
            System.out.print(matrix[i][endCol]+" ");
        }
        if(endRow>startRow){
        for(int i=endCol-1;i>=startCol;i--){
            System.out.print(matrix[endRow][i]+" ");
        }
    }
    if(endCol>startCol){
        for(int i=endRow-1;i>=startRow+1;i--){
            System.out.print(matrix[i][startCol]+" ");
        }
    }

        startRow++;startCol++;endCol--;endRow--;
    }
}
}