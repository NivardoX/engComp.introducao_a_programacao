#include<stdio.h>
int main(){
    int v[1000];
    int x, y, i, N, M;
    char tipo;
    scanf("%i %i", &N, &M);
    for(i=0;i<=M;i++){
        v[i] = i;
    }
    while(N--){
        scanf(" %c %i %i", &tipo, &x, &y);    
        if(tipo == 'U'){ 
			int aux = v[x];
            for(i = 0;i<=M;i++){
				
                 if(v[i] == aux){                    
                    v[i] = V[y];
                }
            }
        }else if(tipo == 'F'){
            if(v[y] == v[x]){
                printf("T\n");
            }
        }else{
            printf("F\n");
        }
    }
    for(i=0;i<M;i++){
        printf("%d ", v[i]);
    }
    return 0;
}