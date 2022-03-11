#include <stdio.h>
main(param1,param2,param3)
char* param3;
{
	char* str1 = ""; //"%s %d %d\n";
	char* cypherString = "@n'+,#'/*{}w+/w#cdnr/+,{}r/*de}+,/*{*+,/w{%+,/w#q#n+,/#{l+\
	,/n{n+,/+#n+,/#;#q#n+,/+k#;*+,/'r :'d*'3,}{w+K w'K:'+}e#';dq#'l q#'+d'\
	K#!/+k#;q#'r}eKK#}w'r}eKK{nl]'/#;#q#n'){)#}w'){){nl]'/+#n';d}rw' i;# )\
	{nl]!/n{n#'; r{#w'r nc{nl]'/#{l,+'K {rw' iK{;[{nl]'/w#q#n'wk nw' iwk{K\
	K{nl]!/w{%'l##w#' i; :{nl]'/*{q#'ld;r'}{nlwb!/*de}'c ;;{nl'-{}rw]'/+,}\
	##'*}#nc,',#nw]'/+kd'+e}+;#'rdq#w! nr'/ ') }+}{rl#'{n' ')# }'+}##(!!/";
	char* str3 = ""; //"%s";
	char* referenceString = "!ek;dc i@bK'(q)-[w]*%n+r3#l,{}:\nuwloca-O;m .vpbks,fxntdCeghiry";

	if(param1>1){
		int verse=param1;
		int day=param2;
		char* strPtr=param3;

		if(verse==2){	// Print the first verse of each stanza
			// ((("On the")+" "+day+"th ")+" day of Christmas my true love gave to me")
			main(-79,-13,strPtr+main(-87,1-day,main(-86,0,strPtr+1)+strPtr));
		}
		if(verse<day){	// Print all verses in the middle of each stanza
			main(verse+1,day,strPtr);	// Print the next verse up to the nth for the day
		}
		if(main(-94,-27+verse,strPtr)!=0&&verse==2){
			if(day<13){	// Print the next stanza
				return main(2,day+1,str1);	// Reset the verse and increment the day
			}else{	// No 13th day; End the program as success
				return 9;
			}
		}else{	// End the program as error
			return 16;
		}
	}else{	// If param1 is not >1, build the string
		int t=param1;
		int _=param2;
		char* a=param3;

		if(param1<0){
			if(param1<-72){	// param1 less than -72
				return main(param2,param1,cypherString);	// Sets up for finding the desired cypher text
			}else{
				if(param1<-50){	// param1 between -51 and -72
					// Find the desired character in the reference string and shift over by 31 units to decypher
					if(param2==*param3){
						putchar(param3[31]);	// Print the character at the position a+31 on the reference string
					}else{
						return main(-65,param2,param3+1);	// Increment the pointer address on the string
					}
				}else{	// param1 between -1 and -50
					// Increment param1 at each '/' character until param1==0; finds nth batch of cypher text
					return main((*param3=='/')+param1,param2,param3+1);
				}
			}
		}else{
			if(param1==1){	// param1==1; Call the first recursion, setting up the program values
				return main(2,2,str3);
			}else{	// param1==0
				// If the current character is '/' short circuit and end, otherwise find the value of param3 in the reference string
				return *param3=='/'||main(0,main(-61,*param3,referenceString),param3+1);
			}
		}
	}
}
