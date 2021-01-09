#include <iostream>
#include <fstream>
#include <iostream>
#include <string>
#include <string>
#define  LINE_MAX 1024
using namespace std;

main()
{
int option;
FILE *fp;
char line[LINE_MAX];
unsigned int num[3];

if ((fp = fopen("input.txt", "r")) == NULL)
        return 0;
while (fgets(line, LINE_MAX, fp) != NULL) {
        sscanf(line,"%d:%d:%d\n",&num[0],&num[1],&num[2]);
        printf("num1=%u num2=%u num3=%u\n",num[0],num[1],num[2]);
}
fclose(fp);
cout<<"Please Choose a simulation method. "<<endl;
cout<<" 1) Scheduling Method "<<endl;
cout<<"2) Preemptive Mode"<<endl;
cout<<"3) Non Preemptice Mode "<<endl;
cout<<"4) Show Result "<<endl;
cout<<" 5) End Program"<<endl ;
 
cin>>option;
returm 0;
}
	
