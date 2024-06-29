#include <stdio.h>

int main()
{
    int ay,gun,yil,toplam,ayGecici,gunGecici,yilGecici,toplamGecici;
                
    scanf("%d\n%d\n%d",&ay,&gun,&yil);    
    toplam=(yil*365)+(ay*30)+gun;

    while(1)
    {
        ayGecici=0;
        gunGecici=0;
        yilGecici=0;

        scanf("%d\n%d\n%d",&ayGecici,&gunGecici,&yilGecici);
        toplamGecici=(yilGecici*365)+(ayGecici*30)+gunGecici;
        
        if(toplamGecici<toplam)
        {
            if(toplamGecici!=0)
            {
                ay=ayGecici;
                gun=gunGecici;
                yil=yilGecici;
                toplam=toplamGecici;
            }
            else
            {
                break;
            }
        }
    }
    
    printf("%d %d %d en erken tarih",ay,gun,yil);

    return 0;
}
