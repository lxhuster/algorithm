#include<iostream>
#include<vector>
#include<memory.h>
#include<stdio.h>
#include<cstdlib>

using namespace std;

/*
 */
int main()
{
    char book[11];

/* clear arry */
    memset(book, 0, 11);

/* cycle read data */
    for (int i = 0; i < 5; ++i)
    {
        int inData;
        cout << "come on score input:" << endl;
        cin >> inData;
        book[inData]++;
    }

    for (int i = 0; i < 11; ++i)
        for (int j = 1; j <= book[i]; ++j)
        {
            cout << i;
        }
    cout << endl;
        getchar();
    return 0;
}
