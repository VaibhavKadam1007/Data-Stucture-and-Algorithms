// #include <iostream>
// using namespace std;

// int add(int num1, int num2){
// int sum = num1 + num2;
// return sum;
// }

// int main()
// {
// int a,b;
// cin>>a>>b;

// cout<<add(a,b)<<endl;

// return 0;
// }
// print a given number using functions.
// #include <iostream>
// using namespace std;

// void display(int a){
// cout<<a<<endl;
// return;
// }

// int main()
// {
// int a;
// cin>>a;

// display(a);

// return 0;
// }
//print all prime numbers between two numbers 
// prime check
// #include <iostream>
// #include<cmath>
// using namespace std;
// bool is_prime(int a){
// bool flag=0;
// for(int i=2;i<=sqrt(a);i++){
// if(a%i==0){
// flag=1;
//   return false;
// }
// }
//    return true;
// }c

// #include <iostream>
// using namespace std;
// void fib(int n)
// {
// cout << "Fibonacci Series: ";
// int t1 = 0, t2 = 1, nextTerm = 0;
//     for (int i = 1; i <= n; ++i) {
//         // Prints the first two terms.
//         if(i == 1) {
//             cout << t1 << ", ";
//             continue;
//         }
//         if(i == 2) {
//             cout << t2 << ", ";
//             continue;
//         }
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//         cout << nextTerm << ", ";
//     }

// }

// int main() {
//     int n;
//     cout << "Enter the number of terms: ";
//     cin >> n;
//     fib(n);
//     return 0;
// }
// pascal triangle 

// #include <iostream>
// using namespace std;
// int factorial(int n)
// {
    
//  long factorial = 1.0;
//   if (n < 0)
//         cout << "Error! Factorial of a negative number doesn't exist.";
//     else {
//         for(int i = 1; i <= n; ++i) {
//             factorial *= i;
//         }
//         return factorial;    
//     }
// }


// int main() {
//     int n;
//     cout<<"Enter number:"<<" ";
//     cin >> n;
//     for(int i = 1; i <= n; ++i) {
//          for(int j = 1; i <= n; ++i) {
//            cout << factorial(i)/(factorial(j)*factorial(i-j))<<" ";
//         }
//         cout<<endl;
//         }
//     return 0;
// }
// Enter 2 numbers:
// Calculate Sum of Natural Numbers
// #include <iostream>
// using namespace std;

// int main() {
//     int n, sum = 0;
//     cout << "Enter a positive integer: ";
//     cin >> n;
//     for (int i = 1; i <= n; ++i) {
//         sum += i;
//     }
//     cout << "Sum = " << sum;
//     return 0;
// }

// Check pythagorian triplet