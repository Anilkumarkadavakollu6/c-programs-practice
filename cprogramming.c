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

void pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}

void multiplication_table(int n){
    printf("Multiplication table for %d is ",n);
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d\n",n,i,n*i);
        
    }
}

void max_of_two_no(int a ,int b){
    if(a > b ){
        printf("%d is greater than %d",a,b);
    }
    else{
        printf("%d is greater than %d",b,a);
    }
    // int a=10,b=20;
    // printf("Max of %d and %d is %d \n",a,b,maxOfTwo(a,b));
    
}

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

void simple_intrest(float p, float r, float t){
    float si;
    si = (p * r * t)/100;
    printf("The simple interest is %f \n",si);
}

void array(){
    int array[10];
    printf("size of array; %zu bytes\n",sizeof(array));
    printf("Number of elements in array : %zu\n",sizeof(array)/sizeof(array[0]));
    
}

bool is_prime(int n ){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i*i  <= n;i++){
        if(n % i == 0){
            return false;
        }
        return true;
    }
}

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

unsigned long long factorial(int n){
    unsigned long long result = 1;
    for(int i=1;i<=n;i++){
        result *= i;
    }
    return result;
}

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

int main(){
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
    
    
    //  int arr[] = {1,2,3,4,5,6,6,7,8,99,87,5,7};
    //  int size = sizeof(arr)/sizeof(arr[0]);
    //  check_primes(arr,size);

    // int n;
    // printf("Enter a value to calculate factorial\n");
    // scanf("%d",&n);
    // if(n<0){
    //     printf("enter valid number");
    // }
    // else{
    //     int fact = factorial(n);
    //     printf("The factorial of %d is %llu",n,fact);
    // }
    
    // int n;
    // pattern_triangle(5);
    
    int n;
    dimond(9);
    
}




