/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 2
 *   Hari dan Tanggal    : Rabu, 29 April 2026
 *   Nama (NIM)          : 13224086
 *   Nama File           : soal2.c
 *   Deskripsi           : inventori item
 * 
 */

#include <stdio.h>
#include <string.h>
typedef struct art { 
char nama[100]; 
char kategori[100]; 
int tahun;
int nilai; 
} art; 
int main() {
    int n;
    scanf("%d", &n);
    struct art artefak[n];

    for (int i =0; i<n; i++){
        scanf("%s",artefak[i].nama);
        scanf("%s",artefak[i].kategori);
        scanf("%d",&artefak[i].tahun);
        scanf("%d",&artefak[i].nilai);
    }
    art tmp;
    
    for(int i=0 ; i<n; i++) {
        for(int j = i+1; j<n; j++) {
            if(strcmp(artefak[i].kategori, artefak[j].kategori) > 0) {
                tmp = artefak[i];
                artefak[i] = artefak[j];
                artefak[j] = tmp;
                // printf("k(%d,%d)\n", i, j);
            } else if (strcmp(artefak[i].kategori, artefak[j].kategori) == 0)
                        {if(artefak[i].tahun > artefak[j].tahun) {
                        tmp = artefak[i];
                        artefak[i] = artefak[j];
                        artefak[j] = tmp;
                        // printf("t(%d,%d)\n", i, j);

                    } else if (artefak[i].tahun == artefak[j].tahun)
                            {if(artefak[i].nilai < artefak[j].nilai) {
                                tmp = artefak[i];
                                artefak[i] = artefak[j];
                                artefak[j] = tmp;
                                // printf("n(%d,%d)\n", i, j);

                            }else if (artefak[i].nilai == artefak[j].nilai)
                                    {if(strcmp(artefak[i].nama, artefak[j].nama) > 0) {
                                        tmp = artefak[i];
                                        artefak[i] = artefak[j];
                                        artefak[j] = tmp;
                                        // printf("(%d,%d)\n", i, j);

                                    }}
                        }
                }
        }
    }
    for (int i =0; i<n; i++){
        printf("%s ",artefak[i].nama);
        printf("%s ",artefak[i].kategori);
        printf("%d ",artefak[i].tahun);
        printf("%d \n",artefak[i].nilai);
    }

}
