#include <stdio.h>
int main()
{
    /*
    int i=100;
    while(i>=50){
        printf("%d",i);
        if(i>50) printf(", ");
        i--;
    }
          //4.1
*/

    
    /*int i;
    for(i=1;i<=40;i++){
        if(i%3!=0) {
            printf("%d",i);
            if(i<40) printf(", "); 
        }
    }
     *///4.2


    /*
    int a,b,i,sum=0,n;
    printf("Input 2 Number: ");
    scanf("%d %d",&a,&b);
    n=a+1;
    for(i=n;i<b;i++){
        sum+=i;
    }
    printf("Sum = %d",sum);
     *///4.3


    
    int num,l,i;
    printf("Input Number: ");
    scanf("%d",&num);
    printf("Table Length: ");
    scanf("%d",&l);
    printf("Multiplication of %d: \n",num);
    for(i=1;i<=l;i++){
        printf("%d x %d = %d\n",num,i,num*i);
    }
     
     //4.4


    
    /*
    int i=1;
    while(i>=1){
        printf("Input Number: ");
        scanf("%d",&i);
        
        if(i%2==0 && i!=0) printf("Even Number\n");
        else if(i%2!=0) printf("Odd Number\n");

        if(i==0) i=0;
    }
    printf("Exit");
     */   //4.5


    int a,b,n;
    printf("Input Number: ");
    scanf("%d",&n);
    
    for(a=1;a<=n;a++){
        for(b=1;b<=a;b++){
            printf("*");
        }
        printf("\n");
    } //*


   // printf("\n");
    return 0;
}

