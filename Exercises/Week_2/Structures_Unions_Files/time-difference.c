#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int hours, minutes, seconds;
} Time;

int main()
{
    Time initial, final, difference;
    printf("initial time hour:minutes:seconds = ");
    scanf("%d:%d:%d", &initial.hours, &initial.minutes, &initial.seconds);
    printf("final time hour:minutes:seconds = ");
    scanf("%d:%d:%d", &final.hours, &final.minutes, &final.seconds);

    if (final.seconds < initial.seconds)
    {
        final.seconds += 60;
        final.minutes -= 1;
    }
    difference.seconds = final.seconds - initial.seconds;

    if (final.minutes < initial.minutes)
    {
        final.minutes += 60;
        final.hours -= 1;
    }
    difference.minutes = final.minutes - initial.minutes;

    difference.hours = abs(final.hours - initial.hours);

    printf("%s %dh %dm %ds", final.hours < initial.hours ? "behind by" : "ahead by", difference.hours, difference.minutes, difference.seconds);
    return 0;
}