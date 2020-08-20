#include <iostream>

using namespace std;

class pessoa
{
	string nome;
	int idade;
	string sexo;
	char bebe;
	
	public:
		pessoa ()
		{
			nome = "Nulo";
			idade = 0;
			sexo = "Masculino";
			bebe = 'S';
		}
		
		pessoa(string n, int i, string s, char b)
		{
			nome = n;
			idade = i;
			sexo = s;
			bebe = b;
		}
		
		~pessoa()
		{
			cout << "Passou no método destrutor do objeto pessoa";
			cout << endl;
		}
		
		void ImprimeDados()
		{
			cout << nome << " - " << idade << " - " << sexo << " - " << bebe << endl;
		}
};

int main ()
{	
	pessoa p2("Caique", 23, "Masculino", 'S');
	p2.ImprimeDados();
	
	return 0;
}