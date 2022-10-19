
int numarr[10];
int num;
int findex = 0;
int bindex = 9;
//int *fp = numarr;
//int *bp = numarr+9;
for (i = 0; i < 10 i++) {
	scanf("%d ", &num);

	if (num % 2 == 1) {
		numarr[findex++] = num;
		//*fp = num;
		//fp++;
	else {
		numarr[bindex--] = num;
	}
}