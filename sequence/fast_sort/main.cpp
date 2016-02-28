#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;


#define MAX_SIZE 10000
#define random(x) (rand() % x)

unsigned arry[MAX_SIZE] = {0};

/**
 */
void sort(unsigned *arry, unsigned left, unsigned right)
{
/* if only one item */
    if (left == right)
    {
        return;
    }

    unsigned left_local = left;
    unsigned right_local = right;

/* get the base num */
    unsigned base = arry[left];

    while(1)
    {
/* if we find a num is bigger then base, then the right pointer stop here */
        while((arry[right_local] >= base) && (right_local != left_local))
        {
            right_local--;
        }

        while((arry[left_local] <= base) && (right_local != left_local))
        {
            left_local++;
        }

/* if we have finish this list sort */
        if (left_local == right_local)
        {
            break;
        }

        unsigned tmp = arry[left_local];
        arry[left_local] = arry[right_local];
        arry[right_local] = tmp;
    }

/* change base */
    arry[left] = arry[right_local];
    arry[right_local] = base;

    if (left_local > left)
    {
        sort(arry, left, left_local - 1);
    }
    
    if (right_local < right)
    {
        sort(arry, right_local + 1, right);
    }
}

/**
 */
int main(int argc, char const *argv[])
{
    while(1)
    {
        cout << "boy come on input total num: ";

        unsigned long num = 1;
        cin >> num;
        cout << endl;

    /*  */
        srand((unsigned) time(0));
        for(unsigned long i = 0; i < num; ++i)
        {
            arry[i] = random(1000);
        }
        sort(arry, 0, num - 1);

        for(unsigned long i = 0; i < num; ++i)
        {
            cout << arry[i] << " ";
        }
        cout << endl;
    /* stop for check the sort result  */
        getchar();
    }
    return 0;
}