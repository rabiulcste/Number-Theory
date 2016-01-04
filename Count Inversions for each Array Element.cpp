#include <bits//stdc++.h>
using namespace std;
#define ll long long
const int MAX = 100005;

int Weight[MAX], Frequency[MAX], Aux[MAX], Copied[MAX];

int mergeFunc(int left,int mid,int right)
{
    int p=left, q=mid+1, k=0, coun=0, inv = 0;
    for(int i=left; i<=right; i++)
    {
        if(p>mid)
        {
            Aux[k++] = Weight[q++];
        }
        else if(q>right)
        {
            Aux[k++] = Weight[p];
            Frequency[Weight[p]] += coun;
            p++;
        }
        else if(Weight[p] <= Weight[q])
        {
            Aux[k++] = Weight[p];
            Frequency[Weight[p]] += coun;
            p++;
        }
        else
        {
            Aux[k++] = Weight[q++];
            inv += mid-p+1;
            coun++;
        }
    }
    for(int i=0;i<k;i++)
    {
        Weight[left++] = Aux[i];
    }
    return inv;
}

int mergeSort(int left,int right)
{
    int cnt = 0;
    if(left<right)
    {
        int mid = (left+right)/2;
        cnt += mergeSort(left, mid);
        cnt += mergeSort(mid+1, right);
        cnt += mergeFunc(left, mid, right);
    }
    return cnt;
}

int main()
{
    int T, N, arr[100005];
    cin>>T;
    while(T--) {
        for(int i=0; i<MAX; i++) Frequency[i] = 0;
        scanf("%d", &N);
        for(int i=0; i<N; i++)
        {
            scanf("%d", &Weight[i]);
            Copied[i] = Weight[i];
        }
        int res = mergeSort(0,N-1);
        printf("Inversions for each element\n");
        for(int i=0;i<N;i++)
        {
            printf("%d = %d\n",Copied[i], Frequency[Copied[i]]);
        }
        printf("Total inversions = %d\n", res);
    }
    return 0;
}
