#include<conio.h>
#include<stdio.h>
int main(void)
{
    int c[5]={5,10,6,0,4};
    int d[5];
    int i=0,j=0;
    printf("nillai array yang akan di tampilkan\n");
    for(i=4;i>=0;i--)
    {
        d[i]=c[j];
        printf("%d",c[j]);
        j++;
    }
    printf("\n");
    printf("Nilai array yang di salin berupa bilangan genap dan lebih besar dari nol adalah\n");
    for(i=4;i>=0;i--)
    if(d[i]%2==0&&d[i]>9)
    {
        printf("%d",d[i]);

    }
    return 0;
}
