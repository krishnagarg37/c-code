#include <stdio.h>
#define MAX 100
 
void countSubsequence(char s[], int n)
{
    int arr[MAX] = { 0 };
    int cntG = 0, cntF = 0, result = 0;
 
    for (int i = 0; i < n; i++) {
        switch (s[i]) {
 
        case 'G':
            arr[i] = cntF;
            result += arr[i];
            cntG++;
            break;
 
        case 'F':
            arr[i] = cntG;
            cntF += arr[i];
            break;
 
        default:
            continue;
        }
    }
 
    cout << result << endl;
}
 
int main()
{
    char s[] = "GFGFG";
    int n = strlen(s);
    countSubsequence(s, n);
    return 0;
}

