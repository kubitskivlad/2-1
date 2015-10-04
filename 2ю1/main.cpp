//
//  main.cpp
//  2ю1
//
//  Created by Kubitski Vlad on 04.10.15.
//  Copyright (c) 2015 Kubitski Vlad. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;
int addition(char* line);
int main()
{
    char* line1 = new char [30];
    cout<<"vvedite stroky "<< endl;
    cin>> line1;
    int a = addition (line1);
    cout << "sum= "<<a;
}
int addition(char* line)
{
    char* ch = new char [30];
    int g = 0;
    int d = 0;
    int sum = 0;
    int i = 0 , summ = 0;
    for ( i = d ; i < strlen(line); i++)
    {
        g = 0;
        while ((line[i] != '-') && (line[i] != '+') && (line[i] != '\0'))
        {
            ch[g] = line[i];
            g++;
            i++;
        }
        sum = atoi(ch);
        if (d == 0)
        {
            summ = sum;
        }
        if (line[d - 1] == '+')
        {
            summ += sum;
        }
        if (line[d - 1] == '-')
        {
            summ -= sum;
        }
        d = i + 1;
        for (int k = 0; k < 20; k++)
        {
            ch[k] = 0;
        }
    }

    return summ;
}
