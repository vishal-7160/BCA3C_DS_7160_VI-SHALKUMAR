/*3. Write a program to print strings in reverse order using stack.
NAME:-VISHAL KUMAR
ENROLL:-92500527160*/

#include<stdio.h>
#define max 30

int stack[max],top=-1;
void push(char ch);
char pop();

void main()
{

    int i=0;
    char str[30];

    printf("\n enter string :");
    gets(str);

    while(str[i]!='\0')
    {
        push(str[i]);
        i++;
    }
    while(top!=-1)
    {
        printf("\n%c",pop());
    }
}
void push(char value)
{
    if(top==max-1)
    {
        printf("\n stack overflow..");
    }
    else
    {
        top++;
        stack[top]=value;
    }
}
char pop()
{
    char val;
    if(top==-1)
    {
        printf("\n stack is overflow..");
        return;
    }
    else
    {
        val=stack[top];
        top--;
        return val;
    }
}

