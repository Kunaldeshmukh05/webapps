#include <iostream>
#include<math.h>
using namespace std;
int main (){ 
int n,lastdigit,sum=0;
cout<<"Enter a number"<<endl;
cin>>n;
 int originaln = n;
while(n>0){
    lastdigit=n%10;
     sum +=(lastdigit*lastdigit*lastdigit);
    n=n/10;
}
    cout<<"Sum of cube of all digits:"<<sum<<endl;
if( sum == originaln){
    cout<<"The given number "<<originaln<<" is equal to sum of digits"<<sum<<endl;
}
else
cout<<"The given number "<<originaln<<" is not equal to sum of digits"<<sum<<endl;
    return 0;
}