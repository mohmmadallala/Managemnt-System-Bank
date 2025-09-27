#include<iostream>
#include"clsscreen.h"
#include"clsMainscreen.h"
#include"clsLoginScreen.h"
using namespace std;
int main() {
	/*while (1) {
		
		if (!clsLoginScreen::ShowLoginScreen()) {
			break;
		}
	}*/
	cout<<clsInputValidate::IsNumberBetween(10, 5, 100)<<endl;
	short a = clsInputValidate::ReadNumber<short>();
	cout << a;
	cout<<clsInputValidate::ReadString();

}