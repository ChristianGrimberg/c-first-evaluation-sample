#include "utn.h"

int main()
{
	char email[EMAIL_MAX];

	system("clear");
	if(utn_getEmail(email, EMAIL_MAX, 10, "Ingrese el Email: ", "Valor incorrecto. ") == 0)
		printf("Email validado: %s\n", email);
	else
		printf("No se ingreso un correo.\n");
	return 0;
}
