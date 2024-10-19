#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_CTYPE,"");
    int a,b,c,d=0,e,x,i,j,n=8,y,u,k;
    int w;
    int t[8], m[8],p[8];
    do{
            w++;
    printf("\n \n \n________________________________________________________________________________________________________________________");
    printf("\n \nConversion d'un nombre décimal en binaire et d'un nombre binaire en décimal en plus l'addition de deux nombre binaires : \n");
        printf("\n Entrez: \n      1- pour la conversion en binaire           : \n      2- Pour la conversion en decimale          : \n      3- Pour l'addition de deux nombres binaires: ");
        scanf("%d",&a);
        switch (a)
        {
            case 1: printf("\nEntrez le nombre décimale: ");
                    scanf("%d",&b);


                            for (i=0; i<8 ;i++)
                            {
                             c=b%2;
                             t[i]=c;

                             b=b/2;
                            }

                    printf("\n \nLa convertion en binaire est: ");
                             printf("%d%d%d%d %d%d%d%d",t[7],t[6],t[5],t[4],t[3],t[2],t[1],t[0]);


              break;
              case 2: printf("\n \nEntrez le nombre binaire: ");
                 for(int j = 0; j<n; j++) {
                 scanf("%d", &m[j]);
                  }

                 for(int j = 0; j <n; j++) {
                 x= pow(2, n-j-1);
                 y = x*m[j];
                 d = d + y;
                 }

                 printf("Le nombre décimal est %d", d);
                 break;
                case 3: printf("\n \nEntrez le premier nombre binaire: ");
                n=8;
                m[j]=0;
                 for(int j = 0; j<n; j++) {
                 scanf("%d", &m[j]);
                  }
                       printf("\n \nEntrez le second nombre binaire: ");
                       for(int i= 0; i<n; i++) {
                        scanf("%d", &t[i]);
                      }
                      x=0;
                      y=0;
                      d=0;
                      j=0;
                       for(int j = 0; j <n; j++) {
                       x = pow(2, n-j-1);
                       y = x*m[j];
                       d = d + y;
                       }
                       n=8;
                       i=0;
                       y=0;
                       x=0;
                       e=0;
                        for(int i = 0;  i<n; i++) {
                         x = pow(2, n-i-1);
                         y = x*t[i];
                         e = e + y;
                        }
                        u=d+e;
                        printf("\n\nLa somme est %d en décimal et :",u);
                            for (k=0; k<8 ;k++)
                            {
                             c=u%2;
                             p[k]=c;
                             u=u/2;
                            }
                             printf("%d%d%d%d %d%d%d%d",p[7],p[6],p[5],p[4],p[3],p[2],p[1],p[0]);

                         printf(" en binaire");
                         break;

                 }

        } while (w<100);


    return 0;
}
