 #include <stdio.h>

 int main()
 {
     int seconds;
     int hours,mins,secs;
     printf("Enter the time in seconds : ");
     scanf("%d",&seconds);
     hours=seconds/3600;
     seconds=seconds%3600;
     mins=seconds/60;
     secs=seconds%60;
     printf("%d seconds is equivalent to %d hours, %d minutes and %d seconds\n",seconds,hours,mins,secs);
 }