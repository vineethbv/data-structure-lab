#include<stdio.h>
#include<ctype.h>
int stack[20];
int top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

int main()
{
    char exp[20];
    
    int n1,n2,n3,num;
    printf("Enter the Postfix expression :: ");
    scanf("%s",exp);
    int i=0;
    while(exp[i]!= '\0')
    {
        if(isdigit(exp[i]))
        {
            num = exp[i] - 48;
            push(num);
        }
        else
        {
            n2 = pop();
            n1 = pop();
            switch(exp[i])
            {
            case '+':
            {
                n3 = n1 + n2;
                break;
            }
            case '-':
            {
                n3 = n1 - n2;
                break;
            }
            case '*':
            {
                n3 = n1 * n2;
                break;
            }
            case '/':
            {
                n3 = n1 / n2;
                break;
            }
            }
            push(n3);
        }
        i++;
    }
    printf("\nThe result of expression %s  =  %d\n\n",exp,pop());
    return 0;
}
   	

