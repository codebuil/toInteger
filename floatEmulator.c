//https://wasdk.github.io/WasmFiddle/
#include <stdio.h>
int floatEmulator(int a,int b,int matfunc){ 
  int ii=0;
  int precs=1000;
  if(matfunc==0)ii=a+b;
  if(matfunc==1)ii=a-b;
  if(matfunc==2)ii=a*b;
  if(matfunc==3)ii=a/b;
  if(matfunc==4)ii=a*precs;
  if(matfunc==5)ii=a/precs;
  return ii;
}
int main(){
	int getInt=5;
	int setInt=4;
	int divs=3;
	int mult=2;
	int subs=1;
	int adds=0;
	int x=0;
	int xx=16;
	int xxx=0;
	int readss=0;
	printf("\033[42;30m\n");
	for(x=0;x<xx;x++){
		xxx=floatEmulator(x,0,setInt);
		xxx=floatEmulator(xxx,10,divs);
		printf("0.%d\n",xxx);
	}
	return 0;
}
