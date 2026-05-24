/* Input
The first (and the only) input line contains integer number w (1 ≤ w ≤ 100) — the weight of the watermelon bought by the boys.

Output
Print YES, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos; and NO in the opposite case.

Link: https://codeforces.com/problemset/problem/4/A
*/




#include <stdio.h>
int main() {
 
    int w;

    printf("Enter the weight of the watermelon\n");
    scanf("%d",&w);

    if(w%2==0){
        printf("\nYES\n");
    }
    else 
    printf("\nNO\n");
     
    return 0;

}