#include <stdio.h>


double calculateFraction(){
    return 2.0;
}
int main() {

    int n = 0;
    int i = 0;
    double root = 1.0;
    double fraction = 0.0;

    scanf("%d", &n);

    if (n == 0) printf("%0.10lf\n", root);
    else if (n==1) printf("%0.10lf\n",1.5 );
    else {
        for (i=0; i < n; i++) {
            fraction  += calculateFraction();
            fraction = 1/fraction;
        }
        printf("The fraction is %lf\n", fraction);
        root += fraction;
        printf("%0.10lf\n", root);
    }


    
}