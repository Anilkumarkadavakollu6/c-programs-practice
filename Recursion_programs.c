#include<stdio.h>
#include<stdbool.h>

void CountDown(int n){
    printf("CountDown started for method with n value %d\n ",n);
    if(n == 0){
        printf("\n\n\nstopping count down...Happy recursion practice\n\n\n\n");
        return;
    }

    printf("count down starts now %d\n",n);
    CountDown(n-1);
    printf("countDown completed for method with n value %d\n",n);
}
// int main(){
//     int n = 5;
//     CountDown(n);
//     return 0;
// }


void countDownwithAlternateNumbers(int n){
    if(n<0){
        return;
    }
        printf("\n%d",n);
        countDownwithAlternateNumbers(n-2);
    

}
// int main(){
//     int n = 20;
//     countDownwithAlternateNumbers(n);
// }


void evennumbers(int n){
    if(n == 0){
        return;
    }
    if(n%2 == 0){
        printf("%d\n",n);
        evennumbers(n-2);
        }
}
// int main(){
//     int n = 10;
//     evennumbers(n);
// }


void countdowntillmodulusequaltozero(int n){
    if(n<=0){
        return;
    }
    printf("\n%d",n);
    countdowntillmodulusequaltozero(n-1);
}
// int main(){
//     int n=13;
//     countdowntillmodulusequaltozero(n);
// }


int factorial(int n){
    if(n==0){
        return 1 ;
    }
    else{
    return n * factorial(n-1);
}
    
}
// int main(){
//     int n  = 5;
//     int result = factorial(n);
//     printf("%d",result);
// }


int fibonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
// int main(){
//     int n=10;
//     int result = fibonacci(n);
//     printf("%d",result);
// }



void callstaticdisplayandupdate(){
int main(){
    static int counter =0;
    if((counter >= 5)){
        return 0;
    }
        printf("%d",counter);
        counter++;
        // main();
        callstaticdisplayandupdate();
        return 0;
    }
    
    void callstaticdispalyandupdate(){
        int counter = 0;
        printf("%d",counter);
    }
}


void modulus(int a,int b){

    if((a||b)<=0){
        return ;
    }
    printf("%d modulus of %d is %d\n",a,b,a%b);
    modulus(b,a%b);
    
}


bool isPalindrome(char str[], int start, int end) 
{   
     if (start >= end) {
        return true; 
    }
    if (str[start] != str[end]) {
        return false; 
    }
    return isPalindrome(str, start + 1, end - 1);
}
// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin); 
//     str[strcspn(str, "\n")] = 0;
//     int length = strlen(str);
//     if (isPalindrome(str, 0, length - 1)) {
//         printf("\"%s\" is a palindrome.\n", str);
//     } else {
//         printf("\"%s\" is not a palindrome.\n", str);
//     }
//     return 0;
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
// }


// int arraysum(int arr[],int size){
//     if(size == 0){
//         return 0;
//     }
//     else{
//         return arr[size-1]+arraysum(size-1);
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int total=arraysum(arr,size);
//     printf("Sum of the array is %d",total);
// }



void towerOfHonoi(int n, char source, char target, char auxiliary) {
    if(n == 1){
        printf("Move disk 1 from %c to %c\n",source,target);
        return;
    }
    towerOfHonoi(n-1,source,auxiliary,target);
    printf("Move disk %d from %c to %c\n",n,source,target);
    towerOfHonoi(n-1,auxiliary,target,source);
}
// int main(){
//     towerOfHonoi(5,'A','B','C');
// }


void mat(int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d %d\n",i,j);
        }

    }
}
// int main(){
//     mat(3,4);
// }
    

void Matrixaddition(int a[2][2], int b[2][2], int result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}
// int main() {
//     int matrixA[2][2] = {{1, 2}, {3, 4}};
//     int matrixB[2][2] = {{1, 2}, {3, 4}};
//     int result[2][2];    
//     Matrixaddition(matrixA, matrixB, result);
//     printf("Result of matrix addition:\n");
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             printf("%d ", result[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
































































