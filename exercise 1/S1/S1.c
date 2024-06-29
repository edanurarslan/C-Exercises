#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int s1,s2,s3,s4,s5,s6,s7,s8;
    int saat, dakika, topDak, minfark, indis, kalkis_s, kalkis_dak, varis_saat, varis_dak;
    
    s1 = 8*60+10;
    s2 = 9*60+43;
    s3 = 11*60+19;
    s4 = 12*60+47;
    s5 = 14*60+10;
    s6 = 15*60+45;
    s7 = 19*60+10;
    s8 = 21*60+45;

    scanf("%d\n%d", &saat, &dakika);
    topDak=saat*60+dakika;
    indis=1;
    minfark=abs(topDak-s1);
    
    
    if(abs(topDak-s2)<minfark)
    {
        minfark=abs(topDak-s2);
        indis=2;
    }
    if(abs(topDak-s3)<minfark)
    {
        minfark=abs(topDak-s3);
        indis=3;
    }
    if(abs(topDak-s4)<minfark)
    {
        minfark=abs(topDak-s4);
        indis=4;
    }
    if(abs(topDak-s5)<minfark)
    {
        minfark=abs(topDak-s5);
        indis=5;
    }
    if(abs(topDak-s6)<minfark)
    {
        minfark=abs(topDak-s6);
        indis=6;
    }
    if(abs(topDak-s7)<minfark)
    {
        minfark=abs(topDak-s7);
        indis=7;
    }
    if(abs(topDak-s8)<minfark)
    {
        minfark=abs(topDak-s8);
        indis=8;
    }
    if(indis==1)
    {
        kalkis_s=8;
        kalkis_dak=10;
        varis_saat=10;
        varis_dak=16;
    }
    if(indis==2)
    {
        kalkis_s=9;
        kalkis_dak=43;
        varis_saat=11;
        varis_dak=52;
    }
    if(indis==3)
    {
        kalkis_s=11;
        kalkis_dak=19;
        varis_saat=1;
        varis_dak=31;
    }
    if(indis==4)
    {
        kalkis_s=12;
        kalkis_dak=47;
        varis_saat=15;
        varis_dak=10;
    }
    if(indis==5)
    {
        kalkis_s=14;
        kalkis_dak=10;
        varis_saat=14;
        varis_dak=17;
    }
    if(indis==6)
    {
        kalkis_s=15;
        kalkis_dak=45;
        varis_saat=17;
        varis_dak=55;
    }
    if(indis==7)
    {
        kalkis_s=19;
        kalkis_dak=10;
        varis_saat=21;
        varis_dak=20;
    }
    if(indis==8)
    {
        kalkis_s=21;
        kalkis_dak=45;
        varis_saat=23;
        varis_dak=58;
    }
    printf("Saati giriniz: %d:%d\n", saat, dakika);
    printf("En yakın kalkış %d:%d varış %d:%d", kalkis_s, kalkis_dak, varis_saat, varis_dak);
}
