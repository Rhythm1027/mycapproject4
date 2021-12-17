#include<iostream>
using namespace std;
int isprime(int n){
    int i;
    int flag1=1;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            flag1=0;
            break;
        }
    }
    return flag1;
}
int main(){  
int n,i;
cout<<"Enter a positive integer : "<<endl;
cin>>n;
for(i=2;i<=n/2;i++){
    if(isprime(i)){
        if(isprime(n-i)){
            cout<<n<<" = "<<i<<" + "<<n-i<<endl;
            
        }
    }
}

return 0;
}