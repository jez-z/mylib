#include "mylib.h"

#include <math.h>

void get_user_input(const char* question, void* write_to, InputType type)
{
    printf("%s", question);

    switch (type)
    {
    case INT:
        scanf("%d", (int*)write_to);
        break;

    case FLOAT:
        scanf("%f", (float*)write_to);
        break;

    case CHAR:
        scanf(" %c", (char*)write_to);
        break;
    
    default:
        printf("You f*ed up, type is unknown\n");
        break;
    }
}

float clamp(float value, float min, float max) 
{
    if (value < min) 
    {
        return min;
    }
    if (value > max) 
    {
        return max;
    }
    return value;
}


int gnwd(int digitsCount)
{
    int number;
    
    do
    {
        printf("Insert %d-digit number: ", digitsCount);
        scanf("%d", &number);
    } while (number < (int)pow(10, digitsCount - 1) || number >= (int)pow(10, digitsCount) - 1); 

    return number;
}