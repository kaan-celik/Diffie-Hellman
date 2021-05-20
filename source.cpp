#include<mpir.h>
#include<mpirxx.h>
#include<fstream>
#include<iostream>

using namespace std;

//My ID : 248039

int main()
{
	
	mpz_t a, b,g,p,A,B,g_ab,g_ba;
	mpz_init_set_ui(a, 123456);
	mpz_init_set_ui(b, 654321);
	mpz_init_set_ui(g, 3);
	mpz_init_set_ui(p, 999983);

	mpz_inits(A, B,g_ab,g_ba, NULL);

	mpz_powm(A, g, a, p);
	mpz_powm(B, g, b, p);
	
	mpz_powm(g_ab, A, b, p);
	mpz_powm(g_ba, B, a, p);

	
	gmp_printf("g^(ab):%Zd\n\n", g_ab);
	gmp_printf("g^(ba):%Zd\n\n", g_ba);


	system("Pause");
	return 0;

}
