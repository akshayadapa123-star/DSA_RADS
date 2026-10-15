#include <stdio.h>

int tree[100];

void insert(int value, int pos)
{
    tree[pos] = value;
}

void display(int n)
{
    int i;

    for(i = 1; i <= n; i++)
    {
        if(tree[i] != 0)
            printf("%d ", tree[i]);
    }
}

int main()
{
    int n, i, value, pos;

    for(i = 0; i < 100; i++)
        tree[i] = 0;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter value and position: ");
        scanf("%d %d", &value, &pos);

        insert(value, pos);
    }

    printf("Tree: ");
    display(n);

    return 0;
}