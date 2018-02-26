#includ<stdio.h>
void main(){
long long int num,count=0;
scanf("%lld",&num);
while(num>0){
if (num%2==1){
++count;
}
num/=2;
}
printf("%lld",count);
}
