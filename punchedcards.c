#include<stdio.h>
int main(){
    int i,j,r=3,c=2*2,test=1,testi=1;
    scanf("%d",&test);
    while(testi<=test){
        scanf("%d %d",&r,&c);
        printf("Case #%d:\n",testi);
        for(i=0;i<=r;i++){
            for(j=0;j<c;j++){
                if(i==0 && j==0 )
                    printf("..");
                else
                    printf("+-");
            }printf("+\n");
            if(i!=r){
                for(j=0;j<c;j++){
                    if(i==0 && j==0 )
                        printf("..");
                    else
                        printf("|.");
            }
            printf("|\n");
            }
        }
        testi++;
    }
    return 0;
}
