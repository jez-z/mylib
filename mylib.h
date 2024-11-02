#ifndef MYLIB_H
#define MYLIB_H

#include <stdio.h>

#pragma region "DEFINES"

    #pragma region "ANSI"
        #define RESET "\e[0m"
        #define BOLD "\e[1m"
        //#define FAINT "\e[2m"
        #define ITALIC "\e[3m"
        #define UNDERLINE "\e[4m"
        //#define SLOW_BLINK "\e[5m"
        //#define FAST_BLINK "\e[6m"
        // invert 7
    #pragma endregion

#pragma endregion

typedef enum {
    INT,
    FLOAT,
    CHAR
} InputType;

/*
@param question
@param write_to
@param type
*/
void get_user_input(const char* question, void* write_to, InputType type);

float clamp(float value, float min, float max);

/*
@return Returns a number cuted to digitsCount
@param digitsCount
*/
int gnwd(int digitsCount);
#endif