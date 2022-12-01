#include<math.h>
#include<stdio.h>
#include<conio.h>

float A[100][100],B[100][100],C[100][100],somme;
int a,i,j,l,c;
void main()
{

         printf ("Entrer nbr ligne = ");
         scanf("%d",&l);
         printf ("Entrer nbr colonne = ");
         scanf("%d",&c);
         for (i=0;i<l ; i=i+1)
         {
            for(j=0;j<c ; j=j+c)
            {
               printf ("A[%d][%d]=",j,i);
               scanf ("%f",&A[i][j]);
            }

         }
         for (i=0;i<l ; i=i+1)
         {
            for(j=0;j<c ; j=j+c)
            {
               printf ("B[%d][%d]=",j,i);
               scanf ("%f",&B[i][j]);
            }
         }

         i=0;
         while (i<l)
         {
             j=0;
             while (j<c)
             {
                  C[i][j]=A[i][j] * B[i][j];
                  printf ("C[%d][%d]=%3.2f \n" ,i,j,C[i][j]);
                  j=j+c;
             }
             i=i+1;
         }

getch();
}
