#include <stdio.h>

int main()
{

    int n = 1, m = 1;
    int d = 0;
    int changes = 0;
    int two, five, ten, twenty, fifty, hundred = 0;
    int one = 0;
    while (n != 0 && m != 0)
    {
        scanf("%d%d", &n, &m);
        if (n ==0 && m == 0) return 0 ;
        d  = m -n;
        if (d < 7 || d == 10)  printf("impossible\n");
        else if (d == 7) printf("possible\n");
        else if ( d > 10 ) {
            hundred = d/100;
            fifty = (d - hundred*100)/50;
            twenty = (d - hundred*100 - fifty*50)/20;
            ten = (d - hundred*100 - fifty*50 - twenty*20)/10;
            five = (d - hundred*100 - fifty*50 - twenty*20 - ten*10)/5;
            two = (d - hundred*100 - fifty * 50 - twenty * 20 - ten* 10 - five* 5)/2;
            one = (d - hundred*100 - fifty * 50 - twenty * 20 - ten* 10 - five* 5 - two*2);
            if (one != 0) printf("impossible\n");
            else {
                if (hundred > 1 || fifty > 1 || twenty > 1 || ten > 1 || five > 1 || two > 1 ) printf("impossible\n");
                else {
                    if (hundred == 1 && fifty == 1 && twenty == 0 && ten == 0 && five == 0 && two == 0) printf("possible\n");
                    else if (hundred == 1 && fifty == 0 && twenty == 1 && ten == 0 && five == 0 && two == 0) printf("possible\n");
                    else if (hundred == 1 && fifty == 0 && twenty == 0 && ten == 1 && five == 0 && two == 0) printf("possible\n");
                    else if (hundred == 1 && fifty == 0 && twenty == 0 && ten == 0 && five == 1 && two == 0) printf("possible\n");
                    else if (hundred == 1 && fifty == 0 && twenty == 0 && ten == 0 && five == 0 && two == 1) printf("possible\n");
                    else if (hundred == 0 && fifty == 1 && twenty == 1 && ten == 0 && five == 0 && two == 0) printf("possible\n");
                    else if (hundred == 0 && fifty == 1 && twenty == 0 && ten == 1 && five == 0 && two == 0) printf("possible\n");
                    else if (hundred == 0 && fifty == 1 && twenty == 0 && ten == 0 && five == 1 && two == 0) printf("possible\n");
                    else if (hundred == 0 && fifty == 1 && twenty == 0 && ten == 0 && five == 0 && two == 1) printf("possible\n");
                    
                    else if (hundred == 0 && fifty == 0 && twenty == 1 && ten == 0 && five == 0 && two == 0) printf("possible\n");
                    else if (hundred == 0 && fifty == 0 && twenty == 1 && ten == 1 && five == 0 && two == 0) printf("possible\n");
                    else if (hundred == 0 && fifty == 0 && twenty == 1 && ten == 0 && five == 1 && two == 0) printf("possible\n");
                    else if (hundred == 0 && fifty == 0 && twenty == 1 && ten == 0 && five == 0 && two == 1) printf("possible\n");

                    else if (hundred == 0 && fifty == 0 && twenty == 0 && ten == 1 && five == 0 && two == 0) printf("possible\n");
                    else if (hundred == 0 && fifty == 0 && twenty == 0 && ten == 1 && five == 1 && two == 0) printf("possible\n");
                    else if (hundred == 0 && fifty == 0 && twenty == 0 && ten == 1 && five == 0 && two == 1) printf("possible\n");
                    
                    else if (hundred == 0 && fifty == 0 && twenty == 0 && ten == 0 && five == 1 && two == 1) printf("possible\n");
                    else printf("impossible\n");
                }

            }
            
            
        }
    }
}