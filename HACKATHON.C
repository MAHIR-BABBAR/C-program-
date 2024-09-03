#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define B "BED NO : ";



void opd();
void opdD();
void opdEN(int L);  
void opdEE(int L);


void bed();
void bedD();
void bedEN(int L);
void bedEE(int L);






int main(){
int C;

re:
printf("ENTER 1 FOR OPDS DETAILS AND 2 FOR BEDS \n");
scanf("%d",&C);
if (C==1) opd();
if (C==2) bed();


int Ch;
printf("ENTER 1 TO USE AGAIN 0 TO EXIT :- \n");
scanf("%d",&Ch);
if (Ch==0) {printf("THANK YOU SERVING THE NATION \n"); exit;}
if (Ch==1) goto re;


}



void bed(){
   int L=0;
char a[100];
  FILE *BED=fopen("BED.txt","r");
printf("checing the last entry ...\n");
while(fgets(a,sizeof(a),BED)) L++;
printf("NO of enteries done till now are :- %d \n",L);

void (*fp)(int L);int n;
printf("ENTER 1 FOR DETAILS, 2 FOR NEW ENTRY ,3 FOR CHANGING ENTRY \n");
scanf("%d",&n);
getchar();
if (n==1) fp=bedD;
else if (n==2) fp=bedEN;
else if (n==3) fp=bedEE;
fp(L);








}


void bedD(){
printf("enter the bed no you want to check details of :- ");
int N;
scanf("%d",&N);
char a[100];
  FILE *BED=fopen("BED.txt","r");

 for(int i=1;i<N;i++){
   fgets(a,sizeof(a),BED);
 }
    fgets(a,sizeof(a),BED);
    printf(" DETAILS ARE %s \n",a);
    fclose(BED);
}


void bedEN(int L){
    char E[50];
FILE *BED=fopen("BED.txt","a");
printf("ENTER THE DETAILS IN NAME, REG TIME  AND AGE FORMAT :-\n");
fgets(E,sizeof(E),stdin);
fprintf(BED," %d) ",L+1);
fputs(E,BED); 
fclose(BED);




}



void bedEE(int L){
char *l[50];int N;char T[50];
FILE *BED=fopen("BED.txt","r+");
for(int i=0;i<L;i++){
  l[i]=malloc(50*1);
  fgets(l[i],50,BED);
}
printf("ENTER THE BED ROOM NO TO EDIT :-  \n");
scanf("%d",&N);
getchar();

printf("ENTER THE DETAILS IN NAME, REG TIME  AND AGE FORMAT :- \n");
fgets(T,sizeof(T),stdin);


    free(l[N - 1]);
    l[N - 1] = malloc(50* sizeof(char));
    strcpy(l[N - 1],T);
rewind(BED);

     for (int i = 0; i < L; i++) {
        if (i == (N - 1)) {
            fprintf(BED, " %d) %s", i + 1, l[i]);
        } else {
            fprintf(BED, "%s", l[i]);
        }
        free(l[i]);
      
    }
fclose(BED);

printf("EDITED \n ");

}















void opd(){
 int L=0;
char a[100];
  FILE *OPD=fopen("OPD.txt","r");
printf("checing the last entry ...\n");
while(fgets(a,sizeof(a),OPD)) L++;
printf("NO of enteries done till now are :- %d \n",L);

void (*fp)(int L);int n;
printf("ENTER 1 FOR DETAILS, 2 FOR NEW ENTRY ,3 FOR CHANGING ENTRY :- \n");
scanf("%d",&n);
getchar();
if (n==1) fp=opdD;
else if (n==2) fp=opdEN;
else if (n==3) fp=opdEE;
fp(L);



}





void opdD(){
printf("enter the opd no you want to check details of :- ");
int N;
scanf("%d",&N);
char a[100];
  FILE *OPD=fopen("OPD.txt","r");

 for(int i=1;i<N;i++){
   fgets(a,sizeof(a),OPD);
 }
    fgets(a,sizeof(a),OPD);
    printf(" DETAILS ARE %s \n",a);
    fclose(OPD);
}






void opdEN(int L){
  char E[50];
FILE *OPD=fopen("OPD.txt","a");
printf("ENTER THE DETAILS IN NAME, REASON AND AGE FORMAT :-\n");
fgets(E,sizeof(E),stdin);
fprintf(OPD," %d) ",L+1);
fputs(E,OPD); 
fclose(OPD);
}








void opdEE(int L){
char *l[50];int N;char T[50];
FILE *OPD=fopen("OPD.txt","r+");
for(int i=0;i<L;i++){
  l[i]=malloc(50*1);
  fgets(l[i],50,OPD);
}
printf("ENTER THE OPD ROOM NO TO EDIT :-  \n");
scanf("%d",&N);
getchar();

printf("ENTER THE EDITIED DETAILS IN NAME , REASON AND AGE FORMAT :- \n");
fgets(T,sizeof(T),stdin);


    free(l[N - 1]);
    l[N - 1] = malloc(50* sizeof(char));
    strcpy(l[N - 1],T);
rewind(OPD);

     for (int i = 0; i < L; i++) {
        if (i == (N - 1)) {
            fprintf(OPD, " %d) %s", i + 1, l[i]); // Add line number
        } else {
            fprintf(OPD, "%s", l[i]);
        }
        free(l[i]);
      
    }
fclose(OPD);

printf("EDITED \n ");

}



















