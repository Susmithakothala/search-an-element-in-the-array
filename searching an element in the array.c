# include < stdio .h>
main ()
{
int a[20] ,i,key ,n, flag =0;
printf ("How many elements ?");
scanf ("%d" ,&n);
printf (" Enter array elements :\n");
for (i =0;i<n ;++ i)
scanf ("%d" ,&a[i ]);
printf ("\ nEnter element to search :");
scanf ("%d" ,&key );
for (i =0;i<n ;++ i)
if(a[i ]== key )
{
flag ++;
break ;
}
}
if( flag !=0)
printf (" Element found at index %d",i);
else
printf (" Element not found ");
}