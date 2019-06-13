#include <stdio.h>
int main()
{
    /*
    int num, x,i=1;
    float sum=0;
    printf("Number of Inputs: ");
    scanf("%d",&num);

    while(i<=num){
        printf("Input a number: ");
        scanf("%d", &x);

        sum=sum+x;

        i++; //i=i+1
    }
    printf("An average is %f\n", sum/num);
    */


    int num, x,i;
    float sum=0;
    printf("Number of Inputs: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        printf("Input a number: ");
        scanf("%d", &x);

        sum=sum+x;
    }
    printf("An average is %f\n", sum/num);

    /*
    int n=1;
    char input;
    while(n){
        scanf("%c",&input);
        if(input=='q') n=0;
    }
    */

    return 0;
}