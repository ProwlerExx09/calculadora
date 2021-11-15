#include <stdio.h>
#include <stdlib.h>
int ingresenum();
int suma(int,int);
int resta(int,int);
int divi(int,int);
int bandivi(int n1,int n2);
int multi(int,int);
int fact (int);
int main()
{
    int num1 = 0;
    int num2 = 0;
    int result = 0;
    int menu;
    int band = 0;
    do{
    printf("                 Calculadora\n\n\n");
    printf("---[ 1 ] Ingresar 1er operador ( A = %d )\n\n",num1);
    printf("---[ 2 ] Ingresar 2do operador ( B = %d )\n\n",num2);
    printf("---[ 3 ] Calcular la suma ( A + B )\n\n");
    printf("---[ 4 ] Calcular la resta ( A - B )\n\n");
    printf("---[ 5 ] Calcular la division ( A / B )\n\n");
    printf("---[ 6 ] Calcular la multiplicacion ( A * B )\n\n");
    printf("---[ 7 ] Calcular el factorial ( A ! )\n\n");
    printf("---[ 8 ] Calcular todas las operaciones\n\n");
    printf("---[ 9 ] Salir\n\n");
    printf(".....Seleccione una opcion : ");
    scanf("%d",&menu);
    if(menu != 9)
        {

            switch(menu)
            {
            case 1 :
                num1 = ingresenum();
                system("cls");
                break;
            case 2 :
                num2 = ingresenum();
                system("cls");
                break;
            case 3 :
                result = suma(num1,num2);

                system("cls");
                break;
            case 4 :
                result = resta(num1,num2);

                system("cls");
                break;
            case 5 :
                band = bandivi(num1,num2);
                if(band == 0){
                    result = divi(num1,num2);
                }


                system("cls");
                break;
            case 6 :
                result = multi(num1,num2);

                system("cls");
                break;
            case 7 :
                {
                result = fact(num1);
                system("cls");
                break;
                }
                case 8 :
                    {
                system("cls");
                break;
                    }
        }


    printf("Resultado : %d \n",result);
    if(band == 1){
        printf("No se puede dividir por 0 \n");
        band = 0;
                }
    if(menu == 7 || menu == 8){
             result = fact(num1);
        printf("El factorial  del numero %d  es %d \n",num1,result);
                }
    if(menu == 8){
        result = suma(num1,num2);
        printf("La Suma  de %d y %d es : %d \n",num1,num2,result);
        result = resta(num1,num2);
        printf("La Resta  de %d y %d es : %d \n",num1,num2,result);
        result = divi(num1,num2);
        printf("La Division  de %d y %d es : %d \n",num1,num2,result);
        result = multi(num1,num2);
        printf("La Multiplicacion de %d y %d es : %d \n",num1,num2,result);
                }
    result = 0;
    }}while(menu != 9);
    printf(" FIN DEL PROCESO");




}


int ingresenum()
{
int num;
printf("Ingrese un numero : \n");
scanf("%d",&num);
return(num);
}
int suma(int n1,int n2){
    return(n1+n2);
}
int resta(int n1,int n2){
    return(n1-n2);
}
int bandivi(int n1,int n2){
    int band = 0;
    if(n2 == 0){
        band = 1;
    }
    return(band);
}
int divi(int n1,int n2){
    return(n1/n2);
}
int multi(int n1,int n2){
    return(n1*n2);
}
int fact (int n){
    int fact = 1;
for(int i=1;i<n;i++){
        fact = fact * i;
}
return(fact);
}
