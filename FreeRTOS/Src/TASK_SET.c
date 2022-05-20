#include "TASK_SET.h"
#include "task.h"
/*
uint16_t t=11250; //11250  = 1ms freertos

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



*/

