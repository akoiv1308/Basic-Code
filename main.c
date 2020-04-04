int main()
{//ultrasonic test
    shut_down_in(10);

    while(1){ 
        if(analog(0) >= 1650){
            motor(0,-100);
            motor(3,-100);
            msleep(2000);
        }
        
        else //(analog10(0)<1650)
        { 
            motor(0,100);
            motor(3,100);
            printf("reading: %d\n", analog(0));  
            msleep(100);
        }
    }
}