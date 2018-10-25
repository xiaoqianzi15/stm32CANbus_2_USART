# stm32CANbus_2_USART
freertos ref：https://www.keil.com/pack/doc/CMSIS/RTOS/html/group__CMSIS__RTOS__ThreadMgmt.html#gac59b5713cb083702dce759c73fd90dff

canbus to usart directly

I'm using NUCLEO F103RB.

1. First install stm32CubeMX.
   https://www.st.com/en/embedded-s ... ia=productId=LN1897

   and install SystemWorkBench
   http://www.openstm32.org/HomePage

2. Use CubeMx to create project
   new project
   
   ![image](https://github.com/xiaoqianzi15/Cache/blob/master/open%20stm32cubemx.png)
   
   For me chose NUCLEO-F103RB
   
   ![image](https://github.com/xiaoqianzi15/Cache/blob/master/chose%20nucleo%20f103rb.png)
   
   YES
   
   ![image](https://github.com/xiaoqianzi15/Cache/blob/master/yes.png)
   
   Now configure the pin function.
   CAN+RTC+USART+WWDG
   
   ![image](https://github.com/xiaoqianzi15/Cache/blob/master/open%20canbus:rtc:wwdg:usart.png) 
   
   also, you should take some time to look "clock" "configuration"
   "power calculation" is to calculate the power use for the project,most time is not that important
   ![image]    
   project--setting
   
   ![image](https://github.com/xiaoqianzi15/Cache/blob/master/settings.png)
   
   project name "test4" 
   Most important is to chose "Toolchain / IDE" to SW4STM32.........Important
   
   ![image](https://github.com/xiaoqianzi15/Cache/blob/master/project%20name%20and%20toolchain%20:IDE.png)
   
   generate code
   
   ![image](https://github.com/xiaoqianzi15/Cache/blob/master/Generate%20Code.png)
   
   now, finished to generate project to use.
   next step is to import the project to systemworkbench.
   
4. import project to System Work Bench.
   open systemworkbench, chose workpace directory. this is not that important
   ![image]( https://github.com/xiaoqianzi15/Cache/blob/master/eclipse.png)
   
   import our project  file--import
   ![image](https://github.com/xiaoqianzi15/Cache/blob/master/import.png)
   
   in Genaral chose existing projects into workspace
   ![image](https://github.com/xiaoqianzi15/Cache/blob/master/general%20existing%20projects.png)
   
   browse 
   ![image](https://github.com/xiaoqianzi15/Cache/blob/master/import%202.png)
   
   chose test4 -- open -- finish
   ![image](https://github.com/xiaoqianzi15/Cache/blob/master/open.png)
   
   open the project and find main.c
   in while(1), add HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
   This means to turn on the blue led       
   
   ![image](https://github.com/xiaoqianzi15/Cache/blob/master/open%20main%2Cc.png)
   
   click "run"        
   
   ![image](https://github.com/xiaoqianzi15/Cache/blob/master/run.png)
   
   chose Ac6 STM32 C/C++ application        
   
   ![image](https://github.com/xiaoqianzi15/Cache/blob/master/chose%20Ac6.png)
   
   than the blue led turn on.       
   
   ![image](https://github.com/xiaoqianzi15/Cache/blob/master/than%20led%20on.png)
   
   
   
 
