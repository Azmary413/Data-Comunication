#include<stdio.h>
#include<string.h>
int main()
{
char data[100],  data1[100];
int index, position, lenth, count=0;
printf("Enter input as 0 & 1 :");
scanf("%s", data);
lenth = strlen(data);

/* Bit Stuffing */
for(index = 0; index<lenth; index++)
{
if (data[index]== '1')
{
count++;
}
else
count = 0;
if(count ==5 )
{
position = index + 1;
for(index = lenth; index > position; index--)
{
data[index] = data[index -1];
}
data[index] = '0';
count = 0;
lenth++;
}

}
data[index] ='\0';
printf("\n \nAfter bit Stuffing   : 01111110 %s 01111110", data);




/* Destuffing */
for(index = 0; index<lenth; index++)
{
if (data[index]== '1')
{
count++;
}
else
count = 0;
if (count ==5 && data[index+1]==0 )
position = index + 1;
for(index = position  ; index < lenth; index++)
{

    data[index] = data[index +1];


}
data[index] = data[index +1];
count = 0;
lenth++;
}
data[index] ='\0';
printf("\n \nAfter bit Destuffing : 01111110 %s 01111110 \n", data);



return 0;
}
