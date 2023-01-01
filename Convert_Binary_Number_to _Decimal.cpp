#include <iostream>
#include<cmath>
using namespace std;

int convert(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}

int octTodeC(long long n)
{
    int oct=0;
    int i=0;
    int rem=0;
    while(n>0){
        rem = n % 10;
        oct+=(rem*pow(8,i));
        ++i;
    }
   cout<<oct<<endl;
}


int hexTodeC(string str){
  int ans=0;
  int i=0;
  int x=1;
  int n=str.size();
  for (int i=n-1; i>0;i--)
{
    if(str[i]>='0' && str[i]<='9'){
        ans+=(x*(str[i]-'0'));
    }
    else if (str[i]>='a' && str[i]<='f')
    {
        /* code */
        ans+=(x*(str[i]-'a'+10));
    }
    return ans;
}  
}


int decToBin(int n){
    int x=1;
    int ans=0;
    while (x<=n)
    {
        /* code */
       x*=2;
       x/=2;
       while (x>0)
       {
        /* code */
        int ld=n/x;
        n-=ld*x;
        x/=2;
        ans=ans*10+ld;
       }
       return ans;
    }
    
}
string decToHex(int n){
    int x=1;
    string ans;
    while (x<=n)
    {
         /* code */
        x*=16;
    x/=16;
    }
    while (x>0)
    {
        /* code */
       int ld =n/x;

    
    }
    
    
}
int addBin(long long x,long long y)
{
    int ans=0;
    int pc=0;
}


int main() {
    // int n;
    // cout << "Enter the number of terms: ";
    // cin >> n;
    string str;
    cin>>str;
    cout<< hexTodeC(str);
    cout<<decToBin(123456)<<endl;
    return 0;
}