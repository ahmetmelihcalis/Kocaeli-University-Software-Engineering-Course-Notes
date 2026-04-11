#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void kucukHarfYap(char urunler[][50], int n);
void kritikStoklariBul(char urunler[][50], int adetler[], int n);
int toplamStokHesapla(int adetler[], int n);
void siralaAdedeGore(char urunler[][50], int adetler[], int n);
void dosyayaYaz(char urunler[][50], int adetler[], int n);
void dosyadanOku();

int main() {
    char urunler[100][50];
    int adetler[100];
    int n;

    printf("Kac tane urun (n) gireceksiniz? ");
    scanf("%d", &n);

    getchar();

    for (int i = 0; i < n; i++) {
        printf("\n%d. Urun ismi giriniz: ", i + 1);

        // fgets kullanımı: (Dizi adresi, max boyut, standart girdi)
        fgets(urunler[i], 50, stdin);

        // fgets'in sonuna eklediği Enter (\n) karakterini silmek için
        urunler[i][strcspn(urunler[i], "\n")] = '\0';

        printf("Bu urun icin stok miktarini giriniz: ", urunler[i]);
        scanf("%d", &adetler[i]);

        getchar();
    }

    kucukHarfYap(urunler, n);

    int toplam = toplamStokHesapla(adetler, n);
    printf("\nToplam Stok Miktari: %d\n", toplam);

    kritikStoklariBul(urunler, adetler, n);

    siralaAdedeGore(urunler, adetler, n);

    dosyayaYaz(urunler, adetler, n);

    printf("\nDosyadan Okunan Veriler\n");
    dosyadanOku();


    return 0;
}

void kucukHarfYap(char urunler[][50], int n) {

    printf("\nIsminde 'k' Harfi Gecen Urunler\n");
    for (int i = 0; i < n; i++) {

        int kelimeUzunlugu = strlen(urunler[i]);
        int kVarMi = 0;

        for (int j = 0; j < kelimeUzunlugu; j++) {
            if (urunler[i][j] == 'k' || urunler[i][j] == 'K') {
                kVarMi = 1;
            }
            urunler[i][j] = tolower(urunler[i][j]);
        }

        if (kVarMi) {
            printf("- %s\n", urunler[i]);
        }
    }
}

void kritikStoklariBul(char urunler[][50], int adetler[], int n) {

    for (int i=0;i<n;i++){
        if (adetler[i]<50){
            printf("%s urununun stok adedi : %d\n",urunler[i],adetler[i]);

        }
    }
}

int toplamStokHesapla(int adetler[], int n){

    int toplam = 0;

    for(int i=0;i<n;i++){
        toplam = toplam + adetler[i];
    }

    return toplam;

}

void siralaAdedeGore(char urunler[][50], int adetler[], int n) {

    int geciciAdet;
    char geciciIsim[50];

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {

            if (adetler[j] > adetler[j + 1]) {

                geciciAdet = adetler[j];
                adetler[j] = adetler[j + 1];
                adetler[j + 1] = geciciAdet;

                strcpy(geciciIsim, urunler[j]);
                strcpy(urunler[j], urunler[j + 1]);
                strcpy(urunler[j + 1], geciciIsim);
            }
        }
    }
}

void dosyayaYaz(char urunler[][50], int adetler[], int n){

    FILE *fptr;
    fptr = fopen("stoklar.txt", "w");

    if (fptr == NULL) {
        printf("Dosya acilamadi!\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        fprintf(fptr, "%s - %d - %d\n", urunler[i], adetler[i], (int)strlen(urunler[i]));
    }

    fclose(fptr);
}

void dosyadanOku(){

    FILE *fptr;
    fptr = fopen("stoklar.txt","r");
    char satir[100];

    if (fptr == NULL) {
        printf("Dosya bulunamadi!\n");
        return;
    }

    while(fgets(satir, sizeof(satir), fptr) != NULL){
        printf("%s", satir);
    }

    fclose(fptr);

    }
