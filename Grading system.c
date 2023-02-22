//Grading system
#include <stdio.h>
int main (){
int maths,phy,geo,avg;
printf("Enter marks for maths,phy,geo");
scanf("%d%d%d",&maths,&phy,&geo);
avg=(maths+phy+geo)/3;
if(avg>=70&&avg<=100){
    printf("Grade A");}
else if(avg>=60&&avg<=69){
    printf("Grade B");}
else if(avg>=50&&avg<=59){
    printf("Grade C");}
else if(avg>=40&&avg<=49){
    printf("Grade D");}
else if(avg>=0&&avg<=39){
    printf("Fail");}
return 0;
}