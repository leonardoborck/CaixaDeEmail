// PROJETO FEITO POR : LUIZ FELIPE CIPRIANI MORFELLE E LEONARDO BORCK DA SILVEIRA
#include <iostream>
#include "Email.h"
#include "GUI.h"

using namespace std;

void start() {
	MailBox mail;
	startMailBox(mail);
	receiveNewEmail(mail);
	receiveNewEmail(mail);
	receiveNewEmail(mail);
	receiveNewEmail(mail);
	receiveNewEmail(mail);
	receiveNewEmail(mail);
	receiveNewEmail(mail);
	receiveNewEmail(mail);
	receiveNewEmail(mail);
	startGui(mail);
}

int main() {

	start();
}
