#include <stdio.h>
int main(void) {
    double units, bill=0; printf("Enter electricity units: ");
    if(scanf("%lf",&units)!=1 || units<0) return 1;
    if(units<=100) bill=units*1.5;
    else if(units<=200) bill=150+(units-100)*2.5;
    else if(units<=300) bill=400+(units-200)*4.0;
    else bill=800+(units-300)*6.0;
    printf("Estimated bill = %.2f (sample slab rates)\\n",bill); return 0;
}
