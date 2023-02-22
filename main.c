//
//  main.c
//  programlama projesi 2
//
//  Created by Ahmet Furkan Yorulmaz on 11.12.2022.
//

#include <stdio.h>

int  *convbin(int x){                     // Question 1
   static int arry[]={0,0,0,0,0,0,0,0};
    int i=0;
    int j=7;
    int a = 128;
    if (x == -128){
        arry[0] = 1;
    }
    else{
        i=1;
        if(x>0){
            while(i<8){
                if(x>=a/2 && x<=a){
                   arry[i]=1;
                   x=x-(a/2);
                a=a/2;
                }
                else{
                    arry[i]=0;
                    a=a/2;
                }
                i++;
            }
        }
        else{
            i=1;
            if(x<0){
                x=x-1;
                while(i<8){
                    if(x>=a/2 && x<=a){
                        arry[i]=1;
                        x=x-(a/2);
                    a=a/2;
                }
                else{
                    arry[i]=0;
                    a=a/2;
                }
                    i++;
                }
                i=0;
                while(i<8){
                    if(arry[i]==0){
                        arry[i]=1;
                    }
                    else{
                        arry[i]=0;
                    }
                    i++;
                }
                   i=0;

               while(j>=0){
                     if(arry[j]==2){
                        arry[j]=0;
                        arry[j-1]=arry[j-1]+1;
                    }else{
                        arry[j-1]=arry[j-1]+0;
                    }
                    j--;
                }
            }
        }
    }
    i=0;
while(i<8){
    printf("%d",arry[i]);
    i++;
}

    return arry;
}
int decimal(int arry1[]){  // QUESTİON 2
    
    int i=7;
    int a=1;
     int decimal=0;
    if(arry1[0]==1){
        decimal=decimal - 128;
    }
    while(i>0){
        if(arry1[i]==1)
        decimal=decimal + a;
        a=a*2;
        i--;
    }
    return decimal;
}

int *additionbin(int arry2[],int arry3[]){   // QUESTİON 3
    int i=0;
    static int arry4[8];
    while(i<8){
        arry4[i]=arry2[i]+arry3[i];
        i++;
    }
    i=7;
    while(i>=0){
        if(arry4[i]==2){
            arry4[i]=0;
            arry4[i-1]=arry4[i-1]+ 1;
        }
        if(arry4[i]==1){
            arry4[i]=1;
            arry4[i-1]=arry4[i-1]+ 0;
        }
        if(arry4[i]==3){
            arry4[i]=1;
            arry4[i-1]=arry4[i-1]+ 1;
        }
        i--;
    }
    i=0;
    while(i<8){
        printf("%d",arry4[i]);
        i++;
        
    }
    return arry4;
}
void q4(int arry5[]){       // QUESTİON 4
  
  int  i =0;
    while(i<8){
        if(arry5[i] )
    printf("%d",arry5[i]);
    i++;
  }
}

int menu(int *p,int *y,int *z){            //QUESTİON 5
   printf(" addition -> 1 \n multiplication -> 2 \n division -> 3 \n");
    
    printf("please select an operation");
    scanf("%d",&*p);
    printf("please enter  decimal numbers");
    scanf("%d",&*y);
  printf("please enter second decimal number");
    scanf("%d",&*z);

    return 0;
}
int main() {
 /* int x;               //fonksiyon ları test etmek için
  int arry1[8];
  int i=0;
  while(i<8){
  scanf("%d",&arry1[i]);
  i++;
  }
  printf("decimal form is %d",decimal(arry1));
  scanf("%d",&x);
  addition(x);
*/
 /*int i=0;
int arry2[8];
 int arry3[8];
 while(i<8){
     scanf("%d",&arry2[i]);
     i++;
 }
 printf("enter second num");
 i=0;
 while(i<8){
     scanf("%d",&arry3[i]);
     i++;
 }
 additionbin(arry2,arry3);*/

 /*int arry5[8];
int i=0;
while(i<8){
    scanf("%d",&arry5[i]);
    i++;
}1
    q4(arry5); */
    int *h;
    int *l;
    int p;
    int y;
    int z;
    int *m=&p;
    int *n=&y;
    int *b=&z;
    menu(m,n,b);
    if(p==1){
        l = convbin(y);
        printf("\n");
        h = convbin(z);
        printf("\n");
        additionbin(l, h);
        
   
    }
    return 0;
 }


/*if(p==1){
     decimal(additionbin(convbin(y),convbin(z)));
}
*/
 
