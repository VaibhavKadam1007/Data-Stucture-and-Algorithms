// Continue
// Continue statement is used to skip to the next iteration of that loop. This
// means that it stops one iteration of the loop. All the statements present
// after the continue statement in that loop are not executed.


// #include<iostream>
// using namespace std;
// int main(){
// int i;
// for (i=1; i<=20; i++) {
// if (i%3==0) {
// continue;
// }
// cout<<i<<endl;
// }

// return 0;
// }

// Break statement is used to terminate the current loop. As soon as the break
// statement is encountered in a loop, all further iterations of the loop are
// stopped and control is shifted to the first statement after the end of loop.

// #include<iostream>
// using namespace std;
// int main(){
// int i;
// for (i=1; i<=20; i++) {
// if (i==11) {
// break;
// }
// cout<<i<<endl;
// }

// return 0;
// }

// Write a program to print all odd numbers till n.
// #include<iostream>
// using namespace std;
// int main(){
// int i;
// for (i=1; i<=20; i++) {
// if (i%2!=0) {
//  cout<<i<<endl;
// }

// }

// return 0;
// }
// 2nd
// #include <iostream>
// using namespace std;
// int main() {
// int n;
// cout<<"Enter number: ";
// cin>>n;
// for (int i=1; i<=n; i++) {
// if (i%2==0) { // i is even
// continue;
// }
// cout<<i<<endl;
// }
// return 0;
// }
// Write a program to check if a given number is prime or not.
#include <iostream>
using namespace std;
int main() {
int n;
cout<<"Enter a number: ";
cin>>n;
int i;
for (i=2; i<n; i++) {
if (n%i==0) { //found a factor
// of n
cout<<"Not a prime"<<endl;
break;
}
}
if (i==n) { //loop has
// completed all iterations
cout<<"Prime Number"<<endl;
}
return 0;
}