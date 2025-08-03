
// ===================================================================
//  ===================  👉👉  🔹🔹  PracticeProblem  =================
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
  //  ✅ ৫. সমস্যা: ইউজার একটি সংখ্যা ইনপুট দিবে, সেই সংখ্যার ১ থেকে ১০ পর্যন্ত গুণফল  🟢 ইনপুট: 5

//   #include  <stdio.h>
//   int main (){
//      int n ;
//      printf("Enter Number : ");
//      scanf("%d",&n);
//      int i = 1;
//     while (i <= 10) {
//       printf("%d x %d  = %d\n  ", n,i, n*i);
//       i++ ;
//     }    
//     return 0 ; 
//   }


// ✅  Question -6 Print the numbers from 0 to n , if  n  is given by user

// #include <stdio.h>
// int main(){
// int n;
// printf("Enter the number : ");
// scanf("%d", &n);

// int i = 0;
// while(i<=n){
//     printf("%d\n", n);
//     i++;
// }

//     return 0  ;

// }

// ✅  Question -7 Print the Sum of first  n  Naturan Numbers . 
// Also  , Print them in reverse 

// #include <stdio.h>
// int main(){
//     int n ; 
//     int sum = 1;
//     printf("Enter Number : ");
//     scanf("%d" , &n);
//     int i = 0 ;
//     while( i <= n){
        
//         sum = sum + i ;
//         i++;
        

//     }
//     printf("%d\n" , sum);

//     return 0 ;

// }


// ===================================================================
//  ===================  👉👉  🔹🔹  For loop Version  =================
//  ==================================================================

#include <stdio.h>
int main (){
    int n ;
    int sum = 0;
    printf("Enter Number : ");
    scanf("%d" , &n) ;
       
    for(int i =0 ; i <=n ; i++ ){
        sum = i+sum;
    }
    printf(" sum  is %d\n", sum);
    for(int i =  n; i >= n;i-- ){
        printf("%d\n" , i) ;
    }
    return 0 ;
}