#include<iostream>
using namespace std;



// ------------------------------------------------------------------------------------------------------------------------------------------
void primeFactor(int n){
for(int i=2;i*i<=n;i++){
    if(n%i==0){
        cout<<i<<" ";
        while(n%i==0){
            n=n/i;
        }
    }
}
if(n!=1){
    cout<<n<<" ";
}
}


// ------------------------------------------------------------------------------------------------------------------------------------------

void power(int n,int x){
    int ans=1;
    while(x!=0){
        if(x%2==0){
            n=n*n;
            x=x/2;
        }else{
            ans*=n;
            x=x-1;
        }
    }
    cout<<ans;
}




void primeTillN( int n){
    int arr[n+1];
    for(int i=2;i<=n;i++){
        arr[i]=1;
    }
    for(int i=2;i*i<=n;i++){
        if(arr[i]==1){
            for(int j=i*i;j<=n;j+=i){
arr[j]=0;
            }
        }
    }

    for(int i=2;i<=n;i++){
        if(arr[i]!=0){

       
        cout<<i<<" ";
         }
    }
}

int main(){
    // Print prime factor of a number
    // cout<<"Enter a number";
    // int n;
    // cin>>n;
    // primeFactor(n);
while(true){



     int n;
    cout<<"Enter the number";
    cin>>n;
    // int x;
    // cout<<"Enter the power";
    // cin>>x;


    // power(n,x);

    primeTillN(n);
}

return 0;
}