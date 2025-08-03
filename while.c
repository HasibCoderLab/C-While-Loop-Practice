// #include <stdio.h>
// int main(){
//     int i = 1;
//     while(i <=5){
//         printf("%d\n",i);
//         i++;
//     }
// }

// #include <stdio.h>
// int main(){
//  int n;
//  printf("Enter Number : ");
//  scanf("%d",&n);
//  int i = 0;
//  while(i<= n){
//     printf("%d\n", i);
//     i++;
//  }
//  return 0 ;
// }

// # include <stdio.h>
//  int main(){
//     int i = 0;
//     while ( i <= 5){
//         printf("%d\n",i);
//         i++;
//     }
// return 0 ;
//  }


// #include <stdio.h>

// int main (){

// int i = 20;
// while (i >= 20){
// printf("%d\n",i);
// i--;
// }
//     return 0 ;
// }

// ===================================================================
//  ===================  👉👉  🔹🔹  Practice Problem  =================
//  ==================================================================



//           সমস্যা 1 : while loop ব্যবহার করে ১ থেকে ১০ পর্যন্ত সংখ্যা প্রিন্ট

// #include <stdio.h>
// int main(){
// int i = 1 ;
// while(i <= 10){
//     printf("%d\n",i);
//     i++;
// }
//     return 0 ;
// }
// ✅ ২. সমস্যা: while loop দিয়ে ২, ৪, ৬,... এভাবে ২০ পর্যন্ত জোড় সংখ্যা প্রিন্ট 


// #include <stdio.h>
// int main(){
//     int i =  2 ;
//     while(i <= 20){
//         printf("%d\n",i);
//         i = i+2; // i+= 2
        
//     }
//     return 0;
// }

//   ✅ 3. সমস্যা: while loop দিয়ে   while দিয়ে উল্টোভাবে ২০, ১৮,...,২ প্রিন্ট  

// #include <stdio.h>
// int main(){
//     int i = 20 ;
//     while(i >= 2){
//         printf("%d\n",i);
//         i-=2;
//     }
//     return 0;
// }

//  ✅ 4.    while loop দিয়ে ১০ থেকে ১ পর্যন্ত সংখ্যা উল্টো প্রিন্ট

// #include <stdio.h>
// int main(){
//     int i = 10 ;
//     while( i >= 1){
//         printf("%d\n",i);
//         i--;
//     }
//     return 0 ;
//  }

// ✅ 5.  while loop ব্যবহার করে ১ থেকে ১০ পর্যন্ত সংখ্যার যোগফল  ==      || Output = 55
                            
// #include <stdio.h>
// int main(){
//    int  i = 1;
//     int  sum  = i;
//    while(i<= 10){
//     printf("%d\n",sum);
//     i++ ;
//   sum +=  i ; // sum = i +2 
//    }
//     return 0 ;
// }
  //  ✅ ৫.      সমস্যা: ইউজার একটি সংখ্যা ইনপুট দিবে, সেই সংখ্যার ১ থেকে ১০ পর্যন্ত গুণফল  🟢 ইনপুট: 5
#include <stdio.h>
int main(){
  int n;
   printf("Enter the Number ");
  scanf("%d" , &n);
  int i = n;
   while(i <= n ){
    printf("%d \n", i);
    i++;
   i= n*i ;
    }
  return 0 ;
}


//   -------------------------------   do While  loop -----------

// #include <stdio.h>
// int main(){
//     int i = 1;
//   do{
//     printf("%d\n", i);
//     i++;
//   }while(i<=5);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int i = 5;
//     do{
//         printf("%d\n",i);
//         i--;
//     }while(i>=1);
//     return 0 ;
// }

// #include <stdio.h>
// int main()
// {
//     int i = 10;
//     do
//     {
//         printf("%d\n", i);
//         i--;
//     } while (i >= 1);
//     return 0;
// }


//    

//  ------------   Review Learn Do  while loop ---------------------

// #include <stdio.h>
// int main(){
//     int i = 1;
//     do{
//         printf("%d\n",i);
//         i++;
//     }while(i<=5); 
//     return 0;

// }