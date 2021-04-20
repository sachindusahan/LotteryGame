#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void result(int v1, int v2);

void delay(int number_of_seconds) {
    int milli_seconds = 1000 * number_of_seconds;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds);
}

int main(void)
{
    srand(time(NULL));
    int value, computer;
    int i = 1;
    while(i <= 10)
    {
        int com, val;
        char op;
        printf("...");
        scanf(" %c", &op);

        val = rand() % ((6+1)-1) + 1;
        com = rand() % ((6+1)-1) + 1;
        delay(2);
        system("clear");
	printf("You: %d >> Com: %d\n", val, com);

        value += val;
        computer += com;

        i++;
    }
    delay(2);
    system("clear");
    result(value, computer);

    return 0;
}


void result(int v1, int v2) {
    if(v1 < v2) {
        printf("Computer won >> %d\n", v2);
    }
    else {
	printf("You won >> %d\n", v1);
    }
}
