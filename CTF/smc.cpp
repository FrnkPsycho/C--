#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int main()
{
    ll t;
    int enc_flag[40] = {70, 76, 65, 71, 91, 22, 108, 18, 86, 21, 108, 85, 18, 21, 66, 69, 76, 21, 22, 73, 108, 21, 20, 85, 120, 22, 121, 111, 25, 21, 108, 73, 110, 21, 65, 18, 77, 29, 29, 93};
    unsigned __int8 init_array[92] = { 85,73,139,230,76,134,234,23,64,128,71,27,68,132,91,23,215,84,238,19,20,21,22,252,42,146,95,231,84,126,206,87,171,100,50,107,37,245,41,145,40,170,218,11,165,236,165,106,204,121,81,227,124,190,115,47,112,56,234,52,138,61,6,254,52,68,201,6,184,174,73,196,13,181,75,200,49,177,105,49,152,233,82,83,84,85,30,212,156,73,7,152 };
    for ( int i=0 ; i<40 ; i++ )
    {
        enc_flag[i] ^= 0x20;
        printf("%c",enc_flag[i]);
    }
    
    // for ( int i=0 ; i<=91 ; i++ ) printf("%d ", init_array[i]);
    // for ( int i=0 ; i<40 ; i++ )
    // {
    //     enc_flag[i] ^= i;
    // }
    // for ( int i=0 ; i<40 ; i++ )
    // {
    //     printf("%c",enc_flag[i]);
    // }
    // printf("%s\n",init_array);
    // char input[100] = {'\0'};
    // scanf("%s",&input);
    // int (*func)(char *, char *);
    // func = (int (*)(char *, char *))init_array;
    // if ((*(unsigned int(__fastcall **)(char *, int *))init_array)(input, enc_flag))
    //     printf("Accept!");
    // else
    // {
    //     printf("nope");
    // }
    return 0;
    
}