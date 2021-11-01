#include <stdio.h>
#include <stdlib.h>

struct data
{
    char nama[20];
    char no_induk[10];
    float UTS;
    float UAS;
}maha[20];
struct out
{
    float nilai;
    char huruf[2];
}akhir[20];
int main()
{
    int n;
    char no[5];
    printf("jumlah data :");
    gets(no);

    n = atoi(no);

    input(n, maha);
    output(n, akhir);
}
input(x, maha)
int x;
struct data maha[];
{
    int i;
    char nl_UTS[6], nl_UAS[6];

    for(i=0; i<x; ++i)
    {
        printf("Mahasiswa ke-%d :\n", i+1);
        printf("Nama :");
        gets(maha[i].nama);
        printf("No Induk :");
        gets(maha[i].no_induk);
        printf("Nilai UTS :");
        gets(nl_UTS);
        printf("Nilai UAS :");
        gets(nl_UAS);

        maha[i].UTS = atof(nl_UTS);
        maha[i].UAS = atof(nl_UAS);
    }
}
output(x, akhir)
int x;
struct out akhir[];
{
    int i;
    int a=0, b=0, c=0, d=0, e=0;

    printf("OUTPUT\n");
    printf("NAMA\t\tNOMOR POKOK\t\tNILAI AKHIR\t\tNILAI HURUF\n");
    printf("----------------------------------------------------------------------------");
    for(i=0; i<x; ++i)
    {
        akhir[i].nilai=0.4*maha[i].UTS + 0.6*maha[i].UAS;
        if(akhir[i].nilai<50)
            {strcpy(akhir[i].huruf, "E");
            e++;}
        else if (akhir[i].nilai<=60){
            strcpy(akhir[i].huruf, "D");
            d++;}
        else if (akhir[i].nilai<=70){
            strcpy(akhir[i].huruf, "C");
            c++;}
        else if(akhir[i].nilai<=80){
            strcpy(akhir[i].huruf, "B");
            b++;}
        else if(akhir[i].nilai>80){
            strcpy(akhir[i].huruf, "A");
            a++;}

        printf("\n%-20s%-20s%5.2f\t\t\t%s", maha[i].nama, maha[i].no_induk, akhir[i].nilai, akhir[i].huruf);

    }
    printf("\n-----------------------------------------------------------------------------\n");
    printf("A:%d  B:%d  C:%d  D:%d  E:%d", a, b, c, d, e);
    printf("\njumlah mahasiswa : %d orang", x);
}
