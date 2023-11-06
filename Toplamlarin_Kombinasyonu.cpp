#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int qa,ws,ed,rf,tg,yh,uj,ok,pl,hn;
    //int dizi[10] = {qa,ws,ed,rf,tg,yh,uj,ok,pl,hn};
    int dizi[10];
    int i, j;

    // Rastgele sayý üretmek için rastgele baþlatma iþlemi yapalým
    //srand(time(NULL));
	while(1){
	qa,ws,ed,rf,tg,yh,uj,ok,pl,hn = 0;
	printf("agirlik gir :\n");
	scanf("%d %d %d %d %d %d %d %d %d %d",&qa,&ws,&ed,&rf,&tg,&yh,&uj,&ok,&pl,&hn);
	//scanf("%d %d %d %d %d %d %d %d %d %d",&dizi[1],&dizi[2],&dizi[3],&dizi[4],&dizi[5],&dizi[6],&dizi[7],&dizi[8],&dizi[9],&dizi[10]);
	
	dizi[1] = qa;
	dizi[2] = ws;
	dizi[3] = ed;
	dizi[4] = rf;
	dizi[5] = tg;
	dizi[6] = yh;
	dizi[7] = uj;
	dizi[8] = ok;
	dizi[9] = pl;
	dizi[10] = hn;

	

    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (98 <= (dizi[i] + dizi[j]) && (dizi[i] + dizi[j])<= 102) {
                printf("Toplami 100+- olanlar : %d ve %d\n", dizi[i], dizi[j]);
                
                break;
            }            
        }    
    }
    
    
    int choice;
        printf("1 bas devam: ");
		scanf("%d", &choice);
        if (choice != 1) {
            break;
        }
	}
    return 0;
}

