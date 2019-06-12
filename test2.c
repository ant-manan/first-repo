#include <stdio.h>
int main()
{
    /*float price, total_price;
    int isMember, age, isCash;

    printf("Input price and mempership (0 or 1):");
    scanf("%f %d", &price, &isMember);
    

    if(isMember==1){
        printf("Input age:");
        scanf("%d", &age);
        if(age>60){
            total_price = price*(100-20)/100;
        }
        else{
            total_price = price*(100-10)/100;
        }
    }

    else{
        printf("Credit or Cash (0 or 1):");
        scanf("%d", &isCash);

        if(isCash==1){
            total_price = price*(100-5)/100;
        }
        else{
            total_price = price;
        }  
    }

    printf("The price is %f\n", total_price);
    return 0;*/

    /*int n1, n2, n;
    printf("Input 1st NO. : ");
    scanf("%d",&n1);
    printf("Input 2nd NO. : ");
    scanf("%d", &n2);
    
    if(n1>n2){
        n=n1;
    }
    else{
        n=n2;
    }
    printf("The larger one : %d\n",n);*///1

    /*int n;
    printf("Input NO. : ");
    scanf("%d",&n);
    if(n%2==0){
        printf("Even NO.\n");
    }
    else{
        printf("Odd NO.\n");
    }*/ //2

    /*int ic, tax;
    printf("Input Income : ");
    scanf("%d",&ic);
    if(ic<15000){
        tax=0.1*ic;
    }
    else{
        tax=0.15*ic;
    }
    printf("Tax = %d\n",tax);*/ //3

    /*int n1, n2;
    float sol;
    char op;
    printf("Input 1st NO. : ");
    scanf("%d",&n1);
    printf("Input 2nd NO. : ");
    scanf("%d", &n2);
    printf("Input operator : ");
    scanf(" %c", &op);
    if (op == '+'){
        sol = n1 + n2; 
    }
    else if(op == '-'){
        sol = n1 - n2; 
    }
    else if(op == '*'){
        sol = n1 * n2; 
    }
    else if(op == '/'){
        sol = n1 / n2; 
    }
    printf("Result : %.2f\n",sol);*/ //4

    /*char x;
    printf("Input character: ");
    scanf(" %c",&x);  
    if(x>=65 && x<=90){
        printf("Toggle: %c\n",x+32);
    }
    else if(x>=97 && x<=122){
        printf("Toggle: %c\n",x-32);
    }*/ //5
    
    /*int n1, n2, n3, max, min;
    printf("Input 3 Number : ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1>=n2){
        if(n1>=n3){
            max=n1;
            if(n3>=n2){
                min = n2;
            }
            else{
                min = n3;
            }
        }
        else{
            max=n3;
            min=n2;Input Income :
        }
    }
    else {
        if(n2>=n3){
            max=n2;
            if(n1>=n3){
                min = n3;
            }
            else{
                min = n1;
            }
        }
        else{
            min=n1;
            max=n3;
        }
    }
    printf("Max : %d\n", max);
    printf("Min : %d\n", min); *///6

    /*int n1, n2, n3;
    printf("Input 3 Number : ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1==n2){
        if(n1==n3){
            printf("all same");
        }
        else{
            printf("neither");
        }
    }
    else{
        if(n2==n3){
            printf("neither");
        }
        else if(n1==n3){
            printf("neither");
        }
        else{
            printf("all different");
        }
    }
    printf("\n");*/ //7

    /*int a,b;
    printf("Input Number: ");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("Hi\n");
    }
    else{
        printf("Hey\n");
        if(a==b){
            printf("Yo!!\n");
        }
    }
    printf("Thanks\n"); *///8.1

   /* int a,b;
    printf("Input Number: ");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("Hi\n");
    }
    else{
        printf("Hey\n");
    }

    if(b>6){
            printf("Yo!!\n");
    }
    printf("Thanks\n"); */ //8.2

    
    char status, ans;
    int kid;
    printf("Input the marital status (s or m): ");
    scanf(" %c",&status);
    if(status == 's'){
        printf("Do you have any boy/girlfriend? (y or n):");
        scanf(" %c",&ans);

        if(ans == 'y'){
            printf("You are not alone\n");
        }
        else{
            printf("Let me hug you\n");
        }
    }
    else if(status == 'm'){
        printf("How many kids do u have?:");
        scanf("%d",&kid);
        if(kid!=0){
            printf("GG\n");
        }
        else {
            printf("You can ask me foradvices\n");
        }
    } //9
    else{
        printf("Invalid marital status\n");
    }
    printf("Thank you for your information\n");

    return 0;
}