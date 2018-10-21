//for FreeRTOS

int __io_putchar(int ch)
{
 uint8_t c[1];
 c[0] = ch & 0x00FF;
 HAL_UART_Transmit(&huart2, &*c, 1, 10);
 return ch;
}

int _write(int file,char *ptr, int len)
{
 int DataIdx;
 for(DataIdx= 0; DataIdx< len; DataIdx++)
 {
 __io_putchar(*ptr++);
 }
return len;
}

{
     nLoop++;
     HAL_Delay(500);
     osDelay(1000);
     printf("nLoop == %d \n\r", nLoop);
}



  osThreadDef(ID_1, CANPUSH1, osPriorityNormal, 0, 128);
  ID1 = osThreadCreate(osThread(ID_1), NULL);




void CANPUSH1(void const * argument)
{

  /* USER CODE BEGIN 5 */
	int nLoop = 0 ;
  /* Infinite loop */
  for(;;)
  {
	  nLoop++;
	  printf("nLoop == %d \n\r", nLoop);
      osDelay(1000);
  }
  /* USER CODE END 5 */ 
}
