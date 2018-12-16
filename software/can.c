CAN1_FilerConf.FilterIdHigh           =0X0000;     //32位id
   CAN1_FilerConf.FilterIdLow            =0X0000;
   CAN1_FilerConf.FilterMaskIdHigh       =0X0000; //32位mask
   CAN1_FilerConf.FilterMaskIdLow        =0X0000;  
   CAN1_FilerConf.FilterFIFOAssignment   =CAN_FILTER_FIFO0;//过滤器0关联到fifo0
   CAN1_FilerConf.FilterBank             =0;          //过滤器0
   CAN1_FilerConf.FilterMode             =CAN_FILTERMODE_IDMASK;
   CAN1_FilerConf.FilterScale            =CAN_FILTERSCALE_32BIT;
   CAN1_FilerConf.FilterActivation       =ENABLE; //激活滤波器
   CAN1_FilerConf.SlaveStartFilterBank   =14;
	
	 if(HAL_CAN_ConfigFilter(&hcan,&CAN1_FilerConf)!=HAL_OK)  //滤波器初始化
	 {
      Error_Handler();
   }
