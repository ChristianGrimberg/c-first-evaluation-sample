#include "utn.h"

int main()
{
	char email[EMAIL_MAX];

	if(utn_getEmail(email, EMAIL_MAX, 0, "Ingrese el Email: ", "Valor incorrecto. ") == 0)
		printf("Email validado: %s.\n", email);
	return 0;
}
