//autor: Tatsiana Lukashevich
//Obliczyc sume szeregu
#include <stdio.h>
#include <math.h>
int main()
{
    double x, a, S, blad;
    int i, n;
    printf ("Podaj dokladnosc n- calkowita dodatnia,obliczjaca wartosc fumkcji sin(x) n= \n");
    scanf ("%d", &n);
    printf ("w zadanym punkcie x= \n");
    scanf ("%lf", &x);
   if(n <= 0) //sprawdzamy podane dane
     {
      printf("blad danych\n");
      return 1;
     }
        i=2;
        S=a=x;
     while(i<= n)  //obliczamy sume szeregu
     {
        a = (-a)*(x*x)/((2*i-2)*(2*i-1));
        S+=a;
        i++;
     }
     printf("Wartosc sin(x) obliczoczona przy pomocy szeregu S= %f \n", S);
     if( sin(x)==0)
     {
     printf("Nie mozna obliczyc wartosci bledu,bo nie mozemy podzielic przez 0(wartosc sin(0)=0)\n");
     return 1;
     }
     blad = ((S-sin(x))/sin(x)*100); //obliczamy wartosc bledu
     printf("Wartosc obliczona przy pomocy funkcji standartowej sin(x)= %f \n", sin(x));
     printf("Wartosc bledu w procentach : %f", blad);
     printf("%%\n");
     return 0;
}
