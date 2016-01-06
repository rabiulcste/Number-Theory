#include<stdio.h>
#include<string.h>

int compare_number(char dec1[], char dec2[])
{
    int length1, length2, result;

    //If one of the number is negative, process them here.
    if (dec1[0] != '-' && dec2[0] == '-') return(1);
    if (dec1[0] == '-' && dec2[0] != '-') return(-1);

    //If the numbers are not having equal sign, they will not come here.
    length1 = strlen(dec1);
    length2 = strlen(dec2);

    if (length1 == length2) result = strcmp(dec1, dec2);
    else result = length1 - length2;

    //If both the number are negative.
    if (dec1[0] == '-') return(-result);
    else return(result);
}

void character_subtraction(char num1[], char num2[], char result[])
{
    int  i, j, k;
    char *swap;

   //If 'num1' < 'num2', then swap them and put '-' at the first of the 'result'.
    if (compare_number(num1, num2) < 0)
    {
        swap = num1; num1 = num2; num2 = swap;
        sprintf(result, "-%s", num1);
    }

    else strcpy(result, num1);

    for(i = strlen(result) - 1, j = strlen(num2) - 1; j >= 0; i--, j--)
    {
        if (result[i] >= num2[j])
        {
            result[i] = result[i] - num2[j] + '0';
            continue;
        }

        result[i] = (result[i] + 10) - num2[j] + '0';
        for(k = i - 1; k > 0 && result[k] == '0'; k--) result[k] = '9';
        result[k] -= 1;
    }

    //Ignoring all the leading zeros.
    for(i = (result[0] == '-') ? 1 : 0; result[i] == '0'; i++);

    //If the result is 0, then previous loop will end in 'NULL'.
    if (result[i] == NULL) --i;

    //Launch all the digits other than leading zeros.
    for(j = (result[0] == '-') ? 1 : 0; result[i] != NULL; j++, i++) result[j] = result[i];

    result[j] = NULL;

 return;
}

int main()
{
    char num1[100] , num2[100] ,res[100];
    while(scanf(" %s %s" , num1 , num2)==2)
    {
        character_subtraction(num1 , num2 , res);
        printf("%s\n" , res);
    }
    return 0;
}
