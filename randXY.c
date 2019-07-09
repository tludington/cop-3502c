/* COP 3502C Summer 2019 randXY.c
   This program is written by: Todd Ludington */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int LOOPSIZE = 100;

int main(int argc, char *argv[]) {
    FILE *outfp;
    int i;
    int x;
    int y;

    srand(time(0));

    outfp = fopen("in.txt", "w");
    if (outfp == NULL) {
        printf("Unable to open output file 'in.txt'!\n");
        exit(-1);
    }

    fprintf(outfp, "%d\n", LOOPSIZE);
    for (i = 0; i < LOOPSIZE; i++) {
        x = rand() % 99 - i;
        y = rand() % 99 - i;
        //printf("%d %d\n", x, y);
        fprintf(outfp, "%d %d\n", x, y);
    }
    fclose(outfp);

    printf("%d random x y coordinates written to in.txt\n", LOOPSIZE);
}