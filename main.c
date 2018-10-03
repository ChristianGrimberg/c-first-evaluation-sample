#include "utn.h"

int main()
{
	char email[EMAIL_MAX];
	char cuit[24];

	system("clear");
	if(utn_getEmail(email, EMAIL_MAX, 10, "Ingrese el Email: ", "Valor incorrecto. ") == 0)
		printf("Email validado: %s\n", email);
	else
		printf("No se ingreso un correo.\n");

	if(utn_getCUIT(cuit, 24, 3, "Ingrese el CUIT: ", "Valor incorrecto. ") == 0)
		printf("CUIT validado: %s\n", cuit);
	return 0;
}
