#include<stdio.h>
#include<string.h>
int main()
{
 
  const char *key = "b";
    unsigned long hash = 0;
    int len = strlen(key);
    printf("%d",len);
    for (int i = 0; i < len; i++) {
        hash = key[i];
            printf("%d",key[i]);

    }
    return 0;

}