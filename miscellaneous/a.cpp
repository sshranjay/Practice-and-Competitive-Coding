#include<sys/types.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<stdio.h>
#include<string.h>
#include<netinet/in.h>
#include<ctype.h>

void main()
{
	int sockfds=socket(AF_INET,SOCK_DGRAM,0);
	char string[100];
	if(sockfds==-1)
		printf("Socket Error\n");
	else
		printf("Socket Created Successfully\n");
	struct sockaddr_in myaddr,fromaddr,toaddr;
	myaddr.sin_family = toaddr.sin_family = AF_INET;
	myaddr.sin_port = htons(3111);
	toaddr.sin_port = htons(3500);
	//myaddr.sin_addr.s_addr=INADDR_ANY;
	myaddr.sin_addr.s_addr = toaddr.sin_addr.s_addr = inet_addr("127.0.0.1");
	//memset(&(myaddr.sin_zero),'\0',8);
	int bindc=bind(sockfds,(struct sockaddr *)&myaddr,sizeof(myaddr));
	if(bindc==-1)
		printf("Unsuccessful\n");
	else
		printf("Bind Successful on Server side\n");
	int len = sizeof(fromaddr);
	int n = recvfrom(sockfds,(char *)string,100,0,(struct sockaddr *)&fromaddr,&len);
	string[n]='\0';
	printf("Client Sent:\n%s\n",string);
	for(int i=0;i<strlen(string);i++)
	{
		switch(string[i])
		{
			case 'a':case 'e':case 'i':case 'o':case 'u':
				string[i]=toupper(string[i]);
				break;
		}
	}
	sendto(sockfds,(char *)string,strlen(string),0,(struct sockaddr *)&toaddr,sizeof(toaddr));
}
