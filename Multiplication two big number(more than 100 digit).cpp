/* First, you should read the code two times without comment.
    I think, we will understand the algorithm. if not, then follow comments.
    -------------------------------------
    here, we use primary school math logic. let two numbers 1133 333.
         1133
          333
    ----------
         3399  ->3399 ..... res[0] = 9
        33990  ->3738[9] // add 3399 + 33990 = 37389 ..... res[1] = 8
       339900  ->3772[8][9] // add 37389 + 339900 = 377289 ... res[2] = 2
    ----------
       377289

       on first line we took 3 and multiply with 1133 and result is 3399
       on second line we took 3 and multiply with 1133 and we got 33990,
       then we add this 33990 with 3399 and result is 3738[9].
       on third line, we follow same way.

        you should read code first to know res[0], res[1], res[2]......
    ---------------------------------------
*/

#include <bits//stdc++.h>

using namespace std;

void multiply(char a[], char b[], char res[])
{
    int i, j, k, mul, carry;
    // if one number is zero, then result obviously zero
    if(strcmp(a, "0") == 0 || strcmp(b, "0") == 0)
    {
        strcpy(res, "0");
        return;
    }

    int len1 = strlen(a);
    int len2 = strlen(b);
    j = len1 + len2;

    memset(res, '0', sizeof(res));

    int index = -1;

    for(i = len2 - 1; i >= 0; i--)
    {
        index++; // on first iteration index is 0, next is 1, 2, 3, 4...
        carry = 0; // we declare carry as'0' at first
        for(j = len1 - 1, k = index; j >= 0; j--, k++)
        {
            mul = (a[j] - '0') * (b[i] - '0') + (res[k] - '0') + carry;
            carry = mul / 10; // 8*7 = 72, 72/10 = 7,here, carry is 7
            res[k] = (mul % 10) + '0'; // 8*9 = 72, 72%10 = 2, res[k]'s value is 2
        }

        /* 99*2 = 198, 99's length is 2;
        so we will get res[0] = 8 and res[1] = 9 from above iteration
        res[k] is for left 1 which is for storing left digit res[3] */
        res[k] = (carry % 10) + '0';
    }
    if(carry != 0)
        k++;
    res[k] = '\0';
    /* you know, we calculated everything in reverse way
    and now we should reverse the calculated result to get exact result*/
    reverse(&res[0], &res[k]);

}

int main()
{
    char a[300], b[300], res[600];
    while(cin>>a>>b)
    {
        multiply(a, b, res);
        printf("%s\n", res);
    }
    return 0;
}
