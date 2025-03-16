#include <stdio.h>
#include <stdlib.h>

int main(){
    int dias = 0;
    int dia, mes, ano;
    int diasdoano = 0;
    scanf("%d %d %d", &dia, &mes , &ano);

    if(ano >= 2020 && mes >= 9 && dia >= 17){
        printf("Erro.\n");
    }

    for(int i = 1; i < mes; i++){
       switch(i){
     case 1:
         diasdoano += 31;
         break;
     case 2:
         if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
            diasdoano += (29);
         }else{diasdoano += (28);}
         break;
     case 3:
         diasdoano += 31;
         break;
     case 4:
         diasdoano += 30;
         break;
     case 5:
         diasdoano += 31;
         break;
     case 6:
         diasdoano += 30;
         break;
     case 7:
         diasdoano += 31;
         break;
     case 8:
         diasdoano += 31;
         break;
     case 9:
         diasdoano += 30;
         break;
     case 10:
         diasdoano += 31;
         break;
     case 11:
         diasdoano += 30;
         break;
     case 12:
         diasdoano += 31;
         break;
     }
    }

    diasdoano += dia;

    if(ano < 2020){
      for(int i = ano + 1; i < 2020; i++){
        if((i % 4 == 0 && i % 100 != 0) || i % 400 == 0){
            dias += 366;
        }else{
           dias += 365;
         }
       }
       if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
        dias += (261 + (366 - diasdoano));
       }else{
          dias += (261 + (365 - diasdoano));
        }
    }else{
       dias = 261 - diasdoano;
     }

    printf("%d", dias);


    return 0;
}
