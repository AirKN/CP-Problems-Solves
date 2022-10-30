#include <stdio.h>

int digital_root(int n) {
  // .....
  int s;
  while((n/10) > 0)
  {
    s=0;
    do{
      s+= n%10;
      n/= 10;
    }
    while((n/10) > 0);
    s+= n;
    if((s/10) == 0)
      break;
    n=s;
  }
    return s;
}

//BRUH (number theory stuff)
int digital_root2(int Z) {
  return --Z % 9 + 1;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",digital_root(n));


    return 0;
}