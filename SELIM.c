#include<stdio.h>
#include<windows.h>

int main(){
    int i, j;
    system("color c");
    printf("\n\n");

    for(i=1;i<=22;i++){
        printf("     ");

        for(j=1;j<=30;j++){
            if(i>3&&i<=6&&j>7&&j<=23){
                printf(" ");

            }
            else if(i>6&&i<=9&&j>7&&j<=30){
                printf(" ");

            }
            else if(i>13&&i<=16&&j>0&&j<=23){
                printf(" ");
            }
            else if(i>16&&i<=19&&j>7&&j<=23){
                printf(" ");

            }
            else{
                printf("\xdb");
                Sleep(10);

            }
        }
        printf("\n");
    }
}
