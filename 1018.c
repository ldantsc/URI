#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "portuguese");
    int n[7] = {100,50,20,10,5,2,1};
    int i,total, result;
        scanf("%d", &total);
    if(total>0 && total<1000000){
        printf("%d\n", total);
        
        for(i=0; i<7; i++){
            
            result = total/n[i];
            total = total-(result*n[i]);
            printf("%d nota(s) de R$ %d,00\n", result, n[i]);
        }
    }
}