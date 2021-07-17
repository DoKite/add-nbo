#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <netinet/in.h>

int main(int argc, char* argv[])
{

	FILE *fp = fopen(argv[1], "r");
	FILE *fp2 = fopen(argv[2], "r");

	uint32_t a;
	uint32_t b;

	fread(&a,sizeof(a),1,fp);
	fread(&b,sizeof(b),1,fp2);

	a = ntohl(a);
	b = ntohl(b);

	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)",a,a,b,b,a+b,a+b);
}