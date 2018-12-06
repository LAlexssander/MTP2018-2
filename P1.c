//Lucas Alexssander Ribeiro
//11811ECP025
#include <stdio.h>

int main()
{
    int estado=0,i;
    char bits[256];
    printf("Informe o numero: ");
    scanf("%s",bits);

    for(i=0; bits[i] != '\0';i++){
        if(estado==0 && bits[i]=='0'){
            estado=0;
        }else if(estado==0 && bits[i]=='1'){
            estado=1;
        }else if(estado==1 && bits[i]=='0'){
            estado=2;
        }else if(estado==1 && bits[i]=='1'){
            estado=0;
        }else if(estado==2 && bits[i]=='0'){
            estado=1;
        }else if(estado==2 && bits[i]=='1'){
            estado=2;
        }
    }
    if(estado==0){
        printf("'%s' e multiplo de 3",bits);
    }else{
        printf("'%s' nao e",bits);}

    return 0;
}
