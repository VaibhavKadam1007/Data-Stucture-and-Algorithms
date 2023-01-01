// prime check
// #include <iostream>
// #include<cmath>
// using namespace std;
// int main() {
// int n;
// cin>>n;
// bool flag=0;
// for(int i=2;i<=sqrt(n);i++){
// if(n%i==0){
// cout<<"Non-prime"<<endl;
// flag=1;
// break;
// }
// }
// if(flag==0){
// cout<<"prime"<<endl;
// }
// return 0;
// }
// reverse_an_number
// #include <iostream>
// using namespace std;
// int main() {
// int n;
// cin>>n;
// int rn=0;
// while(n>0){
// int lastdigit= n%10;
// rn = rn*10 + lastdigit;
// n=n/10;
// }
// cout<<rn<<endl;

// return 0;
// }

// number is Armstrong number
// sum of the cubes of its digits is equal to the number itself.
// #include <iostream>
// #include<math.h>
// using namespace std;

// int main() {
// int n;
// cin>>n;
// int sum=0;
// int originaln=n;
// while(n>0){
// int ld=n%10;
// sum=sum+pow(ld,3);
// n=n/10;
// }
// if(sum==originaln){
// cout<<"Armstrong number"<<endl;
// }
// else{
// cout<<"not armstrong"<<endl;
// }

// return 0;
// }
