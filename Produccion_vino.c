#include <stdio.h>
#include <stdlib.h>

int main()
{
    float litros_producidos, costo_por_litro, descuento_por_volumen, costo_total;

    printf("Ingrese la cantidad de litros producidos: ");
    scanf("%f", &litros_producidos);
    printf("Ingrese el costo por litro: ");
    scanf("%f", &costo_por_litro);

    if(litros_producidos > 1000) {
        descuento_por_volumen = 0.10; // 10% de descuento para más de 1000 litros
        costo_total = litros_producidos * costo_por_litro * (1 - descuento_por_volumen);
        printf("Se aplicó un descuento del 10%% por volumen.\n");
        printf("El costo total de producción de vino es:$ %.2f\n", costo_total);
    } else if(litros_producidos > 500) {
        descuento_por_volumen = 0.05; // 5% de descuento para más de 500 litros
        costo_total = litros_producidos * costo_por_litro * (1 - descuento_por_volumen);
        printf("Se aplicó un descuento del 5%% por volumen.\n");
        printf("El costo total de producción de vino es:$  %.2f\n", costo_total);

    } else if(litros_producidos > 100) {
        descuento_por_volumen = 0.025; // 2% de descuento para más de 100 litros
        costo_total = litros_producidos * costo_por_litro * (1 - descuento_por_volumen);
        printf("Se aplicó un descuento del 2.5%% por volumen.\n");
        printf("El costo total de producción de vino es:$ %.2f\n", costo_total);

    } else {
        descuento_por_volumen = 0.0; // Sin descuento para 100 litros o menos
        costo_total = litros_producidos * costo_por_litro;
        printf("No se aplicó descuento.\n");
        printf("El costo total de producción de vino es:$ %.2f\n", costo_total);
    }
    
    getchar(); 
    return 0;
}
