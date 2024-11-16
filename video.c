#include <string.h>
#include "config/video.h"

// Parameters:
//   w: width of the image
//   h: height of the image
//   durationMovie: duration in second of movie (colored image)
//   durationCredits: duration in second of credit (image Black/White)
//   unit: Unit of the output value. It could be 'bt' byte, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored video size (based on the unit passed parametter)

float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {
   // YOUR CODE HERE - BEGIN
   float result=(w*h*24)*durationMovie*fps+(w*h*8)*durationCredits*fps;
      if (strcmp(unit, "bt")==0){
      return result; 
   }
   else if (strcmp(unit, "ko")==0){
      return (result/8)/1024; 
                                    
   }
   else if (strcmp(unit, "mo")==0){
      return ((result/8)/1024)/1024;  
   }
     else if (strcmp(unit, "go")==0){
      return (((result/8)/1024)/1024)/1024;  
   }
   else {
      printf("The unit you entered if false");
      return 0;
   }
   // YOUR CODE HERE - END
 
}

/* int main (){
   int w,h, durationMovie,durationCredits,fps; //  int durationMovie, int durationCredits, int fps, char* unit
   char unit[5];
   printf("enter w \n");
   scanf("%d",&w);
   printf("enter h \n");
   scanf("%d",&h);
   printf("enter the duration of the movie in seconds \n");
   scanf("%d",&durationMovie);
   printf("enter the duration of the credits in seconds \n");
   scanf("%d",&durationCredits);
   printf("enter the fps \n");
   scanf("%d",&fps);
   printf("enter unit \n");
   scanf("%s",unit);
   
   printf("The result in %s is %f" ,unit, coloredBitmap( w,  h, durationMovie,durationCredits,fps, unit));
} */