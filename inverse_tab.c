#include <stdio.h>

int main() 
{
    int tab[4] = {1, 2, 3, 4};
    int tab_copy[4], i;
    i=0;
    while(i<4)
    {
        tab_copy[3-i] = tab[i];
        i++;
    }
    i=0;
    while(i<4)
    {
        printf("%d \n", tab_copy[i]);
        i++;
    }

  return 0; 
}