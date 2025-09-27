#include<iostream>
#include"clsscreen.h"
#include"clsMainscreen.h"
#include"clsLoginScreen.h"
using namespace std;
int main() {
while (1) {
		
		if (!clsLoginScreen::ShowLoginScreen()) {
			break;
		}
	}
	


}
