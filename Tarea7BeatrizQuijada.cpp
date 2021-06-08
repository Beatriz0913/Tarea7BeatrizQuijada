#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

int main(int argc, char *argv[ ]){
	
	time_t now = time(0);
	tm*time = localtime(&now);
	
	vector<string> dia_semana; 
	dia_semana.push_back("Domingo");
	dia_semana.push_back("Lunes");
	dia_semana.push_back("Martes");
	dia_semana.push_back("Miercoles");
	dia_semana.push_back("Jueves");
	dia_semana.push_back("Viernes");
	dia_semana.push_back("Sabado");
	
	vector<string>mes;
	mes.push_back("Enero");
	mes.push_back("Febreo");
	mes.push_back("Marzo");
	mes.push_back("Abril");
	mes.push_back("Mayo");
	mes.push_back("Junio");
	mes.push_back("Julio");
	mes.push_back("Agosto");
	mes.push_back("Septiembre");
	mes.push_back("Octubre");
	mes.push_back("Noviembre");
	mes.push_back("Diciembre");
	
	int year =1900 + time-> tm_year;	
	
	cout << " Hoy " <<dia_semana[ time->tm_wday]<< ",";
	cout <<time->tm_mday << " de " <<mes[ time->tm_mon] << " del "<< year << endl;
	cout << time-> tm_hour << ":" <<time->tm_min << ":" <<time->tm_sec<<endl;

	
	
	system("PAUSE");
	return 0;
}
