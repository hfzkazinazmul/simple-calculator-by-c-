#include <stdio.h>
#include <math.h>
int main()
{
    int choice1,choice2,n;
    float a,b,pi=3.141593, result;
    printf("      ==========================================\n");
    printf("            Calculator by Kazi_Nazmul_Hasan\n");
    printf("      ==========================================\n");
    start:
    printf("\n      What you want to do?\n\n      1.Simple calculation | 2.Root | 3.Logarithm | 4.Trigonometry | 5.Factorial | 6.Exit\n");
    scanf("%d",&choice1);
    if (choice1==1) {
        simple:
        printf("\n      1.Addition | 2.Subtraction | 3.Multiplication | 4.Division | 5.Back\n");
        scanf("%d",&choice2);
        if (choice2==1) {
            printf("\n      |Press Zero (0) to go back|\n");
            printf("      Enter a number: ");
            scanf("%f",&a);
            if (a==0) {
                goto simple;
            }
            else {
                printf("      %.1f + ",a);
                startadd://Starting addition.
                scanf("%f",&b);
                if (b==0) {
                    goto simple;
                }
                a=a+b;
                printf("      %.1f (Ans) + ",a);
                goto startadd;
            }
        }
        else if (choice2==2) {
            printf("\n      |Press Zero (0) to go back|\n");
            printf("      Enter a number: ");
            scanf("%f",&a);
            if (a==0) {
                goto simple;
            }
            else {
                printf("      %.1f - ",a);
                startsub://Starting subs traction
                scanf("%f",&b);
                if (b==0) {
                    goto simple;
                }
                a=a-b;
                printf("      %.1f (Ans) - ",a);
                goto startsub;
            }
        }
        else if (choice2==3) {
            printf("\n      |Press Zero (0) to go back|\n");
            printf("      Enter a number: ");
            scanf("%f",&a);
            if (a==0) {
                goto simple;
            }
            else {
                printf("      %.1f x ",a);
                startmul://Starting multiplication
                scanf("%f",&b);
                if (b==0) {
                    goto simple;
                }
                a=a*b;
                printf("      %.1f (Ans) x ",a);
                goto startmul;
            }
        }
        else if (choice2==4) {
            printf("\n      |Press Zero (0) to go back|\n");
            printf("      Enter a number: ");
            scanf("%f",&a);
            if (a==0) {
                goto simple;
            }
            else {
                printf("      %.1f / ",a);
                startdiv://Starting division
                scanf("%f",&b);
                if (b==0) {
                    goto simple;
                }
                a=a/b;
                printf("      %.2f (Ans) / ",a);
                goto startdiv;
            }
        }
        else if (choice2==5) {
            goto start;
        }
        else {
            printf("      Wrong input!!");
            goto start;
        }
    }
    else if (choice1==2) {
        printf("\n      1.Square root | 2. n'th root | 3.Back\n");
        scanf("%d", &choice2);
    if (choice2==1) {
        printf("\n      For square root of 'X',enter the value of 'X': ");
        scanf("%d",&n);
        result=sqrt(n);
        printf("\n      sqrt(%d) = %.2f(Ans)\n",n,result);
    }
    else if (choice2==2) {
        printf("\n      For n'th root, enter the value of 'n': ");
        scanf("%f",&b);
        printf("\n      For n'th root of 'X',enter the value of 'X': ");
        scanf("%f",&a);
        result=pow(a,1/b);
        printf("\n      %.1f'th root of %.1f = %.2f(Ans)\n",b,a,result);
    }
    else if (choice2==3) {
        goto start;
    }
    else {
        printf("      wrong input!!");
        goto start;
    }
    }
    else if (choice1==3) {
        printf("      1.Log10(X) | 2.Ln(X) | 3.Back\n");
        scanf("%d",&choice2);
        if (choice2==1) {
        printf("\n      Give the value of 'X': ");
        scanf("%f",&a);
        printf("      Log10(%.1f) = %.3f(Ans)\n",a,log10(a));
    }
    else if (choice2==2) {
        printf("\n      Give the value of 'X': ");
        scanf("%f",&a);
        printf("      Ln(%.1f) = %.3f(Ans)\n",a,log(a));
    }
    else if (choice2==3) {
        goto start;
    }
    else {
        printf("      wrong input!!");
        goto start;
    }
    }
    else if (choice1==4) {
        printf("      Please select an option.\n\n      1.sin | 2.cos | 3.tan | 4.cot | 5.sec | 6.cosec | 7.Back\n");
        scanf("%d",&choice2);
    if (choice2==1) {
        printf("      sin(");
        scanf("%d",&n);
        result=sin(n*pi/180);
        printf("\n      sin(%d)=%.3f(Ans)\n",n,result);
    }
    else if (choice2==2) {
        printf("      cos(");
        scanf("%d",&n);
        result=cos(n*pi/180);
        printf("\n      cos(%d)=%.3f(Ans)\n",n,result);
    }
    else if (choice2==3) {
        printf("      tan(");
        scanf("%d",&n);
        if (n==90 || n==270 || n== 450 || n== 630 || n==810 || n==990 || n==1170 || n==-90 || n==-270 || n== -450 || n== -630 || n==-810 || n==-990 || n==-1070) {
            printf("      tan(%d) = Undefined\n",n);
        }
        else {
           result=tan(n*pi/180);
            printf("\n      tan(%d)=%.3f(Ans)\n",n,result);
        }
    }
    else if (choice2==4) {
        printf("      cot(");
        scanf("%d",&n);
        if (n==0 || n==90 || n==180 || n==270 || n==360 || n== 450 || n==540 || n== 630 || n==720 || n==810 || n==900 || n==990 || n==1080 || n==1170 || n==-90 || n==-180 || n==-270 || n==-360 || n== -450 || n==-540 || n== -630 || n==-720 || n==-810 || n==-900 || n==-990 || n==-1080 || n==-1170) {
            printf("      cot(%d) = Undefined\n",n);
        }
        else {
        result=1/tan(n*pi/180);
        printf("\n      cot(%d)=%.3f(Ans)\n",n,result);
        }
    }
    else if (choice2==5) {
        printf("      sec(");
        scanf("%d",&n);
        if (n==90 || n==270 || n== 450 || n== 630 || n==810 || n==990 || n==1170 || n==-90 || n==-270 || n== -450 || n== -630 || n==-810 || n==-990 || n==-1070) {
            printf("      sec(%d) = Undefined\n",n);
        }
        else {
            result=1/cos(n*pi/180);
            printf("\n      sec(%d)=%.3f(Ans)\n",n,result);
        }
    }
    else if (choice2==6) {
        printf("      cosec(");
        scanf("%d",&n);
        if (n==0 || n==180 || n==360 || n==540 || n==720 || n==900 || n==1080 || n==1260 || n==-180 || n==-360 || n==-540 || n==-720 || n==-900 || n==-1080 || n==-1260) {
            printf("      cosec(%d) = Undefined\n",n);
        }
        else {
            result=1/sin(n*pi/180);
            printf("\n      cosec(%d)=%.3f(Ans)\n",n,result);
        }
    }
    else if (choice2==7) {
        goto start;
    }
    else {
        printf("      wrong input!!");
        goto start;
    }
    }
    else if (choice1==5) {
    result=1;
    printf("      Factorial of : ");
    scanf("%f",&a);
    b=a;
    while(a>=1) {
        result=result*a;
        a--;
    }
    printf("\n      %.f! = %.f(Ans)\n",b,result);
    goto start;
    }
    else if (choice1==6) {
        goto exit;
    }
    else {
        printf("      wrong input!!");
    }
    goto start;
    exit:
    printf("\n\n\n         (c) k@Zi_n@Zmul\n");
    return 0;
}
