#include <iostream>
using namespace std;


int main(){
  int *p = new int[5];
  
  int *q = new int[10];

  p[0] = 3; p[1] = 4; p[2]= 5; p[3] = 8; p[4] = 9;

  for(int i = 0; i < 5; i++)
  {
    q[i] = p[i];
  }
  delete(p);
  p=q;
  q=NULL;

  for(int i = 0; i < 5; i++ )
  cout << p[i] <<endl;





 
  return 0;  
}