 /* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : main.c
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "FreeRTOS.h"
#include "task.h"
#include "MS_FREERTOS.h"
#include "macros.h"
#include "sys_cfg_stm32f407.h"
//#include  "TASK_SET.h"



float ex_t;

void SystemClock_Config(void);

TaskHandle_t MyTaks = NULL;
TaskHandle_t MyTaks2 = NULL;




uint16_t t=109; //11360  = 1ms freertos

 uint16_t CostTask1   ;
 uint16_t PeriodTask1 ;


 uint16_t CostTask2   ;
 uint16_t PeriodTask2 ;


 uint16_t CostTask3   ;
 uint16_t PeriodTask3 ;


 uint16_t CostTask4   ;
 uint16_t PeriodTask4;

 uint16_t CostTask5   ;
 uint16_t PeriodTask5 ;

 uint16_t CostTask6   ;
 uint16_t PeriodTask6 ;

 uint16_t CostTask7   ;
 uint16_t PeriodTask7 ;

 uint16_t CostTask8   ;
 uint16_t PeriodTask8 ;

 uint16_t CostTask9   ;
 uint16_t PeriodTask9 ;

 uint16_t CostTask10   ;
 uint16_t PeriodTask10 ;

 uint16_t CostTask11   ;
 uint16_t PeriodTask11 ;

 uint16_t CostTask12   ;
 uint16_t PeriodTask12 ;

 uint16_t CostTask13   ;
 uint16_t PeriodTask13 ;

 uint16_t CostTask14   ;
 uint16_t PeriodTask14 ;

 uint16_t CostTask15   ;
 uint16_t PeriodTask15 ;

 uint16_t CostTask16   ;
 uint16_t PeriodTask16 ;

 uint16_t CostTask17   ;
 uint16_t PeriodTask17 ;

 uint16_t CostTask18   ;
 uint16_t PeriodTask18 ;

 uint16_t CostTask19   ;
 uint16_t PeriodTask19 ;

 uint16_t CostTask20   ;
 uint16_t PeriodTask20 ;

 uint16_t CostTask21   ;
 uint16_t PeriodTask21 ;

 uint16_t CostTask22   ;
 uint16_t PeriodTask22 ;

 uint16_t CostTask23   ;
 uint16_t PeriodTask23 ;

 uint16_t CostTask24   ;
 uint16_t PeriodTask24 ;

 uint16_t CostTask25   ;
 uint16_t PeriodTask25 ;

 uint16_t CostTask26   ;
 uint16_t PeriodTask26;

 uint16_t CostTask27   ;
 uint16_t PeriodTask27 ;

 uint16_t CostTask28  ;
 uint16_t PeriodTask28;

 uint16_t CostTask29   ;
 uint16_t PeriodTask29 ;

 uint16_t CostTask30   ;
 uint16_t PeriodTask30 ;

 uint16_t CostTask31   ;
 uint16_t PeriodTask31 ;

 uint16_t CostTask32   ;
 uint16_t PeriodTask32 ;

 uint16_t CostTask33   ;
 uint16_t PeriodTask33 ;

 uint16_t CostTask34   ;
 uint16_t PeriodTask34 ;

 uint16_t CostTask35   ;
 uint16_t PeriodTask35 ;

 uint16_t CostTask36   ;
 uint16_t PeriodTask36 ;

 uint16_t CostTask36   ;
 uint16_t PeriodTask36 ;

 uint16_t CostTask37   ;
 uint16_t PeriodTask37 ;

 uint16_t CostTask38   ;
 uint16_t PeriodTask38 ;

 uint16_t CostTask39   ;
 uint16_t PeriodTask39 ;

 uint16_t CostTask40   ;
 uint16_t PeriodTask40 ;

 uint16_t CostTask41   ;
 uint16_t PeriodTask41 ;

 uint16_t CostTask42   ;
 uint16_t PeriodTask42 ;

 uint16_t CostTask43   ;
 uint16_t PeriodTask43 ;

 uint16_t CostTask44   ;
 uint16_t PeriodTask44 ;

 uint16_t CostTask45   ;
 uint16_t PeriodTask45 ;

 uint16_t CostTask46   ;
 uint16_t PeriodTask46 ;

 uint16_t CostTask47   ;
 uint16_t PeriodTask47 ;

 uint16_t CostTask48   ;
 uint16_t PeriodTask48 ;

 uint16_t CostTask49   ;
 uint16_t PeriodTask49 ;

 uint16_t CostTask50   ;
 uint16_t PeriodTask50 ;

 uint16_t CostTask51   ;
 uint16_t PeriodTask51 ;

 uint16_t CostTask52   ;
 uint16_t PeriodTask52 ;

 uint16_t CostTask53   ;
 uint16_t PeriodTask53 ;

 uint16_t CostTask54   ;
 uint16_t PeriodTask54 ;

 uint16_t CostTask55   ;
 uint16_t PeriodTask55 ;

 uint16_t CostTask56   ;
 uint16_t PeriodTask56 ;

 uint16_t CostTask57   ;
 uint16_t PeriodTask57 ;

 uint16_t CostTask58   ;
 uint16_t PeriodTask58 ;

 uint16_t CostTask59   ;
 uint16_t PeriodTask59 ;

 uint16_t CostTask60   ;
 uint16_t PeriodTask60 ;






 void TimingDelay(unsigned int tick)
 {
 //#define DELAY_TIMER

 #ifndef DELAY_TIMER
   for(uint16_t k = 0 ; k <tick;k++)
   {
     for(uint32_t i = 0 ; i <t;i++)
     {
     }
   }
 #else
   Ms_delay[Ms_currentTaskIndex].DelayStart = Ms_delay[Ms_currentTaskIndex].DelayApp +tick ;

   while(Ms_delay[Ms_currentTaskIndex].DelayApp <  Ms_delay[Ms_currentTaskIndex].DelayStart )
   {
   }
 #endif
 }



 void MyTask_Func1(void *pvParameters )
 {
  uint16_t *d =(uint16_t *) pvParameters;

  static uint16_t l_d = 0;

  l_d = *d;

   while(1)
   {
     TimingDelay(l_d);
     Ms_EndJob_Exec();
   }
 }


 void MyTask_Func2(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

   static uint16_t l_d = 0;

   l_d = *d;

    while(1)
    {
      TimingDelay(l_d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func3(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

   static uint16_t l_d = 0;

   l_d = *d;

    while(1)
    {
      TimingDelay(l_d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func4(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

   static uint16_t l_d = 0;

   l_d = *d;

    while(1)
    {
      TimingDelay(l_d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func5(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

   static uint16_t l_d = 0;

   l_d = *d;

    while(1)
    {
      TimingDelay(l_d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func6(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

   static uint16_t l_d = 0;

   l_d = *d;

    while(1)
    {
      TimingDelay(l_d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func7(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

   static uint16_t l_d = 0;

   l_d = *d;

    while(1)
    {
      TimingDelay(l_d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func8(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

   static uint16_t l_d = 0;

   l_d = *d;

    while(1)
    {
      TimingDelay(l_d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func9(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

   static uint16_t l_d = 0;

   l_d = *d;

    while(1)
    {
      TimingDelay(l_d);
      Ms_EndJob_Exec();
    }
 }


 void MyTask_Func10(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

   static uint16_t l_d = 0;

   l_d = *d;

    while(1)
    {
      TimingDelay(l_d);
      Ms_EndJob_Exec();
    }
 }


 void MyTask_Func11(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

   static uint16_t l_d = 0;

   l_d = *d;

    while(1)
    {
      TimingDelay(l_d);
      Ms_EndJob_Exec();
    }
 }


 void MyTask_Func12(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

   static uint16_t l_d = 0;

   l_d = *d;

    while(1)
    {
      TimingDelay(l_d);
      Ms_EndJob_Exec();
    }
 }


 void MyTask_Func13(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

   static uint16_t l_d = 0;

   l_d = *d;

    while(1)
    {
      TimingDelay(l_d);
      Ms_EndJob_Exec();
    }
 }



 void MyTask_Func14(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

   static uint16_t l_d = 0;

   l_d = *d;

    while(1)
    {
      TimingDelay(l_d);
      Ms_EndJob_Exec();
    }
 }


 void MyTask_Func15(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

   static uint16_t l_d = 0;

   l_d = *d;

    while(1)
    {
      TimingDelay(l_d);
      Ms_EndJob_Exec();
    }
 }


 void MyTask_Func16(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

   static uint16_t l_d = 0;

   l_d = *d;

    while(1)
    {
      TimingDelay(l_d);
      Ms_EndJob_Exec();
    }
 }


 void MyTask_Func17(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

   static uint16_t l_d = 0;

   l_d = *d;

    while(1)
    {
      TimingDelay(l_d);
      Ms_EndJob_Exec();
    }
 }


 void MyTask_Func18(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

   static uint16_t l_d = 0;

   l_d = *d;

    while(1)
    {
      TimingDelay(l_d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func19(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

   static uint16_t l_d = 0;

   l_d = *d;

    while(1)
    {
      TimingDelay(l_d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func20(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

   static uint16_t l_d = 0;

   l_d = *d;

    while(1)
    {
      TimingDelay(l_d);
      Ms_EndJob_Exec();
    }
 }
 void MyTask_Func21(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

   static uint16_t l_d = 0;

   l_d = *d;

    while(1)
    {
      TimingDelay(l_d);
      Ms_EndJob_Exec();
    }
 }
 void MyTask_Func22(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }
 void MyTask_Func23(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }
 void MyTask_Func24(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }
 void MyTask_Func25(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }
 void MyTask_Func26(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }
 void MyTask_Func27(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }
 void MyTask_Func28(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func29(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func30(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func31(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func32(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func33(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func34(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func35(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func36(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func37(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func38(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func39(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func40(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func41(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func42(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func43(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func44(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func45(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }
 void MyTask_Func46(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }
 void MyTask_Func47(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }
 void MyTask_Func48(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }
 void MyTask_Func49(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }
 void MyTask_Func50(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }
 void MyTask_Func51(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func52(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func53(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func54(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func55(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func56(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func57(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func58(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func59(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }

 void MyTask_Func60(void *pvParameters )
 {
   uint16_t *d =(uint16_t *) pvParameters;

    while(1)
    {
      TimingDelay(*d);
      Ms_EndJob_Exec();
    }
 }





#define stack_task 100

int main(void)
{

  SEGGER_SYSVIEW_Conf();

  // Initialize peripheral and power interface clock
  Sys_Enable_Peripherals_Clock();
  // Set the CPU clock and bus clock to 168MHz
  Sys_Configure_Clock_168MHz();

  xStartHeapList();

#define  T1_P  2.0

#define  T1_C  5.598067679620455

#define  T2_P  2.0

#define  T2_C  3.5251268746808164

#define  T3_P  2.0

#define  T3_C  0.05104827035164166

#define  T4_P  2.0

#define  T4_C  4.24380477895071

#define  T5_P  3.0

#define  T5_C  9.394724544810144

#define  T6_P  3.0

#define  T6_C  0.6377444844884771

#define  T7_P  3.0

#define  T7_C  0.2992294064760851

#define  T8_P  3.0

#define  T8_C  1.6099581737062802

#define  T9_P  3.0

#define  T9_C  3.374276672833455

#define  T10_P  3.0

#define  T10_C  0.5140811082701708

#define  T11_P  3.0

#define  T11_C  3.8329141701748157

#define  T12_P  4.0

#define  T12_C  4.719183708740856

#define  T13_P  4.0

#define  T13_C  0.7217730702352468

#define  T14_P  4.0

#define  T14_C  2.749121454985455

#define  T15_P  4.0

#define  T15_C  2.643357805161073

#define  T16_P  5.0

#define  T16_C  2.711096433548498

#define  T17_P  5.0

#define  T17_C  1.0994792854001476

#define  T18_P  6.0

#define  T18_C  6.112225437827074

#define  T19_P  7.0

#define  T19_C  6.0020574867948335

#define  T20_P  7.0

#define  T20_C  9.217829230667371

#define  T21_P  7.0

#define  T21_C  22.07615821745659

#define  T22_P  7.0

#define  T22_C  15.843248204290095

#define  T23_P  8.0

#define  T23_C  2.9612816332505414

#define  T24_P  10.0

#define  T24_C  46.376029162001146

#define  T25_P  10.0

#define  T25_C  0.6222757600001863

#define  T26_P  12.0

#define  T26_C  6.5368355684265715

#define  T27_P  12.0

#define  T27_C  17.177255700920913

#define  T28_P  13.0

#define  T28_C  4.126395151786404

#define  T29_P  13.0

#define  T29_C  26.56122610486787

#define  T30_P  13.0

#define  T30_C  17.731303324811655

#define  T31_P  13.0

#define  T31_C  18.314586097674795

#define  T32_P  13.0

#define  T32_C  5.51230778685009

#define  T33_P  14.0

#define  T33_C  35.00950823168054

#define  T34_P  14.0

#define  T34_C  18.004857844865022

#define  T35_P  15.0

#define  T35_C  12.634400363968428

#define  T36_P  15.0

#define  T36_C  0.04408642203579699

#define  T37_P  15.0

#define  T37_C  14.676520931837675

#define  T38_P  16.0

#define  T38_C  24.048335234620286

#define  T39_P  17.0

#define  T39_C  34.781111354162

#define  T40_P  17.0

#define  T40_C  19.765442479240157

#define  T41_P  18.0

#define  T41_C  28.267657378862772

#define  T42_P  19.0

#define  T42_C  13.78767804757495

#define  T43_P  19.0

#define  T43_C  24.08532291996994

#define  T44_P  20.0

#define  T44_C  31.64916331101252

#define  T45_P  23.0

#define  T45_C  119.08055701390623

#define  T46_P  24.0

#define  T46_C  30.133405504506083

#define  T47_P  24.0

#define  T47_C  51.53494069837461

#define  T48_P  24.0

#define  T48_C  33.550617033631845

#define  T49_P  26.0

#define  T49_C  22.740464572167774

#define  T50_P  28.0

#define  T50_C  28.928218791435494

#define  T51_P  29.0

#define  T51_C  7.909462774510476

#define  T52_P  30.0

#define  T52_C  48.27012381174768

#define  T53_P  30.0

#define  T53_C  1.3126923186360686

#define  T54_P  33.0

#define  T54_C  130.07477837499994

#define  T55_P  34.0

#define  T55_C  71.13324764168875

#define  T56_P  37.0

#define  T56_C  20.6825257226215

#define  T57_P  39.0

#define  T57_C  7.429559872388519

#define  T58_P  40.0

#define  T58_C  42.55427422279722

#define  T59_P  46.0

#define  T59_C  54.823385191991235

#define  T60_P  50.0

#define  T60_C  86.69567373783562

PeriodTask1=2.0;CostTask1=5.598067679620455;MsFreeRTOS_CreateTask(  MyTask_Func1, "Task1", stack_task, (void*) &CostTask1 , 60 , NULL  , PeriodTask1,PeriodTask1, CostTask1 );

PeriodTask2=2.0;CostTask2=3.5251268746808164;MsFreeRTOS_CreateTask(  MyTask_Func2, "Task2", stack_task, (void*) &CostTask2 , 59 , NULL  , PeriodTask2,PeriodTask2, CostTask2 );

PeriodTask3=2.0;CostTask3=0.05104827035164166;MsFreeRTOS_CreateTask(  MyTask_Func3, "Task3", stack_task, (void*) &CostTask3 , 58 , NULL  , PeriodTask3,PeriodTask3, CostTask3 );

PeriodTask4=2.0;CostTask4=4.24380477895071;MsFreeRTOS_CreateTask(  MyTask_Func4, "Task4", stack_task, (void*) &CostTask4 , 57 , NULL  , PeriodTask4,PeriodTask4, CostTask4 );

PeriodTask5=3.0;CostTask5=9.394724544810144;MsFreeRTOS_CreateTask(  MyTask_Func5, "Task5", stack_task, (void*) &CostTask5 , 56 , NULL  , PeriodTask5,PeriodTask5, CostTask5 );

PeriodTask6=3.0;CostTask6=0.6377444844884771;MsFreeRTOS_CreateTask(  MyTask_Func6, "Task6", stack_task, (void*) &CostTask6 , 55 , NULL  , PeriodTask6,PeriodTask6, CostTask6 );

PeriodTask7=3.0;CostTask7=0.2992294064760851;MsFreeRTOS_CreateTask(  MyTask_Func7, "Task7", stack_task, (void*) &CostTask7 , 54 , NULL  , PeriodTask7,PeriodTask7, CostTask7 );

PeriodTask8=3.0;CostTask8=1.6099581737062802;MsFreeRTOS_CreateTask(  MyTask_Func8, "Task8", stack_task, (void*) &CostTask8 , 53 , NULL  , PeriodTask8,PeriodTask8, CostTask8 );

PeriodTask9=3.0;CostTask9=3.374276672833455;MsFreeRTOS_CreateTask(  MyTask_Func9, "Task9", stack_task, (void*) &CostTask9 , 52 , NULL  , PeriodTask9,PeriodTask9, CostTask9 );

PeriodTask10=3.0;CostTask10=0.5140811082701708;MsFreeRTOS_CreateTask(  MyTask_Func10, "Task10", stack_task, (void*) &CostTask10 , 51 , NULL  , PeriodTask10,PeriodTask10, CostTask10 );

PeriodTask11=3.0;CostTask11=3.8329141701748157;MsFreeRTOS_CreateTask(  MyTask_Func11, "Task11", stack_task, (void*) &CostTask11 , 50 , NULL  , PeriodTask11,PeriodTask11, CostTask11 );

PeriodTask12=4.0;CostTask12=4.719183708740856;MsFreeRTOS_CreateTask(  MyTask_Func12, "Task12", stack_task, (void*) &CostTask12 , 49 , NULL  , PeriodTask12,PeriodTask12, CostTask12 );

PeriodTask13=4.0;CostTask13=0.7217730702352468;MsFreeRTOS_CreateTask(  MyTask_Func13, "Task13", stack_task, (void*) &CostTask13 , 48 , NULL  , PeriodTask13,PeriodTask13, CostTask13 );

PeriodTask14=4.0;CostTask14=2.749121454985455;MsFreeRTOS_CreateTask(  MyTask_Func14, "Task14", stack_task, (void*) &CostTask14 , 47 , NULL  , PeriodTask14,PeriodTask14, CostTask14 );

PeriodTask15=4.0;CostTask15=2.643357805161073;MsFreeRTOS_CreateTask(  MyTask_Func15, "Task15", stack_task, (void*) &CostTask15 , 46 , NULL  , PeriodTask15,PeriodTask15, CostTask15 );

PeriodTask16=5.0;CostTask16=2.711096433548498;MsFreeRTOS_CreateTask(  MyTask_Func16, "Task16", stack_task, (void*) &CostTask16 , 45 , NULL  , PeriodTask16,PeriodTask16, CostTask16 );

PeriodTask17=5.0;CostTask17=1.0994792854001476;MsFreeRTOS_CreateTask(  MyTask_Func17, "Task17", stack_task, (void*) &CostTask17 , 44 , NULL  , PeriodTask17,PeriodTask17, CostTask17 );

PeriodTask18=6.0;CostTask18=6.112225437827074;MsFreeRTOS_CreateTask(  MyTask_Func18, "Task18", stack_task, (void*) &CostTask18 , 43 , NULL  , PeriodTask18,PeriodTask18, CostTask18 );

PeriodTask19=7.0;CostTask19=6.0020574867948335;MsFreeRTOS_CreateTask(  MyTask_Func19, "Task19", stack_task, (void*) &CostTask19 , 42 , NULL  , PeriodTask19,PeriodTask19, CostTask19 );

PeriodTask20=7.0;CostTask20=9.217829230667371;MsFreeRTOS_CreateTask(  MyTask_Func20, "Task20", stack_task, (void*) &CostTask20 , 41 , NULL  , PeriodTask20,PeriodTask20, CostTask20 );

PeriodTask21=7.0;CostTask21=22.07615821745659;MsFreeRTOS_CreateTask(  MyTask_Func21, "Task21", stack_task, (void*) &CostTask21 , 40 , NULL  , PeriodTask21,PeriodTask21, CostTask21 );

PeriodTask22=7.0;CostTask22=15.843248204290095;MsFreeRTOS_CreateTask(  MyTask_Func22, "Task22", stack_task, (void*) &CostTask22 , 39 , NULL  , PeriodTask22,PeriodTask22, CostTask22 );

PeriodTask23=8.0;CostTask23=2.9612816332505414;MsFreeRTOS_CreateTask(  MyTask_Func23, "Task23", stack_task, (void*) &CostTask23 , 38 , NULL  , PeriodTask23,PeriodTask23, CostTask23 );

PeriodTask24=10.0;CostTask24=46.376029162001146;MsFreeRTOS_CreateTask(  MyTask_Func24, "Task24", stack_task, (void*) &CostTask24 , 37 , NULL  , PeriodTask24,PeriodTask24, CostTask24 );

PeriodTask25=10.0;CostTask25=0.6222757600001863;MsFreeRTOS_CreateTask(  MyTask_Func25, "Task25", stack_task, (void*) &CostTask25 , 36 , NULL  , PeriodTask25,PeriodTask25, CostTask25 );

PeriodTask26=12.0;CostTask26=6.5368355684265715;MsFreeRTOS_CreateTask(  MyTask_Func26, "Task26", stack_task, (void*) &CostTask26 , 35 , NULL  , PeriodTask26,PeriodTask26, CostTask26 );

PeriodTask27=12.0;CostTask27=17.177255700920913;MsFreeRTOS_CreateTask(  MyTask_Func27, "Task27", stack_task, (void*) &CostTask27 , 34 , NULL  , PeriodTask27,PeriodTask27, CostTask27 );

PeriodTask28=13.0;CostTask28=4.126395151786404;MsFreeRTOS_CreateTask(  MyTask_Func28, "Task28", stack_task, (void*) &CostTask28 , 33 , NULL  , PeriodTask28,PeriodTask28, CostTask28 );

PeriodTask29=13.0;CostTask29=26.56122610486787;MsFreeRTOS_CreateTask(  MyTask_Func29, "Task29", stack_task, (void*) &CostTask29 , 32 , NULL  , PeriodTask29,PeriodTask29, CostTask29 );

PeriodTask30=13.0;CostTask30=17.731303324811655;MsFreeRTOS_CreateTask(  MyTask_Func30, "Task30", stack_task, (void*) &CostTask30 , 31 , NULL  , PeriodTask30,PeriodTask30, CostTask30 );

PeriodTask31=13.0;CostTask31=18.314586097674795;MsFreeRTOS_CreateTask(  MyTask_Func31, "Task31", stack_task, (void*) &CostTask31 , 30 , NULL  , PeriodTask31,PeriodTask31, CostTask31 );

PeriodTask32=13.0;CostTask32=5.51230778685009;MsFreeRTOS_CreateTask(  MyTask_Func32, "Task32", stack_task, (void*) &CostTask32 , 29 , NULL  , PeriodTask32,PeriodTask32, CostTask32 );

PeriodTask33=14.0;CostTask33=35.00950823168054;MsFreeRTOS_CreateTask(  MyTask_Func33, "Task33", stack_task, (void*) &CostTask33 , 28 , NULL  , PeriodTask33,PeriodTask33, CostTask33 );

PeriodTask34=14.0;CostTask34=18.004857844865022;MsFreeRTOS_CreateTask(  MyTask_Func34, "Task34", stack_task, (void*) &CostTask34 , 27 , NULL  , PeriodTask34,PeriodTask34, CostTask34 );

PeriodTask35=15.0;CostTask35=12.634400363968428;MsFreeRTOS_CreateTask(  MyTask_Func35, "Task35", stack_task, (void*) &CostTask35 , 26 , NULL  , PeriodTask35,PeriodTask35, CostTask35 );

PeriodTask36=15.0;CostTask36=0.04408642203579699;MsFreeRTOS_CreateTask(  MyTask_Func36, "Task36", stack_task, (void*) &CostTask36 , 25 , NULL  , PeriodTask36,PeriodTask36, CostTask36 );

PeriodTask37=15.0;CostTask37=14.676520931837675;MsFreeRTOS_CreateTask(  MyTask_Func37, "Task37", stack_task, (void*) &CostTask37 , 24 , NULL  , PeriodTask37,PeriodTask37, CostTask37 );

PeriodTask38=16.0;CostTask38=24.048335234620286;MsFreeRTOS_CreateTask(  MyTask_Func38, "Task38", stack_task, (void*) &CostTask38 , 23 , NULL  , PeriodTask38,PeriodTask38, CostTask38 );

PeriodTask39=17.0;CostTask39=34.781111354162;MsFreeRTOS_CreateTask(  MyTask_Func39, "Task39", stack_task, (void*) &CostTask39 , 22 , NULL  , PeriodTask39,PeriodTask39, CostTask39 );

PeriodTask40=17.0;CostTask40=19.765442479240157;MsFreeRTOS_CreateTask(  MyTask_Func40, "Task40", stack_task, (void*) &CostTask40 , 21 , NULL  , PeriodTask40,PeriodTask40, CostTask40 );

PeriodTask41=18.0;CostTask41=28.267657378862772;MsFreeRTOS_CreateTask(  MyTask_Func41, "Task41", stack_task, (void*) &CostTask41 , 20 , NULL  , PeriodTask41,PeriodTask41, CostTask41 );

PeriodTask42=19.0;CostTask42=13.78767804757495;MsFreeRTOS_CreateTask(  MyTask_Func42, "Task42", stack_task, (void*) &CostTask42 , 19 , NULL  , PeriodTask42,PeriodTask42, CostTask42 );

PeriodTask43=19.0;CostTask43=24.08532291996994;MsFreeRTOS_CreateTask(  MyTask_Func43, "Task43", stack_task, (void*) &CostTask43 , 18 , NULL  , PeriodTask43,PeriodTask43, CostTask43 );

PeriodTask44=20.0;CostTask44=31.64916331101252;MsFreeRTOS_CreateTask(  MyTask_Func44, "Task44", stack_task, (void*) &CostTask44 , 17 , NULL  , PeriodTask44,PeriodTask44, CostTask44 );

PeriodTask45=23.0;CostTask45=119.08055701390623;MsFreeRTOS_CreateTask(  MyTask_Func45, "Task45", stack_task, (void*) &CostTask45 , 16 , NULL  , PeriodTask45,PeriodTask45, CostTask45 );

PeriodTask46=24.0;CostTask46=30.133405504506083;MsFreeRTOS_CreateTask(  MyTask_Func46, "Task46", stack_task, (void*) &CostTask46 , 15 , NULL  , PeriodTask46,PeriodTask46, CostTask46 );

PeriodTask47=24.0;CostTask47=51.53494069837461;MsFreeRTOS_CreateTask(  MyTask_Func47, "Task47", stack_task, (void*) &CostTask47 , 14 , NULL  , PeriodTask47,PeriodTask47, CostTask47 );

PeriodTask48=24.0;CostTask48=33.550617033631845;MsFreeRTOS_CreateTask(  MyTask_Func48, "Task48", stack_task, (void*) &CostTask48 , 13 , NULL  , PeriodTask48,PeriodTask48, CostTask48 );

PeriodTask49=26.0;CostTask49=22.740464572167774;MsFreeRTOS_CreateTask(  MyTask_Func49, "Task49", stack_task, (void*) &CostTask49 , 12 , NULL  , PeriodTask49,PeriodTask49, CostTask49 );

PeriodTask50=28.0;CostTask50=28.928218791435494;MsFreeRTOS_CreateTask(  MyTask_Func50, "Task50", stack_task, (void*) &CostTask50 , 11 , NULL  , PeriodTask50,PeriodTask50, CostTask50 );

PeriodTask51=29.0;CostTask51=7.909462774510476;MsFreeRTOS_CreateTask(  MyTask_Func51, "Task51", stack_task, (void*) &CostTask51 , 10 , NULL  , PeriodTask51,PeriodTask51, CostTask51 );

PeriodTask52=30.0;CostTask52=48.27012381174768;MsFreeRTOS_CreateTask(  MyTask_Func52, "Task52", stack_task, (void*) &CostTask52 , 9 , NULL  , PeriodTask52,PeriodTask52, CostTask52 );

PeriodTask53=30.0;CostTask53=1.3126923186360686;MsFreeRTOS_CreateTask(  MyTask_Func53, "Task53", stack_task, (void*) &CostTask53 , 8 , NULL  , PeriodTask53,PeriodTask53, CostTask53 );

PeriodTask54=33.0;CostTask54=130.07477837499994;MsFreeRTOS_CreateTask(  MyTask_Func54, "Task54", stack_task, (void*) &CostTask54 , 7 , NULL  , PeriodTask54,PeriodTask54, CostTask54 );

PeriodTask55=34.0;CostTask55=71.13324764168875;MsFreeRTOS_CreateTask(  MyTask_Func55, "Task55", stack_task, (void*) &CostTask55 , 6 , NULL  , PeriodTask55,PeriodTask55, CostTask55 );

PeriodTask56=37.0;CostTask56=20.6825257226215;MsFreeRTOS_CreateTask(  MyTask_Func56, "Task56", stack_task, (void*) &CostTask56 , 5 , NULL  , PeriodTask56,PeriodTask56, CostTask56 );

PeriodTask57=39.0;CostTask57=7.429559872388519;MsFreeRTOS_CreateTask(  MyTask_Func57, "Task57", stack_task, (void*) &CostTask57 , 4 , NULL  , PeriodTask57,PeriodTask57, CostTask57 );

PeriodTask58=40.0;CostTask58=42.55427422279722;MsFreeRTOS_CreateTask(  MyTask_Func58, "Task58", stack_task, (void*) &CostTask58 , 3 , NULL  , PeriodTask58,PeriodTask58, CostTask58 );

PeriodTask59=46.0;CostTask59=54.823385191991235;MsFreeRTOS_CreateTask(  MyTask_Func59, "Task59", stack_task, (void*) &CostTask59 , 2 , NULL  , PeriodTask59,PeriodTask59, CostTask59 );

PeriodTask60=50.0;CostTask60=86.69567373783562;MsFreeRTOS_CreateTask(  MyTask_Func60, "Task60", stack_task, (void*) &CostTask60 , 1 , NULL  , PeriodTask60,PeriodTask60, CostTask60 );

 /*CPU utilization: 0.7799999999999998*/

  vTaskStartScheduler();

  while (1)
  {

  }
}

/**
 * @brief System Clock Configuration
 * @retval None
 */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
   */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
  /** Initializes the CPU, AHB and APB busses clocks
   */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB busses clocks
   */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
  |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
 * @brief  This function is executed in case of error occurrence.
 * @retval None
 */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
