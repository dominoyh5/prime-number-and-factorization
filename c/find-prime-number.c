#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {

    long limit = atol(argv[1]);

    int count = 1;
    int primeList[100000] = {2};
    int i = 3;
    int flag = 1;

    clock_t startTime = clock();

    while(count < limit) {
        for(int k = 0; k < count; k++) {
            if((i % primeList[k]) == 0) {
                flag = 0;
                break;
            }
        }

        if(flag) {
            primeList[count] = i;
            count += 1;
        }

        i += 2;
        flag = 1;
    }

    printf("time : %f\n", (float)(clock() - startTime));
    printf("%d\n", primeList[count]);

    return 0;
}