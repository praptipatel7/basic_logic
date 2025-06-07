//===================================================================
//Reverse the digits of an integer
//method-1
// #include<iostream>
// using namespace std;

// int main(){
//     string num;
//     cout<<"ENTER A INT :"<<endl;
//     cin>>num;
//     int l = 0;
//     int r = num.length() - 1;
//     while(l <= r){
//         cout<<num[r];
//         r--;
//     }
//     return 0;
    
// }
//method-2
// #include<iostream>
// using namespace std;

// int main(){
//     int num,a,reverse=0;
//     cout<<"ENTER A INT :"<<endl;
//     cin>>num;
//     while(num!=0){
//             a=num % 10;
//             reverse=reverse*10 + a;
//             num=num/10;
//     }
//     cout<<reverse;
//     return 0;
// }





//====================================================================
//Check if a number is a palindrome.
// #include<iostream>
// using namespace std;

// int main(){
//     string num;
//     cout<<"ENTER A INT :"<<endl;
//     cin>>num;
//     int pali=1;
//     int len=num.length();
//     for(int i=0;i<len/2;i++){
//         if(num[i]!=num[len-1-i]){
//         pali=0;
//         break;
//         }
//     }
//     if (pali == 1) {
//         cout << "YES, THE NUMBER IS A PALINDROME";
//     } 
//     else {
//         cout << "NO! TRY AGAIN!";
//     }
//     return 0;
// }




//====================================================================
//Check if a number is a prime.
// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"ENTER A INT :"<<endl;
//     cin>>num;
//     int prime=1;
//     for(int i=2;i<=num/2;i++){
//         if (num%i==0){
//             prime=0;
//             break;
//         }
//     }
//     if(prime==1){
//         cout<<"yes it is prime";
//     }
//     else{
//         cout<<"no it is not prime";
//     }

// }




//====================================================================
//Print all prime numbers from 1 to N.
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
    
//     cout<<"Enter the number to print prime number from 1 to __?"<<;
//     cin>>n;
//     for(int i=2;i<=n;i++){
//         int prime=1;
//         for(int j=2;j<=i/2;j++){
//             if(i%j==0){
//                 prime=0;
//                 break;
//             }
//         }
//     if(prime==1){
//         cout<<i<<"  ";
//     }
        
//     }
// }




//====================================================================
//Find the greatest common divisor (GCD) of two numbers .
// #include<iostream>
// using namespace std;

// int main(){
//     int a,b,q,r;
//     cout<<"Enter the value of A and B: "<<endl;
//     cin>>a>>b;
//     if (a < b) {
//         int temp = a;
//         a = b;
//         b = temp;
//     }

//     while(b!=0){
//     q=a / b;
//     r=a % b;
//     a=b;
//     b=r;
//     }
//     cout<<a;
// }




//======================================================================
//Calculate the LCM of two numbers.
// #include<iostream>
// using namespace std;

// int main(){
   
//     int a,b,q,r;

//     cout<<"Enter the value of A and B: "<<endl;
//     cin>>a>>b;
//     int LCM=a*b;
//     if (a < b) {
//         int temp = a;
//         a = b;
//         b = temp;
//     }

//     while(b!=0){
//     q=a / b;
//     r=a % b;
//     a=b;
//     b=r;
//     }
//     LCM=LCM/a;
//     cout<<LCM;
// }




//======================================================================
//Count the number of digits in a number.
// #include<iostream>
// using namespace std;

// int main(){
//     int num,count=0;
//     cout<<"Enter The number:";
//     cin>>num;
//     while(num!=0){
//         num=num/10;
//         count++;
//     }
//     cout<<count;
//     return 0;
// }




//======================================================================
//Sum of digits of a number (recursive & loop)
// #include<iostream>
// using namespace std;

// int main(){
//     int num,a,sum=0;
//     cout<<"Enter The number:";
//     cin>>num;
//     while(num!=0){
//         a=num%10;
//         sum+=a;
//         num=num/10;
//     }
//     cout<<sum;
// }




//======================================================================
//Check if a number is Armstrong.
// #include<iostream>
// #include<cmath>
// using namespace std;
// bool isArmstrong(int num){
//     int temp=num;
//     int digits=0;
//     while(temp!=0){
//         digits++;
//         temp=temp/10;
//     }
//     int sum=0;
//     temp=num;
//     while(temp!=0){
//         int digit=temp%10;
//         sum=sum+pow(digit,digits);
//         temp/=10;
//     }
//     return num==sum;
// }
// int main(){
//     int num;
//     cout<<"Enter The number:";
//     cin>>num;
//     if(isArmstrong(num)){
//         cout<<num<<" is an Armstrong number .";

//     }
//     else{
//         cout<<num<<" is not an Armstrong number .";
//     }
//     return 0;
// }




//======================================================================
//Generate the first N Fibonacci numbers.
// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter The numbers of fibbonaci number you want:";
//     cin>>num;
//     int a=0,b=1;
//     for(int i=0;i<num;i++){
//         cout<<a<<endl;
//         int c= a+b;
//         a=b;
//         b=c;
//     }
//     return 0;
// }




//======================================================================
//Find factorial of a number (recursion & iteration).
// #include<iostream>
// using namespace std;

// int main(){
//     int num,facto=1;
//     cout<<"ENTER A INT :"<<endl;
//     cin>>num;
//     for(int i=1 ; i<=num ; i++){
//         facto=i*facto;
//     }
//     cout<<"Fctorial of a num="<<facto;
//     return 0;
// }




//======================================================================
//Find power of a number (recursive exponentiation).
// #include<iostream>
// using namespace std;
// int power(int b,int expo){
//     if(expo ==0){
//         return 1;
//     }
//     return b*power(b,expo - 1);
// }

// int main(){
//     int a,exponent;
//     cout<<"ENTER THE VALUE OF BASE (a)";
//     cin>>a;
//     cout<<"ENTER THE VALUE OF EXPONENT: ";
//     cin>>exponent;
//     cout<<a<<"^"<<exponent<<"="<<power(a,exponent);
//     return 0;
// }




//======================================================================
//Convert decimal to binary and vice versa.
// #include<iostream>
// #include<cmath>
// using namespace std;

// string decimaltobinary(int deci){
//     if(deci == 0){
//         return "0";
//     }
//     string bin="";
//     while(deci>0){
//         bin=to_string(deci%2) + bin;
//         deci=deci/2;
//     }
//     return bin;
// }
// int binarytodecimal(string bin){
//     int deci=0;
//     int length=bin.length();
//     for(int i=0;i<length;i++){
//         deci=deci+(bin[length -1- i]-'0')*pow(2,i);
//     }
//     return deci;
// }

// int main(){
//     int n;
//     cout<<"Choose one:"<<endl<<"1.)Decimal to Binary."<<endl<<"2.)Binary to Decimal";
//     cin>>n;
//     if(n==1){
//     int num;
//     cout<<"ENTER A DECIMAL NUMBER :";
//     cin>>num;
//     cout<<"Binary form of this number is:"<<decimaltobinary(num);
//     }
//     if(n==2){
//     string integer;
//     cout<<"ENTER A BINARY NUMBER :";
//     cin>>integer;
//     cout<<"Decimal form of this number is :"<<binarytodecimal(integer);
//     }
//     else{
//         cout<<"INVALID INPUT !!!!";
//     }
//     return 0;
// }




//======================================================================
//Count the number of 1s in the binary representation.
// #include<iostream>
// using namespace std;

// int main(){
//     int num,a,count;
//     cout<<"Enter a number: ";
//     cin>>num;
//     while(num!=0){
//         a=num%10;
//         if(a==1){
//             count+=1;
//         }
//         num=num/10;
//     }
//     cout<<"No. of ones in this number is "<<count<<".";
//     return 0;
// }




//======================================================================
//Swap two numbers without using a temporary variable.
// #include<iostream>
// using namespace std;

// int main(){
//     int a ,b ;
//     cout<<"Enter value of a :";
//     cin>>a;
//     cout<<"Enter value of b :";
//     cin>>b;
//     cout<<"Before swaping :"<<endl;
//     cout<<"A ="<<a<<endl<<"B ="<<b<<endl;
//     a+=b;
//     b=a-b;
//     a=a-b;
//     cout<<"After  swaping :"<<endl;
//     cout<<"A ="<<a<<endl<<"B ="<<b;
//     return 0;
// }




//======================================================================
// Find the nth term of the arithmetic progression.
// #include<iostream>
// using namespace std;

// int main(){
//     int a,d,term,n;
//     cout<<"Enter the value of first term => ";
//     cin>> a ;
//     cout<<"Enter the difference => ";
//     cin>> d ;
//     cout<<"Enter the term you want => ";
//     cin>>n;
//     term = a + (n-1)*d;
//     cout<<"Nth of of this arithemetic progression is "<<term<<". ";
//     return 0;
// }




//======================================================================
//Find the nth term of the geometric progression.
// #include<iostream>
// #include<cmath>
// using namespace std;

// int main(){
//     int term,a,r,n;
//     cout<<"Enter the value of first term => ";
//     cin>> a ;
//     cout<<"Enter the ratio => ";
//     cin>> r ;
//     cout<<"Enter the term you want => ";
//     cin>>n;
//     term=a*pow(r,(n-1));
//     cout<<"nth term of this geometric progression "<<term;
//     return 0;
// }




//======================================================================
//Print a number in reverse order using recursion.
// #include<iostream>
// using namespace std;

// void reverse(int n){
//     if(n==0) return ;
//     cout<<n%10;
//     reverse(n/10);

// }

// int main(){
//     int num;
//     cout<<"Enter a number";
//     cin>>num;
//     cout<<"Reverse of this number is :";
//     reverse(num);
//     return 0;

// }




//======================================================================
//Check if a number is a strong number.
// #include<iostream>
// using namespace std;

// int facto(int n){
//     int facto=1;
//     for(int i=1;i<=n;i++){
//         facto=facto*i;
//     }
//     return facto;
// }

// int main(){
//     int num,a,sum=0,len;
//     cout<<"Enter a number =>";
//     cin>>num;
//     int original=num;
//     while(num!=0){
//         a=num%10;
//         sum+=facto(a);
//         num/=10;
//     }
//     if(sum==original){
//         cout<<"YAY !! The number is a strong number . ";
//     }
//     else{
//         cout<<"TRY !!! AGAIN .";
//     }
//     return 0;
// }




//======================================================================
//Find all perfect numbers in a given range.
// #include<iostream>
// using namespace std;

// bool isperfect(int n){
//     int sum=0;
//     for(int i=1 ; i<=n/2 ; i++){
//         if(n % i == 0) {
//             sum += i; 
//         }
//     }
//     return sum == n;
// }

// int main(){
//     int num1,num2 ;
//     cout<<"Enter range of number : ";
//     cin>>num1>>num2 ;
//     cout<<"Perfect numbers between "<<num1<<" and "<<num2<< " are: "<<endl;

//     for (int i=num1;i<=num2;i++){
//         if(isperfect(i)){
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }




//======================================================================
//Generate Pascal’s Triangle up to N rows.
// #include<iostream>
// using namespace std;

// int main(){
//     int N,space,num=1;
//     cout<<"Enter value of N : ";
//     cin>>N;
//     for(int i=0 ; i<N ; i++){
//         for(space=1;space<=N-i; space++){
//             cout<<" ";
//         }
//         for(int j=0; j<=i ; j++){
//             if(j==0 || i==0)
//                 num=1;
//             else
//                 num=num*(i-j+1)/j;
//                 cout<<" "<<num;

//         }
//         cout<<endl;
//     }
//     return 0;
// }

//======================================================================
//Count trailing zeroes in factorial of N.
// #include<iostream>
// using namespace std;

// int zeros(int f){
//     int count=0;
//     while(f!=0){
//         if(f%10 == 0){
//         count++;
//         }
//         f/=10;
//     }
//     return count;
// }

// int main(){
//     int n,facto=1;
//     cout<<"enter the value of n : ";
//     cin>>n;
//     for(int i=2 ; i<=n ; i++){
//         facto*=i;
//     }
//     cout<<"Factorial of this number is : "<<facto<<endl;
//     cout<<"Trailing zeros in this number is : "<<zeros(facto);
//     return 0;
// }




//======================================================================
//Find the root of a number.>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//======================================================================
//Find the sum of the series: 1 - 2 + 3 - 4 + 5 ... ± N.>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//======================================================================
//Calculate sum of all divisors of a number.>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//======================================================================
//Find the HCF of three numbers.>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//======================================================================
//Print numbers in the pattern of a pyramid.
// #include<iostream>
// using namespace std;

// int main(){
//     int n,space;
//     cout<<"enter number of rows : ";
//     cin>>n;
//     for(int i =0 ;i<n; i++){
//         for (int k=1; k<=n-i;k++){
//             cout<<" ";
//         }
//         for (int j=1 ; j<=i+1 ; j++){
//             cout<<j<<" ";
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }




//======================================================================
//Check whether a number can be expressed as the sum of two primes.>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>..

//PATTERN-1
// *****
// *****
// *****
// *****
// *****

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter number of rows : ";
//     cin>>n;
//     for (int i=0; i<n ; i++){
//         for(int j=0 ; j<n ; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

//PATTERN-2
// *
// **
// ***
// ****
// *****

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter number of rows : ";
//     cin>>n;
//     for(int i=0 ; i<n ; i++){
//         for(int j=0 ; j<=i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//PATTERN-3
//     *
//    **
//   ***
//  ****
// *****

// #include<iostream>
// using namespace std;

// int main(){
//     int n,space;
//     cout<<"enter number of rows : ";
//     cin>>n;
//     for(int i=0 ; i<n ; i++){
//         for (int k=n-i ;k>=0 ; k--){
//             cout<<" ";
//         }
//         for(int j=0 ; j<=i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//PATTERN-4
// *****
// ****
// ***
// **
// *

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter number of rows : ";
//     cin>>n;
//     for(int i=0 ; i<n ; i++){
//         for(int j=1 ; j<=n-i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//PATTERN-5
// *****
//  ****
//   ***
//    **
//     *

// #include<iostream>
// using namespace std;

// int main(){
//     int n,space;
//     cout<<"enter number of rows : ";
//     cin>>n;
//     for(int i=0 ; i<n ; i++){
//         for(int k=0 ; k<=i  ; k++){
//             cout<<" ";
//         }
//         for(int j=1 ; j<=n-i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//PATTERN-6
// *****
// *   *
// *   *
// *   *
// *****

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter number of rows : ";
//     cin>>n;
//     for(int i=0 ; i<n ; i++){
//         for(int j=0 ; j<n ; j++){
//             if(i==0 || i==n-1 || j==0 || j==n-1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//PATTERN-7
//    *
//   ***
//  *****
// *******

// #include<iostream>
// using namespace std;

// int main(){
//     int n ;
//     cout<<"enter the value of N : ";
//     cin>>n;
//     for(int i=1 ; i<=n ; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int k=1; k<=i*2 -1; k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//PATTERN-8
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

// #include<iostream>
// using namespace std;

// int main(){
//     int n ;
//     cout<<"enter the value of N : ";
//     cin>>n;
//     if(n%2!=0){
//         for(int i=1 ; i<=n/2 +1 ; i++){
//             for(int j=1; j<=n-i; j++){
//                 cout<<" ";
//             }
//             for(int k=1; k<=i*2 -1; k++){
//                 cout<<"*";
//             }
//             cout<<endl;
//         }
//         for(int i=n/2 ; i>=1 ; i--){

//             for(int j=1; j<=n-i; j++){
//                 cout<<" ";
//             }
//             for(int k=1; k<=i*2 -1; k++){
//                 cout<<"*";
//             }
//             cout<<endl;

//         }
//     }
//     else{
//         cout<<"Invalid Input!!";
//     }
//     return 0;
// }

//PATTERN-9
//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *

// #include<iostream>
// using namespace std;

// int main(){
//     int n ;
//     cout<<"enter the value of N : ";
//     cin>>n;
//     if(n%2!=0){
//         for(int i=1 ; i<=n/2 +1 ; i++){
//             for(int j=1; j<=n/2+1-i; j++){
//                 cout<<" ";
//             }
//             for(int k=1; k<=i*2 -1; k++){
//                 if(k==1 || k==2*i-1){
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
                
//             }
//             cout<<endl;
//         }
//         for(int i=n/2 ; i>=1 ; i--){
//             for(int j=1; j<=n/2+1-i; j++){
//                 cout<<" ";
//             }
//             for(int k=1; k<=i*2 -1; k++){
//                 if(k==1 || k==2*i-1){
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
                
//             }
//             cout<<endl;
//         }
//     }
//     else{
//         cout<<"Invalid Input!!";
//     }
//     return 0;

// }

//PATTERN-10
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the value of n : ";
//     cin>>n;
//     for(int i=0 ; i<n ; i++){
//         int num=1;
//         for(int j=0 ; j<=i ; j++){
//             cout<<num<<" ";
//             num=num*(i-j)/(j+1);
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//PATTERN-11
// 55555
// 54445
// 54345
// 54445
// 55555

// #include <iostream>
// using namespace std;

// void patten(int n, int centerPoint)
// {
//     int x = (n + 1) / 2;
//     int c = centerPoint;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             int diff = abs(i - x);
//             if (i == x)
//             {
//                 cout << c + abs(x - j) << " ";
//             }
//             else if (j >= (x - diff) && j <= (x + diff))
//             {
//                 cout << c + diff << " ";
//             }
//             else
//             {
//                 cout << c + diff + min(abs(j - (x - diff)), abs(j - (x + diff))) << " ";
//             }
//         }
//         cout << endl;
//     }
//     return;
// }
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     patten(a, b);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the value of n : ";
//     cin>>n;
//     for (int i=1 ; i<=n ; i++){
//         for(int j=1 ; j<=n ; j++){
//             int layer = min(min(i, j), min(n - i + 1, n - j + 1));
//             cout << n - layer + 1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//PATTERN-12
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the value of n : ";
//     cin>>n;
//     for(int i = 1; i <= n; i++) {
//         for(int s = 0; s < n - i; s++) {
//             cout << " ";
//         }
//         for(char ch='A' ; ch < 'A'+i ; ch++){
//             cout<<ch;
//         }
        
//         for(char ch='A'+i-2 ; ch>='A' ; ch--){
//             cout<<ch;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//PATTERN-13
//       1
//      1 1
//     1 2 1
//    1 3 3 1
//   1 4 6 4 1

// #include<iostream>
// using namespace std;

// int main(){
//     int N,space,num=1;
//     cout<<"Enter value of N : ";
//     cin>>N;
//     for(int i=0 ; i<N ; i++){
//         for(space=0;space<=N-i; space++){
//             cout<<" ";
//         }
//         for(int j=0; j<=i ; j++){
//             if(j==0 || i==0)
//                 num=1;
//             else
//                 num=num*(i-j+1)/j;
//                 cout<<" "<<num;

//         }
//         cout<<endl;
//     }
//     return 0;

// }

//PATTERN-14
//     *    
//    * *   
//   *   *  
//  *     * 
// *********

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the value of n :";
//     cin>>n;
//     for(int i=0 ; i<=n ; i++){
//         for(int s=1 ; s<=n-i ;s++){
//             cout<<" ";
//         }
//         for(int j=1 ; j<=i*2-1 ;j++){
//             if(j==1 || i==n || j==i*2-1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0; 
// }

//PATTERN-15
//    1
//   1 2
//  1   3
// 1     4
//  1   3
//   1 2
//    1
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter value of n : ";
//     cin>>n;
//         for(int i=1 ; i<=n/2 +1 ; i++){
//             for(int s=1; s<=n/2+1-i; s++){
//                 cout<<" ";
//             }
//             for(int k=1; k<=i*2 -1; k++){
//                 if(k==1){
//                     cout<<" 1";
//                 }
//                 if(k==2*i-1 && i>1){
//                     cout<<i;
//                 }

//                 else{
//                     cout<<" ";
//                 }
//             }
//             cout<<endl;
//         }

//         for(int i=n/2 ; i>=1 ; i--){
//             for(int s=1; s<=n/2+1-i; s++){
//                 cout<<" ";
//             }
//             for(int k=1; k<=i*2 -1; k++){
//                 if(k==1){
//                     cout<<" 1";
//                 }
//                 if(k==2*i-1 && i!=1){
//                     cout<<i;
//                 }
//                 else{
//                     cout<<" ";
//                 }
                
//             }
//             cout<<endl;
//         }
//         return 0;
//  }



//PATTERN-16
// 123454321
//  1234321
//   12321
//    121
//     1
//    121
//   12321
//  1234321
// 123454321

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the value of n: ";
//     cin>>n;
//     //upper triangle
//     for(int i=0 ; i<n ; i++){
//         for(int s=0 ; s<=i-1 ; s++){
//             cout<<" ";
//         }
//         for(int j=1 ; j<=n-i ; j++){
//             cout<<j;
//         }
//         for(int k=n-i-1 ; k>=1 ; k--){
//             cout<<k;
//         }
//         cout<<endl;
//     }
//     //lower triangle
//     for(int i=n-2 ; i>=0 ; i--){
//         for(int s=0 ; s<i ; s++ ){
//             cout<<" ";
//         }
//         for(int j=1 ; j<=n-i ; j++){
//             cout<<j;
//         }
//         for(int k=n-i-1 ; k>=1 ; k--){
//             cout<<k;
//         }
//         cout<<endl;
//     }

//     return 0;
// }

//PATTERN-17>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>.
//  **   **
// **** ****
// *********
//  ********
//   ******
//    ****
//     **

//PATTERN-18>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// *********
//  *     *
//   *   *
//    * *
//     *
//    * *
//   *   *
//  *     *
// *********

//PATTERN-19>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// *       *
//  *     *
//   *   *
//    * *
//     *
//    * *
//   *   *
//  *     *
// *       *

//PATTERN-20
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// #include<iostream>
// using namespace std;

// int main(){
//     int num, n=0;
//     cout<<"enter the value of n : ";
//     cin>>num;
//     for(int i=1 ; i<=num ;i++){
//         for (int j=1 ; j<=i ; j++){
//             if((i+j)%2 == 0){
//                 cout<<n+1<<" ";
//             }
//             else {
//                 cout<<n<<" ";
//             }
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//PATTERN-21
// *      *
// **    **
// ***  ***
// ********
// ***  ***
// **    **
// *      *
// #include<iostream>
// using namespace std;

// int main(){
//     int n, num;
//     cout<<"enter the value of n(odd number) : ";
//     cin>>num;
//     n=(num-1)/2;
//     for(int i=0 ; i<n ; i++){
//         for(int j=1 ; j<=i+1 ; j++){
//             cout<<"*";
//         }
//         for(int s=1 ; s<=((n-i)*2)-1 ; s++){
//             cout<<" ";
//         }
//         for(int j=0 ; j<i+1 ; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=0 ; i<n*2+1 ;i++) cout<<"*";
//     cout<<endl;
//     for(int i=n-1 ; i>=0 ; i--){
//         for(int j=i+1 ; j>=1 ; j--){
//             cout<<"*";
//         }
//         for(int s=1 ; s<=((n-i)*2)-1 ; s++){
//             cout<<" ";
//         }
//         for(int j=i ; j>=0 ;j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//PATTERN-22
// 1234
// 1234
// 1234
// 1234
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter value of n : ";
//     cin>>n;
//     for(int i=1 ; i<=n ; i++){
//         for(int j=1 ; j<=n ; j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//PATTERN-23
// 123
// 456
// 789
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     char num ='A';
//     cout<<"enter value of n : ";
//     cin>>n;
//     for(int i=0 ; i<n ; i++){
//         for(int j=0 ; j<n ; j++){
//             cout<<num;
//             num++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//PATTERN-24
//1
//22
//333
//4444
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter value of n : ";
//     cin>>n;
//     for(int i=1 ; i<=n ; i++){
//         for(int j=1 ; j<=i ; j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//PATTERN-25
// 1
// 21
// 321
// 4321
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter value of n : ";
//     cin>>n;
//     for(int i=1 ; i<=n ; i++){
//         for(int j=i ; j>=1 ; j--){
//             cout<<j;

//         }
//         cout<<endl;
//     }
//     return 0;
// }

//PATTERN-26
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// #include<iostream>
// using namespace std;

// int main(){
//     int n, num=1;
//     cout<<"enter value of n : ";
//     cin>>n;
//     for(int i=1 ; i<=n ; i++){
//         for(int j=i ; j>=1 ; j--){
//             cout<<num<<" ";
//             num++;

//         }
//         cout<<endl;
//     }
//     return 0;
// }