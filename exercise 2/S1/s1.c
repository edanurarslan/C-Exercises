#include <stdio.h>
#include <stdlib.h>

int toplama(int say1, int say2)
{
    return say1+say2;
}

int cikarma(int say1, int say2)
{
    return say1-say2;
}

int carpma(int say1, int say2)
{
    return say1*say2;
}

int bolme(int say1, int say2)
{
    if(say2==0)
    {
        return "Payda 0 olduğundan bölme işlemi yapılamaz";
    }
    else
    {
        return say1/say2;
    }
}

void print_message(int say1, int islem, int say2 , int sonuc)
{
    printf("%d%c%d=%d", say1, islem, say2, sonuc);
}

void dortIslem(int say1, int say2, int islem)
{
    int sonuc;
    switch(islem)
    {
    case 43:
        {
            sonuc=toplama(say1, say2);
            print_message(say1, islem, say2, sonuc);
            break;
        }
    case 45:
        {
            sonuc=cikarma(say1, say2);
            print_message(say1, islem, say2, sonuc);
            break;
        }
    case 42:
        {
            sonuc=carpma(say1, say2);
            print_message(say1, islem, say2, sonuc);
            break;
        }
    case 47:
        {
            if(say2!=0)
            {
                sonuc=bolme(say1, say2);
                print_message(say1, islem, say2, sonuc);
            }
            else
            {
                printf("Payda 0 olduğundan bölme işlemi yapılamaz");
            }

            break;
        }
    default:
        {
            printf("Beklenmeyen veri girişi\n");
        }
    }
}

int main()
{
    int say1, say2;
    char islem;

    scanf("%d %d %c", &say1, &say2, &islem);
    dortIslem(say1, say2, islem);

    return 0;
}
