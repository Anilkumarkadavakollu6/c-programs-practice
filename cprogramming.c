#include<stdio.h>
#include<math.h>
#include<stdbool.h>

void prime_number(int n){
    int count=0;
    if(n<=1){
        printf("%d is not a prime number\n",n);
    }
    for(int i=2;i>n;i++){
        if(n % i == 0){
            count++;
            break;
        }
    }
    if(count == 0){
        printf("%d is a prime number",n);
    }
    else{
        printf("%d is not a prime number",n);
    }
       
}
// int main(){
//     prime_number(7);
// }


void pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}
// int main(){
//     pattern(9);
// }


void multiplication_table(int n){
    printf("Multiplication table for %d is ",n);
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d\n",n,i,n*i);
       
    }
}
// int main(){
//     multiplication_table(9);
// }


void max_of_two_no(int a ,int b){
    if(a > b ){
        printf("%d is greater than %d",a,b);
    }
    else{
        printf("%d is greater than %d",b,a);
    }   
}
// int main(){
//     max_of_two_no(9,3);
// }


void odd_or_even(int n){
    if(n == 0){
        printf("%d is neither even nor odd\n",n);
       
    }
    else if(n % 2 == 0 ){
        printf("%d is even number\n",n);
    }
    else{
        printf("%d is odd number\n",n);
    }
}
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     odd_or_even(n);
// }


void simple_intrest(float p, float r, float t){
    float si;
    si = (p * r * t)/100;
    printf("The simple interest is %f \n",si);
}
//int main(){
    // float p,r,t;
    // printf("\nEnter Principle amount:  \n");
    // scanf("%f",&p);
    // printf("\nEnter Rate of interest : \n");
    // scanf("%f",&r);
    //     if(r == 0 ){
    //     printf("Invalid Rate of intrest\n");
    //  }
    // printf("\nEnter time: \n");
    // scanf("%f",&t);
    // if(t == 0){
    //     printf("Invalid time\n ");
    // }
    // simple_intrest(p,r,t);
   

void array(){
    int array[10];
    printf("size of array; %zu bytes\n",sizeof(array));
    printf("Number of elements in array : %zu\n",sizeof(array)/sizeof(array[0]));
   }
// int main(){
//     array();
// }


bool is_prime(int n ){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i*i  <= n;i++){
        if(n % i == 0){
            return false;
        }
        else{
        return true;
    }
}
}

void findallprimes(int n){
    for(int i=0;i<=n;i++){
        if(is_prime(i)){
            printf("%d\n",i);
        }
    }
}
// int main(){
//     int n;
//     findallprimes(90);
// }


void check_primes(int arr[],int size){
    for(int i=0;i<size;i++){
        if(is_prime(arr[i])){
            printf("%d is a prime number\n",arr[i]);
        }
        else{
            printf("%d is not a prime number\n",arr[i]);
        }
    }
}
// int main(){
//       int arr[] = {1,2,3,4,5,6,6,7,8,99,87,5,7};
//       int size = sizeof(arr)/sizeof(arr[0]);
//       check_primes(arr,size);
// }


unsigned long long factorial(int n){
    unsigned long long result = 1;
    for(int i=1;i<=n;i++){
        result *= i;
    }
    return result;
}
// int main(){
//   int fact = factorial(5);
//   printf("%d",fact);
// }


void pattern_triangle(int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            printf(" ");
        }
        for(int k=1;k<=(2*i-1);k++){
            printf("*");
        }
        printf("\n");
       
    }
}
// int main(){
//     pattern_triangle(5);
// }


void dimond(int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            printf(" ");
        }
        for(int k=1;k<=(2*i-1);k++){
            printf("^");
        }
        printf("\n");
    }
       
        for(int i = n-1;i>=1;i--){
        for(int j=n;j>i;j--){
            printf(" ");
        }
        for(int k=1;k<=(2*i-1);k++){
            printf("^");
        }
        printf("\n");
}
}
// int main(){
//     dimond(9);
// }


void arrayaddress(){
    char arr[] ={'H','e','l','l','o'};
    for(int i =0;i<sizeof(arr)/sizeof(arr[0]);i++){
        printf("%zu\n",&arr[i]);
    }
    printf("\n");
}
// int main(){
//     arrayaddress();
// }


void palindrome(int n){
    int n1=n,reversed=0,remainder;
    while(n!=0){
        remainder = n % 10 ;
        reversed = reversed * 10 + remainder;
        n = n/10;
    }
    if(n1 == reversed){
        printf("%d is a palindrome", n1);
    }
    else{
        printf("%d is not a palindrome",n1);
    }
}
// int main(){
//     palindrome(121);
// }


void dividingtwointegers(){
    float f = (float)(6/4);
    printf("%.2f\n",f);
}


void dividingfloat(){
    float a=6,b=4;
    float f=(float)(a/b);
    printf("%.2f\n",f);
}
// int main(){
//     dividingtwointegers();
// }


bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    for(int i =2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
        else{
            return true;
        }
    }
}
// int main(){
//     int n;
//     printf("Enter a value: ");
//     scanf("%d",&n);
//   if(isPrime(n)){
//       printf("TRUE!\n");
//   }
//   else{
//       printf("FALSE!\n");
//   }
   

void fibonacciseries(int n){  
    int a=0,b=1,nextterm;
    for(int i=1;i<=n;i++){
        printf("%d\n",a);
        int nextterm = a+b;
        a=b;
        b=nextterm;
    }
    printf("\n");
}
// int main(){
//     fibonacciseries(9);
// }



int sumofArray(int arr[],int size){                                                                                                                                                                            
    int sum =0;
    for(int i=0; i < size;i++){
       sum +=arr[i];
    }
    return sum;
}
// int main(){
//     int arr[]={1,2,3,4,5};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int total=sumofArray(arr,size);
//     printf("Sum of the array is %d",total);
   
   
   
   



























