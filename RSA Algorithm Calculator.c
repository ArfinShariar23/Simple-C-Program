#include<stdio.h>
#include<math.h>
int main()
{
    int p,q;
    printf("Enter The Prime Value of P: ");
    scanf("%d",&p);
    printf("Enter The Prime Value of Q: ");
    scanf("%d",&q);

    int n;
    n = p*q;
    printf("n = %d\n",n);

    int On;
    On = (p-1)*(q-1);
    printf("Qn = %d",On);

    int e;
    printf("\nYour Value must be greater then 1 and less then Qn");
    printf("\nEnter the Value of e: ");
    scanf("%d",&e);
    if(e>1 && e<On){
       for (int i = 1; i <= 10; ++i) {
            int mult = (On * i)+1;
            if(mult%e == 0){
                printf("%d\n",mult);
                float d = mult/e;
                printf("\nThe Value of Private Key, d = %.2f",d);
                break;
            }
       }
    }
    else{
        printf("\nInvalid Input");
    }
    // Cypher Text Calculate
    int m;
    printf("\n Define the value of Plaint text: ");
    scanf("%d",&m);
    double power = pow(m,e);
    double result1 = power/n;
    int result2 = power/n;
    double result3 = result1 - result2;
    double result4 = result3*n;
    printf("For Encryption Cyper Text Value: %lf\n",result4);
printf("\n Developed By Arfin Shariar");

    return 0;
}
