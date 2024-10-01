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


main(){
	while (1==1){
		pl("Are you done yet? y/n");
		gets(line);		/* get answer */
		ctext=0;		/* assume no */
		if((ch()=='Y')|(ch()=='y')){
			pl("You said Yes.");
			return 0;
		}
		pl("...");
	}
}
