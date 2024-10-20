#include <stdio.h>

struct stack
{
    int size;
    int top;
    int *s;
    /* data */
};

// creating stack using pointer i.e pass by add/refernce
void create(struct stack *st)
{
    printf(" Enter the size of stack");
    scanf("%d", st->size);
    st->top = -1;
    st->s = (int *)malloc(st->size*sizeof(int));
    /* data */
}

// for displaying stack

void displayStack(struct stack st)
{
    int i;
    for( i = top; i >=0; i--)
    {
        printf("%d",st.s[i]);
    }
    printf("\n");
    
    /* data */
}

// for pushing the element in stack

void push(struct stack *st, int x)
{
    if (st->top == st->size-1)
    {
        printf(" stack overflow");
        /* code */
    }else{
        st->s[st->top] = x;
        st->top++;
    }
    /* data */
}

int pop(struct stack *st)
{
    int x = -1;
    if (st->top==-1)
    {
        printf("stack is in underflow");
        /* code */
    }else{
        x = st->s[st->top--];
    }
    return x;    
    /* data */
}

int main(){
    struct stack st;
    create(&st);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);
    push(&st, 50);
    displayStack(st);
}
