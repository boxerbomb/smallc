#define NULL 0
#define eol 10
#define	linesize 80

char line[linesize];
int ctext;
int lptr;
pl(str)
	char *str;
{	int k;
	k=0;
	putchar(eol);
	while(str[k])putchar(str[k++]);
}

ch()
{	return line[lptr];
}
nch()
{	if(ch()==0)return 0;
		else return line[lptr+1];
}
gch()
{	if(ch()==0)return 0;
		else return line[lptr++];
}

/* output a decimal number - rewritten 4/1/81 gtf */
outdec(n)
int n;
{
	if(n<0)
		outbyte('-');
	else	n = -n;
	outint(n);
/* end outdec */}

outint(n)	/* added 4/1/81 */
int n;
{	int q;

	q = n/10;
	if(q) outint(q);
	outbyte('0'-(n-q*10));
/* end outint */}

outbyte(c)
	int c;
{
	putchar(c);
	return c;
}

nl()
	{outbyte(eol);}
tab()
	{outbyte(9);}
col()
	{outbyte(58);}


fib(n) int n;{
	if (n==0) return 1;
	if (n==1) return 1;
	return fib(n-1) + fib(n-2);
}

main(){
	int index;
	index = 0;
	int test_int;
	while(index < 10){
		test_int = fib(index);
		outdec(test_int);nl();
		index = index + 1;
	}
}
