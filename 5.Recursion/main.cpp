#include<iostream>
using namespace std;

//------------------------------------------------------------------------------------------------------------------------------
void printName(int n){
    if(n==0){
        return ;
    }
    cout<<"Pratiksha\n";
    n--;
    printName(n);
}



//------------------------------------------------------------------------------------------------------------------------------

// print numbers from n to 1
void printnTo1(int n){
    if(n==1){
        cout<<n;
        return;
    }
cout<<n<<" ";
printnTo1(n-1);
}


//------------------------------------------------------------------------------------------------------------------------------



void print1Ton(int n){
    if(n==0){
        return;
    }
print1Ton(n-1);
cout<<n<<" ";

}


//------------------------------------------------------------------------------------------------------------------------------



int fictorial(int n){
    if(n<=1){
        return n;
    }
    return n*fictorial(n-1);
}


//------------------------------------------------------------------------------------------------------------------------------


int sum(int n){
    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}


//------------------------------------------------------------------------------------------------------------------------------
bool checkSorted(int arr[],int start,int end){
if(start==end){
    return true;
}
if(arr[start]>arr[start+1]){
    return false;
}
checkSorted(arr,start+1,end);

}


//------------------------------------------------------------------------------------------------------------------------------

int nthFib(int n){
    if(n<=1){
        return n;
    }
    return nthFib(n-1)+nthFib(n-2);
}



//------------------------------------------------------------------------------------------------------------------------------


int firstOc(int arr[],int n,int s,int last){
if(s==last){
    return -1;
}
if(arr[s]==n){
    return s;
}
firstOc(arr,n,s+1,last);
}



//------------------------------------------------------------------------------------------------------------------------------



int LastOc(int arr[],int n,int s,int last){
if(s==last){
    return -1;
}
int res=LastOc(arr,n,s+1,last);
if(res!=-1){
    return res;
}

if(arr[s]==n){
    return s;
}
return -1;



}


//------------------------------------------------------------------------------------------------------------------------------



int power(int x,int n){
    if(n==0){
        return 1;
    }
    return x*power(x,n-1);
}

//------------------------------------------------------------------------------------------------------------------------------



int spower(int x,int n){
    if(n==0){
        return 1;
    }
int half=spower(x,n/2);
int halfS=half*half;
if(n%2!=0){
    halfS*=x;
}
return halfS;

}


//------------------------------------------------------------------------------------------------------------------------------


void removeDupli(string word,string ans,int s,int leng){
if(s==leng+1){
    cout<<ans;
    return;
}
if(word[s]!=word[s-1]){
    ans+=word[s-1];
    removeDupli(word,ans,s+1,leng);
}else{
    removeDupli(word,ans,s+1,leng);
}
    
}


int main(){
    // printName(5);
    // print1Ton(10);
//    cout<<fictorial(5);
// cout<<sum(7);
// cout<<nthFib(8);

// int arr[]={101,12,13,14,15,16,17};
// cout<<checkSorted(arr,0,7);


// int arr[]={1,2,3,4,7,3,5,6,3,7,6,7};
// cout<<LastOc(arr,3,0,12);

int x=5;
int n=4;

// cout<<power(x,n);
// cout<<spower(x,n);


removeDupli("PPPPrrrrraaaattttiiiiikkkkkkssssshhhhhhha","",1,41);
    return 0;
}