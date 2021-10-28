#include<stdio.h>
#include<string.h>

int main()
{
    char data[100];
    int index, position, lenth, count=0;
    printf("Enter input as 0 & 1 :");
    scanf("%s", data);
    lenth = strlen(data);

    printf("\n \nAfter bit Stuffing :");

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
    printf("01111110 %s 01111110", data);
    return 0;
}
