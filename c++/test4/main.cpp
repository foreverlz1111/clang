#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
typedef int phys_addr_t ;
#define NR_HOLES 11 /*可等级空闲分区的表项综合*/
#define NR_PROCESS 10 /*进程总数*/
#define RUNNING 1 /*进程处于执行、就绪的状态*/
#define NOTEXISIT 0 /*进程控制块空闲*/
struct hole{
    phys_addr_t h_base;         /*空闲分区起始地址*/
    phys_addr_t h_len;            /* 空闲分区大小 */
    struct hole *h_next;           /* 指向空闲分区链中下一个空闲分区 */
}
hole[NR_HOLES];
struct hole *hole_head; /* 空闲分区链链首指针 */
struct hole *free_slots; /* 可用表项链链首：每个表项可用来登记一个空闲分区*/

struct pcb {
    phys_addr_t p_base;           /* 分配到的内存起始地址 */
    phys_addr_t p_len;            /* 分配到的内存大小 */
    int p_state;                  /* 进程状态 */
}
pcb[NR_PROCESS];

phys_addr_t alloc_mem(phys_addr_t size,phys_addr_t m_len);
void free_mem(phys_addr_t m_base, phys_addr_t m_len);
void mem_init(phys_addr_t base,phys_addr_t size);
void pcb_init() ;
void show();

phys_addr_t alloc_mem(phys_addr_t size,phys_addr_t m_len) {

    /* 采用首次适应算法分配一块连续的内存空间
     * 参数：
     *      m_len  ：申请内存块的长度；
     * 返回值：
     *       分配成功，返回分配到的内存块的起始地址；失败返回-1.
     */
    int temp;
    for(int i=0;i++;i<NR_PROCESS){
        temp +=pcb[i].p_len;
    }
    if(size - temp >m_len){return size-temp;}
    else{return -1;}
}

void free_mem(phys_addr_t m_base, phys_addr_t m_len) {
    /* 释放一块连续的内存空间.
     * 参数：
     *      m_base  ：释放区的起始地址；
     *      m_len ：释放区的长度
     * 释放时要进行空闲分区的合并。
     */

}

void mem_init(phys_addr_t base,phys_addr_t size) {
    /* 初始化空闲表项链和空闲分区链：
     *     空闲表项链是指可用来登记空闲分区的空表项组成的链表；
     *     空闲分区链中每个节点对应着内存中的一个空闲分区。
     * 参数：
     *     base:初始用户空间的起始地址；
     *     size:初始用户空间的长度。
    */
    for(int j = 0;j <NR_PROCESS;j++){
        hole[j].h_len = 0;
        hole[j].h_base = 0;
    }

    struct hole *hp;

    /* 将所有用来登记空闲分区的表项插入空闲表项链中. */
    for (hp = &hole[0]; hp < &hole[NR_HOLES]; hp++) hp->h_next = hp + 1;
    hole[NR_HOLES-1].h_next = NULL;
    free_slots = &hole[0];

    /* 初始化空闲分区链. */
    hole_head = NULL;
    free_mem(base, size);
}

void pcb_init() {
    /*
     * 初始化进程控制块，初始状态下，系统中没有任何用户进程存在。
     */
    for(int j = 0;j < NR_PROCESS;j++){
        pcb[j].p_len=0;
        pcb[j].p_base=0;
    }
    pcb ;
    int i;

    /* 将所有pcb的状态置为空闲状态 */
    for (i = 0; i < NR_PROCESS; i++) pcb[i].p_state = NOTEXISIT;
}

void show() {
    /*
     * 显示所有进程的详细情况以及空闲分区的详细情况。
     */

    int i;
    struct hole *hp;

    printf("==========================================\n");

    /* 显示所有进程的详细情况 */
    printf("进程号      起始地址  长度\n");

    for (i = 0; i < NR_PROCESS; i++) {
        if(pcb[i].p_state != NOTEXISIT) {
            printf("%4d   %8d  %8d\n",i,pcb[i].p_base,pcb[i].p_len);
        }
    }

    printf("==========================================\n");
    /* 显示所有空闲区的详细情况 */
    printf("空闲区序号  起始地址  长度\n");
    hp=hole_head;
    i=1;
    while(hp!=NULL) {
        printf("%4d   %8d  %8d\n",i,hp->h_base,hp->h_len);
        hp=hp->h_next;
        i++;
    }
    printf("==========================================\n");
}

int main() {
    cout << "欢迎，程序运行！" <<endl;
    /* 测试程序：
        *     1.初始状态下，内存只有一个大的空闲分区，输入它的起始地址
        * 和长度，并对所有的数据结构进行初始化。
        *     2.分配和回收的模拟：
        *     (1)输入"a n size"表示进程n申请长度为size的内存空间；
        *     (2)输入"f n"表示进程n释放所其所占用的内存空间；
        *     (3)输入"e"结束整个程序。
        */
    phys_addr_t base,size,psize;
    char op[10];
    int pno;

    /* 输入初始用户内存空间的起始地址和长度 */
    printf("请输入初始用户内存空间的起始地址：");
    scanf("%d",&base);
    printf("请输入初始用户内存空间的长度：");
    scanf("%d",&size);
    /* 进行内存的初始化工作 */
    mem_init(base,size);
    pcb_init();

    show();

    while(1) {
        scanf("%s",op);
        switch(op[0]) {
            case 'e':
                return 0;
            case 'a':
                scanf("%d%d",&pno,&psize);
                printf("\n动作：%c %4d %8d\n",op[0],pno,psize);
                if(pcb[pno].p_state==NOTEXISIT) {
                    if((pcb[pno].p_base=alloc_mem(size,psize))!=-1) {
                        pcb[pno].p_len=psize;
                        pcb[pno].p_state=RUNNING;
                    } else {
                        printf("无足够内存，申请失败\n");
                    }
                } else {
                    printf("进程%d已经存在\n",pno);
                }
                break;
            case 'f':
                scanf("%d",&pno);
                printf("\n动作：%c %4d\n",op[0],pno);
                if(pcb[pno].p_state==NOTEXISIT) {
                    printf("进程%d不存在",pno);
                } else {
                    free_mem(pcb[pno].p_base,pcb[pno].p_len);
                    pcb[pno].p_state=NOTEXISIT;
                }
                break;
        }
        show();
    }

}
