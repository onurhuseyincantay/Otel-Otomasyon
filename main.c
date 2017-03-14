#include <stdio.h>
#include <stdlib.h>
//t yanlýs girdi sayaci/ iad geriye kalan sayilar/ ai  2 ve 6 ya bolunebilen sayýlar /kontrol amaçlý 'k'/s secim t counter/sayi misafir sayisidir/bos1 deluxe odaların boş olup olmadıgını kontrol ediyor/
// toplam standart odalardaki kişi sayisini içine alan degisken toplam1 de yine deluxe odalar icin olan/ y sayi gibi basında harf bulunan degişkenler sadece mevsimler için ayrıca tanımlanmıstır gorev aynı

int main()
{

char mevsim;

int sayi=0,bsayi=0,ysayi=0,cevap=0,btoplam1=0,btoplam=0,btoplam2=0,toplam1=0,toplam=0,toplam2=0,ytoplam1=0,ytoplam=0,ytoplam2=0,tip,islem,s=1,s1=4,s2=0,bs=1,bs1=4,bs2=0,ys=1,ys1=4,ys2=0,yt=0,bt=0,h,k,tek=0,iad=0,ia=0,i,j,Large_deluxe[16],Deluxe[33],standart[50],bos1[12][100],bos2[12][100],bbos[12][100],bbos1[12][100],bbos2[12][100],ybos[12][100],ybos1[12][100],ybos2[12][100],bos[12][100],bhafta[12]={0,0,0,0,0,0,0,0,0,0,0,0},hafta[12]={0,0,0,0,0,0,0,0,0,0,0,0},yhafta[12]={0,0,0,0,0,0,0,0,0,0,0,0},t=0;
 for(i=0;i<12;i++)
        {
            for(j=0;j<100;j++)//son bahar in
            {
            bos[i][j]=0;
            }
        }
         for(i=0;i<12;i++)
        {
            for(j=0;j<100;j++)
            {
            bos1[i][j]=0;
            }
        }
         for(i=0;i<12;i++)
        {
            for(j=0;j<100;j++)
            {
            bos2[i][j]=0;
            }
        }
         for(i=0;i<12;i++)//yaz doneminin
        {
            for(j=0;j<100;j++)
            {
            ybos[i][j]=0;
            }
        }
         for(i=0;i<12;i++)
        {
            for(j=0;j<100;j++)
            {
            ybos1[i][j]=0;
            }
        }
         for(i=0;i<12;i++)
        {
            for(j=0;j<100;j++)
            {
            ybos2[i][j]=0;
            }
        }
        for(i=0;i<12;i++)//bahar doneminin
        {
            for(j=0;j<100;j++)
            {
            bbos[i][j]=0;
            }
        }
         for(i=0;i<12;i++)
        {
            for(j=0;j<100;j++)
            {
            bbos1[i][j]=0;
            }
        }
         for(i=0;i<12;i++)
        {
            for(j=0;j<100;j++)
            {
            bbos2[i][j]=0;
            }
        }
for(i=0;i<100;i++)
{

    if(!(i%2==0))
    {
       standart[tek]=i;
        tek++;
    }

    else if(i%6==0)
    {
        if(i==0)
        {
            continue;
        }
       Large_deluxe[ia]=i;
        ia++;
    }
    else
    {
         Deluxe[iad]=i;
        iad++;
    }


}
do
{

    fflush(stdin);//ön bellek temizlemesi icin kullanılır tampon bolgeyi bosaltmak icin
printf("Hangi mevsimde konaklama yapmak istersiniz ? :\n SonBahar icin 'S' Yaz icin 'Y' Bahar icin 'B''ye Basiniz.\n");scanf("%c",&mevsim);
switch(mevsim)
{
case 'S':
    case 's':
        for(t=1;t<=3;t++)
    {
        printf("SonBahar ayinin Kacinci haftasinda Konaklama yapmak istersiniz ? :");scanf("%d",&h);
        if(h>=1 && h<=12)
        {
            break;
        }
    }if(!(h>=1 && h<=12)){return 0;}
    printf("lutfen oda tipini seciniz :\n Standart icin '1' Deluxe icin '2' Large Deluxe icin '3' giriniz :");scanf("%d",&tip);
if(tip==1)
{
    int k=0,l=0;
      do{
      if(sayi>4)
    {
        toplam+=sayi;
        printf("Oda kapasitesini astiniz %d kisi icin  tekrar oda seciniz",sayi-4);
        sayi=sayi-4;
    }
    do{
            label1:
            if(s%2==0)
            {
                printf("\nGirdiginiz degerde standart tipte oda bulunmamaktadir tekrar giriniz :\n");
            }
        for(i=0;i<50;i++)
        {
            if(bos[h-1][i]==0)
            {
                printf("%d---\t",standart[i]);
            }

        }
    printf("\nNolu Odalar Bostur Birini Seciniz :");scanf("%d",&s);
      }while(s%2==0);
      for(i=0;i<50;i++)
        if(standart[i]==s)
    {
       if(bos[h-1][i]==1){printf("Sectiginiz oda listede yok yada doludur Programdan Cikiliyor!! :");return 0;}


    }
    for(i=0;i<50;i++)
        if(standart[i]==s)
    {
        if(bos[h-1][i]==1){continue;}
        bos[h-1][i]=1;
        hafta[h-1]+=1;
    }

if(k==0){printf("Lutfen Misafir sayisini giriniz :");scanf("%d",&sayi);}
k++;if(l==0){if(sayi<4){toplam+=sayi;}}l++;

}while(sayi>4);
printf(" On odemeli islem icin '1', Havale ile odeme islemi icin '2' ve Standart odeme icin '3' sayisini giriniz");scanf("%d",&islem);
if(islem==1)
{
    float ucret=0;
    ucret=(toplam*25)-((toplam*25)*0.15);
    printf("Rezervasyon Ucretiniz :%.1f",7*ucret);
}
if(islem==2)
{
    float ucret=0;
    if(toplam>=3 && toplam<=5)
    {
    ucret=(toplam*25)-(25*0.5);
    }
    else if(toplam>5)
    {
        ucret=(toplam*25)-(25*0.75);
    }
    else
    {
        ucret=(toplam*25);
    }
    printf("Rezervasyon Ucretiniz %.1f",7*ucret);
}
if(islem==3)
{
    float ucret=0;
 ucret=(toplam*25);
  printf("Rezervasyon Ucretiniz :%.1f",7*ucret);
}
for(i=0;i<12;i++)
{
    printf("\n%d haftanin doluluk orani %c%d",i+1,(char)37,hafta[i]);

}
}
if(tip==2)
{
    int k1=0,l1=0;
       do{

      if(sayi>4)
    {
        toplam1+=sayi;
        printf("Oda kapasitesini astiniz %d kisi icin  tekrar oda seciniz",sayi-4);
        sayi=sayi-4;
    }
    do{
            if(s1%2==1 || s1%6==0)
            {
                printf("\nGirdiginiz degerde Delux tipte oda bulunmamaktadir tekrar giriniz :\n");
            }
        for(i=0;i<33;i++)
        {
            if(bos1[h-1][i]==0)
            {
                printf("%d---\t",Deluxe[i]);
            }

        }
    printf("\nNolu Odalar Bostur Birini Seciniz :");scanf("%d",&s1);
      }while(s1%2==1 || s1%6==0);
       for(i=0;i<50;i++)
        if(Deluxe[i]==s1)
    {
       if(bos1[h-1][i]==1){printf("Sectiginiz oda listede yok yada doludur Programdan Cikiliyor!! :");return 0;}

    }

    for(i=0;i<33;i++)
        if(Deluxe[i]==s1)
    {
        if(bos1[h-1][i]==1){continue;}
        bos1[h-1][i]=1;
        hafta[h-1]+=1;
    }



if(k1==0){printf("Lutfen Misafir sayisini giriniz :");scanf("%d",&sayi);}
k1++;if(l1==0){if(sayi<4){toplam1+=sayi;}}l1++;

}while(sayi>4);
printf(" On odemeli islem icin '1', Havale ile odeme islemi icin '2' ve Standart odeme icin '3' sayisini giriniz");scanf("%d",&islem);
if(islem==1)
{
    float ucret=0;
    ucret=(toplam1*50)-((toplam1*50)*0.15);
    printf("Rezervasyon Ucretiniz :%.2f",7*ucret);
}
if(islem==2)
{
   float ucret=0;
    if(toplam1>=3 && toplam1<=5)
    {
    ucret=(toplam1*50)-(50*0.5);
    }
    else if(toplam1>5)
    {
        ucret=(toplam1*50)-(50*0.75);
    }
    else
    {
        ucret=(toplam1*50);
    }
    printf("Rezervasyon Ucretiniz %.1f",7*ucret);
}
if(islem==3)
{
    float ucret=0;
 ucret=(toplam1*50);
  printf("Rezervasyon Ucretiniz :%.1f",7*ucret);
}
for(i=0;i<12;i++)
{
    printf("\n%d haftanin doluluk orani %c%d",i+1,(char)37,hafta[i]);
}
}
if(tip==3)
{
    int t=0;
    int k2=0;
          do{
      if(sayi>7)
    {
        printf("Oda kapasitesini astiniz %d kisi icin  tekrar oda seciniz",sayi-7);
        sayi=sayi-7;
    }
    do{
            if(!(s2%6==0))
            {
                printf("\nGirdiginiz degerde Large Deluxe tipte oda bulunmamaktadir tekrar giriniz :\n");
            }
        for(i=0;i<16;i++)
        {
            if(bos2[h-1][i]==0)
            {
                printf("%d---\t",Large_deluxe[i]);
            }

        }
    printf("\nNolu Odalar Bostur Birini Seciniz :");scanf("%d",&s2);

      }while(!(s2%6==0));
         for(i=0;i<50;i++)
        if(Large_deluxe[i]==s2)
    {
       if(bos2[h-1][i]==1){printf("Sectiginiz oda listede yok yada doludur Programdan Cikiliyor!! :");return 0;}
    }
    for(i=0;i<16;i++)
        if(Large_deluxe[i]==s2)
    {
        if(bos2[h-1][i]==1){continue;}
        bos2[h-1][i]=1;
        hafta[h-1]+=1;

    }

t++;
if(k2==0){printf("Lutfen Misafir sayisini giriniz :");scanf("%d",&sayi);}
k2++;
}while(sayi>7);
printf(" On odemeli islem icin '1', Havale ile odeme islemi icin '2' ve Standart odeme icin '3' sayisini giriniz");scanf("%d",&islem);
if(islem==1)
{
    float ucret=0;
    ucret=(t*250)-((t*250)*0.15);
    printf("Rezervasyon Ucretiniz :%.1f",7*ucret);
}
if(islem==2)
{
    float ucret=0;
    ucret=t*250;
    printf("Rezervasyon Ucretiniz %.1f",7*ucret);
}
if(islem==3)
{
    float ucret=0;
 ucret=t*250;
  printf("Rezervasyon Ucretiniz :%.1f",7*ucret);
}
for(i=0;i<12;i++)
{
    printf("\n%d haftanin doluluk orani %c%d",i+1,(char)37,hafta[i]);
}
}
break;
    case 'Y':
    case 'y':
                for(t=1;t<=3;t++)
    {
        printf("Yaz ayinin Kacinci haftasinda Konaklama yapmak istersiniz ? :");scanf("%d",&h);
        if(h>=1 && h<=12)
        {
            break;
        }
    }if(!(h>=1 && h<=12)){return 0;}
    printf("lutfen oda tipini seciniz :\n Standart icin '1' Deluxe icin '2' Large Deluxe icin '3' giriniz :");scanf("%d",&tip);
if(tip==1)
{
    int k=0,l=0;
      do{
      if(ysayi>4)
    {
        ytoplam+=ysayi;
        printf("Oda kapasitesini astiniz kalan %d kisi icin tekrar oda seciniz\n",ysayi-4);
        ysayi=ysayi-4;
    }
    do{
            if(ys%2==0)
            {
                printf("\nGirdiginiz degerde standart tipte oda bulunmamaktadir tekrar giriniz :\n");
            }
        for(i=0;i<50;i++)
        {
            if(ybos[h-1][i]==0)
            {
                printf("%d---\t",standart[i]);
            }

        }
    printf("\nNolu Odalar Bostur Birini Seciniz :");scanf("%d",&ys);
      }while(ys%2==0);
         for(i=0;i<50;i++)
        if(standart[i]==ys)
    {
       if(ybos[h-1][i]==1){printf("Sectiginiz oda listede yok yada doludur Programdan Cikiliyor!! :");return 0;}
    }

    for(i=0;i<50;i++)
        if(standart[i]==ys)
    {
        if(ybos[h-1][i]==1){continue;}
        ybos[h-1][i]=1;
        yhafta[h-1]+=1;
    }

if(k==0){printf("Lutfen Misafir sayisini giriniz :");scanf("%d",&ysayi);}
k++;if(l==0){if(ysayi<4){ytoplam+=ysayi;}}l++;

}while(ysayi>4);
printf(" On odemeli islem icin '1', Havale ile odeme islemi icin '2' ve Standart odeme icin '3' sayisini giriniz");scanf("%d",&islem);
if(islem==1)
{
    float ucret=0;
    ucret=(ytoplam*25)-((ytoplam*25)*0.15);
    printf("Rezervasyon Ucretiniz :%.1f",7*ucret);
}
if(islem==2)
{
    float ucret=0;
    if(ytoplam>=3 && ytoplam<=5)
    {
    ucret=(ytoplam*60)-(60*0.5);
    }
    else if(ytoplam>5)
    {
        ucret=(ytoplam*60)-(60*0.75);
    }
    else
    {
        ucret=(ytoplam*60);
    }
    printf("Rezervasyon Ucretiniz %.1f",7*ucret);
}
if(islem==3)
{
    float ucret=0;
 ucret=(ytoplam*60);
  printf("Rezervasyon Ucretiniz :%.1f",7*ucret);
}
for(i=0;i<12;i++)
{
    printf("\n%d haftanin doluluk orani %c%d",i+1,(char)37,yhafta[i]);

}
}
if(tip==2)
{
   int k1=0,l1=0;
       do{
      if(ysayi>4)
    {
        ytoplam1+=ysayi;
        printf("Oda kapasitesini astiniz %d kisi icin  tekrar oda seciniz",ysayi-4);
        ysayi=ysayi-4;
    }
    do{
            if(ys1%2==1 || ys1%6==0)
            {
                printf("\nGirdiginiz degerde Delux tipte oda bulunmamaktadir tekrar giriniz :\n");
            }
        for(i=0;i<33;i++)
        {
            if(ybos1[h-1][i]==0)
            {
                printf("%d---\t",Deluxe[i]);
            }

        }
    printf("\nNolu Odalar Bostur Birini Seciniz :");scanf("%d",&ys1);
      }while(ys1%2==1 || ys1%6==0);
         for(i=0;i<50;i++)
        if(Deluxe[i]==ys1)
    {
       if(ybos1[h-1][i]==1){printf("Sectiginiz oda listede yok yada doludur Programdan Cikiliyor!! :");return 0;}
    }

    for(i=0;i<33;i++)
        if(Deluxe[i]==ys1)
    {
        if(ybos1[h-1][i]==1){continue;}
        ybos1[h-1][i]=1;
        yhafta[h-1]+=1;
    }

if(k1==0){printf("Lutfen Misafir sayisini giriniz :");scanf("%d",&ysayi);}
k1++;if(l1==0){if(ysayi<4){ytoplam1+=ysayi;}}l1++;
}while(ysayi>4);
printf(" On odemeli islem icin '1', Havale ile odeme islemi icin '2' ve Standart odeme icin '3' sayisini giriniz");scanf("%d",&islem);
if(islem==1)
{
    float ucret=0;
    ucret=(toplam1*90)-((toplam1*90)*0.15);
    printf("Rezervasyon Ucretiniz :%.2f",7*ucret);
}
if(islem==2)
{
   float ucret=0;
    if(ytoplam1>=3 && ytoplam1<=5)
    {
    ucret=(ytoplam1*90)-(90*0.5);
    }
    else if(ytoplam1>5)
    {
        ucret=(ytoplam1*90)-(90*0.75);
    }
    else
    {
        ucret=(ytoplam1*90);
    }
    printf("Rezervasyon Ucretiniz %.1f",7*ucret);
}
if(islem==3)
{
    float ucret=0;
 ucret=(ytoplam1*90);
  printf("Rezervasyon Ucretiniz :%.1f",7*ucret);
}
for(i=0;i<12;i++)
{
    printf("\n%d haftanin doluluk orani %c%d",i+1,(char)37,yhafta[i]);
}
}
if(tip==3)
{
    int yt=0,k2=0;
          do{
      if(ysayi>7)
    {
        printf("Oda kapasitesini astiniz %d kisi icin tekrar oda seciniz",ysayi-7);
        ysayi=ysayi-7;
    }
    do{
            if(!(ys2%6==0))
            {
                printf("\nGirdiginiz degerde Large Deluxe tipte oda bulunmamaktadir tekrar giriniz :\n");
            }
        for(i=0;i<16;i++)
        {
            if(ybos2[h-1][i]==0)
            {
                printf("%d---\t",Large_deluxe[i]);
            }

        }
    printf("\nNolu Odalar Bostur Birini Seciniz :");scanf("%d",&ys2);
     yt++;
      }while(!(ys2%6==0));
        for(i=0;i<50;i++)
        if(Large_deluxe[i]==ys2)
    {
       if(ybos2[h-1][i]==1){printf("Sectiginiz oda listede yok yada doludur Programdan Cikiliyor!! :");return 0;}
    }
    for(i=0;i<16;i++)
        if(Large_deluxe[i]==ys2)
    {
        if(ybos2[h-1][i]==1){continue;}
        ybos2[h-1][i]=1;
        yhafta[h-1]+=1;

    }

  if(k2==0){printf("Lutfen Misafir sayisini giriniz :");scanf("%d",&ysayi);}
  k2++;
}while(ysayi>7);
printf(" On odemeli islem icin '1', Havale ile odeme islemi icin '2' ve Standart odeme icin '3' sayisini giriniz");scanf("%d",&islem);
if(islem==1)
{
    float ucret=0;
    ucret=(yt*400)-((yt*400)*0.15);
    printf("Rezervasyon Ucretiniz :%.1f",7*ucret);
}
if(islem==2)
{
    float ucret=0;
    ucret=yt*400;
    printf("Rezervasyon Ucretiniz %.1f",7*ucret);
}
if(islem==3)
{
    float ucret=0;
 ucret=yt*400;
  printf("Rezervasyon Ucretiniz :%.1f",7*ucret);
}
for(i=0;i<12;i++)
{
    printf("\n%d haftanin doluluk orani %c%d",i+1,(char)37,yhafta[i]);
}
}
break;
    case 'B':
    case 'b':
                for(t=1;t<=3;t++)
    {
        printf("Bahar ayinin Kacinci haftasinda Konaklama yapmak istersiniz ? :");scanf("%d",&h);
        if(h>=1 && h<=12)
        {
            break;
        }
    }if(!(h>=1 && h<=12)){return 0;}
    printf("lutfen oda tipini seciniz :\n Standart icin '1' Deluxe icin '2' Large Deluxe icin '3' giriniz :");scanf("%d",&tip);
if(tip==1)
{
    int k=0,l=0;
      do{
      if(bsayi>4)
    {
        btoplam+=bsayi;
        printf("Oda kapasitesini astiniz %d kisi icin  tekrar oda seciniz",bsayi-4);
        bsayi=bsayi-4;
    }
    do{
            if(bs%2==0)
            {
                printf("\nGirdiginiz degerde standart tipte oda bulunmamaktadir tekrar giriniz :\n");
            }
        for(i=0;i<50;i++)
        {
            if(bbos[h-1][i]==0)
            {
                printf("%d---\t",standart[i]);
            }

        }
    printf("\nNolu Odalar Bostur Birini Seciniz :");scanf("%d",&bs);
      }while(bs%2==0);
          for(i=0;i<50;i++)
        if(standart[i]==bs)
    {
       if(bbos[h-1][i]==1){printf("Sectiginiz oda listede yok yada doludur Programdan Cikiliyor!! :");return 0;}
    }

    for(i=0;i<50;i++)
        if(standart[i]==bs)
    {
        if(bbos[h-1][i]==1){continue;}
        bbos[h-1][i]=1;
        bhafta[h-1]+=1;
    }

if(k==0){printf("Lutfen Misafir sayisini giriniz :");scanf("%d",&bsayi);}
k++;if(l==0){if(bsayi<4){btoplam+=bsayi;}}l++;

}while(bsayi>4);
printf(" On odemeli islem icin '1', Havale ile odeme islemi icin '2' ve Standart odeme icin '3' sayisini giriniz");scanf("%d",&islem);
if(islem==1)
{
    float ucret=0;
    ucret=(btoplam*40)-((btoplam*40)*0.15);
    printf("Rezervasyon Ucretiniz :%.1f",7*ucret);
}
if(islem==2)
{
    float ucret=0;
    if(btoplam>=3 && btoplam<=5)
    {
    ucret=(btoplam*40)-(40*0.5);
    }
    else if(btoplam>5)
    {
        ucret=(btoplam*40)-(40*0.75);
    }
    else
    {
        ucret=(btoplam*40);
    }
    printf("Rezervasyon Ucretiniz %.1f",7*ucret);
}
if(islem==3)
{
    float ucret=0;
 ucret=(btoplam*40);
  printf("Rezervasyon Ucretiniz :%.1f",7*ucret);
}
for(i=0;i<12;i++)
{
    printf("\n%d haftanin doluluk orani %c%d",i+1,(char)37,bhafta[i]);

}
}
if(tip==2)
{
    int k1=0,l1=0;
       do{
      if(bsayi>4)
    {
        btoplam1+=bsayi;
        printf("Oda kapasitesini astiniz %d kisi icin  tekrar oda seciniz",bsayi-4);
        bsayi=bsayi-4;
    }
    do{
            if(bs1%2==1 || bs1%6==0)
            {
                printf("\nGirdiginiz degerde Delux tipte oda bulunmamaktadir tekrar giriniz :\n");
            }
        for(i=0;i<33;i++)
        {
            if(bbos1[h-1][i]==0)
            {
                printf("%d---\t",Deluxe[i]);
            }

        }
    printf("\nNolu Odalar Bostur Birini Seciniz :");scanf("%d",&bs1);
      }while(bs1%2==1 || bs1%6==0);
          for(i=0;i<50;i++)
        if(Deluxe[i]==bs1)
    {
       if(bbos1[h-1][i]==1){printf("Sectiginiz oda listede yok yada doludur Programdan Cikiliyor!! :");return 0;}
    }
    for(i=0;i<33;i++)
        if(Deluxe[i]==bs1)
    {
        if(bbos1[h-1][i]==1){continue;}
        bbos1[h-1][i]=1;
        bhafta[h-1]+=1;
    }


if(k1==0){printf("Lutfen Misafir sayisini giriniz :");scanf("%d",&bsayi);}k1++;
if(l1==0){if(bsayi<4){btoplam1+=bsayi;}}l1++;
}while(bsayi>4);
printf(" On odemeli islem icin '1', Havale ile odeme islemi icin '2' ve Standart odeme icin '3' sayisini giriniz");scanf("%d",&islem);
if(islem==1)
{
    float ucret=0;
    ucret=(btoplam1*75)-((btoplam1*75)*0.15);
    printf("Rezervasyon Ucretiniz :%.2f",7*ucret);
}
if(islem==2)
{
   float ucret=0;
    if(btoplam1>=3 && btoplam1<=5)
    {
    ucret=(btoplam1*75)-(75*0.5);
    }
    else if(btoplam1>5)
    {
        ucret=(btoplam1*75)-(75*0.75);
    }
    else
    {
        ucret=(btoplam1*75);
    }
    printf("Rezervasyon Ucretiniz %.1f",7*ucret);
}
if(islem==3)
{
    float ucret=0;
 ucret=(btoplam1*75);
  printf("Rezervasyon Ucretiniz :%.1f",7*ucret);
}
for(i=0;i<12;i++)
{
    printf("\n%d haftanin doluluk orani %c%d",i+1,(char)37,bhafta[i]);
}
}
if(tip==3)
{
    int k2=0,l2=0,bt=0;
          do{
      if(bsayi>7)
    {
        printf("Oda kapasitesini astiniz %d kisi icin  tekrar oda seciniz\n",bsayi-7);
        bsayi=bsayi-7;
    }
    do{
            if(!(bs2%6==0))
            {
                printf("\nGirdiginiz degerde Large Deluxe tipte oda bulunmamaktadir tekrar giriniz :\n");
            }
        for(i=0;i<16;i++)
        {
            if(bbos2[h-1][i]==0)
            {
                printf("%d---\t",Large_deluxe[i]);
            }

        }
    printf("\nNolu Odalar Bostur Birini Seciniz :");scanf("%d",&bs2);
     bt++;
      }while(!(bs2%6==0));
         for(i=0;i<50;i++)
        if(Large_deluxe[i]==bs2)
    {
       if(bbos2[h-1][i]==1){printf("Sectiginiz oda listede yok yada doludur Programdan Cikiliyor!! :");return 0;}
    }
    for(i=0;i<16;i++)
        if(Large_deluxe[i]==bs2)
    {
        bbos2[h-1][i]=1;
        bhafta[h-1]+=1;

    }

if(k2==0){printf("Lutfen Misafir sayisini giriniz :");scanf("%d",&bsayi);}k2++;
if(l2==0){if(bsayi<4){btoplam+=bsayi;}}l2++;
}while(bsayi>7);
printf(" On odemeli islem icin '1', Havale ile odeme islemi icin '2' ve Standart odeme icin '3' sayisini giriniz");scanf("%d",&islem);
if(islem==1)
{
    float ucret=0;
    ucret=(bt*300)-((bt*300)*0.15);
    printf("Rezervasyon Ucretiniz :%.1f",7*ucret);
}
if(islem==2)
{
    float ucret=0;
    ucret=bt*300;
    printf("Rezervasyon Ucretiniz %.1f",7*ucret);
}
if(islem==3)
{
    float ucret=0;
 ucret=bt*300;
  printf("Rezervasyon Ucretiniz :%.1f",7*ucret);
}
for(i=0;i<12;i++)
{
    printf("\n%d haftanin doluluk orani %c%d",i+1,(char)37,bhafta[i]);
}
}
break;
default : printf("Yanlis deger girdiniz\n");break;
}
printf("\nTekrar islem yapmak istiyorsaniz '1' istemiyorsaniz '2' giriniz :");scanf("%d",&cevap);
}while(cevap==1);
return 0 ;
}


