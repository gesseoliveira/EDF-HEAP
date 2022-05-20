#ifndef TASK_SET_H_
#define TASK_SET_H_

#include "FreeRTOS.h"


extern uint16_t CostTask1   ;
extern uint16_t PeriodTask1 ;


extern uint16_t CostTask2   ;
extern uint16_t PeriodTask2 ;


extern uint16_t CostTask3   ;
extern uint16_t PeriodTask3 ;


extern uint16_t CostTask4   ;
extern uint16_t PeriodTask4;

extern uint16_t CostTask5   ;
extern uint16_t PeriodTask5 ;

extern uint16_t CostTask6   ;
extern uint16_t PeriodTask6 ;

extern uint16_t CostTask7   ;
extern uint16_t PeriodTask7 ;

extern uint16_t CostTask8   ;
extern uint16_t PeriodTask8 ;

extern uint16_t CostTask9   ;
extern uint16_t PeriodTask9 ;

extern uint16_t CostTask10   ;
extern uint16_t PeriodTask10 ;

extern uint16_t CostTask11   ;
extern uint16_t PeriodTask11 ;

extern uint16_t CostTask12   ;
extern uint16_t PeriodTask12 ;

extern uint16_t CostTask13   ;
extern uint16_t PeriodTask13 ;

extern uint16_t CostTask14   ;
extern uint16_t PeriodTask14 ;

extern uint16_t CostTask15   ;
extern uint16_t PeriodTask15 ;

extern uint16_t CostTask16   ;
extern uint16_t PeriodTask16 ;

extern uint16_t CostTask17   ;
extern uint16_t PeriodTask17 ;

extern uint16_t CostTask18   ;
extern uint16_t PeriodTask18 ;

extern uint16_t CostTask19   ;
extern uint16_t PeriodTask19 ;

extern uint16_t CostTask20   ;
extern uint16_t PeriodTask20 ;

extern uint16_t CostTask21   ;
extern uint16_t PeriodTask21 ;

extern uint16_t CostTask22   ;
extern uint16_t PeriodTask22 ;

extern uint16_t CostTask23   ;
extern uint16_t PeriodTask23 ;

extern uint16_t CostTask24   ;
extern uint16_t PeriodTask24 ;

extern uint16_t CostTask25   ;
extern uint16_t PeriodTask25 ;

extern uint16_t CostTask26   ;
extern uint16_t PeriodTask26;

extern uint16_t CostTask27   ;
extern uint16_t PeriodTask27 ;

extern uint16_t CostTask28  ;
extern uint16_t PeriodTask28;

extern uint16_t CostTask29   ;
extern uint16_t PeriodTask29 ;

extern uint16_t CostTask30   ;
extern uint16_t PeriodTask30 ;

extern uint16_t CostTask31   ;
extern uint16_t PeriodTask31 ;

extern uint16_t CostTask32   ;
extern uint16_t PeriodTask32 ;

extern uint16_t CostTask33   ;
extern uint16_t PeriodTask33 ;

extern uint16_t CostTask34   ;
extern uint16_t PeriodTask34 ;

extern uint16_t CostTask35   ;
extern uint16_t PeriodTask35 ;

extern uint16_t CostTask36   ;
extern uint16_t PeriodTask36 ;

extern uint16_t CostTask36   ;
extern uint16_t PeriodTask36 ;

extern uint16_t CostTask37   ;
extern uint16_t PeriodTask37 ;

extern uint16_t CostTask38   ;
extern uint16_t PeriodTask38 ;

extern uint16_t CostTask39   ;
extern uint16_t PeriodTask39 ;

extern uint16_t CostTask40   ;
extern uint16_t PeriodTask40 ;

extern uint16_t CostTask41   ;
extern uint16_t PeriodTask41 ;

extern uint16_t CostTask42   ;
extern uint16_t PeriodTask42 ;

extern uint16_t CostTask43   ;
extern uint16_t PeriodTask43 ;

extern uint16_t CostTask44   ;
extern uint16_t PeriodTask44 ;

extern uint16_t CostTask45   ;
extern uint16_t PeriodTask45 ;

extern uint16_t CostTask46   ;
extern uint16_t PeriodTask46 ;

extern uint16_t CostTask47   ;
extern uint16_t PeriodTask47 ;

extern uint16_t CostTask48   ;
extern uint16_t PeriodTask48 ;

extern uint16_t CostTask49   ;
extern uint16_t PeriodTask49 ;

extern uint16_t CostTask50   ;
extern uint16_t PeriodTask50 ;

extern uint16_t CostTask51   ;
extern uint16_t PeriodTask51 ;

extern uint16_t CostTask52   ;
extern uint16_t PeriodTask52 ;

extern uint16_t CostTask53   ;
extern uint16_t PeriodTask53 ;

extern uint16_t CostTask54   ;
extern uint16_t PeriodTask54 ;

extern uint16_t CostTask55   ;
extern uint16_t PeriodTask55 ;

extern uint16_t CostTask56   ;
extern uint16_t PeriodTask56 ;

extern uint16_t CostTask57   ;
extern uint16_t PeriodTask57 ;

extern uint16_t CostTask58   ;
extern uint16_t PeriodTask58 ;

extern uint16_t CostTask59   ;
extern uint16_t PeriodTask59 ;

extern uint16_t CostTask60   ;
extern uint16_t PeriodTask60 ;


void TimingDelay(unsigned int tick);
/*
void MyTask_Func1(void *pvParameters );
void MyTask_Func2(void *pvParameters );
void MyTask_Func3(void *pvParameters );
void MyTask_Func4(void *pvParameters );
void MyTask_Func5(void *pvParameters );
void MyTask_Func6(void *pvParameters );
void MyTask_Func7(void *pvParameters );
void MyTask_Func8(void *pvParameters );
void MyTask_Func9(void *pvParameters );
void MyTask_Func10(void *pvParameters );
void MyTask_Func11(void *pvParameters );
void MyTask_Func12(void *pvParameters );
void MyTask_Func13(void *pvParameters );
void MyTask_Func14(void *pvParameters );
void MyTask_Func15(void *pvParameters );
void MyTask_Func16(void *pvParameters );
void MyTask_Func17(void *pvParameters );
void MyTask_Func18(void *pvParameters );
void MyTask_Func19(void *pvParameters );
void MyTask_Func20(void *pvParameters );
void MyTask_Func21(void *pvParameters );
void MyTask_Func22(void *pvParameters );
void MyTask_Func23(void *pvParameters );
void MyTask_Func24(void *pvParameters );
void MyTask_Func25(void *pvParameters );
void MyTask_Func26(void *pvParameters );
void MyTask_Func27(void *pvParameters );
void MyTask_Func28(void *pvParameters );
void MyTask_Func29(void *pvParameters );
void MyTask_Func30(void *pvParameters );
void MyTask_Func31(void *pvParameters );
void MyTask_Func32(void *pvParameters );
void MyTask_Func33(void *pvParameters );
void MyTask_Func34(void *pvParameters );
void MyTask_Func35(void *pvParameters );
void MyTask_Func36(void *pvParameters );
void MyTask_Func37(void *pvParameters );
void MyTask_Func38(void *pvParameters );
void MyTask_Func39(void *pvParameters );
void MyTask_Func40(void *pvParameters );
void MyTask_Func41(void *pvParameters );
void MyTask_Func42(void *pvParameters );
void MyTask_Func43(void *pvParameters );
void MyTask_Func44(void *pvParameters );
void MyTask_Func45(void *pvParameters );
void MyTask_Func46(void *pvParameters );
void MyTask_Func47(void *pvParameters );
void MyTask_Func48(void *pvParameters );
void MyTask_Func49(void *pvParameters );
void MyTask_Func50(void *pvParameters );
void MyTask_Func51(void *pvParameters );
void MyTask_Func52(void *pvParameters );
void MyTask_Func53(void *pvParameters );
void MyTask_Func54(void *pvParameters );
void MyTask_Func55(void *pvParameters );
void MyTask_Func56(void *pvParameters );
void MyTask_Func57(void *pvParameters );
void MyTask_Func58(void *pvParameters );
void MyTask_Func59(void *pvParameters );
void MyTask_Func60(void *pvParameters );
*/
#endif
