/* Zadanie 1:* przeanalizuj kod, wykryj błędy i wyjaśnij ich przyczynę wraz z odniesieniem się do komunikatów od kompilatora: */

void printtab(int n){
  static int tab[100*n];	//rozmiar tablicy musi być stały, nie zmienną
}

int main(){
   int a[5] = {1,2,3,4,5};
   int b[] = {6,7,8,9,0};
   int c[5] = {0,2,3,4,5,6}	//brak średnika, nieprawidłowy rozmiar tablicy c (powinno być 6, nie 5)
   int *ptr = a;
   
   a = b;	//a i b są tablicami, powinna być użyta pętla, by można było przypisać wartości o odpowiadających sobie indeksach
   b = ptr;	//brak * przed ptr

   return 0;
}
