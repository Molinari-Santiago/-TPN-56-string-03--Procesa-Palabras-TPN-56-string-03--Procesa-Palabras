#include <bits/stdc++.h>

using namespace std;
string ProcesaPalabra(string palabra, string po);
int main(){
string p="a";
string pp;

cout<<"ingrese palabra :";
getline(cin,pp)	;

cout<<"palabra procesada:  "<<ProcesaPalabra( pp ,p);
return 0;
}
string ProcesaPalabra(string palabra, string po){
	int i;	
   po="a";
	for(i=0; i< palabra.size();i++)
	{
		if(palabra[i] == po[0]  )
		{
		 palabra[i]='B';
		}
	}
return palabra;	
}
