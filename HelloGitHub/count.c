#include "star.h"

void pagenums(long page, long dec, long* oarray){
long thedigit;
long zerohandler;
long logar=0;
int counting=1;
int cntt;
long zzero=0;
while(page != 0){
	zerohandler = page % dec;
	if (zerohandler==0){
		while(counting != dec){
			counting = counting*10;
			logar++;
		}
		for(cntt=0;cntt < logar; cntt++){
			edoarray(zzero, oarray);
		}
	}
	thedigit = page / dec;
	edoarray(thedigit, oarray);
	page = page - thedigit*dec;
	dec = dec / 10;
}


return;
}
