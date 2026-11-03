#include<stdio.h>
int main(){
    int n,age,i;
    char gender;
    float basefare,fare,subtotal=0,gst,total;
    printf("Enter the number of passengers: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("\n enter the passanger %d \n",i);
        printf("Enter the age: ");
        scanf("%d",&age);
        printf("Enter the gender (M/F): ");
        scanf(" %c",&gender);
        printf("Enter the base fare: ");
        scanf("%f",&basefare);
        if(age<5) fare=0;
        elseif(gender=='F'||gender=='f') fare=0;
        elseif(age>=60) fare=basefare*0.7;
        else fare=basefare;
        printf("the payable fare=%.2f\n",fare);
        subtotal+=fare;

    }
    gst=subtotal*0.05;
    total=subtotal+gst;
    printf("\nSubtotal=%.2f\n",subtotal);
    printf("GST=%.2f\n",gst);
    printf("Total Fare=%.2f\n",total);
    return 0;
}