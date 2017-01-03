#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Christmas_tree_draw(int width, int height_module){
    int i;
    int j;
    int k;
    int random_a;


    srand(time(NULL));

    for(i=0;i<(width/2)+1;i++)printf(" ");
    printf("^\n");


    for(k=0;k<3;k++){

        for(j=0;j<height_module;j++){

            for(i=0;i<(width/2)-j;i++)printf(" ");
            printf("/*");

                for(i=0;i<(j*2);i++){
                    random_a=rand()%10;
                    if(random_a%2==0)printf("*");
                    else {
                            if(random_a%6==0)printf("!");
                            else if(random_a%6==1) printf("@");
                            else if(random_a%6==2) printf("#");
                            else if(random_a%6==3) printf("$");
                            else if(random_a%6==4) printf("%%");
                            else printf("&");

                         }
                }
            printf("\\ \n");
        }
    height_module*=2;
    }



    for(i=0;i<width/2;i++)printf(" ");
    printf("**\n");
    for(i=0;i<width/2;i++)printf(" ");
    printf("**\n");

}




int main()
{
    Christmas_tree_draw(50,2);
    return 0;
}
