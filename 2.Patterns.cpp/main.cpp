#include<iostream>
using namespace std;

//---------------------------------------------------------------------------------------------
void print1(int n){
    /*
    X X X X
    X X X X
    X X X X
    X X X X
     */
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"X ";
        }
        cout<<endl;
     }

     cout<<endl;
}

//---------------------------------------------------------------------------------------------


void print2(int n){
    /*
    X 
    X X 
    X X X 
    X X X X
     */
     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"X ";
        }
        cout<<endl;
     }

     cout<<endl;
}

//---------------------------------------------------------------------------------------------

void print3(int n){
    /*
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
     */
     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
     }

     cout<<endl;
}


//---------------------------------------------------------------------------------------------

void print4(int n){
    /*
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
     */
     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
     }

     cout<<endl;
}

//---------------------------------------------------------------------------------------------

void print5(int n){
    /*
    X X X X X
    X X X X
    X X X
    X X
    X
     */
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"X ";
        }
        cout<<endl;
     }

     cout<<endl;
}

//---------------------------------------------------------------------------------------------

void print6(int n){
    /*
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
     */
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
     }

     cout<<endl;
}


//---------------------------------------------------------------------------------------------

void print7(int n){
    /*
         X
        XXX
       XXXXX
      XXXXXXX
     XXXXXXXXX 
     */
     for(int i=1;i<=n;i++){
        for(int j=1;j<n-i+1;j++){
           cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"X";
        }
        cout<<endl;
     }
}


//---------------------------------------------------------------------------------------------

void print8(int n){
    /*
   XXXXXXX 
    XXXXX
     XXX
      X
     */
     for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-2*i-1;j++){
            cout<<"X";
        }
        cout<<endl;
     }
}


//---------------------------------------------------------------------------------------------

void print9(int n){
  print7(n);
  print8(n);
}


//---------------------------------------------------------------------------------------------

void print10(int n){
    /*
    X
    XX
    XXX
    XXXX
    XXXXX
    XXXX
    XXX
    XX
    X
     */
     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"X";
        }
        cout<<endl;
     }
     for(int i=2;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"X";
        }
        cout<<endl;
     }

     cout<<endl;
}

//---------------------------------------------------------------------------------------------

void print11(int n){
    /*
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
     */
     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0)cout<<"1";
            else cout<<"0";
        }
        cout<<endl;
     }

     cout<<endl;


    //  1-start;
}


//---------------------------------------------------------------------------------------------

void print12(int n){
    /*
    1                 1
    1 2             2 1
    1 2 3         3 2 1
    1 2 3 4     4 3 2 1
    1 2 3 4 5 5 4 3 2 1
     */
     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        for(int j=1;j<=2*n-2*i;j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
     }

     cout<<endl;
}


//---------------------------------------------------------------------------------------------

void print13(int n){
    /*
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14
     */
    int cnt=1;
     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<cnt++<<" ";
        }
        cout<<endl;
     }

     cout<<endl;
}

//---------------------------------------------------------------------------------------------

void print14(int n){
    /*
    A
    AB
    ABC
    ABCD
     */
     for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=i;j++){
            cout<<ch++<<" ";
        }
        cout<<endl;
     }

     cout<<endl;
}

//---------------------------------------------------------------------------------------------

void print15(int n){
    /*
    ABCDE
    ABCD
    ABC
    AB
    A
     */
     for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=n-i+1;j++){
            cout<<ch++<<" ";
        }
        cout<<endl;
     }

     cout<<endl;
}

//---------------------------------------------------------------------------------------------

void print16(int n){
    /*
    A
    BB
    CCC
    DDDD
    EEEEE
     */
    char ch='A';
     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
     }

     cout<<endl;
}
//---------------------------------------------------------------------------------------------

void print17(int n){
    /*
         A
        ABA
       ABCBA
      ABCDCBA
     ABCDEDCBA 
     */
     for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            if(j<i){
cout<<ch++;
            }
            else{
                cout<<ch--;
            }
            
        }
        cout<<endl;
     }

     cout<<endl;
}

void print18(int n){
    /*
     E
     D E
     C D E
     B C D E
     A B C D E    
     */
     
     for(int i=1;i<=n;i++){
        char ch='E';
        ch=ch-i+1;
        for(int j=1;j<=i;j++){
      cout<<ch++;
            
        }
        cout<<endl;
     }

     cout<<endl;
}

void print19(int n){
    /*
     XXXXXXXXXX
     XXXX  XXXX
     XXX    XXX
     XX      XX
     X        X
     XX      XX
     XXX    XXX
     XXXX  XXXX
     XXXXXXXXXX    
     */
     
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"X";
        }
        for(int j=1;j<=2*i-2;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i+1;j++){
            cout<<"X";
        }
        cout<<endl;
    }

for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<"X";
    }
    for(int j=1;j<=2*n-2*i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
        cout<<"X";
    }
    cout<<endl;


}
}

void print20(int n){
    /*
     X        X
     XX      XX
     XXX    XXX
     XXXX  XXXX
     XXXXXXXXXX
     XXXX  XXXX
     XXX    XXX
     XX      XX
     X        X
     */
     
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"X";
        }
        for(int j=1;j<=2*n-2*i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"X";
        }
        cout<<endl;
    }

for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i+1;j++){
        cout<<"X";
    }
    for(int j=1;j<=2*i-2;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i+1;j++){
        cout<<"X";
    }
    cout<<endl;


}
}


void print21(int n){
    /*
       XXXX
       X  X
       X  X
       XXXX 
     */
     
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(i==1||j==1||i==n||j==n){
            cout<<"X";
        }else{
            cout<<" ";
        }
    }
    cout<<endl;
   }
}

void print22(int n){
    /*
       4 4 4 4 4 4 4
       4 3 3 3 3 3 4
       4 3 2 2 2 3 4
       4 3 2 1 2 3 4
       4 3 2 2 2 3 4
       4 3 3 3 3 3 4
       4 4 4 4 4 4 4
     */
   
  for(int i=0;i<2*n-1;i++){
    for(int j=0;j<2*n-1;j++){
        int top=i;
        int left=j;
        int right=(2*n-2)-j;
        int down=(2*n-2)-i;
        cout<<(n-min((min(top,down)),(min(left,right))));
    }
    cout<<endl;
  }
}
int main(){
int n;
cin>>n;
// print1(n);
// print2(n);
// print3(n);
// print4(n);
// print5(n);
// print6(n);
// print7(n);
// cout<<endl;
// print8(n);
// cout<<endl; 
// print9(n);
// cout<<endl;
// print10(n);
// print11(n);
// print12(n);
// print13(n);
// print14(n);
// print15(n);
// print16(n);
// print17(n);
// print18(n);
// print19(n);
// print20(n);
// print21(n);
print22(n);

    return 0;
}