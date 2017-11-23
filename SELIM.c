#include<stdio.h>
#include<windows.h>

int main(){
    writingS();
    writingE();
    writingL();
    writingI();
    writingM();

}

void writingS(){
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

void writingE(){
    system("color c");
    int a,b;
    printf("\n\n");
    for(a=0;a<20;a++){
        printf("\t");
        for(b=0;b<22;b++){

            if(a>=4&&a<=7&&b>=7){
                printf(" ");
            }
            else if(a>=12&&a<=15&&b>=7){
                printf(" ");
            }

            else{
                printf("*");
                Sleep(10);
            }



        }
        printf("\n");
    }
    printf("\n\n\n");
}

void writingL(){
    system("color c");
    int a,b,c,d;
    printf("\n\n");
    for(a=0;a<20;a++){
        printf("\t");
        for(b=0;b<22;b++){

            if(a>=0&&a<=15&&b>=8){
                printf(" ");
            }
            else{
                printf("*");
                Sleep(10);
            }

        }
        printf("\n");
    }
    printf("\n\n\n");
}

void writingI(){
    system("color c");
    int a,b,c,d;
    printf("\n\n");
    for(a=0;a<20;a++){
        printf("\t");
        for(b=0;b<13;b++){

            if(a>=4&&a<=15&&b>9){
                printf(" ");
            }
            else if(a>=4&&a<=15&&b<3){
                printf(" ");
            }
            else{
                printf("*");
                Sleep(10);
            }
        }
        printf("\n");
    }
    printf("\n\n\n");
}

void writingM(){
    system("color c");
    int i,j,upStart=0,upEnd=19;
    for(i=0;i<20;i++){
        printf(" ");
        for(j=0;j<6;j++)
        {
            printf("*");
            Sleep(10);
        }
        for(j=0;j<20;j++){
            if(j>upStart && j<upEnd){
                printf(" ");
            }
            else{
                printf("\xdb");
                Sleep(10);
            }
        }
        for(j=0;j<6;j++)
        {
            printf("*");
            Sleep(10);
        }
        printf("\n");
        upStart++;
        upEnd--;
    }
    printf("\n\n\n");
}
