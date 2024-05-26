/* the following example demonstrates the logic to convert the contents of an array to a max heap and then sort using heap sort */

#include<stdio.h>
int main()
{
int x[10],y,lb,ub,ci,ri,g,lci,rci,swi;
lb=0;
ub=9;
y=lb;
while(y<=9)
{
printf("Enter a number : ");
scanf("%d",&x[y]);
y++;
}
// following logic will convert the contents of the arrat to a max heap
y=lb+1;
while(y<=ub)
{
// consider that the array is form (lb to y) index
ci=y;
while(ci>lb)
{
ri=(ci-1)/2;
if(x[ri]<x[ci])
{
g=x[ci];
x[ci]=x[ri];
x[ri]=g;
ci=ri;
}
else
{
break;
}
} 
// array form (lb to y) index has been converted to a max heap
y++;
}
// logic to implement on ub and lb index
while(lb<ub)
{
g=x[lb];
x[lb]=x[ub];
x[ub]=g;
ub--;
// logic to adjust heap
ri=lb;
while(ri<ub)
{
lci=(ri*2)+1;
rci=lci+1;
if(lci>ub)
{
break;
}
if(rci>ub)
{
swi=lci;
}
else
{
if(x[lci]>x[rci])
{
swi=lci;
}
else
{
swi=rci;
}
}
if(x[swi]>x[ri])
{
g=x[swi];
x[swi]=x[ri];
x[ri]=g;
ri=swi;
}
else
{
break;
}
}
}
//logic to print the sorted array
ub=9;
y=lb;
while(y<=ub)
{
printf("%d\n",x[y]);
y++;
}
return 0;
}