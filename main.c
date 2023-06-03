#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "math.h"
//Da cai tien 1
//Da cai tien 2
int main(int argc,char *argv[]) {
    int tieptucGame = 1;
	printf("------------------------------");
    printf("\nxin chao, chung ta cung choi 1 tro choi nhe!");
    printf("\nTro choi nay ten la: so lon hon hay nho hon");
    printf("\nBan se du doan 'con so bi mat' nhe!");
    printf("\nDung lo, toi se luon cho ban nhung goi y!");
    while(tieptucGame) {
        int option;
        printf("Menu:\n");
        printf("1.Che do 1 nguoi\n");
        printf("2.Che do 2 nguoi\n");
        printf("vui long nhap 1 hoac 2 de bat dau: ");
        scanf("%d",&option);
        system("cls");
        //Che do choi 1
        if(option == 1){
        int ans;
        printf("Menu cho che do 1 nguoi:\n");
        printf("Tu cap do 1 -> vo han, ban muon choi cap do nao ?(cap do 1 la tu 1->100, cap do 2 la gap 10 lan cap do 1 la 1->1000, cap do 3....)\n");
        printf("Tra loi: ");
        scanf("%d",&ans);
        system("cls");
        long MAX=pow(10,ans+1);
        int MIN=1;
        srand(time(NULL));
        int soBiMat = (rand()%(MAX-MIN+1))+MIN;
        int n;
        int dem=0;
        do {
            printf("\nso ma ban du doan la? ");
            scanf("%d",&n);
            if(n == soBiMat) {
                printf("Ban doan dung roi ne! Ban da doan %d lan\n",dem+1);//them dem+1 la vi tinh ca cai lan doan dung ne!
            }
            if(n != soBiMat){
                 if(n > soBiMat) printf("Lon hon!");
                 else if(n < soBiMat) printf("Nho hon!");
                 dem++;
            }
        } while(n != soBiMat);
        printf("\nBan co muon choi lai khong ? (1: co, 0: khong) ");
        scanf("%d",&tieptucGame);
    }
    //Che do choi 2
    else if(option == 2){
        int Secret;
        printf("Nguoi thu 1 cho so bi mat: ");
        scanf("%d",&Secret);
        system("cls");
        int n;
        int dem=0;
        do {
            printf("\nSo ma nguoi thu 1 da nhap la.. ? ");
            scanf("%d",&n);
            if(n == Secret) {
                printf("Ban doan dung roi ne! Ban da doan %d lan\n",dem+1);//them dem+1 la vi tinh ca cai lan doan dung ne!
            }
            if(n != Secret){
                 if(n > Secret) printf("Lon hon!");
                 else if(n < Secret) printf("Nho hon!");
                 dem++;
            }
        } while(n != Secret);
        printf("\nBan co muon choi lai khong ? (1: co, 0: khong) ");
        scanf("%d",&tieptucGame);

    }
    }
    return 0;
}

