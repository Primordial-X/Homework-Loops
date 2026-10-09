#include <stdio.h>
#include <math.h>

/*
*/
//1
int main(){
    int n, rev=0, sum=0;
    scanf("%d", &n);

    while (n!=0){
        rev = (rev*10 + n%10);
        sum+= n%10;
        n/=10;
    }
    printf("%d, %d", rev, sum);
}
    

//2
int main(){
    int n, rev=0, a;
    scanf("%d", &n);
    a = n;

    while (n!=0){
        rev = (rev*10 + n%10);
        n/=10;
    }
    printf("%d\n", rev);

    if(rev == a)
    printf("yes");
    else
    printf("no");

}
    

//3
int main(){
    int n, count=0;
    scanf("%d", &n);

    while(n!=0){
        if((n%10)%5 == 0)
        count+=1;
        n/=10;
    }
    printf("%d", count);
}
    


//4
int main(){
    int n, count1=0, count2=0;
    scanf("%d", &n);

    while(n!=0){
        if((n%10)%2 == 0)
        count2+= 1;
        else
        count1+= 1;
        n/=10;
    }
    printf("%d odd\n", count1);
    printf("%d even", count2);
}
    


//5
int main(){
    int n, a;
    scanf("%d", &n);
    a = n%10;

    while(n!=0){
        if(a < (n%10))
        a = n%10;
        n/=10;
    }
    printf("%d", a);
}
    


//6
int main(){
    int n, a;
    scanf("%d", &n);
    a = n%10;

    while(n!=0){
        if(a > (n%10))
        a = n%10;
        n/=10;
    }
    printf("%d", a);
}
    


//7
int main(){
    int n, count=0;
    scanf("%d", &n);

    while(n!=0){
        count+=1;
        n/=10;
    }
    printf("%d", count);
}
    


//8
int main(){
    int n, count=0, num=0;
    scanf("%d", &n);
    num = n;

    while(n!=0){
        int i = n%10;
        count+= (i*i*i);
        n/=10;
    }
    if(count == num)
    printf("yes");
    else
    printf("no");
}


//9
int main(){
    int n, a=1;
    scanf("%d", &n);
    
    for(int i=2; i<n; i++){
        if(n%i == 0)
        a = 0;
    }

    if(a)
    printf("yes");
    else
    printf("no");
}


//10
int main(){
    int n1, n2, a1=1, a2=1;
    scanf("%d", &n1);
    scanf("%d", &n2);
    
    for(int i=2; i<n1; i++){
        if(n1%i == 0)
        a1 = 0;
    }

    for(int i=2; i<n2; i++){
        if(n2%i == 0)
        a2 = 0;
    }

    if(a1)
    printf("yes\n");
    else
    printf("no\n");

    if(a2)
    printf("yes");
    else
    printf("no");
}



//11
int main(){
    int n, sum=0, fact=1;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            fact*= j;
        }
        sum+= fact;
        fact = 1;
    }
    printf("sum = %d", sum);
}
    


//12
int main(){
    int n, a=0, b=1, c;
    scanf("%d", &n);

    while(a<=n){
        printf("%d ", a);

        c = a+b;
        a = b;
        b = c;
    }
}
    

//13
int main(){
    int n1, n2, gcd, c;
    scanf("%d %d", &n1, &n2);

    c = n1>n2 ? n2 : n1;

    for(int i=1; i<=c; i++){
        if(n1%i == 0 && n2%i == 0){
            gcd = i;
        }
    }
    printf("%d", gcd);
}
    



//14
int main(){
    int n1, n2, lcm, c;
    scanf("%d %d", &n1, &n2);

    c = n1<n2 ? n2 : n1;

    for(int i=c; 1; i++){
        if(i%n1 == 0 && i%n2 == 0){
            lcm = i;
            break;
        }
    }
    printf("%d", lcm);
}


//15
int main(){
    int n, sum=0, num;
    scanf("%d", &n);
    num = n;

    for(int i=1; i<n; i++){
        if(n%i == 0){
            sum+= i;
        }
    }
    if(sum == num)
    printf("yes");
    else
    printf("no");
}
    


//16
int main(){
    int n, num, sum=0, fact=1;
    scanf("%d", &n);
    num = n;

    while(n!=0){
        for(int i=1; i<=(n%10); i++){
            fact*= i;
        }
        sum+= fact;
        fact = 1;
        n/=10;
    }
    if(sum == num)
    printf("yes");
    else
    printf("no");
}
    

//17
int main(){
    int n, rev1=0, rev2=0, num1, num2, sum=0;

    //Taking input.
    printf("Enter a number: ");
    scanf("%d", &n);
    num1 = n;
    
    //Storing the reverse of binary number in rev1.
    while(n!=0){
        rev1 = (rev1*10 + n%2);
        n/=2;
    }
    //printf("reverse of binary: %d\n", rev1);

    //Storing result in other variable for further use.
    num2 = rev1;

    //Counting the sum of digit in rev1.
    while(num2!=0){
        sum+= num2%10;
        num2/=10;
    }
    //printf("Sum of binary number: %d\n", sum);

    if (num1 == 0){
        printf("The binary number is: 0");
    }
    else if(num1 == 1){
        printf("The binary number is: 1");       
    } 
    else if(sum != 1){
        while (rev1!=0){
            rev2 = rev2*10 + rev1%10;
            rev1/=10;
        }
        printf("The binary number is: %d\n", rev2);
    }
    else{
        float a, b;
        //printf("%d\n", num1);
        a = log2(num1);
        //printf("sqrt = %0.f\n", a);
        b = pow(10.0, a);
        printf("The binary number is: %0.f\n", b);
    }
}
    


//17
int main(){
    int n, arr[32], i=0;
    scanf("%d", &n);

    if(n == 0){
        printf("0");
    }

    while (n!=0){
        arr[i] = n%2;
        n/=2;
        i++;
    }

    for(int j=i-1; j>=0; j--){
        printf("%d", arr[j]);
    }
    
}


//18

int main(){
    int n, arr[32], i=0;
    scanf("%d", &n);

    if(n == 0){
        printf("0");
    }

    while (n!=0){
        arr[i] = n%8;
        n/=8;
        i++;
    }

    for(int j=i-1; j>=0; j--){
        printf("%d", arr[j]);
    }
    
}




//----------------------------------------------------------------------------------------------


//1
int main(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}
    

//2
int main(){
    for(int i=5; i>=1; i--){
        for(int j=5; j>5-i; j--){
            printf("*");
        }
        printf("\n");
    }
}



//3
int main(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
}


//4
int main(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            printf("%d", i);
        }
        printf("\n");
    }
}
    

//5
int main(){
    int num = 0;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            num+=1;
            printf("%d ", num);
        }
        printf("\n");
    }
}



//6
int main(){
    for(int i=1; i<=5; i++){
        for(int j=5; j>i; j--){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}



//7
int main(){
    for(int i=1; i<=5; i++){
        for(int j=5; j>i; j--){
            printf(" ");
        }
        for(int j=1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
}
    



//8
int main(){
    for(int i=5; i>=1; i--){
        for(int j=5; j>i; j--){
            printf(" ");
        }
        for(int j=2*i-1; j>=1; j--){
            printf("*");
        }
        printf("\n");
    }
}


//9
int main(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            if((i+j)%2 == 0)
            printf("1");
            else
            printf("0");
        }
        printf("\n");
    }
}



//10
int main(){
    for(int i=1; i<=5; i++){
        for(int j=5; j>i; j--){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("%d", j);
        }
        for(int j=i-1; j>=1; j--){
            printf("%d", j);
        }

        printf("\n");
    }
}

/*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
    
*/    

//11
int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=n; j>i; j--){
            printf(" ");
        }
        for(int j=1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }

    for(int i=(n-1); i>=1; i--){
        for(int j=1; j<=(n-i); j++){
            printf(" ");
        }
        for(int j=2*i-1; j>=1; j--){
            printf("*");
        }
        printf("\n");
    }

}


//11
int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){   //for(int j=n; j>i; j--)
            printf(" ");
        }
        for(int j=1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }

    for(int i=(n-1); i>=1; i--){
        for(int j=(n); j>i; j--){  //for(int j=(n-1); j>=i; j--)  //for(int j=1; j<=(n-i); j++)
            printf(" ");
        }
        for(int j=2*i-1; j>=1; j--){
            printf("*");
        }
        printf("\n");
    }

}


//12
int main(){
    int num=0;
    for(int i=5; i>=1; i--){
        for(int j=1; j<=i; j++){
            num+= 1;
            printf("%d ", num);
        }
        printf("\n");
    }
}
    


//12
int main(){
    int num=0;
    for(int i=5; i>=1; i--){           //for(int i=1; i<=5; i++)
        for(int j=5; j>(5-i); j--){
            num+= 1;
            printf("%d ", num);
        }
        printf("\n");
    }
}
    
