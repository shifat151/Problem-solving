#include <stdio.h>
int main()
{
   int s,c, f, l, mid, n, khoj,TC;

   scanf("%d", &TC);

   for(s=1;s<=TC;s++)
   {



   scanf("%d",&n);
   int array[n];


   for (c = 0; c < n; c++)
      scanf("%d",&array[c]);

   scanf("%d", &khoj);


   f = 0;

   l = n - 1;
   mid = (f+l)/2;

   if(array[0]<array[n-1])

   {


   while (f <= l) {
      if (array[mid] < khoj)

         f = mid + 1;
      else if (array[mid] == khoj) {

         printf("Case %d: Found.\n",s);

         break;
      }
      else
         l = mid - 1;

      mid = (f + l)/2;
   }



   if (f > l)
      printf("Case %d: Not Found.\n",s);


   }


   if(array[n-1]<array[0])
   {

   while (f <= l) {

      if (array[mid] > khoj)
         f = mid + 1;
      else if (array[mid] == khoj) {

         printf("Case %d: Found.\n",s);
         break;

      }
      else
         l = mid - 1;

      mid = (f + l)/2;

   }

   if (l< f)
      printf("Case %d: Not Found.\n",s);



   }

   }
    f = 0;

   l = n - 1;

   mid= (f+l)/2;



}

