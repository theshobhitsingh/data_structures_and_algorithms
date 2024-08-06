#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    char d[] = " ";

    char *ptr = strtok(s, d);

    while(ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strtok(NULL, d);
    }
    return 0;
}
