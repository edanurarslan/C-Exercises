#include <stdio.h>
#include <math.h>

float uzaklik(float x1, float y1, float x2, float y2)
{
    float uzak;
    uzak=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    return uzak;

    }


float kordinatlar(float x1, float y1, float x2, float y2)
{
    float sonuc;
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
    sonuc=uzaklik(x1, y1, x2, y2);
    return sonuc;


}

int main()
{
    float x1, x2, y1, y2;
    float uzaklik1;

    uzaklik1=kordinatlar(x1, y1, x2, y2);
    printf("%.2f", uzaklik1);

    return 0;
}


