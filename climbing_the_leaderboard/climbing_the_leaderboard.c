#include<stdio.h>
#include<stdlib.h>

/* The first line contains an integer n, the number of players on the leaderboard.
The next line contains space-separated integers scores[i], the leaderboard scores in decreasing order.
The next line contains an integer, m, denoting the number games Alice plays.
The last line contains m space-separated integers alice[j], the game scores.
*/

int *receive_data();

int main() 
{
        int* scores;
        int* alice;
        int i;

        scores = receive_data();
        alice = receive_data();
        
        printf("\n");

        return 1;
}

int* receive_data() 
{
        int i = 0;
        int n;
        int* res;

        scanf("%d", &n);
        res = malloc(sizeof(int) * n);

        for(i; i < n; ++i)
                scanf("%d", res[i]);

        for(i; i < n; ++i)
                printf("%d", res[i]);

        return res;
}
