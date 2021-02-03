/*
 * Lesson2_HW
 *
 * Created by Petrov S.
 */

#include <iostream>
using namespace std;


//4th task

struct gameField{
    char field[3][3] = {{'-','-','-'},
                     {'-','-','-'},
                     {'-','-','-'}};


};

typedef struct gameField GameField;

//5th task
//Вот здесь подзапутался конечно, надеюсь на ваши комментарии! :)

struct dataType {
char c;
int i;
float f;
double d;
    };

    typedef struct dataType DataType;

union {

    struct
    {
    unsigned char isChar : 1;
    unsigned char isInt : 1;
    unsigned char isFloat : 2;
    unsigned char isDouble : 4;
    };

unsigned char flags;

} whatType;


int main(int argc, char *argv[])
{

    // 1st task

    int i = 10;
    uint ui = 110;
    short s = 10;
    ushort us = 10;
    long l = 123457585;

    typedef long long ullong ;
    ullong ul = 12344556;

    const float PI = 3.141592f;
    double d = 134.56748345;

    char c = 'K';
    unsigned char uc = 'B';

    // 2nd task

    enum xo {x, o, space};

   enum xo Player1, Player2, Space;

   Player1 = x;
   Player2 = o;
   Space = space;



   //3d task

   int players[3] = {Player1, Player2, Space};

    //4 task

   GameField GAMEFIELD;



   //5 task

   DataType DATATYPE;
   whatType.flags = DATATYPE.c = 'c';

    return 0;
}
