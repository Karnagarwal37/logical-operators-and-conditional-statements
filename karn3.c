#include <stdio.h>
int main(){
    printf("%d\n",4==4);
     printf("%d\n",3>4);
      printf("%d\n",4>4);
       printf("%d\n",4>=4);
        printf("%d\n",4!=4);
        printf("%d\n",3>4 && 4>2);
         printf("%d\n",4>3 && 5>4);
         printf("%d\n",3>4 || 4>2);
           printf("%d\n",!(3>4));
           int a =3;
           int b =5;
           a=a+b;
           printf("%d\n",a);
           int x;
           printf("enter a number");
           scanf("%d",&x);
           printf("%d\n",x%2 == 0);
           int alpha;
           printf("enter the alpha");
           scanf("%d",&alpha);
           printf("%d",(alpha>9) && alpha<100);
           //conditional statements
           int age ;
           printf("enter the age");
           scanf("%d",&age);
           
           if(age>18){
               printf("you are adult\n");
               printf("you can vote \n");
           }
           else {
               printf("you are not adult\n");
           }
           printf("thank you");
           int ages ;
           printf("enter the ages");
           scanf("%d\n",&ages);
           ages >= 18?printf("ault\n"):printf("not adult\n");
    return 0;
}
