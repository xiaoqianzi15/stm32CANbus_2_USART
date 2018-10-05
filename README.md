# stm32CANbus_2_USART
canbus to usart directly

I'm using NUCLEO F103RB.

1. First install stm32CubeMX.
   https://www.st.com/en/embedded-s ... ia=productId=LN1897

   and install SystemWorkBench
   http://www.openstm32.org/HomePage

2. Use CubeMx to create project
   ![image]   

   new project
   ![image]    
   
   For me chose NUCLEO-F104RB
   ![image]  
   
   YES
   ![image] 
   
   Now configure the pin function.
   CAN+RTC+USART+WWDG
   ![image]    
   also, you should take some time to look "clock" "configuration"
   "power calculation" is to calculate the power use for the project,most time is not that important
   ![image]    
   project--setting
   ![image]    
   
   project name "test4" 
   Most important is to chose "Toolchain / IDE" to SW4STM32.........Important
   ![image]    
   
   generate code
   ![image](https://github.com/xiaoqianzi15/Cache/blob/master/Generate%20Code.png)
   
   now, finished to generate project to use.
   next step is to import the project to systemworkbench.
   ![image]    
   
4. import project to System Work Bench.
   open systemworkbench, chose workpace directory. this is not that important
   ![image]    
   
   import our project  file--import
   ![image]    
   
   in Genaral chose existing projects into workspace
   ![image]    
   
   browse 
   ![image]    
   
   chose test4 -- open -- finish
   ![image]    
   
   open the project and find main.c
   ![image]    
   
   in while(1), add HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
   This means to turn on the blue led
   ![image]    
   
   click "run"
   ![image]    
   
   chose Ac6 STM32 C/C++ application
   ![image]    
   
   than the blue led turn on.
   ![image]    
   
   
   
 
