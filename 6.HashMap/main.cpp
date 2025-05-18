#include<iostream>
using namespace std;
int main(){
// int arr[]={1,2,3,4,1,1,6,2,3,4};
// int ans[7]={0};
// for(int i=0;i<10;i++){
// ans[arr[i]]++;
// }
// cout<<ans[2]<<endl;
// cout<<ans[1]<<endl;

string str="PratikshaPratikshaPratikshaPPPPP";
int ans[256]={0};
for(int i=0;i<str.size();i++){
    ans[str[i]]++;
}
cout<<ans[str[1]];








    return 0;
}