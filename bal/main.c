#include <stdio.h>
int main()
{
   int s,c, f, l, m, n, sh,t;

   scanf("%d", &t);

   for(s=1;s<=t;s++)
   {



   scanf("%d",&n);
   int array[n];


   for (c = 0; c < n; c++)
      scanf("%d",&array[c]);

   scanf("%d", &sh);


   f = 0;

   l = n - 1;
   m= (f+l)/2;

   if(array[0]<array[n-1])

   {


   while (f <= l) {
      if (array[m] < s)

         f = m+ 1;
      else if (array[m] == s) {

         printf("Case %d: Found.\n",s);

         break;
      }
      else
         l= m - 1;

      m= (f + l)/2;
   }



   if (f > l)
      printf("Case %d: Not Found.\n",s);


   }


   if(array[n-1]<array[0])
   {

   while (f <= l) {

      if (array[m] > sh)
         f= m + 1;
      else if (array[m] == sh) {

         printf("Case %d: Found.\n",s);
         break;

      }
      else
         l= m - 1;

      m = (f + l)/2;

   }

   if (l < f)
      printf("Case %d: Not Found.\n",s);



   }

   }
    f = 0;

   l = n - 1;

   m= (f+l)/2;



}
