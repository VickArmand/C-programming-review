#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *line = NULL;
     size_t len = 0;
    FILE *fp = fopen("mytext.txt", "r");
   if(fp == NULL) {
       perror("Unable to open file!");
       exit(1);
   }

    while(getline(&line, &len, fp) != -1) {
        printf("line length: %ld\n", strlen(line));
    }

    printf("\n\nMax line size: %ld\n", len);

     fclose(fp);
     free(line);
     return (0);
 }