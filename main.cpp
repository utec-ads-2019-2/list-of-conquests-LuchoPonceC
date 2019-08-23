#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    
	int cantidad;
	string pais,persona1,persona2;

	cin>>cantidad;

	map<string,set<string>> paises;

	for(int i=0; i<cantidad;i++){
		cin>>pais;
		getline(cin,persona1);
		paises[pais].insert(persona1);
	}
	
	for(auto valores : paises){
		std::cout<<valores.first<<" "<<valores.second.size()<<endl;
	}

}