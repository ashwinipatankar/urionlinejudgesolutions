#include <stdio.h>
#include <math.h>

int main() {
    int t=0;
    int i =0;
    int pa = 0, pb=0;
    double g1=0, g2=0;
    int years;


    scanf("%d", &t);

    for (i=0; i < t; i++) {
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        //for (years= 0; pa <= pb; years++){
        while (pa <= pb) {
            pa = pa + floor( pa*g1/100);
            pb = pb + floor(pb*g2/100);
            years++;
            if (years > 100){  
                printf ("Mais de 1 seculo.\n");
                break;
            }
        }
        
        pa = pb = 0;
        g1 = g2 = 0;
  
        if (years <= 100) printf("%d anos.\n", years);
        years = 0;
        

    }
}