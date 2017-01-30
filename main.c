#include <stdio.h>

void lesser(int array[100], int v);
void odd(int array[100]);
void even(int array[100]);
void prime(int array[100]);
void sumchecker(int array[100], int sum);
void greater(int array[100], int v);
void multiple(int array[100], int v);
void notMultiple(int array[100], int v);
void ParticularSum(int array[100], int sum2, int v);
void nonprime(int array[100]);


int a1[100],i, sum = 0;
char YN[] = {'Y','N'}, ans1;
int main(){
//#begin main
    
    printf("Choose a number from 1 to 100 ;including both.\n\n");
    
    
    /* Storing elements in array */
    for(i=0; i<100; i++){
      a1[i] = i+1;
    }
    
    /* if number is less than 50 */
    printf("Is your number less than 50? (Y or N)");
    scanf(" %c",&ans1);
    
    if(ans1 == YN[0]){
        
        //begin then #1
        
        lesser(a1, 50);
            

        /* if number is odd */
        printf("Is your number odd? (Y or N)");
        scanf(" %c",&ans1);
        
        if(ans1 == YN[0]){
            
            //begin then #2
            
            odd(a1);
        
            /* if number is prime */
            printf("Is your number prime? (Y or N)");
            scanf(" %c",&ans1);
            
            if(ans1 == YN[0]){
                
                //begin then #3
                
                prime(a1);
            

               /* sum of the digits */
               printf("What is the sum of digits in your number?");
               scanf(" %d",&sum);
            
            sumchecker(a1, sum);
                
                /* if number is less than 30 */
                printf("Is your number less than 30? (Y or N)");
                scanf(" %c",&ans1);
                
                if(ans1 == YN[0]){
                    lesser(a1, 30);
                    ParticularSum(&a1[100], 5, 20);
                    
                }else{
                
                greater(a1, 30);
                
                     }
                
                }// end then #3
            else{
                //begin else #3
                
                nonprime(a1);
                
            /* Multiple of 3 */
                printf("Is your number multiple of 3? (Y or N)");
                scanf(" %c",&ans1);
                if(ans1 == YN[0]){
                
                    //begin then #4
                    
                    multiple(a1, 3);
                    
                    /* sum of the digits */
                    printf("What is the sum of digits in your number?");
                    scanf(" %d",&sum);
                    
                    sumchecker(a1, sum);
                    
                    /* if number is less than 30 */
                    printf("Is your number less than 30? (Y or N)");
                    scanf(" %c",&ans1);
                    
                    if(ans1 == YN[0]){
                        lesser(a1, 30);
                        ParticularSum(a1, 9, 20);
                    }else{
                        
                        greater(a1, 30);
                        
                    }

                }// end then #4
                
              else{
                  
                  //begin else #4
                
                    /* Not a multiple of 3 */
                  
                  notMultiple(a1, 3);
                  
                    /* sum of the digits */
                    printf("What is the sum of digits in your number?");
                    scanf(" %d",&sum);
                    
                    sumchecker(a1, sum);

                
                }//end else #4
                
            }// end else #3
        }//end then #2
        
        else{
            
            //begin else #2
            
            even(a1);
            
            /* Multiple of 4 */
            printf("Is your number multiple of 4? (Y or N)");
            scanf(" %c",&ans1);
            if(ans1 == YN[0]){
                
                multiple(a1, 4);
                
                /* sum of the digits */
                printf("What is the sum of digits in your number?");
                scanf(" %d",&sum);
                
                sumchecker(a1, sum);
                
                /* if number is less than 30 */
                printf("Is your number less than 30? (Y or N)");
                scanf(" %c",&ans1);
                
                if(ans1 == YN[0]){
                    
                    lesser(a1, 30);
                    
                }else{
                    
                    greater(a1, 30);
                    
                }
                
            }else{
            
            /* Not a multiple of 4 */
            
                notMultiple(a1, 4);
                
                /* sum of the digits */
                printf("What is the sum of digits in your number?");
                scanf(" %d",&sum);
                
                sumchecker(a1, sum);
                
                /* if number is less than 30 */
                printf("Is your number less than 30? (Y or N)");
                scanf(" %c",&ans1);
                
                if(ans1 == YN[0]){
                    
                    lesser(a1, 30);
                    
                }else{
                    
                    greater(a1, 30);
                    
                }

            
            }
            
        }//end else #2

        
    }//end then #1
    else{
    
        //begin else #1
        
        greater(a1, 50);
        
        /* if number is odd */
        printf("Is your number odd? (Y or N)");
        scanf(" %c",&ans1);
        
        if(ans1 == YN[0]){
            
            //begin then ##2
            
            odd(a1);
            
            /* if number is prime */
            printf("Is your number prime? (Y or N)");
            scanf(" %c",&ans1);
            
            if(ans1 == YN[0]){
                
                //begin then ##3
                
                prime(a1);
                /* sum of the digits */
                printf("What is the sum of digits in your number?");
                scanf(" %d",&sum);
                
                sumchecker(a1, sum);
                
                ParticularSum( a1, 8, 60);
                ParticularSum( a1, 16, 80);

            }//end then ##3
            
            else{//begin else ##3
            
                nonprime(a1);
                
                /* if number is less than 80 */
                printf("Is your number less than 80? (Y or N)");
                scanf(" %c",&ans1);
                
                printf("What is the sum of digits in your number?");
                scanf(" %d",&sum);
                
                sumchecker(a1, sum);

                
                if(ans1 == YN[0]){
                    lesser(a1, 80);
                    
                    ParticularSum( a1, 12, 60);
                    
                }else{
                    
                    greater(a1, 30);
                    
                }

            }//end else ##3
        
        }//end then ##2
        
        else{
            
            //begin else ##2
            
            even(a1);
            
            /* Multiple of 4 */
            printf("Is your number multiple of 4? (Y or N)");
            scanf(" %c",&ans1);
            if(ans1 == YN[0]){
                
                multiple(a1, 4);
                
                /* sum of the digits */
                printf("What is the sum of digits in your number?");
                scanf(" %d",&sum);
                
                sumchecker(a1, sum);
                ParticularSum(a1, 11, 60);
            }else{
            
                /* Not a multiple of 4 */
                
                notMultiple(a1, 4);
                
                /* sum of the digits */
                printf("What is the sum of digits in your number?");
                scanf(" %d",&sum);
                
                sumchecker(a1, sum);
                
                /* if number is less than 60 */
                printf("Is your number less than 60? (Y or N)");
                scanf(" %c",&ans1);
                
                if(ans1 == YN[0]){
                    
                    lesser(a1, 60);
                    
                }else{
                    
                    greater(a1, 60);
                    
                }
            
            }
            
        }//end else ##2
    }//end else #1
    
    for(i=0; i<100; i++){
        if(a1[i] != 0){
        
            printf("Your no is %d\n",a1[i]);
        
        }
    
    
    }
    
  
}




void lesser(int array[100], int v){
    for(i = 0; i<100; i++){
    
        if(array[i] > v){
            array[i] = 0;
        }
    }

}


    
    
void greater(int array[100], int v){
    for(i = 0; i<100; i++){
        
        if(array[i] <= v){
                array[i] = 0;
        }
    }
 
}


    
    
void odd(int array[100]){

    for(i = 0; i<100; i++){
    if(array[i] % 2 == 0)
        array[i] = 0;
    }
  
}




void even(int array[100]){
    
    for(i = 0; i<100; i++){
        if(array[i] % 2 != 0)
            array[i] = 0;
    }
   
}




void prime(int array[100]){
    for(i = 0; i<100; i++){
        for(int j = 2; j<(i+1)/2; j++){
           if(array[i] % j == 0){
           
               array[i] = 0;
               
           }
        }
    }

 

}



void nonprime(int array[100]){
    int j;
    for(i = 0; i<100; i++){
        for(j = 2; j<i; j++){
            if(array[i] % j == 0){
                break;
                
            }}
            if(j==i)
               array[i]=0;
                
            }
    
 
    
}



void sumchecker(int array[100], int sum){

    int a, a2, b, b2, c, sum1 = 0;
    
    for(i = 0; i<100; i++){
    
         a = array[i] % 10;
         a2 = array[i] / 10;
    
         b = a2 % 10;
         b2 = a2 / 10;
        
         c = b2 % 10;
        
        sum1 = a + b + c;
        if(sum1 != sum ){
        
            array[i] = 0;
            
        }
    }
  
}



 void multiple(int array[100], int v){
    
        for(i=0; i<100; i++){
        
            if(array[i] % v != 0){
            
                array[i] = 0;
            
            }
        }
    }




   void notMultiple(int array[100], int v){
        
        for(i=0; i<100; i++){
            
            if(array[i] % v == 0){
                
                array[i] = 0;
                
            }
        }
      
    }



void ParticularSum(int array[100], int sum2, int v){
if(sum == sum2){
    
    printf("Is your number is less than %d? (Y or N)", v);
    scanf(" %c",&ans1);
    
    if(ans1 == YN[0]){
        
        lesser(a1, v);
        
    }else{
        
        greater(a1, v);
        
    }
}
    
}









