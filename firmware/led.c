#define LED_ADDR 0xFFFFF100
#define LED_INIT_STATE 0x0001
volatile int* led_addr=(volatile int *)LED_ADDR;

//注意：这里由于不支持call指令，最后必须以死循环结束以防止程序跑飞
void main(void){
    *led_addr=LED_INIT_STATE;
    while(1);
}