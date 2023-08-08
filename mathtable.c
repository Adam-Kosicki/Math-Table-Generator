#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
       fprintf(stderr, "Usage: mathtable <from#> <to#>\n");
        exit(1);
    }

    int low = atoi(argv[1]);
    int high = atoi(argv[2]);
    int n = high - low + 1;
    int *array = (int *) malloc ( sizeof(int) * n );
   
    for(int i=0; i<n; i++)
            array[i] = low + i;

    int pid = getpid();
    for(int i=0; i<n; i++)
            printf("%8d * %8d = %8d\n", pid, array[i], pid * array[i]);
    free(array);
}





