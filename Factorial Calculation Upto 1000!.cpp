#include <bits//stdc++.h>
#define NUM  1002
#define SIZE 2585

using namespace std;

char fact[NUM + 1][SIZE], num[5];

void character_multiplication(char *num1, char *num2, char *result)
{
    int i, j, k, index, carry, mul, length1, length2;

    length1 = strlen(num1);
    length2 = strlen(num2);
    //Assign all elements of 'result' of length 'length1 + length2' with '0'.
    j = length1 + length2;

    for(i = 0; i < j; i++) result[i] = '0';
    index = -1;

    //Take one digit from 'num2' one by one.
    for(i = length2 - 1; i > -1; i--)
    {
    index++;  carry = 0;

    //Multiply each digit of 'num1' by the digit taken from 'num2'.
    for(j = length1 - 1, k = index; j > -1; j--, k++)
    {
        mul = (num1[j] - '0') * (num2[i] - '0') + (result[k] - '0') + carry;
        carry = mul / 10;
        result[k] = mul % 10 + '0';
    }
    result[k] = carry % 10 + '0';
 }


    //If the last carry is not '0' then keep it in result.
    if (carry != 0) ++k;


    result[k] = '\0';
    reverse(&result[0], &result[k]);
    return;
}




int main()
{
    int i, number;
    strcpy(fact[0], "1");

    for(i = 1; i <= NUM; i++)
    {
        sprintf(num, "%d", i);
        character_multiplication(fact[i - 1], num, fact[i]);
    }

    while(scanf(" %d", &number) == 1)
    printf("%d!\n%s\n", number, fact[number]);
}
