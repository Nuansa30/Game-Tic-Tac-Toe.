#include <iostream>
using namespace std;

char angka[10] = {'0','1','2','3','4','5','6','7','8','9'};
int cetak_hasil();
void papan_permainan();

int main(){
	int player = 1,i,pilih;
	char simbol;
	do{
		papan_permainan();
		player=(player%2)?1:2;
		cout << "Player " << player << ", Masukan angka:  "; cin >> pilih;
		simbol=(player == 1) ? 'X' : 'O';
		if (pilih == 1 && angka[1] == '1')
			angka[1] = simbol;
		else if (pilih == 2 && angka[2] == '2')
			angka[2] = simbol;
		else if (pilih == 3 && angka[3] == '3')
			angka[3] = simbol;
		else if (pilih == 4 && angka[4] == '4')
			angka[4] = simbol;
		else if (pilih == 5 && angka[5] == '5')
			angka[5] = simbol;
		else if (pilih == 6 && angka[6] == '6')
			angka[6] = simbol;
		else if (pilih == 7 && angka[7] == '7')
			angka[7] = simbol;
		else if (pilih == 8 && angka[8] == '8')
			angka[8] = simbol;
		else if (pilih == 9 && angka[9] == '9')
			angka[9] = simbol;
		else{
			cout <<"Jawaban Tidak Valid";
			player--;
			cin.ignore();
			cin.get();
		}
		i=cetak_hasil();
		player++;		
	}while(i==-1);
	papan_permainan();
	if(i==1)
		cout<<"==>\aPlayer "<<--player<<" win ";
	else
		cout<<"==>\aGame draw";
	cin.ignore();
	cin.get();
	return 0;
}

int cetak_hasil(){
	if (angka[1] == angka[2] && angka[2] == angka[3])
		return 1;
	else if (angka[4] == angka[5] && angka[5] == angka[6])
		return 1;
	else if (angka[7] == angka[8] && angka[8] == angka[9])
		return 1;
	else if (angka[1] == angka[4] && angka[4] == angka[7])
		return 1;
	else if (angka[2] == angka[5] && angka[5] == angka[8])
		return 1;
	else if (angka[3] == angka[6] && angka[6] == angka[9])
		return 1;
	else if (angka[1] == angka[5] && angka[5] == angka[9])
		return 1;
	else if (angka[3] == angka[5] && angka[5] == angka[7])
		return 1;
	else if (angka[1] != '1' && angka[2] != '2' && angka[3] != '3' && angka[4] != '4' && angka[5] != '5' && angka[6] != '6' && angka[7] != '7' && angka[8] != '8' && angka[9] && '9')
		return 0;
	else
		return -1;
}

void papan_permainan(){
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";
	cout << "Player 1 (X)  -  Player 2 (O)" << endl;
	cout << endl;
	cout << "     |     |     " << endl;
	cout << "  " << angka[1] << "  |  " << angka[2] << "  |  " << angka[3] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << angka[4] << "  |  " << angka[5] << "  |  " << angka[6] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;    
	cout << "  " << angka[7] << "  |  " << angka[8] << "  |  " << angka[9] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;     
}
