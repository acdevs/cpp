#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int n, r;
struct frame
{
    char ack;
    int data;
} frm[10];
int sender(void);
void recvack(void);
void resend_sr(void);
void selective(void);
int main()
{
    selective();
}
void selective()
{
    sender();
    recvack();
    resend_sr();
    printf("\nAll frames sent successfully");
}
int sender()
{
    int i;
    printf("\nEnter the no. of frames to be sent : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("\nEnter data for frames [%d] ", i);
        scanf("%d", &frm[i].data);
        frm[i].ack = 'y';
    }
    return 0;
}
void recvack()
{
    int i;
    rand();
    r = rand() % n;
    frm[r].ack = 'n';
    for (i = 1; i <= n; i++)
    {
        if (frm[i].ack == 'n')
            printf("\nThe frame number %d is not received\n", r);
    }
}
void resend_sr()
{
    printf("\n Resending frame %d", r);
    sleep(2);
    frm[r].ack = 'y';
    printf("\nThe received frame is %d ", frm[r].data);
}