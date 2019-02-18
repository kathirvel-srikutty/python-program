#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

void main() 
{ 
char str[10]; 
int i,j,n,flag=0; 
cout<<"Enter any string:"<<endl; 
gets(str); 
n=strlen(str); 
for(i=0,j=n-1;i<=n/2;i++,j--) 
{ 
if(str[i]!=str[j]) 
flag=1; 
break; 
} 
if(flag==1) 
{
cout<<"String is not Palindrome"; 
}
else
{
cout<<"String is Palindrome"; 
}
getch(); 
}
