// the.shoaib2
#include <stdio.h>

int main()
{
    int n;
    char arr[1001];
    while (scanf("%d", &n) == 1 && n != 0)
    {
        scanf("%s", arr);
        int dir = 0; // 0 for north, 1 for east, 2 for south, 3 for west
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 'E')
            {
                dir--;
                if (dir < 0)
                    dir += 4;
            }
            else if (arr[i] == 'D')
            {
                dir++;
                if (dir >= 4)
                    dir -= 4;
            }
        }
        if (dir == 0)
            printf("N\n");
        else if (dir == 1)
            printf("L\n");
        else if (dir == 2)
            printf("S\n");
        else if (dir == 3)
            printf("O\n");
    }
    return 0;
}
