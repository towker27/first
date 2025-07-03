#include <stdio.h>
int main (){
int a[10], sum=0, i;
a[0]=10;
a[1]=20;
a[2]=30;
a[3]=40;
a[4]=50;

for(i=0;i<5;i++){
    sum= sum+a[i];

}
printf("The sum is %d\n",sum);
printf("The avg is : %.2f\n",(float)sum/5);
return 0;
}
