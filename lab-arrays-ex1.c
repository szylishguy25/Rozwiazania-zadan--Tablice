/* Zadanie 1:* przeanalizuj kod, wykryj błędy i wyjaśnij ich przyczynę wraz z odniesieniem się do komunikatów od kompilatora: */

void printtab(int n){
  static int tab[100*n];	
   /*
  lab-arrays-ex1.c:4:23: error: storage size of ‘tab’ isn’t constant            ^~~
  Rozmiar tablicy tab musi być stały, nie może być zmienną
  */
}

int main(){
   int a[5] = {1,2,3,4,5};
   int b[] = {6,7,8,9,0};
   int c[5] = {0,2,3,4,5,6}  
   /*
   lab-arrays-ex1.c:10:27: warning: excess elements in array initializer
   Nieprawidłowy rozmiar tablicy c (powinno być 6 elementów, a nie 5 - 
   próbujemy przepisać zbyt dużo elementów do tablicy c.
   */
   int *ptr = a;
   /*
   lab-arrays-ex1.c:11:4: error: expected ‘,’ or ‘;’ before ‘int’
   Nie ma na końcu poprzedniej linii średnika (lub przecinka).
   */
   a = b;
   /*
   lab-arrays-ex1.c:13:6: error: assignment to expression with array type
   'a' jest adresem tablicy, więc nie można go modyfikować.
   */
   b = ptr;	
   /*
   lab-arrays-ex1.c:14:8: error: ‘ptr’ undeclared (first use in this function)
   Brak '*' przy ptr (ptr nie istnieje z powodu błędu w linii nad instrukcją wskażnika ptr).
   */
   
   return 0;
}
