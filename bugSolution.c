int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  printf("%d\n", x); //Corrected Print statement 
  return 0;
}