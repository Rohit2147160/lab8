//Rohit Priyadarshi
//2147160
//3MCA A

#include <stdio.h>
#include <string.h>
 
void search(char* pat, char* txt)
{
    int M = strlen(pat);
    int N = strlen(txt);
    int i,j,c=0;
 
    /* A loop to slide pat[] one by one */
    for (i = 0; i <= N - M; i++) {
        
        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
//                c++;
                break;
 
        if (j == M) // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
            printf("Pattern found at index %d \n", i);
//            printf("The total no of comparsions performed %d ",c);
        
    
    }
//    printf("The total no of comparsions performed %d",c);
}
 
/* Driver program to test above function */
int main()
{
    char txt[] = "AABAACAADAABAABA";
    char pat[] = "AABA";
    search(pat, txt);
    return 0;
}
