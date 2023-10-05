#include <stdio.h>
#include <stdlib.h>

int main()
{
    int P, D_1 , D_2;


    do{
    scanf("%i",&P);
    }while(P!=0 && P!=1);


    if(P==0){
        do{
        scanf("%i",&D_1);
        }while(D_1<0 && D_1>5);

         do{
        scanf("%i",&D_2);
        }while(D_2<0 && D_2>5);



         if( (D_2+D_1)%2==0 ){printf("%i",P);}
         if( (D_2+D_1)%2!=0 ){printf("1");}

    }

    if(P==1){
          do{
        scanf("%i",&D_1);
        }while(D_1<0 && D_1>5);

         do{
        scanf("%i",&D_2);
        }while(D_2<0 && D_2>5);




         if( (D_2+D_1)%2==0 ){printf("%i",P);}
         if( (D_2+D_1)%2!=0 ){printf("0");}

    }


    return 0;
}
