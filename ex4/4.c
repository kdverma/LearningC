#include <stdio.h>
void crash()
{
    char *crash = NULL;
    int i = 0;
    for (i = 0; i< 1000; i++)
    {
        printf("value = [%c]",crash[i]);
    }
}
int main()
{
    int age = 10;
    int height;
    printf("age = %d\n");
    printf("height = %d\n",height);
    crash();
    return 0;

}
